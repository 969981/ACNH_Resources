
void FUN_015bca00(long *param_1,float *param_2,float *param_3,undefined4 *param_4,undefined1 param_5
                 ,undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int *local_b0;
  int *piStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  float *local_90;
  int local_84;
  int local_80;
  float local_7c [3];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (((((char)param_1[7] != '\0') &&
       (local_68[0] = param_6, local_64[0] = param_5, uVar4 = (**(code **)(*param_1 + 0xc0))(),
       (uVar4 & 1) != 0)) && (lVar12 = *(long *)(param_1[0x50] + 8), lVar12 != 0)) &&
     (lVar7 = param_1[0x1b3], lVar7 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x171);
    if (*(uint *)(param_1 + 0x16b) <= uVar2) {
      uVar2 = 0;
    }
    if (*(char *)(param_1[0x16c] + (long)(int)uVar2 * 0x18 + 0x10) != '\0') {
      fVar13 = *param_3;
      fVar15 = param_3[2];
      iVar1 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
      if (*(int *)(lVar7 + 0x10) <= iVar1 && iVar1 <= *(int *)(lVar7 + 0x20)) {
        iVar1 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        if ((*(int *)(lVar7 + 0x14) <= iVar1) && (iVar1 <= *(int *)(lVar7 + 0x24))) {
          fVar18 = (float)*(int *)(lVar7 + 0x14) * 0.5;
          local_80 = (int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0);
          fVar17 = (float)*(int *)(lVar7 + 0x10) * 0.5;
          local_84 = (int)((float)(int)fVar15 / 10.0) - (uint)(fVar15 < 0.0);
          uVar8 = 0;
          if (fVar17 != (float)(int)fVar17) {
            uVar8 = (uint)(fVar17 < 0.0);
          }
          fVar19 = (float)*(int *)(lVar7 + 0x20) * 0.5;
          uVar9 = 0;
          if (fVar18 != (float)(int)fVar18) {
            uVar9 = (uint)(fVar18 < 0.0);
          }
          uVar10 = 0;
          if (fVar19 != (float)(int)fVar19) {
            uVar10 = (uint)(fVar19 < 0.0);
          }
          fVar20 = (float)*(int *)(lVar7 + 0x24) * 0.5;
          fVar16 = -0.5;
          piStack_a8 = &local_84;
          fVar14 = (fVar13 - ((float)local_80 * 10.0 + 5.0)) * 0.1 * 5.0 * 0.25;
          fVar13 = (fVar15 - ((float)local_84 * 10.0 + 5.0)) * 0.1 * 5.0 * 0.25;
          uVar11 = 0;
          if (fVar20 != (float)(int)fVar20) {
            uVar11 = (uint)(fVar20 < 0.0);
          }
          iVar1 = (int)fVar17 - uVar8;
          if ((int)((int)fVar19 - uVar10) <= (int)((int)fVar17 - uVar8)) {
            iVar1 = (int)fVar19 - uVar10;
          }
          local_b0 = &local_80;
          local_80 = local_80 - iVar1;
          puStack_98 = local_68;
          iVar1 = (int)fVar18 - uVar9;
          if ((int)((int)fVar20 - uVar11) <= (int)((int)fVar18 - uVar9)) {
            iVar1 = (int)fVar20 - uVar11;
          }
          local_90 = local_7c;
          local_7c[1] = NAN;
          local_a0 = local_64;
          local_84 = local_84 - iVar1;
          fVar15 = 0.5;
          if (fVar14 <= 0.5) {
            fVar15 = fVar14;
          }
          fVar17 = -0.5;
          if (-0.5 <= fVar14) {
            fVar17 = fVar15;
          }
          fVar15 = 0.5;
          if (fVar13 <= 0.5) {
            fVar15 = fVar13;
          }
          local_7c[2] = -0.5;
          if (-0.5 <= fVar13) {
            local_7c[2] = fVar15;
          }
          local_7c[0] = fVar17;
          fVar13 = (float)FUN_015d0d74(&local_b0,param_1[0x16c] + (long)(int)uVar2 * 0x18);
          (**(code **)(*(long *)(lVar12 + 0xb80) + 0xf0))(lVar12 + 0xb80);
          fVar19 = *param_2;
          fVar15 = param_2[1];
          fVar18 = param_2[2];
          fVar14 = SQRT(fVar15 * fVar15 + fVar19 * fVar19 + fVar18 * fVar18);
          if (0.0 < fVar14) {
            fVar14 = 1.0 / fVar14;
            fVar19 = fVar19 * fVar14;
            *param_2 = fVar19;
            param_2[1] = fVar15 * fVar14;
            param_2[2] = fVar18 * fVar14;
          }
          uVar2 = (**(code **)(param_1[0x170] + 8))(param_1 + 0x170);
          if (*(uint *)(param_1 + 0x16b) <= uVar2) {
            uVar2 = 0;
          }
          if (*(char *)(param_1[0x16c] + (long)(int)uVar2 * 0x18 + 0x10) != '\0') {
            lVar7 = param_1[0x174];
            puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0xca0) + 0xf0))(lVar12 + 0xca0);
            fVar15 = (float)NEON_ucvtf(*puVar5);
            fVar15 = 1.0 - (float)(int)lVar7 / fVar15;
            uVar2 = (**(code **)(param_1[0x170] + 8))(param_1 + 0x170);
            if (*(uint *)(param_1 + 0x16b) <= uVar2) {
              uVar2 = 0;
            }
            fVar14 = (float)FUN_015d0d74(&local_b0,param_1[0x16c] + (long)(int)uVar2 * 0x18);
            fVar13 = fVar14 + fVar15 * (fVar13 - fVar14);
            fVar17 = fVar18 + fVar15 * (fVar17 - fVar18);
            fVar16 = fVar19 + fVar15 * (fVar16 - fVar19);
          }
          *param_2 = fVar13;
          param_2[1] = fVar17;
          param_2[2] = fVar16;
          if (param_4 != (undefined4 *)0x0) {
            if ((fVar13 == 0.0) && (fVar16 == 0.0)) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_006f0400(fVar16,fVar13);
            }
            *param_4 = uVar3;
          }
          pfVar6 = (float *)(**(code **)(*(long *)(lVar12 + 0xc10) + 0xf0))(lVar12 + 0xc10);
          fVar15 = *pfVar6;
          pfVar6 = (float *)(**(code **)(*(long *)(lVar12 + 0xc10) + 0xf0))(lVar12 + 0xc10);
          fVar13 = *pfVar6;
          *param_2 = fVar15 * *param_2;
          param_2[1] = param_2[1] * 0.0;
          param_2[2] = fVar13 * param_2[2];
        }
      }
    }
  }
  return;
}

