
void FUN_0189cde8(float *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  
  puVar7 = PTR_DAT_04bb2d00;
  uVar13 = *(uint *)(param_2 + 0x2b0);
  uVar9 = *(uint *)(param_2 + 0x2b4);
  uVar4 = *(uint *)(param_2 + 0x2b8);
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  pfVar1 = (float *)(puVar7 + ((ulong)(uVar13 >> 0x14) & 0xff0));
  pfVar2 = (float *)(puVar7 + ((ulong)(uVar9 >> 0x14) & 0xff0));
  pfVar3 = (float *)(puVar7 + ((ulong)(uVar4 >> 0x14) & 0xff0));
  cVar5 = *(char *)(param_2 + 0x2e4);
  fVar14 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
  fVar15 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
  fVar16 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
  fVar24 = *pfVar1 + fVar14 * pfVar1[1];
  fVar14 = pfVar1[2] + fVar14 * pfVar1[3];
  fVar33 = *pfVar2 + fVar15 * pfVar2[1];
  fVar34 = *pfVar3 + fVar16 * pfVar3[1];
  fVar16 = pfVar3[2] + fVar16 * pfVar3[3];
  fVar19 = pfVar2[2] + fVar15 * pfVar2[3];
  param_1[8] = -(pfVar2[1] * fVar15) - *pfVar2;
  param_1[9] = fVar24 * fVar19;
  param_1[10] = fVar14 * fVar19;
  *param_1 = fVar19 * fVar16;
  param_1[1] = fVar24 * fVar33 * fVar16 - fVar14 * fVar34;
  param_1[6] = -(fVar24 * fVar16) + fVar33 * fVar14 * fVar34;
  param_1[4] = fVar19 * fVar34;
  param_1[5] = fVar14 * fVar16 + fVar34 * fVar24 * fVar33;
  param_1[2] = fVar24 * fVar34 + fVar33 * fVar14 * fVar16;
  puVar6 = PTR_DAT_04bb27c0;
  if ((cVar5 == '\0') || (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 == 0)) goto LAB_0189d0bc;
  uVar13 = *(uint *)PTR_DAT_04bbea10;
  if ((uVar13 == 0) ||
     (((plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0 ||
       ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar6;
    iVar8 = (**(code **)(*plVar10 + 0x60))();
    if (iVar8 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0189cfb4;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0189cfb4:
    uVar13 = 0;
  }
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe9e8);
    if ((uVar13 & uVar9) == 1) {
      local_44 = 0;
      local_48 = 0;
      local_50 = 0;
      if (plVar12[0x4f] == 0) {
        local_44 = 0;
      }
      else {
        FUN_018acc4c(plVar12[0x4f],&local_50,0,&local_44,
                     *(long *)(*(long *)(param_2 + 0x48) + 0x68) + 0x278);
      }
      pfVar1 = (float *)(puVar7 + (ulong)(local_44 >> 0x18) * 0x10);
      fVar14 = (float)(local_44 & 0xffffff) * 5.9604645e-08;
      fVar15 = *pfVar1 + fVar14 * pfVar1[1];
      fVar14 = pfVar1[2] + fVar14 * pfVar1[3];
      *(undefined8 *)(param_2 + 0x310) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x30c) = 0;
      *(undefined4 *)(param_2 + 0x2f4) = 0;
      *(undefined8 *)(param_2 + 0x304) = 0x8000000000000000;
      *(float *)(param_2 + 0x2e8) = fVar14;
      *(float *)(param_2 + 0x2f8) = fVar15;
      *(float *)(param_2 + 0x2ec) = fVar14 * 0.0 - fVar15;
      *(float *)(param_2 + 0x2f0) = fVar15 * 0.0 + fVar14 * 0.0;
      *(float *)(param_2 + 0x2fc) = fVar14 + fVar15 * 0.0;
      *(float *)(param_2 + 0x300) = fVar14 * -0.0 + fVar15 * 0.0;
    }
  }
LAB_0189d0bc:
  fVar14 = (float)*(undefined8 *)param_1;
  fVar20 = (float)*(undefined8 *)(param_2 + 0x2e8);
  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x2e8) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_2 + 0x2f0);
  fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x2f0) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 4);
  fVar15 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_2 + 0x2f8);
  fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x2f8) >> 0x20);
  fVar29 = (float)*(undefined8 *)(param_2 + 0x300);
  fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 0x300) >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_1 + 8);
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_1 + 2);
  fVar26 = (float)*(undefined8 *)(param_2 + 0x308);
  fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x308) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_2 + 0x310);
  fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0x310) >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_1 + 6);
  fVar18 = (float)*(undefined8 *)(param_1 + 10);
  *(ulong *)(param_1 + 2) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                fVar23 * fVar14 + fVar31 * fVar15 + fVar32 * fVar16,
                fVar22 * fVar14 + fVar29 * fVar15 + fVar30 * fVar16 + 0.0);
  *(ulong *)param_1 =
       CONCAT44(fVar21 * fVar14 + fVar27 * fVar15 + fVar28 * fVar16 + 0.0,
                fVar20 * fVar14 + fVar25 * fVar15 + fVar26 * fVar16 + 0.0);
  *(ulong *)(param_1 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                fVar23 * fVar19 + fVar31 * fVar24 + fVar32 * fVar33,
                fVar22 * fVar19 + fVar29 * fVar24 + fVar30 * fVar33 + 0.0);
  *(ulong *)(param_1 + 4) =
       CONCAT44(fVar21 * fVar19 + fVar27 * fVar24 + fVar28 * fVar33 + 0.0,
                fVar20 * fVar19 + fVar25 * fVar24 + fVar26 * fVar33 + 0.0);
  fVar15 = *(float *)(param_2 + 0x27c);
  param_1[3] = *(float *)(param_2 + 0x278);
  fVar14 = *(float *)(param_2 + 0x280);
  *(ulong *)(param_1 + 10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) +
                fVar23 * fVar34 + fVar31 * fVar17 + fVar32 * fVar18,
                fVar22 * fVar34 + fVar29 * fVar17 + fVar30 * fVar18 + 0.0);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar21 * fVar34 + fVar27 * fVar17 + fVar28 * fVar18 + 0.0,
                fVar20 * fVar34 + fVar25 * fVar17 + fVar26 * fVar18 + 0.0);
  param_1[7] = fVar15;
  param_1[0xb] = fVar14;
  return;
}

