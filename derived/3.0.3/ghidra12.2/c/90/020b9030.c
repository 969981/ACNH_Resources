
undefined8 FUN_020b9030(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  
  puVar4 = PTR_DAT_04bb2720;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  iVar10 = 0;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x330) == 0) {
      iVar10 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar9 = FUN_006bd550(*puVar11,0);
      iVar10 = 0;
      if (iVar9 == 0x758f7eaf) {
        iVar10 = 0;
        if (*(long *)puVar4 != 0) {
          lVar14 = *(long *)(*(long *)puVar4 + 0x330);
          iVar10 = 0;
          if (lVar14 != 0) {
            iVar10 = *(int *)(lVar14 + 0x244);
          }
        }
      }
    }
  }
  puVar8 = PTR_DAT_04bc2220;
  puVar7 = PTR_DAT_04bb37d8;
  puVar6 = PTR_DAT_04bb37d0;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  if ((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar10) && (*(int *)(param_1 + 0xb88) != 0)) {
    lVar14 = (long)*(int *)(param_1 + 0xb88) << 3;
    puVar11 = *(undefined8 **)(param_1 + 0xb90);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6b68 + 0x10;
    do {
      lVar15 = *(long *)puVar4;
      if (lVar15 != 0) {
        uVar18 = *(uint *)*puVar11;
        if ((((uVar18 == 0) ||
             (plVar16 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                  ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
            ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar18)) {
          plVar16 = (long *)0x0;
        }
        if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar15 = *(long *)puVar4;
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if (iVar10 < 0x11) {
            uVar18 = 1;
          }
          else {
            uVar18 = *(uint *)(lVar15 + 0x5e8);
            if (4 < uVar18) goto LAB_020b91e0;
            uVar18 = 0x1aU >> (ulong)(uVar18 & 0x1f) & 1;
          }
        }
        else {
LAB_020b91e0:
          uVar18 = 0;
        }
        if (plVar16 != (long *)0x0) {
          lVar15 = plVar16[0x2a];
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar13 = (**(code **)(*plVar16 + 0x20))(plVar16,puVar6);
          uVar3 = 0;
          if ((int)lVar15 == 1) {
            uVar3 = uVar18;
          }
          if (((uVar13 & 1) != 0) && (uVar3 != 0)) {
            puVar17 = (undefined8 *)plVar16[0x77];
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bc2218 = puVar2;
              __cxa_guard_release(puVar8);
            }
            if ((puVar17 != (undefined8 *)0x0) &&
               (uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc2218), (uVar13 & 1) != 0)) {
              return 1;
            }
          }
        }
      }
      puVar11 = puVar11 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  return 0;
}

