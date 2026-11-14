
void FUN_01713f58(long param_1,float *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  float fVar6;
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
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar5 == (long *)0x0) ||
      (uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3758), (uVar2 & 1) == 0)) ||
     (plVar5[0x5b] == 0)) {
    return;
  }
  fVar7 = param_2[3];
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2590) + 0xf0))(lVar3 + 0x2590);
  fVar6 = *pfVar4;
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar11 = param_2[2];
  fVar13 = (float)((uint)fVar7 & 0xffffff) * 5.9604645e-08;
  pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)fVar7 >> 0x14) & 0xff0 ^ 0x800));
  fVar14 = *pfVar4 + fVar13 * pfVar4[1];
  fVar15 = pfVar4[2] + fVar13 * pfVar4[3];
  fVar16 = fVar14 * 0.0;
  fVar17 = fVar16 * 0.0 + fVar15 * 0.0;
  fVar18 = (fVar16 * 0.0 + 1.0) * 0.0 + fVar15 * 0.0 * 0.0;
  fVar19 = fVar15 * 0.0 * 0.0 - fVar14 * 0.0;
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x25c0) + 0xf0))(lVar3 + 0x25c0);
  fVar7 = *pfVar4;
  fVar12 = param_2[2];
  fVar13 = *param_2;
  fVar10 = param_2[1];
  lVar3 = plVar5[0x5b];
  *(float *)(lVar3 + 0x58) = fVar8 + fVar17 + fVar6 * (fVar14 + 0.0);
  *(float *)(lVar3 + 0x5c) = fVar9 + fVar18 + fVar6 * fVar16;
  *(float *)(lVar3 + 0x60) = fVar11 + fVar19 + fVar6 * fVar15;
  *(undefined4 *)(lVar3 + 0x70) = 0x3f800000;
  *(float *)(lVar3 + 0x6c) = fVar19 + fVar7 * fVar15 + fVar12;
  *(float *)(lVar3 + 100) = fVar13 + fVar17 + fVar7 * (fVar14 + 0.0);
  *(float *)(lVar3 + 0x68) = fVar18 + fVar7 * fVar16 + fVar10;
  FUN_016e5c54(0x3f800000,plVar5);
  FUN_01738aa0(plVar5[0x5b],param_1);
  return;
}

