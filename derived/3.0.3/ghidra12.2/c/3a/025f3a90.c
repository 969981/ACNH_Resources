
void FUN_025f3a90(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  FUN_02602950(param_1,0x78);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "EditTime";
  if (*(long *)(param_1 + 8) == 0) {
LAB_025f3bec:
    local_50 = puVar2 + 0x10;
    lVar3 = *(long *)(param_1 + 0x70);
  }
  else {
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
          pcStack_48 = "IsUseRoomSketch";
          if (*(long *)(param_1 + 8) != 0) {
            local_50 = puVar2 + 0x10;
            FUN_026054d0(*(long *)(param_1 + 8),&local_50,*(undefined1 *)((long)param_2 + 9));
            pcStack_48 = "FacilityID";
            if (*(long *)(param_1 + 8) != 0) {
              local_50 = puVar2 + 0x10;
              FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)param_2[3]);
              local_50 = puVar2 + 0x10;
              pcStack_48 = "OrderType";
              if (*(long *)(param_1 + 8) != 0) {
                FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)param_2[4]);
                lVar3 = *(long *)(param_1 + 0x70);
                goto joined_r0x025f3bf0;
              }
              goto LAB_025f3bec;
            }
          }
        }
      }
    }
    local_50 = puVar2 + 0x10;
    lVar3 = *(long *)(param_1 + 0x70);
  }
joined_r0x025f3bf0:
  if (lVar3 != 0) {
    FUN_02611580(lVar3,param_2 + 5);
    puVar2 = puVar2 + 0x10;
    pcStack_48 = "RollNpcNum";
    local_50 = puVar2;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,(long)*(int *)(*(long *)(param_1 + 0x70) + 8));
      pcStack_48 = "RollNpc";
      local_50 = puVar2;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605b30(*(long *)(param_1 + 8),&local_50,
                     *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10));
      }
    }
  }
  if (0 < param_2[1]) {
    FUN_025f36f4(param_1,0,param_2 + 0x19,param_2 + 0x28,param_2[0x2a]);
    if (((1 < param_2[1]) &&
        (FUN_025f36f4(param_1,1,param_2 + 0x1e,(long)param_2 + 0xa2,param_2[0x2b]), 2 < param_2[1]))
       && (FUN_025f36f4(param_1,2,param_2 + 0x23,param_2 + 0x29,param_2[0x2c]), 3 < param_2[1])) {
      uVar4 = 3;
      do {
        FUN_025f36f4(param_1,uVar4 & 0xffffffff,param_2 + 0x19,param_2 + 0x28,param_2[0x2a]);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)param_2[1]);
    }
  }
  return;
}

