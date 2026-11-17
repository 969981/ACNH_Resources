
undefined8 FUN_03028548(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar3 + 0x40) <= param_2) {
    param_2 = 0;
  }
  return *(undefined8 *)(puVar3[0x41] + (long)(int)param_2 * 8);
}

