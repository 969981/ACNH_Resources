
void FUN_0172fad0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb34e8;
  puVar2 = PTR_DAT_04bb34e0;
  if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
    lVar7 = (long)*(int *)(param_2 + 0xbc);
    plVar6 = (long *)(*(long *)(param_2 + 0xb0) - lVar7);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar6 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar5 & 1) != 0))
      goto LAB_0172fb90;
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)((param_2 + 0xa8) - lVar7));
  }
  plVar6 = (long *)0x0;
LAB_0172fb90:
  *param_1 = plVar6;
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  return;
}

