
/* WARNING: Removing unreachable block (ram,0x01db2b20) */

void FUN_01db2af0(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x78);
  if (((*PTR_DAT_04bc78c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc78c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc78c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc78c8);
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc78c0);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  FUN_02fb09a4(puVar3);
  lVar4 = *(long *)PTR_DAT_04bb3968;
  FUN_0086fcf4(lVar4 + 0x3430);
  FUN_0086d868(lVar4 + 0x3878);
  return;
}

