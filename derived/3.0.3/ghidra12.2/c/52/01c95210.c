
bool FUN_01c95210(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined *local_788;
  undefined1 *puStack_780;
  undefined4 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined1 auStack_760 [63];
  undefined1 local_721;
  undefined8 local_720;
  undefined8 local_718 [96];
  undefined8 local_418 [108];
  uint local_b8;
  undefined *local_b0;
  long *plStack_a8;
  long local_a0;
  ulong uStack_98;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_1 + 0x224) != '\0') {
    return false;
  }
  local_b8 = 0;
  lVar13 = *(long *)PTR_DAT_04bb4410;
  if (lVar13 == 0) {
    local_768 = 0;
    local_78 = 0;
    local_770 = 0;
    uStack_70 = 0;
  }
  else {
    local_770 = *(undefined8 *)(lVar13 + 0x140);
    local_768 = *(undefined8 *)(lVar13 + 0x148);
    local_78 = *(undefined8 *)(lVar13 + 0x140);
    uStack_70 = *(undefined8 *)(lVar13 + 0x148);
  }
  local_721 = 0;
  local_778 = 0x40;
  puStack_780 = auStack_760;
  local_788 = PTR_DAT_04bb2030 + 0x10;
  iVar10 = nn::account::GetNickname((Nickname *)&local_a0,(Uid *)&local_78);
  if (iVar10 == 0) {
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    plStack_a8 = &local_a0;
    FUN_038d0fb0(&local_788,&local_b0);
  }
  local_720 = nn::oe::GetDesiredLanguage();
  puVar8 = PTR_DAT_04bb5038;
  iVar10 = 0;
  plVar14 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  do {
    bVar7 = puVar8[iVar10];
    if ((param_2 >> ((long)(char)bVar7 & 0x3fU) & 1) != 0) {
      bVar9 = 7 < bVar7;
      if (bVar9) {
        bVar7 = 0xff;
      }
      plVar1 = (long *)(param_1 + 0x18) + ((long)(char)bVar7 & 0xffffffffU) * 4;
      if (bVar9) {
        plVar1 = (long *)(param_1 + 0x18);
      }
      if (*plVar1 != 0) {
        uStack_98 = (ulong)*(byte *)(plVar1 + 1);
        local_a0 = *plVar1;
        uVar11 = (**(code **)(*plVar14 + 0x100))(plVar14,&local_a0);
        if ((uVar11 & 1) != 0) {
          local_a0 = *plVar1;
          uStack_98 = (ulong)*(byte *)(plVar1 + 1);
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)(param_1 + 8) + 0x120))
                              (*(long **)(param_1 + 8),&local_a0);
          if ((((puVar12 != (undefined8 *)0x0) && (puVar12[0x11] == *plVar1)) &&
              (*(char *)(puVar12 + 0x12) == (char)plVar1[1])) &&
             (*(char *)((long)puVar12 + 0x91) == '\0')) {
            uVar4 = puVar12[9];
            uVar5 = puVar12[10];
            puVar2 = local_718 + (ulong)local_b8 * 8;
            if (0xb < local_b8) {
              puVar2 = local_718;
            }
            uVar6 = puVar12[0xc];
            puVar3 = local_418 + (ulong)local_b8 * 9;
            if (0xb < local_b8) {
              puVar3 = local_418;
            }
            local_b8 = local_b8 + 1;
            puVar2[2] = puVar12[0xb];
            puVar2[3] = uVar6;
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            uVar4 = puVar12[0xd];
            uVar5 = puVar12[0xe];
            uVar6 = puVar12[0x10];
            puVar2[6] = puVar12[0xf];
            puVar2[7] = uVar6;
            puVar2[4] = uVar4;
            puVar2[5] = uVar5;
            uVar5 = puVar12[4];
            uVar4 = puVar12[1];
            uVar6 = puVar12[2];
            puVar3[3] = puVar12[3];
            puVar3[4] = uVar5;
            puVar3[1] = uVar4;
            puVar3[2] = uVar6;
            uVar5 = puVar12[8];
            uVar4 = puVar12[5];
            uVar6 = puVar12[6];
            puVar3[7] = puVar12[7];
            puVar3[8] = uVar5;
            puVar3[5] = uVar4;
            puVar3[6] = uVar6;
            *puVar3 = *puVar12;
          }
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 8);
  if ((int)local_b8 < 1) {
    bVar9 = false;
  }
  else {
    iVar10 = FUN_03bf8500(*(undefined8 *)PTR_DAT_04bc1140,&local_770);
    bVar9 = iVar10 != 0;
  }
  return bVar9;
}

