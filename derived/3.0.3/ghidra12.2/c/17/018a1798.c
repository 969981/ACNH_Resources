
undefined8 FUN_018a1798(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x290) + 0x18);
  if (*(uint *)(*(long *)(param_1 + 0x290) + 0x10) <= param_2) {
    param_2 = 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar8 + (long)(int)param_2 * 4);
    if ((((uVar1 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar1)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
        if (*(uint *)(lVar6 + 0x5e8) < 5) {
          uVar1 = 5U >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar1 = 1;
    }
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3ff0);
      }
      uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3fe8);
      if (uVar1 == 0 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
        return 0;
      }
    }
  }
  *(undefined4 *)(lVar8 + (long)(int)param_2 * 4) = *(undefined4 *)PTR_DAT_04bb3238;
  return 1;
}

