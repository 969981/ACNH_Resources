
/* WARNING: Removing unreachable block (ram,0x00e079f0) */

void FUN_00e079a0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bb32e0;
  if (param_1[1] != 0) {
    puVar1 = (undefined *)(param_1[1] + 0x2a8);
  }
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x80);
  if (((*PTR_DAT_04bc6930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc6930), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc6928 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6930);
  }
  if (((puVar4 != (undefined8 *)0x0) &&
      (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc6928), (uVar3 & 1) != 0)) &&
     (puVar4 = (undefined8 *)FUN_02e1d9ec(puVar4,0x76,puVar1), puVar4 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_04bb8d78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8d78), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb8d70 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8d78);
    }
    uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb8d70);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(puVar4 + 0x36) == 7 ||
        ((*(int *)(puVar4 + 0x36) == 6 && (*(char *)(puVar4 + 0x3a4c) != '\0')))))) {
      (**(code **)(*param_1 + 0x78))(param_1);
      *(undefined4 *)(param_1 + 0x16) = 1;
    }
  }
  return;
}

