
void FUN_02000998(long param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar6 = FUN_02201dc0(param_2,*(undefined8 *)(param_1 + 0x10));
  if ((uVar6 & 1) != 0) {
    uVar4 = *param_2;
    if ((((uVar4 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                              ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar4)) {
      plVar10 = (long *)0x0;
    }
    iVar5 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
    if (iVar5 == 1 || iVar5 == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar7 + 0x60))();
    }
    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3fe0);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fd8);
    lVar8 = plVar10[0xd];
    fVar18 = 0.0;
    fVar11 = *(float *)(lVar8 + 0x278);
    pfVar3 = *(float **)(param_1 + 0x18);
    fVar13 = **(float **)(param_1 + 0x10);
    fVar12 = *(float *)(lVar8 + 0x280);
    fVar14 = fVar11 - fVar13;
    fVar17 = (*(float **)(param_1 + 0x10))[2];
    fVar16 = fVar12 - fVar17;
    fVar19 = SQRT(fVar14 * fVar14 + 0.0 + fVar16 * fVar16);
    if (0.0 < fVar19) {
      fVar19 = 1.0 / fVar19;
      fVar14 = fVar14 * fVar19;
      fVar18 = fVar19 * 0.0;
      fVar16 = fVar16 * fVar19;
    }
    fVar17 = fVar17 - fVar12;
    fVar13 = fVar13 - fVar11;
    fVar17 = fVar17 * fVar17 + fVar13 * fVar13;
    fVar13 = DAT_053bbd7c;
    if (900.0 < fVar17) {
      if ((*(float *)(lVar2 + 0x3448) < fVar17) && (*(float *)(lVar2 + 0x3450) < fVar17)) {
        return;
      }
      uVar6 = (ulong)(*(uint *)(lVar2 + 0x3440) >> 0x14) & 0xff0;
      fVar13 = *(float *)(PTR_DAT_04bb2d00 + uVar6 + 8) +
               *(float *)(PTR_DAT_04bb2d00 + uVar6 + 0xc) *
               (float)(*(uint *)(lVar2 + 0x3440) & 0xffffff) * 5.9604645e-08;
    }
    if ((fVar13 <= fVar18 * pfVar3[1] + *pfVar3 * fVar14 + pfVar3[2] * fVar16) &&
       (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x38))) {
      uVar15 = *(undefined4 *)(lVar8 + 0x27c);
      plVar10 = (long *)(lVar2 + 0x10);
      uVar4 = *param_2;
      puVar9 = *(undefined8 **)(lVar2 + 0x28);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x28) = *puVar9;
      }
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      *puVar9 = 0;
      puVar9[1] = puVar1;
      puVar1 = PTR_DAT_04bb2010;
      *(uint *)((long)puVar9 + 0x3c) = uVar4;
      *(float *)(puVar9 + 6) = fVar11;
      *(undefined4 *)((long)puVar9 + 0x34) = uVar15;
      *(float *)(puVar9 + 7) = fVar12;
      *(float *)(puVar9 + 9) = fVar17;
      *(undefined4 *)(puVar9 + 10) = 0;
      puVar9[0xc] = 0;
      puVar9[8] = 0xffffffffffffffff;
      *(undefined2 *)((long)puVar9 + 0x4c) = 0x1000;
      puVar9[2] = puVar1 + 0x10;
      puVar9[3] = 0;
      puVar9[4] = puVar1 + 0x10;
      puVar9[5] = 0;
      plVar7 = puVar9 + 0xb;
      *plVar7 = 0;
      lVar8 = *plVar10;
      *plVar10 = (long)plVar7;
      puVar9[0xc] = plVar10;
      *plVar7 = lVar8;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar7;
      }
      *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    }
  }
  return;
}

