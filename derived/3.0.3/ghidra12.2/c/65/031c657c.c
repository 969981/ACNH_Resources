
/* WARNING: Removing unreachable block (ram,0x031c65e4) */

void FUN_031c657c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_0315608c();
  if (((uVar2 & 1) != 0) ||
     ((*(long *)PTR_DAT_04bb7ff8 != 0 && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)))) {
    return;
  }
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar3 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc7278), (uVar2 & 1) != 0)) {
    *(byte *)((long)puVar3 + 0x239) = *(byte *)((long)puVar3 + 0x239) | 1;
  }
                    /* WARNING: Could not recover jumptable at 0x031c6640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1);
  return;
}

