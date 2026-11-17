
/* WARNING: Removing unreachable block (ram,0x030e9d04) */

void FUN_030e9cc8(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x78);
  if (((*PTR_DAT_04bc78c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc78c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc78c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc78c8);
  }
  if (((puVar5 == (undefined8 *)0x0) ||
      (uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc78c0), (uVar2 & 1) == 0)) ||
     (puVar5[0x45] == 0)) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*(long *)(puVar5[0x45] + 0xc0) + 0xf0))();
    uVar4 = *puVar3;
  }
  if (-1 < param_2) {
    if ((*(int *)(param_1 + 0x25c) < param_2) && (*(int *)(param_1 + 0x270) < 0)) {
      *(undefined4 *)(param_1 + 0x270) = uVar4;
    }
    *(int *)(param_1 + 0x25c) = param_2;
  }
  return;
}

