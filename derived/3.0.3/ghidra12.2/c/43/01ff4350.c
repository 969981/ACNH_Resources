
void FUN_01ff4350(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined **local_40;
  char *local_38;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar1 = *(uint *)(param_1 + 0xaf48);
  if (uVar1 != 0xffffffff && (int)uVar1 < 0x10) {
    puVar6 = &DAT_0545b240 + (ulong)uVar1 * 0x118;
    if (0xf < uVar1) {
      puVar6 = &DAT_0545b240;
    }
    if (puVar6[0x8c] != '\0') {
      iVar4 = *(int *)(puVar6 + 0xa0);
      local_40 = (undefined **)CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(param_1 + 0xaf4c) != iVar4) {
        *(int *)(param_1 + 0xaf4c) = iVar4;
      }
      if ((5 < (int)uVar1) && (*(int *)(puVar6 + 0xa8) == 0x1e)) {
        local_40 = &PTR_LAB_04942240;
        uVar3 = FUN_0376baa0(*(long *)(param_1 + 8) + 0x3e0);
        local_38 = (char *)CONCAT62(local_38._2_6_,uVar3);
        local_50 = puVar2 + 0x10;
        pcStack_48 = "IsJoinedTkkFes";
        FUN_0376c130(&local_40,&local_50,1);
      }
    }
  }
  if (4 < *(int *)(param_1 + 0x77b0) - 3U) {
    FUN_01ff4090(param_1);
    *(undefined4 *)(param_1 + 0xe740) = 54000;
  }
  lVar5 = *(long *)(param_1 + 0x89b8);
  *(undefined8 *)(lVar5 + 0xb8) = 0x5300000053;
  *(undefined8 *)(lVar5 + 200) = 0x590000005d;
  local_40 = (undefined **)(puVar2 + 0x10);
  *(undefined1 *)(*(long *)(param_1 + 0x89b8) + 0x170) = 1;
  local_38 = "ManGenerateInFieldTemp";
  iVar4 = FUN_02758850(&local_40);
  if (iVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x89b8);
    *(undefined8 *)(lVar5 + 0xe0) = 0x1e0000005d;
    *(undefined8 *)(lVar5 + 0xf0) = 0x3600000070;
    *(undefined1 *)(*(long *)(param_1 + 0x89b8) + 0x171) = 1;
  }
  return;
}

