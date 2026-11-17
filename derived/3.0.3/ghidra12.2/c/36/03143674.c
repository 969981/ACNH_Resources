
void FUN_03143674(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb7ff8;
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x588) == 3)) &&
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
      iVar1 = 0;
      if (*(int *)(lVar4 + 0x5cc) < 5) {
        iVar1 = *(int *)(lVar4 + 0x5cc) + 1;
      }
      *(int *)(lVar4 + 0x5cc) = iVar1;
      FUN_03148120(puVar2);
      return;
    }
  }
  return;
}

