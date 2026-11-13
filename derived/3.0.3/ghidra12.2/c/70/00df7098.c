
/* WARNING: Removing unreachable block (ram,0x00df70d0) */

void FUN_00df7098(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x80);
  if (((*PTR_DAT_04bc6930 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6930), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc6928 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6930);
  }
  if (((puVar3 == (undefined8 *)0x0) ||
      (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc6928), (uVar2 & 1) == 0)) ||
     ((*(int *)((long)puVar3 + 0x21c) == -1 && (*(int *)(puVar3 + 0x45) == -1)))) {
    (**(code **)(*param_1 + 0x78))(param_1);
    *(undefined4 *)(param_1 + 0x16) = 1;
  }
  return;
}

