
void FUN_01ff7b20(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  puVar2 = (undefined2 *)FUN_01e57b44(*(undefined8 *)(param_1 + 0x10));
  local_28 = *puVar2;
  local_24 = *(undefined4 *)(puVar2 + 2);
  local_26 = *(undefined1 *)(puVar2 + 1);
  local_25 = *(undefined1 *)((long)puVar2 + 3);
  uVar3 = FUN_0277d7b4(&local_28,param_1 + 0xaf88);
  if ((uVar3 & 1) == 0) {
    local_30 = *(undefined2 *)(param_1 + 0xaf88);
    local_2e._0_1_ = *(undefined1 *)(param_1 + 0xaf8a);
    local_2e._1_1_ = *(undefined1 *)(param_1 + 0xaf8b);
    local_2c = *(undefined4 *)(param_1 + 0xaf8c);
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "SeqParty2Done";
    iVar1 = FUN_02758850(&local_40);
    local_2e = 0;
    local_30 = 0x1ce5;
    if (iVar1 != 0) {
      local_30 = 0x1126;
    }
    local_2c = 0;
    FUN_0277d4ac(&local_30);
  }
  *(undefined2 *)(param_1 + 0xaf80) = local_30;
  *(undefined1 *)(param_1 + 0xaf82) = (undefined1)local_2e;
  *(undefined1 *)(param_1 + 0xaf83) = local_2e._1_1_;
  *(undefined4 *)(param_1 + 0xaf84) = local_2c;
  return;
}

