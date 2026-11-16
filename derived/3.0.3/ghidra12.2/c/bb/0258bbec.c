
void FUN_0258bbec(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_54 [4];
  undefined *local_50;
  char *pcStack_48;
  
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
    FUN_02602950(param_1,0x53);
    puVar1 = PTR_DAT_04bb2020;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "Type";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_50,param_2);
    }
    if (*(byte *)(param_1 + 0x18) < 8) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "IsVillager";
      local_54[0] = *(byte *)(param_1 + 0x18);
      uVar2 = FUN_02669430(local_54);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_50,uVar2 & 1);
      }
    }
    plVar4 = *(long **)(param_2 + 0x98);
    if ((plVar4 != (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = nn::prepo::Struct::GetBuffer();
      if (lVar3 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),"Name");
      }
      lVar3 = *(long *)(param_1 + 0x28);
      (**(code **)(plVar4[0xb] + 0x18))(plVar4 + 0xb);
      lVar5 = nn::prepo::Struct::GetBuffer();
      if (lVar5 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),"EventNo");
      }
      local_50 = puVar1 + 0x10;
      pcStack_48 = "FlowInfo";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x28));
      }
    }
    if ((*(long *)(param_2 + 0xa0) != 0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
      FUN_0277d6c4(*(long *)(param_2 + 0xa0));
      lVar3 = nn::prepo::Struct::GetBuffer();
      if (lVar3 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x408813d);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar5 = nn::prepo::Struct::GetBuffer();
      if (lVar5 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      local_50 = puVar1 + 0x10;
      pcStack_48 = "ItemInfo";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x30));
      }
    }
    if ((*(long *)(param_2 + 0xa8) != 0) && (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
      FUN_0277d6c4(*(long *)(param_2 + 0xa8));
      lVar3 = nn::prepo::Struct::GetBuffer();
      if (lVar3 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x408813d);
      }
      lVar3 = *(long *)(param_1 + 0x38);
      lVar5 = nn::prepo::Struct::GetBuffer();
      if (lVar5 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      local_50 = puVar1 + 0x10;
      pcStack_48 = "ItemInfo2";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x38));
      }
    }
  }
  return;
}

