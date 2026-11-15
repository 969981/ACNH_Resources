
void FUN_02349e0c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0xbdd0) +
                   ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd0) + 0x10) & 1) * 0x20 + 0x28);
  iVar2 = DAT_04c9a0c8;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  uVar1 = (param_2 ^ 0xffffffff) & 1;
  FUN_02349e80(iVar2,uVar1);
  FUN_02349e80(*(undefined4 *)
                (*(long *)(param_1 + 0xbe10) +
                 (ulong)(*(uint *)(*(long *)(param_1 + 0xbe10) + 0x10) & 1) * 0x14 + 0x1c),uVar1);
  return;
}

