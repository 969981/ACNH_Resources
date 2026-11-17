
undefined8 * FUN_02de9564(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (((-1 < (int)param_2) && ((int)param_2 < (int)*(uint *)(param_1 + 0x208))) &&
     (param_2 < *(uint *)(param_1 + 0x208))) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x210) + (ulong)param_2 * 8);
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4d90);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

