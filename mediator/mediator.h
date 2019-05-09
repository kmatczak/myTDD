//class mediator {
//	//TODO
//};

typedef enum {
    HTTP,
    HTTPS,
    FTP
} ProtocolT ;

typedef enum {
    CSV,
    XML,
    JSON
} FileFormat ;


typedef struct {
    char *addr;
    ProtocolT protocol;
    FileFormat format;
    unsigned int port;
    const char *fileSrvPath; 
} FileSource;

typedef struct {
    char *name;
    char *addr;
    char *fileSrvAddr;
    unsigned int fileSrvPort;
    ProtocolT protocol;
    char *fileSrvPath;
} MachineContainer;

typedef struct Mediator Mediator;
    

struct Mediator {
    //TODO: add member for storing MachineContainer list ??
    int (*downloadFile)(Mediator *self, FileSource *fileSrc, char **fileDwldPath );
    int (*splitFile)(Mediator *self, const char *fileDwldPath, MachineContainer **machCtList, unsigned int machCnt );
    int (*resolveMachine)(Mediator *self, MachineContainer *machCt);
    int (*sendFile2Machine)(Mediator *self, MachineContainer *machCt);
    // int (*start)         
} ;

int downloadHTTPFile (Mediator *self, FileSource *fileSrc, char **fileDwldPath);
int splitCSVFile (Mediator *self, const char *fileDwldPath, 
                  MachineContainer **machCtList, unsigned int machCnt);
int resolveMachineMySQL (Mediator *self, MachineContainer *machCt);
int sendFile2Machine (Mediator *self, MachineContainer *machCt);

