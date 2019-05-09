#include "mediator.h"
//#include "mediator.hpp"
#include <gtest/gtest.h>

//TODO

class CSV_MYSQL_Test : public testing::Test {
    protected:
        virtual void SetUp() {
            fs.addr = "10.10.10.1";
            fs.protocol = HTTP;
            fs.format = CSV;
            fs.port = 55;
            fs.fileSrvPath = "/ftp/NE.cfg"; 

            me.downloadFile = downloadHTTPFile;
            me.splitFile = splitCSVFile;
            me.resolveMachine = resolveMachineMySQL;
            me.sendFile2Machine = sendFile2Machine;
        };

        virtual void TearDown() {
        };

        FileSource fs;
        Mediator me;
};



TEST_F(CSV_MYSQL_Test, downloadFile  ) {
   char *fileDwldPath; 
   EXPECT_EQ(me.downloadFile(&me, &fs, &fileDwldPath ), 0);
}

int main(int argc , char ** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
