#ifndef CONFIGPARSE_H_
#define CONFIGPARSE_H_

struct config {
    char server[4];
    char *username;
    char *password;
    unsigned char CONTROLCHECKSTATUS;
    unsigned char ADAPTERNUM;
    char host_ip[4];
    unsigned char IPDOG;
    char *host_name;
    char PRIMARY_DNS[4];
    char dhcp_server[4];
    unsigned char AUTH_VERSION;
    unsigned char mac;
    char *host_os;
    unsigned char KEEP_ALIVE_VERSION;
    int ror_version;
    unsigned char pppoe_flag;
    unsigned char keep_alive2_flag;
};

extern struct config drcom_config;
extern int verbose_flag;
extern char *mode;

int config_parse(char *filepath, char *mode);

#endif // CONFIGPARSE_H_