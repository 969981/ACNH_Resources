
void FUN_008a9b00(void)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined **local_e0;
  char *local_d8;
  int local_d0;
  char local_cc [31];
  undefined1 local_ad;
  undefined **local_a8;
  char *local_a0;
  int local_98;
  char local_94 [31];
  undefined1 local_75;
  undefined **local_70;
  char *local_68;
  
  uRam0000000004ced0c4 = 0;
  DAT_04ced0b4 = 0;
  DAT_04ced0bc._0_6_ = 0;
  DAT_04ced0bc._6_2_ = 0;
  DAT_04ced0a4 = 0;
  DAT_04ced0ac = 0;
  DAT_04ced094 = 0;
  DAT_04ced09c = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  DAT_04ced084 = 0;
  DAT_04ced08c = 0;
  DAT_04ced074 = 0;
  DAT_04ced07c = 0;
  uVar10 = 0;
LAB_008a9bd0:
  local_68 = "";
  if (uVar10 < 0x2b) {
    local_68 = (&PTR_s_cDefault_04926690)[uVar10];
  }
  lVar7 = 0;
  local_a0 = "_";
  do {
    if (local_68[lVar7] == '\0') {
LAB_008a9c34:
      iVar6 = (int)lVar7;
joined_r0x008a9c38:
      if (0 < iVar6) {
        lVar8 = 0;
        local_a8 = ppuVar1;
        local_70 = ppuVar1;
        goto LAB_008a9c50;
      }
      break;
    }
    if (local_68[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_008a9c34;
    }
    if (local_68[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      iVar6 = (int)lVar7;
      goto joined_r0x008a9c38;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  goto LAB_008a9bc0;
  while (lVar8 = lVar8 + 1, lVar7 != lVar8) {
LAB_008a9c50:
    pcVar9 = local_68 + lVar8;
    (*(code *)local_a8[3])(&local_a8);
    if ((pcVar9 == local_a0) || (*pcVar9 == *local_a0)) {
      iVar6 = (int)lVar8;
      if (-1 < iVar6) {
        local_75 = 0;
        local_ad = 0;
        local_98 = 0x20;
        local_d0 = 0x20;
        local_94[0] = '\0';
        local_cc[0] = '\0';
        local_a8 = &PTR_LAB_048f9700;
        local_e0 = &PTR_LAB_048f9700;
        local_d8 = local_cc;
        local_a0 = local_94;
        (*(code *)local_70[3])(&local_70);
        if (local_94 != local_68) {
          iVar2 = iVar6;
          if (local_98 <= iVar6) {
            iVar2 = local_98 + -1;
          }
          memcpy(local_94,local_68,(long)iVar2);
          local_94[iVar2] = '\0';
        }
        (*(code *)local_70[3])(&local_70);
        pcVar9 = local_d8;
        lVar7 = 0;
        goto LAB_008a9d20;
      }
      break;
    }
  }
  goto LAB_008a9bc0;
  while( true ) {
    if (local_68[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_008a9d5c;
    }
    if (local_68[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_008a9d5c;
    }
    lVar7 = lVar7 + 3;
    if (lVar7 == 0x80001) break;
LAB_008a9d20:
    if (local_68[lVar7] == '\0') goto LAB_008a9d5c;
  }
  lVar7 = 0;
LAB_008a9d5c:
  pcVar5 = PTR_DAT_04c4b988;
  if (iVar6 < (int)lVar7 && -2 < iVar6) {
    pcVar5 = local_68 + lVar8 + 1;
  }
  if (local_d8 != pcVar5) {
    lVar7 = 0;
    do {
      if (pcVar5[lVar7] == '\0') goto LAB_008a9dcc;
      if (pcVar5[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_008a9dcc;
      }
      if (pcVar5[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_008a9dcc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_008a9dcc:
    iVar6 = (int)lVar7;
    if (local_d0 <= (int)lVar7) {
      iVar6 = local_d0 + -1;
    }
    memcpy(local_d8,pcVar5,(long)iVar6);
    pcVar9[iVar6] = '\0';
  }
  uVar11 = 0;
  do {
    pcVar9 = "";
    if (uVar11 < 0x2b) {
      pcVar9 = (&PTR_s_cDefault_04926690)[uVar11];
    }
    (*(code *)local_a8[3])(&local_a8);
    if (pcVar9 == local_a0) {
LAB_008a9ebc:
      uVar12 = 0;
      goto LAB_008a9ee4;
    }
    if (*pcVar9 == *local_a0) {
      if (*pcVar9 == '\0') goto LAB_008a9ebc;
      lVar7 = 0x7fffe;
      pcVar5 = local_a0;
      while( true ) {
        if (pcVar9[1] != pcVar5[1]) break;
        if (pcVar9[1] == '\0') goto LAB_008a9ebc;
        if (pcVar9[2] != pcVar5[2]) break;
        if (pcVar9[2] == '\0') goto LAB_008a9ebc;
        if ((lVar7 == 0) || (cVar3 = pcVar9[3], cVar3 != pcVar5[3])) break;
        lVar7 = lVar7 + -3;
        pcVar5 = pcVar5 + 3;
        pcVar9 = pcVar9 + 3;
        if (cVar3 == '\0') goto LAB_008a9ebc;
      }
    }
    uVar12 = 0x2b;
    if ((int)uVar11 < 0x2b) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 0x2b);
  goto LAB_008a9bc0;
LAB_008a9ee4:
  do {
    pcVar9 = "";
    if (uVar12 < 0xc) {
      pcVar9 = (&PTR_DAT_04923758)[uVar12];
    }
    (*(code *)local_e0[3])(&local_e0);
    if (pcVar9 == local_d8) {
LAB_008a9b94:
      *(ushort *)((long)&DAT_04ced074 + (long)(int)uVar11 * 2) =
           *(ushort *)((long)&DAT_04ced074 + (long)(int)uVar11 * 2) |
           (ushort)(1 << (ulong)(uVar12 & 0x1f));
      break;
    }
    if (*pcVar9 == *local_d8) {
      if (*pcVar9 == '\0') goto LAB_008a9b94;
      lVar7 = 0x7fffe;
      pcVar5 = local_d8;
      while( true ) {
        if (pcVar9[1] != pcVar5[1]) break;
        if (pcVar9[1] == '\0') goto LAB_008a9b94;
        if (pcVar9[2] != pcVar5[2]) break;
        if (pcVar9[2] == '\0') goto LAB_008a9b94;
        if ((lVar7 == 0) || (cVar3 = pcVar9[3], cVar3 != pcVar5[3])) break;
        lVar7 = lVar7 + -3;
        pcVar5 = pcVar5 + 3;
        pcVar9 = pcVar9 + 3;
        if (cVar3 == '\0') goto LAB_008a9b94;
      }
    }
    uVar4 = 0xc;
    if ((int)uVar12 < 0xc) {
      uVar4 = uVar12 + 1;
    }
    uVar12 = uVar4;
  } while (uVar4 != 0xc);
LAB_008a9bc0:
  uVar11 = 0x2b;
  if ((int)uVar10 < 0x2b) {
    uVar11 = uVar10 + 1;
  }
  uVar10 = uVar11;
  if (uVar11 == 0x2b) {
    return;
  }
  goto LAB_008a9bd0;
}

