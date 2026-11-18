
undefined8 FUN_035ab540(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_50;
  undefined1 *puStack_48;
  
  if (param_1 == 0) {
    return 0;
  }
  pfVar5 = (float *)FUN_0251b3b0(param_2,0);
  if (pfVar5 == (float *)0x0) {
    return 0;
  }
  pcVar9 = *(char **)(*(long *)(param_1 + 8) + 400);
  if (*pcVar9 == 'r') {
    if ((pcVar9[1] == 'c') && (pcVar9[2] == 't')) {
      uVar6 = *(undefined8 *)PTR_DAT_04bb3968;
      puStack_48 = &DAT_040bf969;
    }
    else {
      if ((pcVar9[1] != 'c') || (pcVar9[2] != 'm')) goto LAB_035ab784;
      uVar6 = *(undefined8 *)PTR_DAT_04bb3968;
      puStack_48 = &DAT_040dedd9;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    uVar3 = FUN_020a4f40(uVar6,&local_50,PTR_DAT_04bb3238,1);
    puVar2 = PTR_DAT_04bb27c0;
    lVar10 = *(long *)PTR_DAT_04bb27c0;
    if (lVar10 != 0) {
      if ((((uVar3 == 0) ||
           (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                (ulong)(uVar3 >> 0x14) * 8), plVar11 == (long *)0x0)) ||
          ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar3)) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar7 + 0x60))();
        if (iVar4 < 0x11) {
          uVar3 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_035ab6b0;
          uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_035ab6b0:
        uVar3 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
        uVar1 = 0;
        if ((int)lVar10 == 1) {
          uVar1 = uVar3;
        }
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        if (uVar1 == 0) {
          return 0;
        }
        lVar10 = plVar11[0xd];
        if ((lVar10 != 0) &&
           (fVar12 = *pfVar5 - *(float *)(lVar10 + 0x278),
           fVar13 = pfVar5[1] - *(float *)(lVar10 + 0x27c),
           fVar15 = pfVar5[2] - *(float *)(lVar10 + 0x280),
           lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x68),
           fVar14 = *pfVar5 - *(float *)(lVar10 + 0x278),
           fVar17 = pfVar5[2] - *(float *)(lVar10 + 0x280),
           fVar16 = pfVar5[1] - *(float *)(lVar10 + 0x27c),
           SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar17 * fVar17) <
           SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15))) goto LAB_035ab784;
      }
    }
    uVar6 = 0;
  }
  else {
LAB_035ab784:
    uVar6 = 1;
  }
  return uVar6;
}

