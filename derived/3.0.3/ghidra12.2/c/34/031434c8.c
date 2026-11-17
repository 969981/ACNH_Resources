
undefined8 FUN_031434c8(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 3)) &&
     (puVar2 = (undefined8 *)
               FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0xb,PTR_DAT_04bb32e0),
     puVar2 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_04bc84e8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc84e8);
    }
    uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc84e0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_03147594(puVar2);
      return uVar4;
    }
  }
  return 0;
}

