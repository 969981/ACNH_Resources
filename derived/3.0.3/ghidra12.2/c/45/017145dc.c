
void FUN_017145dc(long param_1,float *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
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
  
  plVar6 = *(long **)(param_1 + 0x48);
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar6 == (long *)0x0) ||
      (uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758), (uVar3 & 1) == 0)) ||
     (plVar6[0x5b] == 0)) {
    return;
  }
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 10000) + 0xf0))(lVar4 + 10000);
  puVar1 = PTR_DAT_04bb2d00;
  fVar7 = *pfVar5;
  fVar8 = *param_2;
  fVar10 = param_2[1];
  fVar16 = param_2[2];
  pfVar5 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)param_2[3] >> 0x14) & 0xff0));
  fVar13 = (float)((uint)param_2[3] & 0xffffff) * 5.9604645e-08;
  fVar17 = *pfVar5 + fVar13 * pfVar5[1];
  fVar14 = pfVar5[2] + fVar13 * pfVar5[3];
  fVar20 = fVar17 * 0.0;
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2740) + 0xf0))(lVar4 + 0x2740);
  fVar18 = *pfVar5;
  pfVar5 = (float *)(puVar1 + ((ulong)((uint)param_2[3] >> 0x14) & 0xff0));
  fVar13 = (float)((uint)param_2[3] & 0xffffff) * 5.9604645e-08;
  fVar9 = *pfVar5 + fVar13 * pfVar5[1];
  fVar13 = pfVar5[2] + fVar13 * pfVar5[3];
  fVar11 = fVar9 * 0.0;
  lVar4 = plVar6[0x5b];
  fVar19 = param_2[2];
  fVar12 = *param_2;
  fVar15 = param_2[1];
  *(float *)(lVar4 + 0x58) = fVar8 + fVar20 * 0.0 + fVar14 * 0.0 + fVar7 * (fVar17 + 0.0);
  *(float *)(lVar4 + 0x5c) =
       fVar10 + (fVar20 * 0.0 + 1.0) * 0.0 + fVar14 * 0.0 * 0.0 + fVar7 * fVar20;
  *(undefined4 *)(lVar4 + 0x70) = 0x3f800000;
  *(float *)(lVar4 + 0x60) = fVar16 + (fVar14 * 0.0 * 0.0 - fVar17 * 0.0) + fVar7 * fVar14;
  *(float *)(lVar4 + 100) = fVar12 + fVar11 * 0.0 + fVar13 * 0.0 + fVar18 * (fVar9 + 0.0);
  *(float *)(lVar4 + 0x68) =
       fVar15 + (fVar11 * 0.0 + 1.0) * 0.0 + fVar13 * 0.0 * 0.0 + fVar18 * fVar11;
  *(float *)(lVar4 + 0x6c) = fVar19 + (fVar13 * 0.0 * 0.0 - fVar9 * 0.0) + fVar18 * fVar13;
  FUN_016e5c54(0,plVar6);
  FUN_01738aa0(plVar6[0x5b],param_1);
  return;
}

