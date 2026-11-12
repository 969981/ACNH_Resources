
bool FUN_00976d20(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_20 = 0;
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) ||
     (uVar2 = FUN_009493f8(lVar3 + 0x28,param_1,&local_14,&local_18,(long)&local_20 + 4,&local_20),
     (uVar2 & 1) == 0)) {
    bVar1 = false;
  }
  else if ((((local_14 & 0xfffffffe) == 0x2a) || ((local_18 & 0xfffffffe) == 0x2a)) ||
          ((local_20._4_4_ & 0xfffffffe) == 0x2a)) {
    bVar1 = true;
  }
  else {
    bVar1 = ((uint)local_20 & 0xfffffffe) == 0x2a;
  }
  return bVar1;
}

