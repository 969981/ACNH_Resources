
bool FUN_002bc160(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_80;
  undefined2 local_68;
  undefined4 local_60 [4];
  int local_50 [4];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  
  if (*(char *)(param_1 + 0x4d0) == '\0') {
    return false;
  }
  for (lVar3 = *(long *)(param_1 + 0xd0); lVar3 != param_1 + 200; lVar3 = *(long *)(lVar3 + 8)) {
    uVar1 = FUN_0021fe7c(lVar3 + 0x18,param_2);
    if ((uVar1 & 1) != 0) {
      iVar2 = *(int *)(lVar3 + 0x10);
      local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
      local_40 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_40);
      FUN_002296c4(local_50,&local_80);
      goto joined_r0x002bc248;
    }
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x2c0a);
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_40);
  FUN_002296c4(local_50,&local_80);
  iVar2 = 0;
joined_r0x002bc248:
  if (local_50[0] != 0) {
    local_80 = PTR_DAT_04bccf70 + 0x10;
    FUN_0021f5a0(&local_80,0xffffffff);
    lVar3 = *(long *)(param_1 + 0xd0);
    local_68 = 0;
    for (; lVar3 != param_1 + 200; lVar3 = *(long *)(lVar3 + 8)) {
      uVar1 = FUN_0021fe7c(lVar3 + 0x18,&local_80);
      if ((uVar1 & 1) != 0) {
        iVar2 = *(int *)(lVar3 + 0x10);
        local_40 = 0;
        local_60[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_60);
        FUN_002296c4(local_60,&local_40);
        goto LAB_002bc2f0;
      }
    }
    local_40 = 0x2c0a;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_60);
    FUN_002296c4(local_60,&local_40);
    iVar2 = 0;
LAB_002bc2f0:
    FUN_00229780(local_50,local_60);
    FUN_0021f584(&local_80);
  }
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = FUN_0028d5ac(param_1 + 0x4c0);
  return (int)((uVar1 & 0xffffffff) * 100 >> 0x20) < iVar2;
}

