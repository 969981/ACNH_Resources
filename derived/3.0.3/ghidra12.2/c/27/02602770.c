
undefined8 FUN_02602770(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte local_14 [4];
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_14[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return 0;
    }
    if (DAT_05574040 == 0) {
      return 0;
    }
    lVar2 = FUN_026eec4c();
  }
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(long **)(lVar2 + 0x17bb0) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x17bb0), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar3)();
    uVar1 = uVar1 ^ 1;
  }
  uVar4 = FUN_0265c8a0(param_2,*(long *)(lVar2 + 0x17b98) + *(long *)(lVar2 + 0x17b90) + 0x1c);
  if ((uVar1 & 1) != 0) {
    return uVar4;
  }
  if (*(long *)(lVar2 + 0x17bb0) == 0) {
    return uVar4;
  }
  puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x17bb0) + 8);
  if (puVar3 == (undefined8 *)0x0) {
    return uVar4;
  }
  (**(code **)*puVar3)();
  return uVar4;
}

