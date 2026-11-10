
void FUN_0021f764(undefined8 param_1,long param_2,void *param_3)

{
  void *__s1;
  int iVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (param_3 == (void *)0x0) {
    local_40 = 0x10c07;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
    if (iVar1 == 0) {
      memset(param_3,0,0x10);
    }
    else {
      iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
      if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc), iVar1 == 0)) {
        local_40 = 0x10c08;
        goto LAB_0021f818;
      }
      memcpy(param_3,__s1,0x10);
    }
    local_40 = 0;
  }
LAB_0021f818:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

