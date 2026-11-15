
void FUN_01ee9220(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_60 = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  local_50 = 0;
  local_58 = puStack_68;
  local_48 = local_70;
  puStack_40 = puStack_68;
  local_30 = puStack_68;
  uVar3 = FUN_0125f884(&local_48,&local_70);
  if ((uVar3 & 1) != 0) {
    if ((int)local_60 <= (int)local_38) {
      local_38._0_4_ = (int)local_60;
    }
    if (local_60._4_4_ <= local_38._4_4_) {
      local_38._4_4_ = local_60._4_4_;
    }
    if ((int)local_28 <= (int)local_50) {
      local_28._0_4_ = (int)local_50;
    }
    if (local_28._4_4_ <= local_50._4_4_) {
      local_28._4_4_ = local_50._4_4_;
    }
    iVar1 = (int)local_38;
    if ((int)local_28 <= (int)local_38) {
      iVar1 = (int)local_28;
    }
    if ((int)local_38 <= (int)local_28) {
      local_38._0_4_ = (int)local_28;
    }
    lVar4 = *(long *)(param_1 + 0x89b8);
    iVar2 = local_38._4_4_;
    if (local_28._4_4_ <= local_38._4_4_) {
      iVar2 = local_28._4_4_;
    }
    if (local_38._4_4_ <= local_28._4_4_) {
      local_38._4_4_ = local_28._4_4_;
    }
    if (*(char *)(lVar4 + 0x170) == '\0') {
      lVar5 = 0;
    }
    else if (*(char *)(lVar4 + 0x171) == '\0') {
      lVar5 = 1;
    }
    else if (*(char *)(lVar4 + 0x172) == '\0') {
      lVar5 = 2;
    }
    else if (*(char *)(lVar4 + 0x173) == '\0') {
      lVar5 = 3;
    }
    else {
      if (*(char *)(lVar4 + 0x174) != '\0') {
        return;
      }
      lVar5 = 4;
    }
    lVar4 = lVar4 + lVar5 * 0x28;
    *(int *)(lVar4 + 0xb8) = iVar1;
    *(int *)(lVar4 + 0xbc) = iVar2;
    *(int *)(lVar4 + 200) = (int)local_38;
    *(int *)(lVar4 + 0xcc) = local_38._4_4_;
    *(undefined1 *)(*(long *)(param_1 + 0x89b8) + lVar5 + 0x170) = 1;
  }
  return;
}

