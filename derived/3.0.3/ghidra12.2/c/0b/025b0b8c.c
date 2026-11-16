
void FUN_025b0b8c(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_70;
  char *local_68;
  
  FUN_02602950(param_1,0x33);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,*param_2);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  if (7 < (uint)local_70) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "HouseScoreTotal";
  lVar2 = lVar7 + 0x119228 + ((ulong)local_70 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_70) {
    lVar2 = lVar7 + 0x119228;
  }
  if (*(long *)(param_1 + 8) != 0) {
    local_70 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x46]);
    local_68 = "ScoreDetail_Base";
    if (*(long *)(param_1 + 8) != 0) {
      local_70 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0xb]);
      local_68 = "ScoreDetail_Theme";
      if (*(long *)(param_1 + 8) != 0) {
        local_70 = puVar4 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0xc]);
        local_68 = "ScoreDetail_Set";
        if (*(long *)(param_1 + 8) != 0) {
          local_70 = puVar4 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0xd]);
          local_68 = "ScoreDetail_Part";
          if (*(long *)(param_1 + 8) != 0) {
            local_70 = puVar4 + 0x10;
            FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0xe]);
            local_68 = "ScoreDetail_FengShui";
            if (*(long *)(param_1 + 8) != 0) {
              local_70 = puVar4 + 0x10;
              FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0xf]);
              local_68 = "ScoreDetail_Color";
              if (*(long *)(param_1 + 8) != 0) {
                local_70 = puVar4 + 0x10;
                FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x10]);
                local_68 = "ScoreDetail_Category";
                if (*(long *)(param_1 + 8) != 0) {
                  local_70 = puVar4 + 0x10;
                  FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x11]);
                  local_68 = "ScoreDetail_Lucky";
                  if (*(long *)(param_1 + 8) != 0) {
                    local_70 = puVar4 + 0x10;
                    FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x12]);
                    local_68 = "ScoreDetail_Season";
                    if (*(long *)(param_1 + 8) != 0) {
                      local_70 = puVar4 + 0x10;
                      FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x13]);
                      local_68 = "ScoreDetail_BaseInterior";
                      if (*(long *)(param_1 + 8) != 0) {
                        local_70 = puVar4 + 0x10;
                        FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x14]);
                        local_68 = "ScoreDetail_Situation";
                        if (*(long *)(param_1 + 8) != 0) {
                          local_70 = puVar4 + 0x10;
                          FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x15]);
                          local_70 = puVar4 + 0x10;
                          local_68 = "ScoreDetail_Demerit";
                          if (*(long *)(param_1 + 8) != 0) {
                            FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)param_2[0x16]);
                          }
                          goto LAB_025b0e58;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_70 = puVar4 + 0x10;
  local_68 = "ScoreDetail_Demerit";
LAB_025b0e58:
  if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  uVar3 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  if (8 < uVar3) {
    uVar3 = 0;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  local_70 = puVar4 + 0x10;
  local_68 = "HouseLevel";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)(int)uVar3);
  }
  if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  local_68 = "CountHouseExtension";
  local_70 = puVar4 + 0x10;
  iVar6 = FUN_0273c490(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x20,&local_70);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  local_68 = "HouseExtensionDays";
  if (*(long *)(param_1 + 8) != 0) {
    local_70 = puVar4 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)iVar6);
  }
  return;
}

