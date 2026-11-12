
undefined8 FUN_00976490(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_8;
  
  local_8 = 0;
  local_24 = 0;
  local_28 = 0;
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) ||
      (uVar1 = FUN_009493f8(lVar3 + 0x28,param_1,(long)&local_8 + 4,&local_8,&local_24,&local_28),
      (uVar1 & 1) == 0)) ||
     (((uVar1 = FUN_00980630(DAT_04cfab78,local_8._4_4_), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_00980630(DAT_04cfab78,local_8 & 0xffffffff), (uVar1 & 1) == 0)) ||
      ((uVar1 = FUN_00980630(DAT_04cfab78,local_24), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_00980630(DAT_04cfab78,local_28), (uVar1 & 1) == 0)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

