
void FUN_0376bed0(long *param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_2 + 0x3b8);
  if (((*PTR_DAT_04bb6a18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6a18), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb6a10 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6a18);
  }
  if ((puVar5 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb6a10), (uVar3 & 1) == 0)) {
    puVar5 = *(undefined8 **)(param_2 + 0x3b8);
    if (((*PTR_DAT_04bb6710 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    if ((puVar5 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb6708), (uVar3 & 1) == 0)) {
      *param_1 = (long)(PTR_DAT_04bb7648 + 0x10);
      uVar1 = FUN_0376baa0(param_2 + 0x3e0);
      *(undefined2 *)(param_1 + 1) = uVar1;
      return;
    }
    lVar4 = 0x12190;
  }
  else {
    lVar4 = 0xaf40;
  }
  *param_1 = (long)(PTR_DAT_04bb7648 + 0x10);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)puVar5 + lVar4);
  return;
}

