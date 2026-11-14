
bool FUN_01b33d58(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ushort local_24;
  undefined1 local_22;
  
  if (*(int *)(param_2 + 1) == *(int *)(**(long **)(param_1 + 8) + 0x40)) {
    if (((*PTR_DAT_04bc0560 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0560), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc0558 = PTR_DAT_04bb8c10 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0560);
    }
    uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc0558);
    if ((uVar2 & 1) != 0) {
      local_24 = 0x23;
      local_22 = 8;
      uVar2 = FUN_01b42cbc(param_2,&local_24);
      if ((uVar2 & 1) != 0) {
        return (ushort)(**(ushort **)(param_1 + 0x10) >> 8 | **(ushort **)(param_1 + 0x10) << 8) ==
               (ushort)(local_24 >> 8 | local_24 << 8);
      }
    }
  }
  return false;
}

