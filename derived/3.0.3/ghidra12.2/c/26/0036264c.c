
bool FUN_0036264c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char acStack_238 [256];
  char local_138 [256];
  undefined4 local_38;
  undefined1 local_34;
  
  nn::util::SNPrintf(acStack_238,0x100,"ArchiveShader-%s.bnsh");
  local_34 = 0;
  local_38 = 0x68736762;
  if (*(char *)(param_1 + 0x40) == '.' && *(char *)(param_1 + 0x41) == '\0') {
    nn::util::SNPrintf(local_138,0xff,"%s/%s",&local_38,acStack_238);
    iVar1 = FUN_003640a0(param_1 + 8,local_138);
  }
  else {
    nn::util::SNPrintf(local_138,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_38,acStack_238);
    iVar1 = FUN_003640a0(param_1 + 8,local_138);
  }
  if (iVar1 == -1) {
    return false;
  }
  local_138[0] = '\0';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_138[4] = '\0';
  local_138[5] = '\0';
  local_138[6] = '\0';
  local_138[7] = '\0';
  lVar2 = FUN_00364024(param_1 + 8,local_138,iVar1);
  if (lVar2 != 0) {
    thunk_FUN_00385d30(param_2,param_3,lVar2,0,0,0,0,3);
  }
  return lVar2 != 0;
}

