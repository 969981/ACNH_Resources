
long FUN_01317cc0(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    lVar4 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar1 = (long *)(DAT_0519d040 + 0x30) + param_2;
    if (0x38 < param_2) {
      plVar1 = (long *)(DAT_0519d040 + 0x30);
    }
    lVar4 = *plVar1;
  }
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) {
    return 0;
  }
  uVar6 = *(int *)(param_1 + 8) - *(int *)(lVar4 + 0x28);
  uVar2 = *(uint *)(lVar4 + 0x18);
  uVar3 = *(int *)(param_1 + 0xc) - *(int *)(lVar4 + 0x2c);
  if ((uVar6 < uVar2 && uVar3 <= *(uint *)(lVar4 + 0x1c)) &&
      (uVar2 <= uVar6 || *(uint *)(lVar4 + 0x1c) != uVar3)) {
    uVar6 = uVar6 + uVar2 * uVar3;
LAB_01317d80:
    if (*(uint *)(lVar4 + 0x30) <= uVar6) {
      uVar6 = 0;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar6 * 0x68);
  }
  else {
    if (*(char *)(lVar4 + 0x88) != '\0') {
      uVar2 = *(int *)(param_1 + 8) - *(int *)(lVar4 + 0x98);
      uVar3 = *(int *)(param_1 + 0xc) - *(int *)(lVar4 + 0x9c);
      uVar6 = *(uint *)(lVar4 + 0xa0);
      if ((uVar2 < uVar6 && uVar3 <= *(uint *)(lVar4 + 0xa4)) &&
          (uVar6 <= uVar2 || *(uint *)(lVar4 + 0xa4) != uVar3)) {
        uVar6 = uVar2 + uVar6 * uVar3 + *(int *)(lVar4 + 0x8c);
        goto LAB_01317d80;
      }
    }
    puVar5 = &DAT_051a50f0;
  }
  return (long)*(char *)(puVar5 + 2);
}

