REPOSITORY=intel-socfpga-hwlib

function compile_doxygen {
rm -rf ../output
mkdir ../output
compile_armv7a
compile_armv8

pushd ../output
mv ./armv7a_output ./armv7a
mv ./armv8_output ./armv8
cp -rf ../examples ./
popd

cp -rf ../output/armv7a/doc ../armv7a/
cp -rf ../output/armv8/doc ../armv8/
 
}


function compile_armv8 {

	HPS=armv8
	PWD=`pwd`
	
	pushd ../output
        echo "COMPILE :: Creating a Temporary Folder for building the Hwlib $HPS"
	rm -rf ./tmp_${HPS}
        mkdir -p ./tmp_${HPS}
        echo "COMPILE :: Building src for $HPS"
        echo "COMPILE :: Copy file from hwlib $HPS to the temporary file"

	mkdir -p ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib/doc/hwmgr
        
	cp -r ../../${REPOSITORY}/${HPS}/hwlib/* ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib/
        echo "COMPILE :: Finish copying to the temporary file /tmp_${HPS}"
	
	echo "COMPILE :: Doxygen generate 1"
	pushd ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib && cp -rf ~1/../../${REPOSITORY}/${HPS}/hwlib/tools/doxygen/DoxygenLayout.xml ~1/../output/tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib && rm -rf Doxyfile.hwmgr && sed -e "s/__VERSION__/20.1/g" ~1/../../${REPOSITORY}/${HPS}/hwlib/tools/doxygen/Doxyfile.hwmgr > Doxyfile.hwmgr && doxygen Doxyfile.hwmgr && popd

	echo "COMPILE :: Copying outputfile"
	mkdir -p ./${HPS}_output/doc/soc_s10/hwmgr
	mkdir -p ./${HPS}_output/hwlib


	cp -rf ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib/include ./${HPS}_output/hwlib/
	cp -rf ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib/src ./${HPS}_output/hwlib/
	
	cp -rf ./tmp_${HPS}/SOCEDS_lwr/ip/hps/armv8/BUILD/plaintext/hwlib/doc/hwmgr/* ./${HPS}_output/doc/soc_s10/hwmgr
	cp -rf ../../${REPOSITORY}/${HPS}/hwlib/doc/soc_s10/* ./${HPS}_output/doc/soc_s10
	
	popd 

}

function compile_armv7a {
	
	HPS=armv7a
	PWD=`pwd`
    
#Repeat for both armv7 and armv8
	pushd ../output
	echo "COMPILE :: Creating a Temporary Folder for building the Hwlib $HPS"
	rm -rf ./tmp_${HPS}
	mkdir -p ./tmp_${HPS}/doc
	echo "COMPILE :: Building src for $HPS"
	echo "COMPILE :: Copy file from hwlib $HPS to the temporary file"

	cp -r ../../${REPOSITORY}/${HPS}/hwlib ./tmp_${HPS}/
	cp ../../${REPOSITORY}/${HPS}/doc/index.html ./tmp_${HPS}/doc/ 

	echo "COMPILE :: Finish copying to the temporary file /tmp_${HPS}"


	echo "COMPILE :: Generate Socal Folder"	
	rm -rf ./tmp_${HPS}/embedded_ipxact_gen/include/soc_a10/socal ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_a10/socal
	rm -rf ./tmp_${HPS}/embedded_ipxact_gen/include/soc_cv_av/socal ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_cv_av/socal

	mkdir -p ./tmp_${HPS}/embedded_ipxact_gen/include/soc_a10/socal ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_a10/socal
	mkdir -p ./tmp_${HPS}/embedded_ipxact_gen/include/soc_cv_av/socal ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_cv_av/socal

	echo "COMPILE :: Copy Socal"
	cp -rf ../../${REPOSITORY}/${HPS}/hwlib/include/soc_cv_av/socal/* ./tmp_${HPS}/embedded_ipxact_gen/include/soc_cv_av/socal/
	cp -rf ../../${REPOSITORY}/${HPS}/hwlib/include/soc_a10/socal/* ./tmp_${HPS}/embedded_ipxact_gen/include/soc_a10/socal

	echo "COMPILE :: Doxygen Generate 1"	
	pushd ${PWD}/tmp_${HPS}/embedded_ipxact_gen &&  cp -rf ${PWD}/../../../../${REPOSITORY}/${HPS}/hwlib/tools/doxygen/DoxygenLayout.xml  ${PWD} && rm -rf Doxyfile.socal_a10 Doxyfile.socal_cv_av && sed -e "s/__VERSION__/20.1/g" ${PWD}/../../tmp_${HPS}/hwlib/tools/doxygen/Doxyfile.socal_cv_av > Doxyfile.socal_cv_av && doxygen Doxyfile.socal_cv_av && sed -e "s/__VERSION__/20.1/g" ${PWD}/../../tmp_${HPS}/hwlib/tools/doxygen/Doxyfile.socal_a10 > Doxyfile.socal_a10 && doxygen Doxyfile.socal_cv_av && doxygen Doxyfile.socal_a10  && chmod -R 755 ./doc/soc_cv_av/socal/html/* && sed -e "s/_~_[0-9][0-9][0-9][0-9][0-9]_~_//" -i ./doc/soc_cv_av/socal/html/*.html && chmod -R 755 ./doc/soc_a10/socal/html/* && sed -e "s/_~_[0-9][0-9][0-9][0-9][0-9]_~_//" -i ./doc/soc_a10/socal/html/*.html 
	popd
	
	mkdir -p ./tmp_${HPS}/hwlib/doc/hwmgr
	echo "COMPILE :: Doxygen Generate 2"	
	pushd ${PWD}/tmp_${HPS}/hwlib &&  cp -rf ${PWD}/../../../../${REPOSITORY}/${HPS}/hwlib/tools/doxygen/DoxygenLayout.xml ${PWD} && rm -rf Doxyfile.hwmgr && sed -e "s/__VERSION__/20.1/g" ${PWD}/../../../../${REPOSITORY}/${HPS}/hwlib/tools/doxygen/Doxyfile.hwmgr > Doxyfile.hwmgr && doxygen Doxyfile.hwmgr 
	popd


	echo "COMPILE :: Copying output to Resource folder"
	mkdir -p ./${HPS}_output/doc/soc_a10	
	mkdir -p ./${HPS}_output/doc/soc_cv_av	

 	cp -rf ./tmp_${HPS}/doc ./${HPS}_output/hwlib
	cp -r ./tmp_${HPS}/hwlib/include ./${HPS}_output/hwlib/
	cp -r ./tmp_${HPS}/hwlib/src ./${HPS}_output/hwlib/

	cp -rf ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_a10/socal ./${HPS}_output/doc/soc_a10/
	cp -rf ./tmp_${HPS}/embedded_ipxact_gen/doc/soc_cv_av/socal ./${HPS}_output/doc/soc_cv_av/

	cp -rf ../../${REPOSITORY}/${HPS}/hwlib/doc/soc_cv_av/* ./${HPS}_output/doc/soc_cv_av
	
	cp -rf ./tmp_${HPS}/hwlib/doc/hwmgr ./${HPS}_output/doc/soc_a10/
	cp -rf ../../${REPOSITORY}/${HPS}/hwlib/doc/soc_a10/* ./${HPS}_output/doc/soc_a10

	mkdir -p ./${HPS}_output/hwlib/src/linkerscripts/
	cp -rf ./tmp_${HPS}/hwlib/src/linkerscripts/* ./${HPS}_output/hwlib/src/linkerscripts/	
	popd 
}
compile_doxygen
