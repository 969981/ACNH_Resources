
void FUN_00362a10(long param_1,char *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  size_t __n;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_248;
  char local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  char acStack_140 [256];
  undefined4 local_24;
  
  local_23d = (undefined1)param_3;
  local_240 = (char)((ulong)param_3 >> 0x18);
  local_23f = (undefined1)((ulong)param_3 >> 0x10);
  local_23e = (undefined1)((ulong)param_3 >> 8);
  local_23c = 0;
  if ((*param_2 == '.') && (param_2[1] == '\0')) {
    nn::util::SNPrintf(acStack_140,0xff,"%s/",&local_240);
  }
  else {
    nn::util::SNPrintf(acStack_140,0xff,"%s/%s/",param_2,&local_240);
  }
  param_1 = param_1 + 8;
  local_24 = 0;
  local_240 = '\0';
  iVar1 = FUN_00364350(param_1,&local_24,&local_240,1);
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      __n = strlen(acStack_140);
      iVar1 = strncmp(&local_240,acStack_140,__n);
      if (iVar1 == 0) {
        local_248 = 0;
        uVar2 = FUN_00364024(param_1,&local_248,uVar3);
        (*param_4)(uVar2,(long)local_248._4_4_,&local_240,param_5);
      }
      uVar3 = local_24;
      local_240 = '\0';
      iVar1 = FUN_00364350(param_1,&local_24,&local_240,1);
    } while (iVar1 != 0);
  }
  return;
}

