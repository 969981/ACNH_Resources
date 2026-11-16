
void FUN_02982b54(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc3d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc3d40 = &PTR_LAB_04a971e8;
    __cxa_guard_release(PTR_DAT_04bc3d48);
  }
  if ((param_2 == (long *)0x0) ||
     (uVar2 = (**(code **)(*param_2 + 0x18))(param_2,PTR_DAT_04bc3d40), (uVar2 & 1) == 0)) {
    if (((*PTR_DAT_04bc3d70 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3d70), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bc3d68 = &PTR_LAB_04a971e8;
      __cxa_guard_release(PTR_DAT_04bc3d70);
    }
    if (param_2 == (long *)0x0) {
      return;
    }
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2,PTR_DAT_04bc3d68);
    if ((uVar2 & 1) == 0) goto LAB_02982bd8;
  }
  if ((long *)param_2[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x12] + 0x18))();
  }
LAB_02982bd8:
                    /* WARNING: Could not recover jumptable at 0x02982bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}

