
undefined8 FUN_027bfec0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = 0;
  uVar8 = 0;
  while (uVar4 = FUN_0277d7b4(param_1 + 0x1004 + ((long)((ulong)uVar8 << 0x20) >> 0x1d),param_2),
        (uVar4 & 1) == 0) {
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 1;
    if (uVar8 == 0x400) {
      return 0;
    }
  }
  pcVar1 = (char *)(param_1 + 0x3004) + lVar7;
  if (0x3ff < (uint)lVar7) {
    pcVar1 = (char *)(param_1 + 0x3004);
  }
  if (*pcVar1 < '\0') {
    return 0;
  }
  if (DAT_05574040 == 0) {
    return 0;
  }
  lVar7 = FUN_026eec4c(DAT_05574040,*pcVar1);
  if (lVar7 == 0) {
    return 0;
  }
  if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar5 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90));
    uVar6 = puVar5[6];
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    param_3[5] = puVar5[5];
    param_3[6] = uVar6;
    param_3[3] = uVar2;
    param_3[4] = uVar3;
    uVar2 = *puVar5;
    uVar6 = puVar5[2];
    param_3[1] = puVar5[1];
    param_3[2] = uVar6;
    *param_3 = uVar2;
  }
  else {
    uVar4 = (**(code **)*puVar5)();
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90));
    uVar2 = puVar5[1];
    uVar6 = puVar5[2];
    *param_3 = *puVar5;
    param_3[1] = uVar2;
    param_3[2] = uVar6;
    uVar6 = puVar5[6];
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    param_3[5] = puVar5[5];
    param_3[6] = uVar6;
    param_3[3] = uVar2;
    param_3[4] = uVar3;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return 1;
}

