
/* WARNING: Removing unreachable block (ram,0x02f07e18) */

void FUN_02f07de0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (((puVar4 == (undefined8 *)0x0) ||
      (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar3 & 1) == 0)) ||
     (uVar1 = *(uint *)(puVar4[0x44] + 0xa8), 6 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x58U) == 0
     )) {
    return;
  }
  FUN_02fbc124(puVar4[0x44],param_1);
  return;
}

