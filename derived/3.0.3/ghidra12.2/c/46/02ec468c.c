
undefined8 * FUN_02ec468c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_1;
  
  if ((*(int *)(param_2 + 0x34) == -1) || (iVar1 = *(int *)((long)param_2 + 0x1a4), iVar1 == -1)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_2)(&uStack_1,param_2);
    puVar2 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),iVar1,&uStack_1);
  }
  if (((*PTR_DAT_04bc70e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc70e8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc70e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc70e8);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc70e0);
    if ((uVar3 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

