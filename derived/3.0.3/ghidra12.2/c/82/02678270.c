
undefined1 FUN_02678270(byte *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  long lVar8;
  byte local_14 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8)) &&
       ((lVar4 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_14[0] = *param_1;
    uVar7 = 0xff;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    lVar4 = FUN_025830c0(DAT_055021a0,local_14,1);
    if (lVar4 != 0) {
      lVar8 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar8 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar8 + 0x98) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x98), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      if (param_2 < 0x28) {
        lVar4 = *(long *)(lVar8 + 0x80) + *(long *)(lVar8 + 0x78);
        uVar6 = *(uint *)(lVar4 + 0x158);
        if (0x13 < uVar6) {
          uVar6 = 0x14;
        }
        puVar1 = (undefined1 *)(lVar4 + 0xa4) + (param_2 - uVar6);
        if (0x13 < param_2 - uVar6) {
          puVar1 = (undefined1 *)(lVar4 + 0xa4);
        }
        puVar2 = (undefined1 *)(lVar4 + (ulong)param_2 + 0x15c);
        if (uVar6 <= param_2) {
          puVar2 = puVar1;
        }
        uVar7 = *puVar2;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar8 + 0x98) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x98) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  else {
    uVar7 = 0xff;
  }
  return uVar7;
}

