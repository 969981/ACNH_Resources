
int FUN_031fc45c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *local_60;
  char *pcStack_58;
  
  puVar5 = PTR_DAT_04bb2020;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar10 = 0;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar10 = *puVar3 >> 0x19 & 1;
  }
  lVar1 = param_1 + 0x1f8;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "WHEREAREN_Unlock_RoomSizeModeUnlock";
  local_60 = puVar2;
  iVar6 = FUN_0274bce0(lVar1,&local_60);
  iVar9 = 3;
  if (iVar6 != 0) {
    pcStack_58 = "NoticeAboutInteriorModePlus_RoomSize";
    local_60 = puVar2;
    iVar7 = FUN_0274bce0(lVar1,&local_60);
    iVar6 = 3;
    if ((iVar7 == 0 & uVar10) != 0) {
      iVar6 = 4;
    }
    iVar9 = iVar6;
    if (*(char *)(param_1 + 0x368) != '\0') {
      puVar2 = puVar5 + 0x10;
      pcStack_58 = "NoticeAboutInteriorModePlus_Dimming";
      local_60 = puVar2;
      iVar8 = FUN_0274bce0(lVar1,&local_60);
      uVar10 = uVar10 & iVar7 == 0;
      iVar9 = 5;
      if (uVar10 == 0) {
        iVar9 = 7;
      }
      pcStack_58 = "WHEREAREN_Unlock_EnvSound_01";
      if (iVar8 != 0) {
        iVar9 = iVar6;
      }
      local_60 = puVar2;
      iVar6 = FUN_0274bce0(lVar1,&local_60);
      if (iVar6 != 0) {
        pcStack_58 = "NoticeAboutInteriorModePlus_EnvironmentalSound1";
        local_60 = puVar2;
        iVar6 = FUN_0274bce0(lVar1,&local_60);
        if (iVar6 == 0) {
          iVar6 = 0xb;
          if (iVar9 != 7) {
            iVar6 = 8;
          }
          iVar9 = 6;
          if ((uVar10 & iVar8 == 0) == 0) {
            iVar9 = iVar6;
          }
        }
        else {
          pcStack_58 = "WHEREAREN_Unlock_EnvSound_02";
          local_60 = puVar5 + 0x10;
          iVar6 = FUN_0274bce0(lVar1,&local_60);
          if (iVar6 != 0) {
            pcStack_58 = "NoticeAboutInteriorModePlus_EnvironmentalSound2";
            local_60 = puVar5 + 0x10;
            iVar6 = FUN_0274bce0(lVar1,&local_60);
            if (iVar6 == 0) {
              iVar9 = 9;
            }
            else {
              pcStack_58 = "WHEREAREN_Unlock_EnvSound_03";
              local_60 = puVar5 + 0x10;
              iVar6 = FUN_0274bce0(lVar1,&local_60);
              if (iVar6 != 0) {
                pcStack_58 = "NoticeAboutInteriorModePlus_EnvironmentalSound3";
                local_60 = puVar5 + 0x10;
                iVar6 = FUN_0274bce0(lVar1,&local_60);
                if (iVar6 == 0) {
                  iVar9 = 10;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar9;
}

