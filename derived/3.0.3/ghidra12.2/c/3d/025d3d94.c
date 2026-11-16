
void FUN_025d3d94(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_48;
  char *pcStack_40;
  int local_34;
  
  FUN_02602950(param_1,0x1a);
  puVar1 = PTR_DAT_04bc3a80;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar6 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)puVar1;
      if (iVar6 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  iVar6 = *(int *)(puVar9 + 7);
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x15);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x15 & 1) != 0) {
      local_34 = 0;
      goto LAB_025d3f50;
    }
  }
  iVar4 = *(int *)(puVar1 + 0x38);
  local_34 = 1;
  if (iVar4 < 0x11889761) {
    if (iVar4 == -0x57d4aeba) goto LAB_025d3f50;
    if (iVar4 == -0x21ba1d3a) {
      local_34 = 3;
      if ((0 < *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14)) &&
         (local_34 = 3, *(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) < 4)) {
        local_34 = 4;
      }
      goto LAB_025d3f50;
    }
  }
  else {
    if (iVar4 == 0x11889761) {
      local_34 = 2;
      goto LAB_025d3f50;
    }
    if (iVar4 == 0x1693a871) goto LAB_025d3f50;
  }
  local_34 = 5;
  if (((iVar6 != -0x7975b8e8) && (iVar6 != -0x3e092032)) && (iVar6 != -0x17df00c3)) {
    uVar7 = FUN_03777260();
    local_34 = 6;
    if ((uVar7 & 1) == 0) {
      local_34 = -1;
    }
  }
LAB_025d3f50:
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "UseScene";
  if (*(long *)(param_1 + 8) != 0) {
    local_48 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)local_34);
    pcStack_40 = "CharacterId";
    if (*(long *)(param_1 + 8) != 0) {
      local_48 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_48,*(undefined4 *)(param_2 + 0x40));
      puVar1 = puVar2 + 0x10;
      pcStack_40 = "SeriesId";
      if (*(long *)(param_1 + 8) != 0) {
        local_48 = puVar1;
        FUN_02605660(*(long *)(param_1 + 8),&local_48,*(undefined1 *)(param_2 + 3));
        pcStack_40 = "NumberingId";
        if (*(long *)(param_1 + 8) != 0) {
          local_48 = puVar1;
          FUN_02605660(*(long *)(param_1 + 8),&local_48,*(undefined2 *)(param_2 + 4));
          puVar2 = puVar2 + 0x10;
          pcStack_40 = "NfpType";
          if (*(long *)(param_1 + 8) != 0) {
            local_48 = puVar2;
            FUN_02605660(*(long *)(param_1 + 8),&local_48,*(undefined1 *)(param_2 + 6));
            pcStack_40 = "IsCompatible";
            if (*(long *)(param_1 + 8) != 0) {
              local_48 = puVar2;
              FUN_026054d0(*(long *)(param_1 + 8),&local_48,*(undefined1 *)(param_2 + 0x44));
            }
          }
        }
      }
    }
  }
  return;
}

