
bool FUN_018aca40(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  
  uVar9 = FUN_019da620(*(undefined8 *)PTR_DAT_04bb4800);
  puVar6 = PTR_DAT_04bb3fc0;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  if ((uVar9 & 1) == 0) {
    bVar7 = false;
  }
  else {
    if (1 < *(int *)(param_1 + 0x290)) {
      lVar12 = *(long *)(param_1 + 0x298) + (ulong)(*(long *)(param_1 + 0x298) != 0) * 0x18;
      iVar3 = *(int *)(lVar12 + 8);
      if (iVar3 != 0) {
        uVar9 = 0;
        lVar12 = *(long *)(lVar12 + 0x10);
        puVar1 = PTR_DAT_04bb3fd0 + 0x10;
        do {
          uVar15 = *(uint *)(lVar12 + (-(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2));
          if ((uVar15 != 0) && (lVar13 = *(long *)puVar4, lVar13 != 0)) {
            plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                ((ulong)(uVar15 >> 0x11) & 0x7ff8));
            if ((plVar14 == (long *)0x0) ||
               (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar15))
               )) {
              plVar14 = (long *)0x0;
            }
            if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
              plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
              lVar13 = *(long *)puVar4;
              iVar8 = (**(code **)(*plVar10 + 0x60))();
              if (iVar8 < 0x11) {
                uVar15 = 1;
              }
              else {
                uVar15 = *(uint *)(lVar13 + 0x5e8);
                if (4 < uVar15) goto LAB_018acb88;
                uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
              }
            }
            else {
LAB_018acb88:
              uVar15 = 0;
            }
            if (plVar14 != (long *)0x0) {
              lVar13 = plVar14[0x2a];
              if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar8 != 0)) {
                *(undefined **)puVar6 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb3fc8);
              }
              uVar11 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar6);
              uVar2 = 0;
              if ((int)lVar13 == 1) {
                uVar2 = uVar15;
              }
              if ((((uVar11 & 1) != 0) && (uVar2 != 0)) && ((int)plVar14[0x57] == param_2)) {
                return *(int *)((long)plVar14 + 0x174) == 1;
              }
            }
          }
          uVar11 = uVar9 + 1;
          uVar9 = uVar11 & 0xffffffff;
        } while (iVar3 != (int)uVar11);
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

