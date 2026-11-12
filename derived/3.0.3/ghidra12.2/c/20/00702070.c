
void FUN_00702070(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x1138), lVar5 != 0)) &&
     (*(char *)(lVar5 + 0xae) == '\0' || *(char *)(lVar5 + 0xb4) != '\0')) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  fVar8 = *(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x284);
  *(float *)(param_1 + 0x2d0) = fVar8;
  fVar9 = *(float *)(param_1 + 0x280) - *(float *)(param_1 + 0x28c);
  *(float *)(param_1 + 0x2d4) = *(float *)(param_1 + 0x27c) - *(float *)(param_1 + 0x288);
  *(float *)(param_1 + 0x2d8) = fVar9;
  fVar9 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  *(float *)(param_1 + 0x2dc) = fVar9;
  fVar8 = -fVar9;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  if (1.1920929e-07 < fVar8) {
    uVar4 = FUN_006f0400();
    *(undefined4 *)(param_1 + 0x2cc) = uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x2ac);
  uVar3 = *(uint *)(param_1 + 0x2b4);
  uVar7 = uVar2 - uVar3;
  if (uVar7 == 0) {
    uVar6 = 0;
    fVar8 = -8.381903e-08;
  }
  else {
    uVar6 = uVar3 - uVar2;
    uVar1 = uVar7;
    if (uVar2 <= uVar3) {
      uVar1 = uVar6;
    }
    if (uVar1 < 0x80000001) {
      if (uVar3 < uVar2) {
        fVar8 = -8.381903e-08;
        goto LAB_00702174;
      }
    }
    else {
      uVar6 = -uVar1;
      if (uVar2 <= uVar3) {
        fVar8 = -8.381903e-08;
        goto LAB_00702170;
      }
    }
    fVar8 = 8.381903e-08;
  }
LAB_00702170:
  uVar7 = uVar6;
LAB_00702174:
  *(uint *)(param_1 + 0x2ac) = uVar3;
  *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(param_1 + 0x278);
  *(float *)(param_1 + 0x2e0) = fVar8 * (float)uVar7;
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x280);
  return;
}

