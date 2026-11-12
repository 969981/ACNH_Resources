
bool FUN_009766a0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_18;
  
  local_18 = 0;
  local_34 = 0;
  local_38 = 0;
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
     (uVar4 = FUN_009493f8(lVar5 + 0x28,param_1,(long)&local_18 + 4,&local_18,&local_34,&local_38),
     (uVar4 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_00980630(DAT_04cfab78,local_18._4_4_);
    uVar4 = FUN_00980630(DAT_04cfab78,local_18 & 0xffffffff);
    uVar6 = 1;
    if ((uVar2 & 1) != 0) {
      uVar6 = 2;
    }
    if ((uVar4 & 1) == 0) {
      uVar6 = uVar2 & 1;
    }
    uVar2 = FUN_00980630(DAT_04cfab78,local_34);
    uVar3 = FUN_00980630(DAT_04cfab78,local_38);
    bVar1 = uVar6 + (uVar2 & 1) + (uVar3 & 1) == 2;
  }
  return bVar1;
}

