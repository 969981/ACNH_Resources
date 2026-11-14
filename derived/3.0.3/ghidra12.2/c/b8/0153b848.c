
void FUN_0153b848(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x290) == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar4 = *(uint *)(*(long *)(param_1 + 0x290) + 0x2d4);
  uVar8 = *(uint *)PTR_DAT_04bb3238;
  if (uVar4 != 0) {
    uVar8 = uVar4;
  }
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (ulong)(uVar8 >> 0x14) * 8),
       plVar7 == (long *)0x0)) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0153b93c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0153b93c;
    }
  }
  uVar8 = 0;
joined_r0x0153b93c:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
    if ((uVar8 & uVar4) == 1) {
      local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_60 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_58 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_80 = *(undefined8 *)PTR_DAT_04bb2f80;
      uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      (**(code **)(*(long *)plVar7[0x152] + 0x108))
                ((long *)plVar7[0x152],&local_80,param_3,param_4,param_5);
      lVar6 = *(long *)(param_1 + 0x290);
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar6 + 0x2e4) >> 0x14) & 0xff0));
      fVar9 = (float)(*(uint *)(lVar6 + 0x2e4) & 0xffffff) * 5.9604645e-08;
      fVar17 = *pfVar1 + fVar9 * pfVar1[1];
      fVar24 = pfVar1[2] + fVar9 * pfVar1[3];
      fVar9 = -(pfVar1[1] * fVar9) - *pfVar1;
      fVar26 = fVar17 * 0.0;
      fVar17 = fVar17 + 0.0;
      fVar25 = fVar24 * 0.0;
      fVar10 = fVar26 * 0.0 + 1.0;
      fVar11 = *(float *)(lVar6 + 0x2d8) + 0.0;
      fVar12 = *(float *)(lVar6 + 0x2dc);
      fVar13 = *(float *)(lVar6 + 0x2e0) + 0.0;
      fVar14 = (float)FUN_01472ae0(plVar7);
      fVar14 = fVar12 + 0.0 + fVar14;
      fVar12 = (float)local_80;
      fVar15 = (float)((ulong)local_80 >> 0x20);
      fVar18 = (float)local_70;
      fVar19 = (float)((ulong)local_70 >> 0x20);
      fVar21 = (float)local_60;
      fVar22 = (float)((ulong)local_60 >> 0x20);
      fVar16 = (float)uStack_78;
      fVar20 = (float)uStack_68;
      fVar23 = (float)uStack_58;
      param_2[1] = CONCAT44((float)((ulong)uStack_78 >> 0x20) +
                            fVar11 * fVar12 + fVar14 * fVar15 + fVar13 * fVar16,
                            fVar17 * fVar12 + fVar26 * fVar15 + fVar24 * fVar16 + 0.0);
      *param_2 = CONCAT44(fVar26 * fVar12 + fVar10 * fVar15 + fVar25 * fVar16 + 0.0,
                          fVar24 * fVar12 + fVar25 * fVar15 + fVar9 * fVar16 + 0.0);
      param_2[3] = CONCAT44((float)((ulong)uStack_68 >> 0x20) +
                            fVar11 * fVar18 + fVar14 * fVar19 + fVar13 * fVar20,
                            fVar17 * fVar18 + fVar26 * fVar19 + fVar24 * fVar20 + 0.0);
      param_2[2] = CONCAT44(fVar26 * fVar18 + fVar10 * fVar19 + fVar25 * fVar20 + 0.0,
                            fVar24 * fVar18 + fVar25 * fVar19 + fVar9 * fVar20 + 0.0);
      param_2[5] = CONCAT44((float)((ulong)uStack_58 >> 0x20) +
                            fVar11 * fVar21 + fVar14 * fVar22 + fVar13 * fVar23,
                            fVar17 * fVar21 + fVar26 * fVar22 + fVar24 * fVar23 + 0.0);
      param_2[4] = CONCAT44(fVar26 * fVar21 + fVar10 * fVar22 + fVar25 * fVar23 + 0.0,
                            fVar24 * fVar21 + fVar25 * fVar22 + fVar9 * fVar23 + 0.0);
    }
  }
  return;
}

