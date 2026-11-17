
/* WARNING: Removing unreachable block (ram,0x02f0797c) */

void FUN_02f07944(uint param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar3 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc73c0), (uVar2 & 1) == 0)) {
    return;
  }
  FUN_031fe8dc(puVar3[0x52],param_1 & 1);
  return;
}

