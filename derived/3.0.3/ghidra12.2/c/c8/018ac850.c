
bool FUN_018ac850(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  
  puVar6 = PTR_DAT_04bb3fc0;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)(param_1 + 0x298);
  lVar10 = lVar10 + (ulong)((lVar10 != 0 && *(int *)(param_1 + 0x290) != 0) &&
                           (lVar10 == 0 || *(int *)(param_1 + 0x290) != 1)) * 0x18;
  iVar3 = *(int *)(lVar10 + 8);
  if (iVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x10);
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb3fd0 + 0x10;
    do {
      uVar14 = *(uint *)(lVar10 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
      if ((uVar14 != 0) && (lVar11 = *(long *)puVar4, lVar11 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if ((plVar12 == (long *)0x0) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar11 = *(long *)puVar4;
          iVar7 = (**(code **)(*plVar8 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar11 + 0x5e8);
            if (4 < uVar14) goto LAB_018ac978;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_018ac978:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0x2a];
          if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar7 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3fc8);
          }
          uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
          uVar2 = 0;
          if ((int)lVar11 == 1) {
            uVar2 = uVar14;
          }
          if ((((uVar9 & 1) != 0) && (uVar2 != 0)) && ((int)plVar12[0x57] == param_2)) {
            return *(int *)((long)plVar12 + 0x174) == 1;
          }
        }
      }
      uVar9 = uVar13 + 1;
      uVar13 = uVar9 & 0xffffffff;
    } while (iVar3 != (int)uVar9);
  }
  return false;
}

