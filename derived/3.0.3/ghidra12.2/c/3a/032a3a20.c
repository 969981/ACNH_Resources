
void FUN_032a3a20(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x240);
  if (((*PTR_DAT_04bc91c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc91c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc91c0 = PTR_DAT_04bc90f8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc91c8);
  }
  if (((puVar3 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc91c0), (uVar2 & 1) != 0)) &&
     (*(char *)(puVar3[4] + 0x229) == '\0')) {
    uVar2 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
    if (0x1f < (uint)uVar2) {
      uVar2 = 0;
    }
    if ((&DAT_04058440)[uVar2] == '\0') {
      uVar2 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
      if (0x1f < (uint)uVar2) {
        uVar2 = 0;
      }
      puStack_30 = &UNK_040ad1a1;
      if ((&DAT_04058440)[uVar2] != '\0') {
        puStack_30 = PTR_DAT_04bb2120;
      }
      local_28 = *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*param_1 + 0x240) + 0x18) + 0xf0) + 0x18);
      goto LAB_032a3adc;
    }
  }
  local_28 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x240) + 0x18) + 0xf0) + 0x18)
  ;
  puStack_30 = &DAT_040c1e5f;
LAB_032a3adc:
  local_38 = PTR_DAT_04bc8e68 + 0x10;
  FUN_032a3e70(&local_28,&local_38);
  return;
}

