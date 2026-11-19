
/* WARNING: Removing unreachable block (ram,0x0385ec70) */

void FUN_0385ec08(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc4db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4db0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4da8 = PTR_DAT_04bc4db8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4db0);
  }
  if ((param_2 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4da8), (uVar2 & 1) != 0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      param_2[0x4d] = *(long *)(param_1 + 0x28);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      param_2[0x4e] = *(long *)(param_1 + 0x30);
    }
  }
  return;
}

