
bool FUN_01a46c10(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  int local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
        local_40 = lVar4;
      }
    }
  }
  local_34 = **(int **)(param_1 + 8);
  iVar3 = FUN_01ae7550(&local_50);
  return iVar3 == local_34;
}

