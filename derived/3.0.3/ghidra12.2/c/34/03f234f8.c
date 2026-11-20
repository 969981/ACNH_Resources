
void FUN_03f234f8(long *param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_2[2];
  if ((uint)fVar7 < 4) {
    uVar3 = 0;
    *(float *)((long)param_1 + 0x2c) = fVar7;
  }
  else {
    if (fVar7 != 5.60519e-45) goto LAB_03f23538;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar3;
LAB_03f23538:
  puVar2 = PTR_DAT_04bd1e70;
  puVar1 = PTR_DAT_04bb29d0;
  lVar4 = param_1[1];
  if (*(char *)(lVar4 + 0x15) == '\0') {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar4 = (long)(*(long *)PTR_DAT_04bb29d0 *
                   (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                   (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 +
            *(long *)(lVar4 + 0x18);
  }
  if (lVar4 - *param_1 < (param_1[3] + param_1[2]) - param_1[9]) {
    uVar5 = FUN_03f232ac(param_1);
  }
  else {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 4) = uVar5;
  lVar4 = *(long *)puVar1;
  param_1[2] = (lVar4 * (long)(*param_2 * 1000.0)) / 1000;
  fVar6 = param_2[1];
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  fVar7 = -fVar6;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  param_1[3] = (lVar4 * (long)(fVar7 * 1000.0)) / 1000;
  lVar4 = param_1[1];
  if (*(char *)(lVar4 + 0x15) == '\0') {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar4 = (long)(*(long *)puVar1 *
                   (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
            1000 + *(long *)(lVar4 + 0x18);
  }
  *param_1 = lVar4;
  return;
}

