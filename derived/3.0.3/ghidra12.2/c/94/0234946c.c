
void FUN_0234946c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bb3238;
  iVar2 = *(int *)(*(long *)(param_1 + 0xbdd0) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd0) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)PTR_DAT_04bb3238;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_023495c0(iVar1);
  iVar2 = *(int *)(*(long *)(param_1 + 0xbde8) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0xbde8) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_023495c0(iVar1,param_2);
  iVar2 = *(int *)(*(long *)(param_1 + 0xbdf0) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0xbdf0) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_023495c0(iVar1,param_2);
  iVar2 = *(int *)(*(long *)(param_1 + 0x1480) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0x1480) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_023495c0(iVar1,param_2);
  iVar2 = *(int *)(*(long *)(param_1 + 0xbe08) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0xbe08) + 0x10) & 1) * 0x20 + 0x28);
  iVar1 = *(int *)puVar3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_023495c0(iVar1,param_2);
  FUN_023495c0(*(undefined4 *)
                (*(long *)(param_1 + 0xbe10) +
                 (ulong)(*(uint *)(*(long *)(param_1 + 0xbe10) + 0x10) & 1) * 0x14 + 0x1c),param_2);
  return;
}

