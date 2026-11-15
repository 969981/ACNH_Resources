
void FUN_01fd92a0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 local_58;
  float local_54 [3];
  undefined *local_48;
  undefined *puStack_40;
  int local_38;
  int iStack_34;
  undefined *local_30;
  int local_28;
  int iStack_24;
  int local_8;
  int iStack_4;
  
  local_48 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_40 = PTR_DAT_04bb2010 + 0x10;
  lVar3 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar3 == 0) {
    local_28 = 0;
    iStack_24 = 0;
    iVar2 = 0x10;
    iVar4 = 0x10;
  }
  else {
    local_28 = *(int *)(lVar3 + 0xd88);
    iStack_24 = *(int *)(lVar3 + 0xd8c);
    iVar4 = *(int *)(lVar3 + 0xd98);
    iVar2 = *(int *)(lVar3 + 0xd9c);
  }
  local_38 = local_28;
  if (iVar4 <= local_28) {
    local_38 = iVar4;
  }
  if (local_28 <= iVar4) {
    local_28 = iVar4;
  }
  iStack_34 = iStack_24;
  if (iVar2 <= iStack_24) {
    iStack_34 = iVar2;
  }
  if (iStack_24 <= iVar2) {
    iStack_24 = iVar2;
  }
  local_54[0] = *(float *)(*(long *)(param_1 + 8) + 0x230);
  local_30 = puStack_40;
  uVar1 = FUN_021fead0(&iStack_4,&local_8,local_54,&local_48);
  if ((uVar1 & 1) != 0) {
    local_54[1] = 0.0;
    local_58 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
    local_54[0] = (float)iStack_4 * 5.0;
    local_54[2] = (float)local_8 * 5.0;
    FUN_01e39778(*(long *)(param_1 + 8),local_54,&local_58,0);
  }
  return;
}

