
/* WARNING: Removing unreachable block (ram,0x01d4fd14) */

void FUN_01d4fca0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0x3e4);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  bVar1 = iVar2 == 1;
  *(bool *)(param_1 + 0x61) = bVar1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  if (bVar1) {
    puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar3 & 1) != 0)) {
      FUN_031fe8dc(puVar4[0x52],1);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(char *)(param_1 + 0x90) == '\0') {
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x68) = 3;
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return;
}

