
/* WARNING: Removing unreachable block (ram,0x0244ebcc) */

void FUN_0244e8ac(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_0244ec3c;
  uVar13 = *(uint *)(param_1 + 0xbb0);
  if ((((uVar13 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0244e970;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0244e970:
    uVar13 = 0;
  }
  if (plVar11 == (long *)0x0) goto LAB_0244ec3c;
  lVar8 = plVar11[0x2a];
  if (((*PTR_DAT_04bbe9e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe9e0);
  }
  uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar13;
  }
  if (((uVar7 & 1) == 0) || (uVar1 == 0)) goto LAB_0244ec3c;
  lVar8 = plVar11[0xd];
  lVar10 = *(long *)(param_1 + 0x68);
  fVar17 = *(float *)(lVar8 + 0x278) - *(float *)(lVar10 + 0x278);
  fVar19 = *(float *)(lVar8 + 0x27c) - *(float *)(lVar10 + 0x27c);
  fVar18 = *(float *)(lVar8 + 0x280) - *(float *)(lVar10 + 0x280);
  fVar14 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18);
  if (0.0 < fVar14) {
    fVar14 = 1.0 / fVar14;
    fVar17 = fVar17 * fVar14;
    fVar19 = fVar19 * fVar14;
    fVar18 = fVar18 * fVar14;
  }
  fVar16 = SQRT(fVar17 * fVar17 + 0.0 + fVar18 * fVar18);
  fVar15 = fVar17;
  fVar14 = fVar18;
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    fVar15 = fVar17 * fVar16;
    fVar14 = fVar18 * fVar16;
  }
  if ((fVar15 == 0.0) && (fVar14 == 0.0)) {
    iVar5 = 0;
    iVar9 = 0;
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_0244ead4;
LAB_0244ea80:
    iVar5 = iVar9;
    local_70 = CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0244ead4;
  }
  else {
    iVar5 = FUN_006f0400(fVar17,fVar18);
    iVar9 = iVar5;
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_0244ea80;
LAB_0244ead4:
    plVar6 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar6 + 0x148))();
    iVar9 = iVar5 - *(int *)(lVar8 + 4);
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar5 = -0x15555560;
      iVar9 = (int)((float)iVar9 * 0.3);
      if (iVar9 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar2 = iVar9;
      if (iVar3 <= iVar9) {
        iVar2 = iVar3;
      }
      if (iVar5 <= iVar9) {
        iVar5 = iVar2;
      }
      iVar5 = iVar5 + *(int *)(lVar8 + 4);
    }
    *(int *)(lVar8 + 4) = iVar5;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  if (((puVar12[0x227] != 0) &&
      (uVar7 = FUN_03850890(puVar12[0x227],6,&local_70,*(uint *)(puVar12 + 0x2d3) >> 1 & 1),
      (uVar7 & 1) != 0)) && (*(int *)((long)plVar11 + 0x2a4) == 0)) {
    *(float *)((long)plVar11 + 0x324) = fVar17 + fVar17;
    *(float *)(plVar11 + 0x65) = fVar19 + fVar19;
    *(float *)((long)plVar11 + 0x32c) = fVar18 + fVar18;
    *(byte *)((long)plVar11 + 0x29e) = *(byte *)((long)plVar11 + 0x29e) | 0x40;
  }
LAB_0244ec3c:
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  if (puVar12[0x227] == 0) {
    uVar13 = 0;
  }
  else {
    local_70 = CONCAT44(local_70._4_4_,1);
    uVar13 = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
  }
  uVar7 = FUN_0170a6d0(puVar12,uVar13);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar7 & 1) == 0)) {
    local_68 = local_68 & 0xffffffff00000000;
    local_70 = CONCAT35(local_70._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_70);
  }
  return;
}

