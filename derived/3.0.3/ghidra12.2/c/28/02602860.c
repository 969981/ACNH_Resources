
undefined4 FUN_02602860(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte local_14 [4];
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_14[0] = *(byte *)(param_1 + 0x18);
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
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
  if ((*(long **)(lVar3 + 0x18320) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x18320), puVar4 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar4)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_0274bbb0(*(long *)(lVar3 + 0x18308) + *(long *)(lVar3 + 0x18300),param_2);
  if ((uVar1 & 1) != 0) {
    return uVar2;
  }
  if (*(long *)(lVar3 + 0x18320) == 0) {
    return uVar2;
  }
  puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 8);
  if (puVar4 == (undefined8 *)0x0) {
    return uVar2;
  }
  (**(code **)*puVar4)();
  return uVar2;
}

