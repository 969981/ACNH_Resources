
undefined8 FUN_03155c5c(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x14,PTR_DAT_04bb32e0);
  if (((*PTR_DAT_04bc7718 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7718), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7710 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7718);
  }
  if ((((puVar2 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc7710), (uVar3 & 1) == 0)) ||
      (puVar2[0x45] == 0)) || (*(long *)(puVar2[0x45] + 0x220) == 0)) {
    return 0;
  }
  uVar4 = FUN_03147594();
  return uVar4;
}

