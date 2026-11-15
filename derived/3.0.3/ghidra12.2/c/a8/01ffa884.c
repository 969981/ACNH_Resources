
void FUN_01ffa884(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  undefined2 local_28;
  
  uVar1 = *(uint *)(param_1 + 0xaf48);
  if (uVar1 != 0xffffffff && (int)uVar1 < 0x10) {
    puVar4 = &DAT_0545b240 + (ulong)uVar1 * 0x118;
    if (0xf < uVar1) {
      puVar4 = &DAT_0545b240;
    }
    if (puVar4[0x8c] != '\0') {
      iVar2 = *(int *)(puVar4 + 0xa0);
      local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar2);
      if (*(int *)(param_1 + 0xaf4c) != iVar2) {
        *(int *)(param_1 + 0xaf4c) = iVar2;
      }
      if ((5 < (int)uVar1) && (*(int *)(puVar4 + 0xa8) == 0x1e)) {
        local_30 = PTR_DAT_04bb7648 + 0x10;
        local_28 = FUN_0376baa0(*(long *)(param_1 + 8) + 0x3e0);
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "IsJoinedTkkFes";
        FUN_0376c130(&local_30,&local_40,1);
      }
    }
  }
  uVar3 = FUN_0376b780(*(long *)(param_1 + 8) + 0x3e0,0);
  *(undefined2 *)(param_1 + 0xe740) = uVar3;
  return;
}

