
void FUN_008a6f50(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 local_804;
  undefined *local_800;
  char *apcStack_7f8 [234];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined **local_88;
  char *pcStack_80;
  
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  apcStack_7f8[0] = "IsTkkFirstNewMusic";
  local_800 = puVar2;
  FUN_02743234(&local_800,0);
  apcStack_7f8[0] = "TotakekeLive2_0Flag";
  local_800 = puVar2;
  iVar7 = FUN_0274bce0(param_2,&local_800);
  if (iVar7 == 0) {
    local_90 = *(undefined4 *)(param_1 + 4);
    uStack_8c = *(undefined4 *)(param_1 + 8);
    local_800 = PTR_DAT_04bbfe60 + 0x10;
    memset(apcStack_7f8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_a4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_800);
    memset(__s,0,0x754);
    local_804 = 0x7b;
    local_88 = &PTR_FUN_049ff4e8;
    pcStack_80 = (char *)&local_804;
    FUN_008a1ba0(&local_800,&local_88);
    local_804 = 0x7c;
    local_88 = &PTR_FUN_049ff4e8;
    pcStack_80 = (char *)&local_804;
    FUN_008a1ba0(&local_800,&local_88);
    local_804 = 0x7d;
    local_88 = &PTR_FUN_049ff4e8;
    pcStack_80 = (char *)&local_804;
    FUN_008a1ba0(&local_800,&local_88);
    local_804 = 0x7e;
    local_88 = &PTR_FUN_049ff4e8;
    pcStack_80 = (char *)&local_804;
    FUN_008a1ba0(&local_800,&local_88);
    local_804 = 0x7f;
    local_88 = &PTR_FUN_049ff4e8;
    pcStack_80 = (char *)&local_804;
    FUN_008a1ba0(&local_800,&local_88);
    lVar10 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar13 = 0;
    do {
      if ((*(uint *)(lVar10 + (uVar13 >> 5) * 4) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0)
      goto LAB_008a7110;
      uVar8 = (uint)uVar13 + 1;
      uVar13 = (ulong)uVar8;
    } while (uVar8 != 15000);
    uVar13 = 0;
LAB_008a7110:
    lVar11 = (**(code **)(local_800 + 0x20))(&local_800);
    puVar6 = PTR_DAT_04bbfe58;
    puVar2 = PTR_DAT_04bb37e0;
    iVar7 = 15000;
    do {
      if ((*(uint *)(lVar11 + (ulong)(iVar7 - 1U >> 5) * 4) >> (ulong)(iVar7 - 1U & 0x1f) & 1) != 0)
      break;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (iVar7 != (int)uVar13) {
      uVar8 = 0;
LAB_008a7184:
      puVar4 = (undefined8 *)(puVar6 + uVar13 * 8);
      if (0x752 < (uint)(uVar13 >> 3)) {
        puVar4 = (undefined8 *)puVar6;
      }
      puVar5 = (undefined8 *)puVar2;
      if ((uint)uVar13 < 0x3a99) {
        puVar5 = puVar4;
      }
      local_88 = (undefined **)*puVar5;
      uVar12 = FUN_0277d7b4(&local_90,&local_88);
      if ((uVar12 & 1) == 0) {
        do {
          uVar9 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar9;
          if (0x752 < uVar9 >> 3) {
            uVar9 = 0x3a95;
            goto LAB_008a71e4;
          }
        } while ((*(uint *)(lVar10 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
        goto LAB_008a7178;
      }
      ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      pcStack_80 = "TkkFirstPlayNewSong";
      local_88 = ppuVar3;
      uVar9 = FUN_0274bce0(param_2,&local_88);
      if ((uVar9 >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
        pcStack_80 = "IsTkkFirstNewMusic";
        local_88 = ppuVar3;
        FUN_02743234(&local_88,1);
      }
    }
  }
  return;
  while( true ) {
    if ((*(uint *)(lVar10 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_008a7174;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_008a71e4:
    uVar1 = uVar9 + 2;
    if (((*(uint *)(lVar10 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar9 + 1,
       (*(uint *)(lVar10 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar9 = uVar1;
LAB_008a7174:
      uVar13 = (ulong)(uVar9 + 1);
      goto LAB_008a7178;
    }
  }
  uVar13 = 0;
LAB_008a7178:
  uVar8 = uVar8 + 1;
  if (iVar7 == (int)uVar13) {
    return;
  }
  goto LAB_008a7184;
}

