
void FUN_02019c98(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bb3238;
  iVar2 = *(int *)(*(long *)(param_1 + 0x60a8) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0x60a8) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)PTR_DAT_04bb3238;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_02019da0(iVar1);
  iVar2 = *(int *)(*(long *)(param_1 + 0x6098) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0x6098) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_02019da0(iVar1,param_2);
  iVar2 = *(int *)(*(long *)(param_1 + 0x60a0) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0x60a0) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_02019da0(iVar1,param_2);
  iVar2 = *(int *)(*(long *)(param_1 + 0x1480) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0x1480) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_02019da0(iVar1,param_2);
  FUN_02019da0(*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),param_2);
  return;
}

