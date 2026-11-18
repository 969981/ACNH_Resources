
void FUN_03577b90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_54 [4];
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  uVar5 = 0;
  switch((int)param_2) {
  case 1:
    uVar5 = 0xb;
    break;
  case 2:
    uVar5 = 8;
    break;
  case 4:
    uVar5 = 2;
    break;
  case 5:
    uVar5 = 3;
    break;
  case 6:
    uVar5 = 4;
    break;
  case 0xc:
    uVar5 = 7;
    break;
  case 0xe:
    uVar5 = 10;
    break;
  case 0x14:
    uVar5 = 1;
    break;
  case 0x15:
    uVar5 = 5;
    break;
  case 0x16:
    uVar5 = 9;
    break;
  case 0x1a:
    local_54[0] = *(byte *)(param_1 + 0x1f8);
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    FUN_02627260(*(undefined8 *)PTR_DAT_04bb46f0,*(undefined8 *)(param_1 + 0x1c2f8),0xc,1,local_54);
    FUN_0359a6d0(param_1,*(undefined8 *)(param_1 + 0x1c2f8));
    goto LAB_03577cc4;
  case 0x1b:
    uVar4 = FUN_035789b8(param_1,param_2,0);
    if ((uVar4 & 1) == 0) {
      local_14[0] = *(byte *)(param_1 + 0x1f8);
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      uVar4 = FUN_02669430(local_14);
      puVar2 = PTR_DAT_04bb2020;
      if ((uVar4 & 1) != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "RcmImmQuestComplete";
        local_40 = puVar1;
        uVar4 = FUN_0273f0a0(&local_40);
        if ((uVar4 & 1) == 0) {
          pcStack_48 = "ImmQCompleteDemo";
          local_50 = puVar1;
          iVar3 = FUN_0274bce0(param_1 + 0x1f8,&local_50);
          if (iVar3 == 0) {
            local_40 = puVar2 + 0x10;
            pcStack_38 = "ImmQ_A_GetHousing";
            uVar4 = FUN_0273f0a0(&local_40);
            if ((uVar4 & 1) != 0) {
              local_54[0] = *(byte *)(param_1 + 0x1f8);
              if (7 < local_54[0]) {
                local_54[0] = 0xff;
              }
              FUN_02627260(*(undefined8 *)PTR_DAT_04bb46f0,*(undefined8 *)(param_1 + 0x1c2f8),0xe,1,
                           local_54);
              FUN_03578d40(*(undefined8 *)(param_1 + 0x1c2f8));
              goto LAB_03577cc4;
            }
          }
        }
      }
      uVar4 = FUN_03578aa4(param_1);
      if ((uVar4 & 1) != 0) {
        local_54[0] = *(byte *)(param_1 + 0x1f8);
        if (7 < local_54[0]) {
          local_54[0] = 0xff;
        }
        FUN_02627260(*(undefined8 *)PTR_DAT_04bb46f0,*(undefined8 *)(param_1 + 0x1c2f8),0xd,1,
                     local_54);
        FUN_03578ba0(*(undefined8 *)(param_1 + 0x1c2f8));
        goto LAB_03577cc4;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0xf;
    }
    break;
  case 0x1c:
    uVar5 = 6;
  }
  local_54[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  FUN_02627260(*(undefined8 *)PTR_DAT_04bb46f0,*(undefined8 *)(param_1 + 0x1c2f8),uVar5,1,local_54);
LAB_03577cc4:
  *(undefined4 *)(param_1 + 0x228) = **(undefined4 **)(param_1 + 0x1c2f8);
  return;
}

