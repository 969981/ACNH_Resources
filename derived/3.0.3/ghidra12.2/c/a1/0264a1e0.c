
uint FUN_0264a1e0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_14 [4];
  
  if ((((*param_1 < 8) && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) {
    local_14[0] = *param_1;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
    if (lVar3 != 0) {
      lVar5 = lVar3 + 0x194b0;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar5 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar5 + 0x1090) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x1090), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      uVar1 = FUN_0277a1f4(*(long *)(lVar5 + 0x1078) + *(long *)(lVar5 + 0x1070),param_2);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x1090) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x1090) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      goto LAB_0264a2c4;
    }
  }
  uVar1 = 0;
LAB_0264a2c4:
  return uVar1 & 1;
}

