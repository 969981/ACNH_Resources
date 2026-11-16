
void FUN_025ebd2c(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,99);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ColorCorrection";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "FrameIndex";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[1]);
      pcStack_38 = "CameraMode";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar2 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[2]);
        pcStack_38 = "IsLookAtCamera";
        if (*(long *)(param_1 + 8) != 0) {
          uVar5 = 0x3f800000;
          if ((char)param_2[3] == '\0') {
            uVar5 = 0;
          }
          local_40 = puVar2 + 0x10;
          FUN_026057f0(uVar5,*(long *)(param_1 + 8),&local_40);
          pcStack_38 = "Zoom";
          if (*(long *)(param_1 + 8) != 0) {
            local_40 = puVar2 + 0x10;
            FUN_026057f0(param_2[4],*(long *)(param_1 + 8),&local_40);
            pcStack_38 = "Emoticon";
            if (*(long *)(param_1 + 8) != 0) {
              local_40 = puVar2 + 0x10;
              FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[5]);
            }
          }
        }
      }
    }
  }
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar5 = 1;
    goto LAB_025ebee0;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar6 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar6 + 0x476))) {
    if ((*(int *)(lVar6 + 0x508) != 0) && (*(char *)(lVar6 + 0x55d) != '\0')) {
      uVar5 = 2;
      goto LAB_025ebee0;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar5 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar5 = 0;
      }
      goto LAB_025ebee0;
    }
  }
  uVar5 = 0;
LAB_025ebee0:
  local_40 = puVar2 + 0x10;
  pcStack_38 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar5);
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_44[0] = *(byte *)(param_1 + 0x18);
    uVar4 = FUN_02669430(local_44);
    uVar4 = uVar4 & 1;
  }
  else {
    uVar4 = 0;
  }
  local_40 = puVar2 + 0x10;
  pcStack_38 = "IsInMyVillage";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar3 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_40 = puVar2 + 0x10;
  pcStack_38 = "CurStageHash";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,*(undefined4 *)(puVar7 + 7));
  }
  return;
}

