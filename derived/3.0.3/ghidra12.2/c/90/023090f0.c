
void FUN_023090f0(char *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_60;
  char local_5c;
  undefined **local_58;
  undefined8 local_50;
  undefined1 *local_48;
  byte local_34 [4];
  
  if (*param_1 != '\0') {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 < 7 && (1 << (ulong)(uVar2 & 0x1f) & 0x4aU) != 0) {
      local_50 = param_1 + 1;
      local_60 = *(undefined4 *)(param_1 + 4);
      local_58 = &PTR_FUN_04a72e78;
      iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      local_48 = (undefined1 *)&local_60;
      if (iVar1 != 0) {
        lVar5 = (long)iVar1 << 3;
        puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        local_48 = (undefined1 *)&local_60;
        do {
          (*(code *)*local_58)(&local_58,*puVar4);
          lVar5 = lVar5 + -8;
          puVar4 = puVar4 + 1;
        } while (lVar5 != 0);
        if (*param_1 == '\0') {
          return;
        }
      }
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if ((uVar2 < 7) && ((1 << (ulong)(uVar2 & 0x1f) & 0x4aU) != 0)) {
      local_34[0] = param_1[1];
      local_58 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_50 = "UseReactionCount";
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
      local_60 = FUN_02582fe0(local_34);
      FUN_021294b0(&local_58,1,&local_60);
      if (*param_1 == '\0') {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if ((uVar2 < 7) && ((1 << (ulong)(uVar2 & 0x1f) & 0x4aU) != 0)) {
      local_5c = param_1[0x14];
    }
    else {
      if (param_1[0x14] == '\0') {
        return;
      }
      local_5c = '\x01';
    }
    bVar3 = param_1[1];
    local_50 = (char *)CONCAT44(0xffffffff,(undefined4)local_50);
    local_58 = (undefined **)(PTR_DAT_04bc31d0 + 0x10);
    local_60 = *(undefined4 *)(param_1 + 4);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    local_50 = (char *)CONCAT71(local_50._1_7_,bVar3);
    FUN_02585080(&local_58,&local_60);
  }
  return;
}

