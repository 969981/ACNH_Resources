
uint FUN_009765e0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_8;
  
  local_8 = 0;
  local_24 = 0;
  local_28 = 0;
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) ||
     (uVar2 = FUN_009493f8(lVar3 + 0x28,param_1,(long)&local_8 + 4,&local_8,&local_24,&local_28),
     (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_00980d50(DAT_04cfab78,local_8._4_4_);
    if ((((uVar2 & 1) == 0) &&
        (uVar2 = FUN_00980d50(DAT_04cfab78,local_8 & 0xffffffff), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_00980d50(DAT_04cfab78,local_24), (uVar2 & 1) == 0)) {
      uVar1 = FUN_00980d50(DAT_04cfab78,local_28);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}

