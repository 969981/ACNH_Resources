
bool FUN_03b32110(long param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 0xdf) >> 1 & 1) != 0) {
    uVar6 = FUN_0037edb0(param_2);
    if ((uVar6 & 1) == 0) {
      return false;
    }
    bVar2 = (long *)param_2[5] == param_2 + 4;
    goto LAB_03b321f4;
  }
  if (((*PTR_DAT_04bd1a30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1a30), iVar3 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1a28 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bd1a30);
  }
  if (param_2 == (long *)0x0) {
LAB_03b32174:
    if (((*PTR_DAT_04bd1bc0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1bc0), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bd1bb8 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd1bc0);
    }
    if (param_2 == (long *)0x0) {
      return false;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    if (puVar4 != (undefined8 *)PTR_DAT_04bd1bb8) {
      do {
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)PTR_DAT_04bd1bb8 && puVar4 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) {
        return false;
      }
    }
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    if (puVar4 != (undefined8 *)PTR_DAT_04bd1a28) {
      do {
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)PTR_DAT_04bd1a28 && puVar4 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_03b32174;
    }
  }
  lVar5 = FUN_0037e610(param_2,"AlignAsParts");
  bVar2 = lVar5 == 0;
LAB_03b321f4:
  return !bVar2;
}

