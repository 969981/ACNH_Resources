
void FUN_020192bc(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *param_1, uVar1 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar1)))) {
    lVar2 = plVar6[0x2a];
    if (((*PTR_DAT_04bbe050 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe050);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bbe048);
    if (((uVar4 & 1) != 0) && ((int)lVar2 == 1)) {
      plVar7 = (long *)plVar6[0xd];
      if (plVar7 != (long *)0x0) {
        if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2f68);
        }
        uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb2f60);
        if ((uVar4 & 1) == 0) {
          plVar7 = (long *)0x0;
        }
      }
      plVar6 = (long *)plVar6[0xc];
      if (plVar6 != (long *)0x0) {
        if (((*PTR_DAT_04bb2eb0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2eb0), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb2ea8 = PTR_DAT_04bb2e38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2eb0);
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb2ea8);
      }
      if ((param_2 != 0) && (plVar7 != (long *)0x0)) {
        pfVar5 = (float *)(**(code **)(*(long *)(param_2 + 0x98) + 0xf0))();
        fVar16 = *pfVar5;
        fVar15 = pfVar5[1];
        fVar8 = pfVar5[2];
        pfVar5 = (float *)(**(code **)(*(long *)(param_2 + 0x60) + 0xf0))();
        fVar14 = pfVar5[2];
        fVar12 = *pfVar5;
        fVar13 = pfVar5[1];
        (**(code **)(*(long *)(param_2 + 0x30) + 0xf0))((long *)(param_2 + 0x30));
        fVar9 = sinf(fVar12);
        fVar10 = sinf(fVar13);
        fVar11 = sinf(fVar14);
        fVar12 = cosf(fVar12);
        fVar13 = cosf(fVar13);
        fVar14 = cosf(fVar14);
        *(ulong *)((long)plVar7 + 0x34c) =
             CONCAT44(-fVar16,fVar9 * fVar11 + fVar10 * fVar12 * fVar14);
        *(ulong *)((long)plVar7 + 0x344) =
             CONCAT44(fVar9 * fVar10 * fVar14 - fVar11 * fVar12,fVar13 * fVar14);
        *(ulong *)((long)plVar7 + 0x35c) =
             CONCAT44(-fVar15,-(fVar9 * fVar14) + fVar10 * fVar11 * fVar12);
        *(ulong *)((long)plVar7 + 0x354) =
             CONCAT44(fVar12 * fVar14 + fVar11 * fVar9 * fVar10,fVar11 * fVar13);
        *(ulong *)((long)plVar7 + 0x36c) = CONCAT44(-fVar8,fVar12 * fVar13);
        *(ulong *)((long)plVar7 + 0x364) = CONCAT44(fVar9 * fVar13,-fVar10);
      }
    }
  }
  return;
}

