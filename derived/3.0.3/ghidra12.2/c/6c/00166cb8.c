
char * FUN_00166cb8(char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  char *param5;
  char *__s_00;
  char *__dest;
  size_t sVar4;
  Fqdn *__dest_00;
  Fqdn *__src;
  ulong local_70 [2];
  
  local_70[0] = 0;
  local_70[1] = 0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = strlen(param_1);
  sVar3 = sVar3 + 0x100;
  __s = (char *)FUN_00143330(1,sVar3);
  if (__s == (char *)0x0) {
    __dest = (char *)0x0;
    __s_00 = (char *)0x0;
    param5 = (char *)0x0;
  }
  else {
    param5 = (char *)FUN_00143330(1,sVar3);
    if (param5 == (char *)0x0) {
      __dest = (char *)0x0;
      __s_00 = (char *)0x0;
    }
    else {
      __s_00 = (char *)FUN_00143330(1,sVar3);
      if (__s_00 == (char *)0x0) {
        __dest = (char *)0x0;
      }
      else {
        __dest = (char *)FUN_00143330(1,sVar3);
        if (__dest != (char *)0x0) {
          iVar1 = sscanf(param_1,"%15[^\n:]://%[^\n/?:]%[^\n]",local_70,__s_00,param5);
          if (iVar1 < 2) {
            local_70[0] = local_70[0] & 0xffffffffffffff00;
            iVar1 = sscanf(param_1,"%[^\n/?:]%[^\n]",__s_00,param5);
            if (iVar1 < 1) goto LAB_00166e50;
          }
          sVar4 = strlen(__s_00);
          if (sVar4 < 0x101) {
            __dest_00 = (Fqdn *)FUN_001432f0(0x100);
            memset(__dest_00,0,0x100);
            __src = (Fqdn *)FUN_001432f0(0x100);
            memset(__src,0,0x100);
            if ((__dest_00 == (Fqdn *)0x0) || (__src == (Fqdn *)0x0)) {
              FUN_00146338(*(undefined8 *)PTR_stderr_04bcb8f8,
                           "\nError: Failed to allocate memory for nn::nsd::ResolveEx().\n\n",0);
              FUN_00143300(__src);
              FUN_00143300(__dest_00);
            }
            else {
              strncpy((char *)__dest_00,__s_00,0xff);
              __dest_00[0xff] = (Fqdn)0x0;
              uVar2 = nn::nsd::ResolveEx(__src,__dest_00);
              if (uVar2 == 0) {
                strncpy(__dest,(char *)__src,0xff);
                __dest[0xff] = '\0';
                FUN_00143300(__src);
                FUN_00143300(__dest_00);
              }
              else {
                uVar2 = uVar2 >> 9 & 0x1fff;
                FUN_00146338(*(undefined8 *)PTR_stderr_04bcb8f8,
                             "\nError: nn::nsd::ResolveEx() failed. Err Desc: %d\n\n",uVar2);
                FUN_00143300(__src);
                FUN_00143300(__dest_00);
                if (uVar2 != 0) goto LAB_00166e50;
              }
              if ((char)local_70[0] == '\0') {
                snprintf(__s,sVar3,"%s%s",__dest,param5);
              }
              else {
                snprintf(__s,sVar3,"%s://%s%s",(char *)local_70,__dest,param5);
              }
            }
          }
        }
      }
    }
  }
LAB_00166e50:
  if (*__s == '\0') {
    strcpy(__s,param_1);
  }
  FUN_00143300(__dest);
  FUN_00143300(__s_00);
  FUN_00143300(param5);
  return __s;
}

