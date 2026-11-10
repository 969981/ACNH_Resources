
void FUN_00240070(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  piVar4 = &local_50;
  FUN_0023fc98(local_40);
  if (local_40[0] != 0) {
LAB_002400a0:
    piVar4 = local_40;
    goto LAB_00240164;
  }
  if (param_4 < 0x30) {
LAB_00240140:
    local_50 = 0x10c07;
  }
  else {
    uVar3 = (*(uint *)(param_3 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x18) = uVar3 >> 0x10 | uVar3 << 0x10;
    bVar1 = *(byte *)(param_3 + 0x10);
    if ((((0x12 < bVar1) || ((1 << (ulong)(bVar1 & 0x1f) & 0x40044U) == 0)) ||
        (bVar2 = *(byte *)(param_3 + 0x11), 0x12 < bVar2)) ||
       (((1 << (ulong)(bVar2 & 0x1f) & 0x40044U) == 0 ||
        ((uint)bVar1 + (uint)bVar2 + 0x2c != param_4)))) goto LAB_00240140;
    FUN_002b476c(&local_50,param_2 + 0x20,(byte *)(param_3 + 0x10));
    FUN_00229780(local_40,&local_50);
    if (local_40[0] != 0) goto LAB_002400a0;
    local_50 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
LAB_00240164:
  FUN_002296c4(param_1,piVar4);
  return;
}

