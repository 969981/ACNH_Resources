
/* WARNING: Removing unreachable block (ram,0x00164224) */

char * FUN_001640b4(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char *pcVar4;
  char cVar5;
  char *__s2;
  char *pcVar6;
  char *__dest;
  
  sVar2 = strlen(param_1);
  pcVar3 = (char *)FUN_001432f0(sVar2 + 1);
  __s = pcVar3;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    __s = (char *)FUN_00143320(param_1);
    pcVar4 = pcVar3;
    if (__s == (char *)0x0) {
      __s = (char *)0x0;
    }
    else if (*__s != '\0') {
      pcVar4 = strchr(__s,0x3f);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      __s2 = __s;
      __dest = pcVar3;
LAB_0016414c:
      do {
        iVar1 = strncmp("./",__s2,2);
        if (iVar1 == 0) {
LAB_00164208:
          __s2 = __s2 + 2;
        }
        else {
          iVar1 = strncmp("../",__s2,3);
          if (iVar1 == 0) {
            __s2 = __s2 + 3;
          }
          else {
            iVar1 = strncmp("/./",__s2,3);
            if (iVar1 == 0) goto LAB_00164208;
            iVar1 = strcmp("/.",__s2);
            if (iVar1 == 0) {
              __s2 = __s2 + 1;
              *__s2 = '/';
              goto LAB_0016414c;
            }
            iVar1 = strncmp("/../",__s2,4);
            if (iVar1 == 0) {
              __s2 = __s2 + 3;
              do {
                if (__dest <= pcVar3) break;
                __dest = __dest + -1;
              } while (*__dest != '/');
            }
            else {
              iVar1 = strcmp("/..",__s2);
              if (iVar1 == 0) {
                __s2 = __s2 + 2;
                *__s2 = '/';
                do {
                  if (__dest <= pcVar3) break;
                  __dest = __dest + -1;
                } while (*__dest != '/');
              }
              else {
                iVar1 = strcmp(".",__s2);
                if ((iVar1 == 0) || (iVar1 = strcmp("..",__s2), iVar1 == 0)) {
                  *__s2 = '\0';
                  *pcVar3 = '\0';
                  goto LAB_0016426c;
                }
                cVar5 = *__s2;
                pcVar6 = __dest;
                do {
                  __dest = pcVar6 + 1;
                  *pcVar6 = cVar5;
                  __s2 = __s2 + 1;
                  cVar5 = *__s2;
                  pcVar6 = __dest;
                } while (cVar5 != '/' && cVar5 != '\0');
              }
            }
            *__dest = '\0';
          }
        }
LAB_0016426c:
      } while (*__s2 != '\0');
      if (pcVar4 != (char *)0x0) {
        sVar2 = strlen(param_1 + ((long)pcVar4 - (long)__s));
        memcpy(__dest,param_1 + ((long)pcVar4 - (long)__s),sVar2 + 1);
      }
      pcVar4 = __s;
      __s = pcVar3;
    }
    FUN_00143300(pcVar4);
  }
  return __s;
}

