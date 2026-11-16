
int FUN_025a90e0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  byte local_24 [4];
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_24[0] = *(byte *)(param_1 + 0x18);
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return 0;
    }
    if (DAT_05574040 == 0) {
      return 0;
    }
    lVar3 = FUN_026eec4c();
  }
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar5 + 0x2d010) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x2d010), puVar4 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
  }
  lVar3 = 0;
  iVar6 = 0;
  do {
    lVar1 = *(long *)(lVar5 + 0x2cff8) + *(long *)(lVar5 + 0x2cff0) + lVar3;
    lVar3 = lVar3 + 8;
    if (*(short *)(lVar1 + 2) != 0) {
      iVar6 = iVar6 + 1;
    }
    if (*(short *)(lVar1 + 6) != 0) {
      iVar6 = iVar6 + 1;
    }
  } while (lVar3 != 0x1000);
  if ((uVar2 & 1) != 0) {
    return iVar6;
  }
  if (*(long *)(lVar5 + 0x2d010) == 0) {
    return iVar6;
  }
  puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x2d010) + 8);
  if (puVar4 == (undefined8 *)0x0) {
    return iVar6;
  }
  (**(code **)*puVar4)();
  return iVar6;
}

