
void FUN_01f7f708(long param_1,float *param_2,long param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_40;
  undefined8 *puStack_38;
  int local_18;
  uint local_14;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar10 = *(float *)(lVar8 + 0x278);
  fVar9 = *(float *)(lVar8 + 0x280);
  if ((param_4 & 1) == 0) {
    fVar11 = (float)*(int *)(param_3 + 0x10) * 5.0;
    fVar14 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
    fVar12 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0;
    fVar15 = (fVar11 + fVar14) * 0.5;
    fVar13 = ((float)*(int *)(param_3 + 0x14) * 5.0 + fVar12) * 0.5;
  }
  else {
    fVar15 = (float)*(int *)(param_5 + 8) * 5.0 + 2.5;
    fVar13 = (float)*(int *)(param_5 + 0xc) * 5.0 + 2.5;
    fVar11 = (float)*(int *)(param_3 + 0x10) * 5.0;
    fVar14 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
    fVar12 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0;
  }
  piVar7 = (int *)(param_1 + 0x8818);
  bVar5 = false;
  if ((fVar11 <= fVar10) && (bVar5 = false, !NAN(fVar10) && !NAN(fVar14))) {
    bVar5 = fVar10 < fVar14;
  }
  if (bVar5) {
    bVar5 = (float)*(int *)(param_3 + 0x14) * 5.0 <= fVar9 && fVar9 < fVar12;
  }
  else {
    bVar5 = false;
  }
  local_18 = 0;
  fVar9 = (0.0 - *(float *)(lVar8 + 0x27c)) * (param_2[1] - *(float *)(lVar8 + 0x27c)) +
          (fVar15 - fVar10) * (*param_2 - fVar10) + (fVar13 - fVar9) * (param_2[2] - fVar9);
  if (*(int *)(param_1 + 0xb108) == 2) {
    if (0.0 <= fVar9) {
      local_18 = 1;
    }
    else {
      local_18 = 1;
      if (*piVar7 != 1) {
        local_14 = FUN_006f0400();
        lVar8 = *(long *)(param_1 + 0x10);
        local_40 = (undefined *)CONCAT44(local_40._4_4_,4);
        if ((*(int *)(lVar8 + 0x360) != 4) ||
           ((*(int *)(lVar8 + 0x4b8) != 0 && (*(int *)(lVar8 + 0x378) == 0x23)))) {
          fVar9 = 0.0;
          uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
          if (uVar2 - local_14 != 0) {
            uVar1 = uVar2 - local_14;
            if (uVar2 <= local_14) {
              uVar1 = local_14 - uVar2;
            }
            uVar2 = -uVar1;
            if (uVar1 < 0x80000001) {
              uVar2 = uVar1;
            }
            fVar9 = (float)uVar2 * 8.381903e-08;
          }
          fVar10 = fVar9 + -360.0;
          if (fVar9 <= 180.0) {
            fVar10 = fVar9;
          }
          fVar9 = -fVar10;
          if (0.0 <= fVar10) {
            fVar9 = fVar10;
          }
          if (60.0 <= fVar9) {
            local_40 = PTR_DAT_04bb2020 + 0x10;
            puStack_38 = &DAT_0407ebb1;
            FUN_01e5ab70(lVar8,&local_14,PTR_DAT_04bb65b0,&local_40,6);
          }
          else {
            local_40 = (undefined *)CONCAT44(local_40._4_4_,4);
            if (((*(int *)(lVar8 + 0x360) == 4) && (*(int *)(lVar8 + 0x4b8) != 0)) &&
               (*(int *)(lVar8 + 0x378) == 0x23)) {
              FUN_01e5aacc(lVar8,6);
            }
          }
        }
        local_18 = 0;
      }
    }
  }
  else if (*(int *)(param_1 + 0xb108) == 1) {
    if (!bVar5) {
      if (fVar9 < 0.0) {
        *(undefined1 *)(param_1 + 0xb107) = 0;
        local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
        local_18 = 0;
        if (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0) {
          local_18 = (uint)(*piVar7 != 2) << 1;
        }
        goto LAB_01f7fa24;
      }
      if ((*piVar7 == 4) && (*(char *)(param_1 + 0xb107) == '\0')) {
        *(undefined1 *)(param_1 + 0xb106) = 1;
      }
    }
    local_18 = 0;
    *(undefined1 *)(param_1 + 0x8996) = 1;
    *(float *)(param_1 + 0x895c) = *param_2;
    *(float *)(param_1 + 0x8960) = param_2[1];
    *(float *)(param_1 + 0x8964) = param_2[2];
  }
LAB_01f7fa24:
  if (local_18 == 2) {
    if (*(int *)(param_1 + 0xb108) != 1) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar8 + 0x360) == 4) &&
       ((*(int *)(lVar8 + 0x4b8) == 0 || (*(int *)(lVar8 + 0x378) != 0x23)))) {
      uVar6 = 2;
    }
    else {
      piVar7 = *(int **)PTR_DAT_04bb47d0;
      if (((piVar7 != (int *)0x0) && (*piVar7 != 0 || piVar7[2] != 0)) &&
         (*piVar7 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar7 + 0x2c) = 1;
        lVar8 = *(long *)(param_1 + 0x10);
      }
      uVar4 = DAT_053e0cf8;
      uVar3 = DAT_053e0cec;
      local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
      local_14 = 0;
      *(undefined8 *)(param_1 + 0xaa04) = DAT_053e0ce4;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar3;
      uVar6 = DAT_053e0cf4;
      *(undefined4 *)(param_1 + 0xaa18) = uVar4;
      uVar4 = DAT_053e0cfc;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar6;
      *(undefined4 *)(param_1 + 0xaa1c) = uVar4;
      uVar6 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined4 *)(param_1 + 0xaa20) = uVar6;
      FUN_01e5a930(0x40000000,lVar8,0,PTR_DAT_04bb2150,&local_40,&local_14,PTR_DAT_04bc1600,6);
      uVar6 = 2;
    }
  }
  else {
    if (local_18 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0xb108) != 2) {
      return;
    }
    *(undefined1 *)(param_1 + 0xb107) = 0;
    uVar6 = 1;
  }
  *(undefined4 *)(param_1 + 0xb108) = uVar6;
  return;
}

