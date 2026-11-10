
void FUN_00377590(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 3) == 0) {
    return;
  }
  puVar4 = *(ushort **)(param_1 + 0x18);
  if ((*puVar4 >> 8 & 1) == 0) {
    if ((*puVar4 >> 0xc & 1) != 0) {
      plVar6 = *(long **)(puVar4 + 4);
      if (((*PTR_DAT_04bd08e0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd08e0), iVar2 != 0)) {
        if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
          *(undefined8 *)PTR_DAT_04bc8e18 = 0;
          __cxa_guard_release(PTR_DAT_04bc8e20);
        }
        *(undefined **)PTR_DAT_04bd08d8 = PTR_DAT_04bc8e18;
        __cxa_guard_release(PTR_DAT_04bd08e0);
      }
      if (plVar6 != (long *)0x0) {
        puVar3 = (undefined8 *)(**(code **)*plVar6)(plVar6);
        if (puVar3 != (undefined8 *)PTR_DAT_04bd08d8) {
          do {
            puVar3 = (undefined8 *)*puVar3;
          } while (puVar3 != (undefined8 *)PTR_DAT_04bd08d8 && puVar3 != (undefined8 *)0x0);
          if (puVar3 == (undefined8 *)0x0) goto LAB_0037765c;
        }
LAB_00377630:
        (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
        (**(code **)(*plVar6 + 8))(plVar6);
        FUN_00367b50(plVar6);
      }
    }
  }
  else {
    plVar6 = (long *)(**(code **)(**(long **)(puVar4 + 4) + 0x48))();
    if (plVar6 != (long *)0x0) goto LAB_00377630;
  }
LAB_0037765c:
  FUN_003878b4(*(undefined8 *)(param_1 + 0x18));
  FUN_003878b0(*(undefined8 *)(param_1 + 0x18));
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar5 + 0x10) >> 8 & 1) == 0) {
    if ((*(ushort *)(lVar5 + 0x10) >> 0xc & 1) != 0) {
      plVar6 = *(long **)(lVar5 + 0x18);
      if (((*PTR_DAT_04bd08e0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd08e0), iVar2 != 0)) {
        if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
          *(undefined8 *)PTR_DAT_04bc8e18 = 0;
          __cxa_guard_release(PTR_DAT_04bc8e20);
        }
        *(undefined **)PTR_DAT_04bd08d8 = PTR_DAT_04bc8e18;
        __cxa_guard_release(PTR_DAT_04bd08e0);
      }
      if (plVar6 != (long *)0x0) {
        puVar3 = (undefined8 *)(**(code **)*plVar6)(plVar6);
        if (puVar3 != (undefined8 *)PTR_DAT_04bd08d8) {
          do {
            puVar3 = (undefined8 *)*puVar3;
          } while (puVar3 != (undefined8 *)PTR_DAT_04bd08d8 && puVar3 != (undefined8 *)0x0);
          if (puVar3 == (undefined8 *)0x0) goto LAB_0037771c;
        }
LAB_003776f0:
        (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
        (**(code **)(*plVar6 + 8))(plVar6);
        FUN_00367b50(plVar6);
      }
    }
  }
  else {
    plVar6 = (long *)(**(code **)(**(long **)(lVar5 + 0x18) + 0x48))();
    if (plVar6 != (long *)0x0) goto LAB_003776f0;
  }
LAB_0037771c:
  FUN_003878b4(*(long *)(param_1 + 0x18) + 0x10);
  FUN_003878b0(*(long *)(param_1 + 0x18) + 0x10);
  if (((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 3) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar5 + 0x20) >> 8 & 1) == 0) {
    if ((*(ushort *)(lVar5 + 0x20) >> 0xc & 1) == 0) goto LAB_003777fc;
    plVar6 = *(long **)(lVar5 + 0x28);
    if ((*PTR_DAT_04bd08e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd08e0);
      puVar1 = PTR_DAT_04bc8e18;
      if (iVar2 != 0) {
        if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar2 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(PTR_DAT_04bc8e20);
        }
        *(undefined **)PTR_DAT_04bd08d8 = puVar1;
        __cxa_guard_release(PTR_DAT_04bd08e0);
      }
    }
    if (plVar6 == (long *)0x0) goto LAB_003777fc;
    puVar3 = (undefined8 *)(**(code **)*plVar6)(plVar6);
    if (puVar3 != (undefined8 *)PTR_DAT_04bd08d8) {
      do {
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)PTR_DAT_04bd08d8 && puVar3 != (undefined8 *)0x0);
      if (puVar3 == (undefined8 *)0x0) goto LAB_003777fc;
    }
  }
  else {
    plVar6 = (long *)(**(code **)(**(long **)(lVar5 + 0x28) + 0x48))();
    if (plVar6 == (long *)0x0) goto LAB_003777fc;
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
  (**(code **)(*plVar6 + 8))(plVar6);
  FUN_00367b50(plVar6);
LAB_003777fc:
  FUN_003878b4(*(long *)(param_1 + 0x18) + 0x20);
  FUN_003878b0(*(long *)(param_1 + 0x18) + 0x20);
  return;
}

