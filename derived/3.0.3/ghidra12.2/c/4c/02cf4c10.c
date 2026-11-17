
undefined8 * FUN_02cf4c10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04bc5e00;
  if (((*PTR_DAT_04bc5e00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5e00), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc5df8 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5e00);
  }
  puVar1 = PTR_DAT_04bc5df8;
  puVar4 = (undefined8 *)FUN_03c5e080(param_1,PTR_DAT_04bc5df8,param_2);
  if (puVar4 != (undefined8 *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5e00), iVar3 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5e00);
    }
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc5df8);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

