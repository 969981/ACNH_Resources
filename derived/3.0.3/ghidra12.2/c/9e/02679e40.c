
undefined4 FUN_02679e40(byte *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_14 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
       ((lVar3 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_14[0] = *param_1;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
    if (lVar3 != 0) {
      lVar5 = lVar3 + 0x194b0;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar5 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar5 + 0x98) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x98), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      uVar2 = FUN_02800290(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78));
      if ((uVar1 & 1) != 0) {
        return uVar2;
      }
      if (*(long *)(lVar5 + 0x98) == 0) {
        return uVar2;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x98) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return uVar2;
      }
      (**(code **)*puVar4)();
      return uVar2;
    }
  }
  return 0;
}

