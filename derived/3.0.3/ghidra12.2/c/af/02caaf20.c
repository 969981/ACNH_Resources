
long * FUN_02caaf20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bc5c30;
  if (((*PTR_DAT_04bc5c30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5c30), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc5c28 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5c30);
  }
  puVar1 = PTR_DAT_04bc5c28;
  if (*(long *)(param_1 + 8) != param_1) {
    lVar7 = (long)*(int *)(param_1 + 0x14);
    plVar6 = (long *)(*(long *)(param_1 + 8) - lVar7);
    do {
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 8))(plVar6);
      uVar5 = (**(code **)*puVar4)(puVar4,puVar1);
      if ((uVar5 & 1) != 0) {
        if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5c30), iVar3 != 0)) {
          *(undefined **)puVar1 = PTR_DAT_04bc4d20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc5c30);
        }
        uVar5 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bc5c28);
        if ((uVar5 & 1) == 0) {
          plVar6 = (long *)0x0;
        }
        return plVar6;
      }
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)(param_1 - lVar7));
  }
  return (long *)0x0;
}

