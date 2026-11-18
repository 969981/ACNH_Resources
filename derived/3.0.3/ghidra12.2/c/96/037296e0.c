
void FUN_037296e0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  
  puVar6 = PTR_DAT_04bb37d8;
  puVar5 = PTR_DAT_04bb37d0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar13 = (long)*(int *)(param_1 + 0xe0) << 3;
    plVar12 = *(long **)(param_1 + 0xe8);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      if ((((*(ushort *)(*plVar12 + 0x114) >> 7 & 1) != 0) &&
          (uVar14 = *(uint *)(*plVar12 + 8), uVar14 != 0)) &&
         (lVar10 = *(long *)puVar3, lVar10 != 0)) {
        plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar11 + 0x46) != uVar14)) {
          plVar11 = (long *)0x0;
        }
        if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar10 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar10 + 0x5e8);
            if (4 < uVar14) goto LAB_037297f0;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_037297f0:
          uVar14 = 0;
        }
        if (plVar11 != (long *)0x0) {
          lVar10 = plVar11[0x2a];
          uVar2 = *(uint *)(plVar11 + 0x49);
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5);
          if ((((int)lVar10 == 1) && ((uVar8 & uVar14) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
            FUN_006fb3d0(plVar11);
          }
        }
      }
      plVar12 = plVar12 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  return;
}

