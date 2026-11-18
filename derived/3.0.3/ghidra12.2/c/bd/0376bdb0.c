
ulong FUN_0376bdb0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x3b8);
  if (((*PTR_DAT_04bb6a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6a18), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6a10 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6a18);
  }
  if ((puVar4 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb6a10), (uVar2 & 1) == 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x3b8);
    if (((*PTR_DAT_04bb6710 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    if ((puVar4 == (undefined8 *)0x0) ||
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb6708), (uVar2 & 1) == 0)) {
      uVar2 = FUN_0376baa0(param_1 + 0x3e0);
      return uVar2;
    }
    lVar3 = 0x12184;
  }
  else {
    lVar3 = 0xaf32;
  }
  return (ulong)*(ushort *)((long)puVar4 + lVar3);
}

