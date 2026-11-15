
void FUN_02217980(long param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined **local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [7];
  undefined1 local_c5;
  undefined **local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [7];
  undefined1 local_a5;
  undefined **local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [7];
  undefined1 local_85;
  undefined **local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  local_65 = 0;
  local_6c[0] = 0;
  puStack_78 = local_6c;
  local_85 = 0;
  local_98 = local_8c;
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_70 = 8;
  local_90 = 8;
  local_b8 = local_ac;
  local_8c[0] = 0;
  local_b0 = 8;
  local_a5 = 0;
  local_ac[0] = 0;
  local_c0 = ppuVar1;
  local_a0 = ppuVar1;
  local_80 = ppuVar1;
  FUN_0376ee00(&local_a0,&local_c0);
  iVar7 = 0;
  while( true ) {
    local_d0 = 8;
    local_c5 = 0;
    local_cc[0] = 0;
    local_e0 = ppuVar1;
    local_d8 = local_cc;
    FUN_038d1270(&local_e0,"-----");
    uVar6 = (ulong)*(byte *)(param_1 + (long)iVar7 + (long)iVar7 * 2);
    if (uVar6 < 0x23) {
      FUN_038d1270(&local_e0,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar6 * 8 + 0xb0),
                   *(undefined1 *)(param_1 + (long)iVar7 * 3 + 1));
    }
    (*(code *)local_a0[3])(&local_a0);
    (*(code *)local_a0[3])(&local_a0);
    puVar2 = local_98;
    (*(code *)local_e0[3])(&local_e0);
    if (puVar2 == local_d8) break;
    uVar6 = 0;
    bVar3 = true;
    do {
      if (local_98[uVar6] != local_d8[uVar6]) break;
      if (local_98[uVar6] == '\0') {
        if (bVar3) goto LAB_02217c30;
        break;
      }
      if (local_98[uVar6 + 1] != local_d8[uVar6 + 1]) break;
      if (local_98[uVar6 + 1] == '\0') goto LAB_02217c30;
      if (local_98[uVar6 + 2] != local_d8[uVar6 + 2]) break;
      if (local_98[uVar6 + 2] == '\0') goto LAB_02217c30;
      bVar3 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    (*(code *)local_c0[3])(&local_c0);
    (*(code *)local_c0[3])(&local_c0);
    puVar2 = local_b8;
    (*(code *)local_e0[3])(&local_e0);
    if (puVar2 == local_d8) break;
    uVar6 = 0;
    bVar3 = true;
    do {
      if (local_b8[uVar6] != local_d8[uVar6]) break;
      if (local_b8[uVar6] == '\0') {
        if (bVar3) goto LAB_02217c30;
        break;
      }
      if (local_b8[uVar6 + 1] != local_d8[uVar6 + 1]) break;
      if (local_b8[uVar6 + 1] == '\0') goto LAB_02217c30;
      if (local_b8[uVar6 + 2] != local_d8[uVar6 + 2]) break;
      if (local_b8[uVar6 + 2] == '\0') goto LAB_02217c30;
      bVar3 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    iVar4 = FUN_0376dea0(&local_e0,0);
    iVar5 = FUN_0376e6b0(&local_e0);
    if ((iVar4 != 0) || (iVar5 != 0)) {
      FUN_02213cf0(param_1,&local_e0,&local_80,&local_80);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 9) break;
  }
LAB_02217c30:
  iVar7 = 0;
  do {
    local_d0 = 8;
    local_c5 = 0;
    local_cc[0] = 0;
    local_e0 = &PTR_LAB_04908da0;
    local_d8 = local_cc;
    FUN_038d1270(&local_e0,"-----");
    uVar6 = (ulong)*(byte *)(param_1 + 0x1b + (long)iVar7 + (long)iVar7 * 2);
    if (uVar6 < 0x23) {
      FUN_038d1270(&local_e0,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar6 * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x1b + (long)iVar7 * 3 + 1));
    }
    (*(code *)local_a0[3])(&local_a0);
    (*(code *)local_a0[3])(&local_a0);
    puVar2 = local_98;
    (*(code *)local_e0[3])(&local_e0);
    if (puVar2 == local_d8) {
      return;
    }
    uVar6 = 0;
    bVar3 = true;
    do {
      if (local_98[uVar6] != local_d8[uVar6]) break;
      if (local_98[uVar6] == '\0') {
        if (bVar3) {
          return;
        }
        break;
      }
      if (local_98[uVar6 + 1] != local_d8[uVar6 + 1]) break;
      if (local_98[uVar6 + 1] == '\0') {
        return;
      }
      if (local_98[uVar6 + 2] != local_d8[uVar6 + 2]) break;
      if (local_98[uVar6 + 2] == '\0') {
        return;
      }
      bVar3 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    (*(code *)local_c0[3])(&local_c0);
    (*(code *)local_c0[3])(&local_c0);
    puVar2 = local_b8;
    (*(code *)local_e0[3])(&local_e0);
    if (puVar2 == local_d8) {
      return;
    }
    uVar6 = 0;
    bVar3 = true;
    do {
      if (local_b8[uVar6] != local_d8[uVar6]) break;
      if (local_b8[uVar6] == '\0') {
        if (bVar3) {
          return;
        }
        break;
      }
      if (local_b8[uVar6 + 1] != local_d8[uVar6 + 1]) break;
      if (local_b8[uVar6 + 1] == '\0') {
        return;
      }
      if (local_b8[uVar6 + 2] != local_d8[uVar6 + 2]) break;
      if (local_b8[uVar6 + 2] == '\0') {
        return;
      }
      bVar3 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    iVar4 = FUN_0376dea0(&local_e0,0);
    iVar5 = FUN_0376e6b0(&local_e0);
    if ((iVar4 != 0) || (iVar5 != 0)) {
      FUN_02213cf0(param_1,&local_e0,&local_80,&local_80);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 6) {
      return;
    }
  } while( true );
}

