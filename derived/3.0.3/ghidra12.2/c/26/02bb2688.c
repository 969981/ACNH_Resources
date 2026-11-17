
undefined8 * FUN_02bb2688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04bc4d98;
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0))
  {
    *(undefined ***)PTR_DAT_04bc4d90 = &PTR_LAB_04aa7238;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  puVar1 = PTR_DAT_04bc4d90;
  puVar4 = (undefined8 *)FUN_03c5e080(param_1,PTR_DAT_04bc4d90,param_2);
  if (puVar4 != (undefined8 *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined ***)puVar1 = &PTR_LAB_04aa7238;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

