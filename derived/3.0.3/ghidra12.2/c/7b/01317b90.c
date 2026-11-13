
long FUN_01317b90(float *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    lVar6 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar1 = (long *)(DAT_0519d040 + 0x30) + param_2;
    if (0x38 < param_2) {
      plVar1 = (long *)(DAT_0519d040 + 0x30);
    }
    lVar6 = *plVar1;
  }
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb0), lVar6 == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(lVar6 + 0x18);
  iVar3 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
  iVar4 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
  uVar8 = iVar3 - *(int *)(lVar6 + 0x28);
  uVar5 = iVar4 - *(int *)(lVar6 + 0x2c);
  if ((uVar8 < uVar2 && uVar5 <= *(uint *)(lVar6 + 0x1c)) &&
      (uVar2 <= uVar8 || *(uint *)(lVar6 + 0x1c) != uVar5)) {
    uVar8 = uVar8 + uVar2 * uVar5;
LAB_01317c90:
    if (*(uint *)(lVar6 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else {
    if (*(char *)(lVar6 + 0x88) != '\0') {
      uVar2 = iVar3 - *(int *)(lVar6 + 0x98);
      uVar5 = iVar4 - *(int *)(lVar6 + 0x9c);
      uVar8 = *(uint *)(lVar6 + 0xa0);
      if ((uVar2 < uVar8 && uVar5 <= *(uint *)(lVar6 + 0xa4)) &&
          (uVar8 <= uVar2 || *(uint *)(lVar6 + 0xa4) != uVar5)) {
        uVar8 = uVar2 + uVar8 * uVar5 + *(int *)(lVar6 + 0x8c);
        goto LAB_01317c90;
      }
    }
    puVar7 = &DAT_051a50f0;
  }
  return (long)*(char *)(puVar7 + 2);
}

