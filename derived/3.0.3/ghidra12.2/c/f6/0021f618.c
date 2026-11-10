
void FUN_0021f618(undefined8 param_1,long param_2,undefined4 *param_3)

{
  void *__s1;
  int iVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (param_3 == (undefined4 *)0x0) {
    local_40 = 0x10c07;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
    if (iVar1 == 0) {
      *param_3 = 0;
    }
    else {
      iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
      if ((iVar1 != 0) && (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc), iVar1 != 0)) {
        local_40 = 0x10c08;
        goto LAB_0021f6c4;
      }
      memcpy(param_3,__s1,4);
    }
    local_40 = 0;
  }
LAB_0021f6c4:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

