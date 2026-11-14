
void FUN_019578d0(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar2 = *(uint *)PTR_DAT_04bb4b88;
  if (uVar2 != 0) {
    plVar10 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                        ((ulong)(uVar2 >> 0x11) & 0x7ff8));
    if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar10 + 0x46) != uVar2)) {
      plVar10 = (long *)0x0;
    }
    iVar6 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
    if (iVar6 == 1 || iVar6 == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar7 + 0x60))();
    }
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4b70);
    puVar5 = PTR_DAT_04bbecb0;
    puVar4 = PTR_DAT_04bbeca8;
    lVar11 = (long)*(int *)((long)plVar10 + 0xbc);
    plVar10 = (long *)(plVar10[0x16] - lVar11);
    puVar1 = PTR_DAT_04bbecb8 + 0x10;
    while( true ) {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if ((plVar10 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar4), (uVar8 & 1) != 0)) break;
      plVar10 = (long *)(*(long *)((long)plVar10 + lVar11 + 8) - lVar11);
    }
    uVar2 = *(uint *)(plVar10 + 0xfa);
    if ((uVar2 != 0) &&
       ((((*(long *)puVar3 != 0 &&
          (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)puVar3 + 0x1c0) + 8) +
                               ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar10 != (long *)0x0)) &&
         ((*(uint *)(plVar10 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar10 + 0x46) == uVar2)))) {
      if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3ff0);
      }
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
      if (((uVar8 & 1) != 0) && (plVar10[0x60] != 0)) {
        uVar9 = 1;
        if ((param_1 & 1) != 0) {
          uVar9 = 2;
        }
        *(undefined4 *)(plVar10[0x60] + 0x2ec) = uVar9;
      }
    }
  }
  return;
}

