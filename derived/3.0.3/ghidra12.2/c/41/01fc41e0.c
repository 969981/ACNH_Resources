
void FUN_01fc41e0(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  
  puVar8 = PTR_DAT_04bb37d8;
  puVar7 = PTR_DAT_04bb37d0;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  piVar1 = (int *)(param_1 + 0x12090);
  if (*piVar1 != 0) {
    lVar17 = (long)*piVar1 << 3;
    puVar16 = *(undefined8 **)(param_1 + 0x12098);
    puVar2 = PTR_DAT_04bb3750 + 0x10;
    puVar3 = PTR_DAT_04bb6718 + 0x10;
    do {
      uVar14 = *(uint *)*puVar16;
      if ((uVar14 != 0) && (lVar12 = *(long *)puVar5, lVar12 != 0)) {
        plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if ((plVar15 == (long *)0x0) ||
           (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar14)))) {
          plVar15 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
          lVar12 = *(long *)puVar5;
          iVar9 = (**(code **)(*plVar10 + 0x60))();
          if (iVar9 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar14) goto LAB_01fc4308;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_01fc4308:
          uVar14 = 0;
        }
        if (plVar15 != (long *)0x0) {
          lVar12 = plVar15[0x2a];
          if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
            *(undefined **)puVar7 = puVar2;
            __cxa_guard_release(puVar8);
          }
          uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,puVar7);
          uVar4 = 0;
          if ((int)lVar12 == 1) {
            uVar4 = uVar14;
          }
          if (((uVar11 & 1) != 0) && (uVar4 != 0)) {
            puVar13 = (undefined8 *)plVar15[0x77];
            if (((*PTR_DAT_04bb6710 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb6708 = puVar3;
              __cxa_guard_release(PTR_DAT_04bb6710);
            }
            if ((puVar13 != (undefined8 *)0x0) &&
               (uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bb6708), (uVar11 & 1) != 0)) {
              FUN_01fa2970(puVar13);
            }
          }
        }
      }
      puVar16 = puVar16 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
    if (0 < *piVar1) {
      lVar17 = 0;
      puVar16 = *(undefined8 **)(param_1 + 0x120a0);
      do {
        puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x12098) + lVar17 * 8);
        lVar17 = lVar17 + 1;
        *puVar13 = puVar16;
        *(undefined8 **)(param_1 + 0x120a0) = puVar13;
        puVar16 = puVar13;
      } while (lVar17 < *piVar1);
    }
  }
  *piVar1 = 0;
  return;
}

