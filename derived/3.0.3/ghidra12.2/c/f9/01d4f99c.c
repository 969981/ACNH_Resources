
/* WARNING: Removing unreachable block (ram,0x01d4f9e0) */

void FUN_01d4f99c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar3 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    FUN_031fe8dc(puVar3[0x52],1);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(bool *)(param_1 + 0x61) = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0x3e4) == 1;
  return;
}

