
char * FUN_0014b724(int param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  char local_30 [16];
  
  if (param_1 == 2) {
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    FUN_001460b8(local_30,0x10,"%d.%d.%d.%d",*param_2,param_2[1],param_2[2],param_2[3]);
    sVar1 = strlen(local_30);
    if ((sVar1 != 0) && (sVar1 < param_4)) {
      strcpy(param_3,local_30);
      return param_3;
    }
    piVar2 = __errno_location();
    iVar3 = 0x1c;
  }
  else {
    piVar2 = __errno_location();
    iVar3 = 0x61;
  }
  *piVar2 = iVar3;
  return (char *)0x0;
}

