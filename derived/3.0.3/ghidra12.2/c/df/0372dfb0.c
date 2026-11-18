
undefined8 FUN_0372dfb0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  
  puVar8 = PTR_DAT_04bb6718;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar14 = (long)*(int *)(param_1 + 0xe0) << 3;
    plVar15 = *(long **)(param_1 + 0xe8);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6718 + 0x10;
    do {
      uVar5 = *(ushort *)(*plVar15 + 0x114);
      if ((((uVar5 & 1) == 0) &&
          ((((uVar5 >> 5 & 1) == 0 || (param_2 != 1)) && ((uVar5 & 0x20) != 0 || param_2 != 0)))) &&
         ((uVar17 = *(uint *)(*plVar15 + 8), uVar17 != 0 && (lVar12 = *(long *)puVar6, lVar12 != 0))
         )) {
        plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8));
        if ((plVar16 == (long *)0x0) ||
           (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar17)))) {
          plVar16 = (long *)0x0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar12 = *(long *)puVar6;
          iVar9 = (**(code **)(*plVar10 + 0x60))();
          if (iVar9 < 0x11) {
            uVar17 = 1;
          }
          else {
            uVar17 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar17) goto LAB_0372e0e0;
            uVar17 = 0x1aU >> (ulong)(uVar17 & 0x1f) & 1;
          }
        }
        else {
LAB_0372e0e0:
          uVar17 = 0;
        }
        if (plVar16 != (long *)0x0) {
          lVar12 = plVar16[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
          uVar3 = 0;
          if ((int)lVar12 == 1) {
            uVar3 = uVar17;
          }
          if (((uVar11 & 1) != 0) && (uVar3 != 0)) {
            puVar18 = (undefined8 *)plVar16[0x77];
            if (((*PTR_DAT_04bb6710 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb6708 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb6710);
            }
            if ((puVar18 == (undefined8 *)0x0) ||
               (uVar11 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bb6708), (uVar11 & 1) == 0)) {
              puVar18 = (undefined8 *)plVar16[0x77];
              if (((*PTR_DAT_04bc2458 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc2458), iVar9 != 0)) {
                *(undefined **)PTR_DAT_04bc2450 = puVar8 + 0x10;
                __cxa_guard_release(PTR_DAT_04bc2458);
              }
              if (((puVar18 != (undefined8 *)0x0) &&
                  (uVar11 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc2450), (uVar11 & 1) != 0)) &&
                 (uVar11 = FUN_01ff20a4(puVar18), (uVar11 & 1) != 0)) {
                return 0;
              }
            }
            else {
              iVar9 = *(int *)((long)puVar18 + 0x77f4);
              iVar4 = *(int *)(puVar18 + 0xef6);
              if (iVar9 == 0x10) {
                bVar13 = false;
              }
              else {
                bVar13 = iVar4 != 0x10 && (iVar9 != 0x4c && iVar4 != 0x4c);
                if (iVar9 == 0x4b) {
                  return 0;
                }
              }
              if ((*(ushort *)((long)puVar18 + 0xaf64) & 0x40) == 0) {
                bVar13 = true;
              }
              if (iVar4 == 0x4b) {
                return 0;
              }
              if (!bVar13) {
                return 0;
              }
            }
          }
        }
      }
      plVar15 = plVar15 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  return 1;
}

