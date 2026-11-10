
void FUN_0021fc74(undefined8 param_1,long param_2,long param_3,undefined4 *param_4,uint param_5)

{
  void *__s1;
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 6)) {
    local_44 = 0x10c07;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    local_48 = 0;
    iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
    if ((iVar1 == 0) ||
       ((iVar1 = memcmp(__s1,&DAT_0410d274,0x10), iVar1 != 0 &&
        (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc), iVar1 != 0)))) {
      local_48 = 0;
    }
    else {
      FUN_0021f618(&local_44,param_2,&local_48);
    }
    FUN_00228480(param_3,local_48);
    FUN_002284a0(param_3 + 4,*(undefined2 *)(param_2 + 0x18));
    iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
    if ((iVar1 != 0) && (iVar1 = memcmp(__s1,&DAT_0410d274,0x10), iVar1 != 0)) {
      memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc);
    }
    local_44 = 0;
    *param_4 = 6;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

