
void FUN_025f3230(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  FUN_02602950(param_1,0x77);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "EditTime";
  if (*(long *)(param_1 + 8) != 0) {
    local_50 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,(long)*param_2);
    pcStack_48 = "RoomNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_50 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,(long)param_2[1]);
      pcStack_48 = "IsChangedTheme";
      if (*(long *)(param_1 + 8) != 0) {
        local_50 = puVar2 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_50,(char)param_2[2]);
        pcStack_48 = "IsExtension";
        if (*(long *)(param_1 + 8) != 0) {
          local_50 = puVar2 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_50,*(undefined1 *)((long)param_2 + 9));
          local_50 = puVar2 + 0x10;
          pcStack_48 = "IsUseRoomSketch";
          if (*(long *)(param_1 + 8) != 0) {
            FUN_026054d0(*(long *)(param_1 + 8),&local_50,*(undefined1 *)((long)param_2 + 9));
          }
        }
      }
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  pcStack_48 = "Customer";
  local_50 = puVar2 + 0x10;
  uVar3 = FUN_02603820(uVar6,param_2 + 3);
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  pcStack_48 = "Housemate";
  local_50 = puVar2 + 0x10;
  uVar3 = FUN_02603820(uVar6,(long)param_2 + 0xe);
  lVar4 = *(long *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x50);
      goto joined_r0x025f343c;
    }
    FUN_02605cc0(lVar4,&local_50,uVar6);
    lVar4 = *(long *)(param_1 + 8);
  }
  pcStack_48 = "OrderType";
  if (lVar4 != 0) {
    local_50 = puVar2 + 0x10;
    FUN_02605660(lVar4,&local_50,(long)param_2[4]);
    pcStack_48 = "Section";
    if (*(long *)(param_1 + 8) != 0) {
      local_50 = puVar2 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_50,(short)param_2[5]);
      pcStack_48 = "Season";
      if (*(long *)(param_1 + 8) != 0) {
        local_50 = puVar2 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)param_2[6]);
        pcStack_48 = "IsVillagerNpc";
        if (*(long *)(param_1 + 8) != 0) {
          local_50 = puVar2 + 0x10;
          FUN_02605660(*(long *)(param_1 + 8),&local_50,*(undefined1 *)((long)param_2 + 0x26));
          local_50 = puVar2 + 0x10;
          pcStack_48 = "IsVillagerNpc";
          if (*(long *)(param_1 + 8) != 0) {
            FUN_02605660(*(long *)(param_1 + 8),&local_50,*(undefined1 *)((long)param_2 + 0x27));
            lVar4 = *(long *)(param_1 + 0x50);
            goto joined_r0x025f343c;
          }
        }
      }
    }
  }
  local_50 = puVar2 + 0x10;
  lVar4 = *(long *)(param_1 + 0x50);
joined_r0x025f343c:
  if (lVar4 != 0) {
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar4 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),0x40ffba4);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),0x405dbf6);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    lVar5 = *(long *)(param_1 + 0x50);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),true);
    }
    local_50 = puVar2 + 0x10;
    pcStack_48 = "GardenInfo";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x50));
    }
  }
  if (0 < param_2[1]) {
    FUN_025f36f4(param_1,0,param_2 + 10,param_2 + 0x14,param_2[0x16]);
    if ((1 < param_2[1]) &&
       (FUN_025f36f4(param_1,1,param_2 + 0xf,(long)param_2 + 0x52,param_2[0x17]), 2 < param_2[1])) {
      uVar3 = 2;
      do {
        FUN_025f36f4(param_1,uVar3 & 0xffffffff,param_2 + 10,param_2 + 0x14,param_2[0x16]);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)param_2[1]);
    }
  }
  return;
}

