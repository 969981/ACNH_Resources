
undefined8 FUN_0315608c(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x14,PTR_DAT_04bb32e0);
  if (((*PTR_DAT_04bc7718 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7718), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7710 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7718);
  }
  if ((((puVar2 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc7710), (uVar3 & 1) == 0)) ||
      (puVar2[0x45] == 0)) ||
     ((lVar6 = *(long *)(puVar2[0x45] + 0x220), lVar6 == 0 ||
      (lVar6 = *(long *)(lVar6 + 0x210), lVar6 == 0)))) {
    uVar5 = 0;
  }
  else {
    plVar4 = *(long **)(**(long **)(lVar6 + 0x3f8) + 0x1b0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03156124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar4 + 0x48))();
      return uVar5;
    }
    uVar5 = 1;
  }
  return uVar5;
}

