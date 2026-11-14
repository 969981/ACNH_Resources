
void FUN_01b9d2d0(long param_1,long param_2,uint param_3,long *param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  undefined **ppuVar14;
  long local_178;
  undefined1 *local_170;
  ulong local_168;
  uint local_160;
  undefined **local_158;
  undefined1 *puStack_150;
  uint local_148;
  undefined4 uStack_144;
  uint local_140;
  undefined8 local_138;
  undefined6 uStack_130;
  undefined2 local_12a;
  undefined6 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  int iStack_114;
  int local_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined **local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  
  iVar1 = *(int *)(param_5 + 4);
  iVar2 = *(int *)(param_5 + 8);
  iVar13 = 4;
  iVar8 = 2;
  iVar7 = 3;
  switch(param_3) {
  case 1:
  case 2:
  case 0xe:
  case 0xf:
  case 0x14:
    goto switchD_01b9d32c_caseD_1;
  case 3:
  case 4:
  case 0x10:
  case 0x11:
    goto switchD_01b9d32c_caseD_3;
  case 5:
  case 6:
    goto switchD_01b9d32c_caseD_5;
  case 7:
  case 8:
    iVar13 = 5;
    goto switchD_01b9d32c_caseD_5;
  case 9:
  case 10:
    iVar13 = 6;
    goto switchD_01b9d32c_caseD_5;
  default:
    iVar8 = 7;
    if (param_3 != 0x17) {
      iVar8 = 0;
    }
switchD_01b9d32c_caseD_1:
    iVar7 = iVar8;
    if (2 < param_3 - 0x14) {
switchD_01b9d32c_caseD_3:
      iVar13 = iVar7;
      if (5 < param_3 - 0xe) goto switchD_01b9d32c_caseD_5;
switchD_01b9d32c_caseD_12:
      if ((0x13 < param_3) || (iVar7 = iVar13, (1 << (ulong)(param_3 & 0x1f) & 0xa8000U) == 0))
      goto switchD_01b9d32c_caseD_5;
    }
    break;
  case 0x12:
  case 0x13:
    goto switchD_01b9d32c_caseD_12;
  case 0x15:
    break;
  case 0x16:
    iVar7 = 4;
  }
  iVar13 = iVar7 + -1;
switchD_01b9d32c_caseD_5:
  local_160 = 0;
  local_178 = 0;
  puVar12 = (uint *)(param_1 + 8);
  *puVar12 = 0xffffffff;
  local_170 = (undefined1 *)0x0;
  local_168 = 0;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x38))();
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 400) + 0x38))(param_1 + 400);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x310) + 0x38))(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x490) + 0x38))(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x610) + 0x38))(param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x790) + 0x38))(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x910) + 0x38))(param_1 + 0x910);
  *(undefined8 *)(param_1 + 0xa70) = 0;
  *(undefined4 *)(param_1 + 0xa7c) = 0;
  *(undefined8 *)(param_1 + 0xa88) = 0xffffffff00000000;
  if (0 < iVar13) {
    iVar8 = 0;
    do {
      puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar5 = *puVar6 ^ *puVar6 << 0xb;
      uVar9 = puVar6[3];
      uVar3 = *(uint *)(param_2 + 0x18);
      *puVar6 = puVar6[1];
      puVar6[1] = puVar6[2];
      uVar5 = uVar5 >> 8 ^ uVar9 >> 0x13 ^ uVar5 ^ uVar9;
      puVar6[2] = uVar9;
      puVar6[3] = uVar5;
      lVar10 = *(long *)(param_2 + 0x10);
      if (0 < (int)*(uint *)(param_2 + 8)) {
        local_10c = 0;
        uVar11 = (ulong)uVar3 * (ulong)uVar5 >> 0x20;
        do {
          if ((*(uint *)(lVar10 + (ulong)(local_10c >> 5) * 4) >> (ulong)(local_10c & 0x1f) & 1) !=
              0) {
            if ((int)uVar11 == 0) goto LAB_01b9d674;
            uVar11 = (ulong)((int)uVar11 - 1);
          }
          local_10c = local_10c + 1;
        } while (*(uint *)(param_2 + 8) != local_10c);
      }
      local_10c = 0xffffffff;
LAB_01b9d674:
      uVar9 = 1 << (ulong)(local_10c & 0x1f);
      uVar5 = *(uint *)(lVar10 + (long)((int)local_10c >> 5) * 4);
      if ((uVar5 & uVar9) != 0) {
        *(uint *)(lVar10 + ((long)((ulong)local_10c << 0x20) >> 0x25) * 4) =
             uVar5 & (uVar9 ^ 0xffffffff);
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
      }
      if ((int)local_10c < 0) break;
      uVar5 = local_10c - 1;
      local_f0 = 0x40;
      local_ad = 0;
      uStack_108 = 0;
      local_ec[0] = 0;
      local_100 = &PTR_LAB_048fb9f8;
      local_118 = 3;
      iStack_114 = iVar1;
      local_110 = iVar2;
      local_f8 = local_ec;
      if (iVar1 != -1) {
        uVar9 = local_10c + 0x60;
        if (0x19 < uVar5) {
          uVar9 = 0x61;
        }
        if (iVar2 + 1U < 2) {
          FUN_038d1270(&local_100,"%03d_%c",iVar1,uVar9 & 0xff);
        }
        else {
          FUN_038d1270(&local_100,"%03d_%02d_%c",iVar1,iVar2,uVar9 & 0xff);
        }
      }
      uStack_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_12a = 0;
      local_120 = 0;
      FUN_01b970f0(&local_138,param_4);
      FUN_01b9735c(&local_138,param_4,&local_100);
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar10 = param_4[1];
      (*(code *)local_100[3])(&local_100);
      puVar4 = local_f8;
      local_168 = (ulong)uVar5;
      uVar9 = (uint)local_138._4_2_;
      if ((int)local_138 != 1) {
        uVar9 = 0;
      }
      local_170 = local_f8;
      puVar6 = puVar12 + (ulong)*(uint *)(param_1 + 0xa88) * 0x60;
      if (6 < *(uint *)(param_1 + 0xa88)) {
        puVar6 = puVar12;
      }
      *puVar6 = 0xffffffff;
      local_178 = lVar10;
      local_160 = uVar9;
      (**(code **)(*(long *)(puVar6 + 2) + 0x38))();
      puVar6[0x5d] = 0;
      *puVar6 = uVar9;
      puVar6[0x5a] = uVar5;
      puVar6[0x5b] = 0;
      FUN_01b9be60(puVar6,&local_178);
      local_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_158 = &PTR_LAB_048f9770;
      local_98 = &PTR_LAB_048f9770;
      ppuStack_90 = (undefined **)puVar4;
      local_7a = 0;
      uStack_78 = 0;
      puStack_150 = (undefined1 *)lVar10;
      FUN_01b970f0(&local_88,&local_158);
      FUN_01b9735c(&local_88,&local_158,&local_98);
      uVar5 = FUN_01b97400(&local_88);
      puVar6[0x5c] = uVar5;
      iVar8 = iVar8 + 1;
      *(int *)(param_1 + 0xa88) = *(int *)(param_1 + 0xa88) + 1;
    } while (iVar8 != iVar13);
  }
  if (-1 < param_6) {
    local_ad = 0;
    local_f8 = local_ec;
    local_f0 = 0x40;
    uVar5 = param_6 - 1;
    uStack_108 = 0;
    local_ec[0] = 0;
    local_100 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    local_118 = 3;
    iStack_114 = iVar1;
    local_110 = iVar2;
    local_10c = param_6;
    if (iVar1 != -1) {
      uVar9 = param_6 + 0x60;
      if (0x19 < uVar5) {
        uVar9 = 0x61;
      }
      if (iVar2 + 1U < 2) {
        FUN_038d1270(&local_100,"%03d_%c",iVar1,uVar9 & 0xff);
      }
      else {
        FUN_038d1270(&local_100,"%03d_%02d_%c",iVar1,iVar2,uVar9 & 0xff);
      }
    }
    uStack_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_12a = 0;
    local_120 = 0;
    FUN_01b970f0(&local_138,param_4);
    FUN_01b9735c(&local_138,param_4,&local_100);
    (**(code **)(*param_4 + 0x18))(param_4);
    ppuVar14 = (undefined **)param_4[1];
    (*(code *)local_100[3])(&local_100);
    puStack_a0 = local_f8;
    uStack_144 = 0;
    puStack_150 = local_f8;
    uVar9 = (uint)local_138._4_2_;
    if ((int)local_138 != 1) {
      uVar9 = 0;
    }
    puVar6 = puVar12 + (ulong)*(uint *)(param_1 + 0xa88) * 0x60;
    if (6 < *(uint *)(param_1 + 0xa88)) {
      puVar6 = puVar12;
    }
    *puVar6 = 0xffffffff;
    local_158 = ppuVar14;
    local_148 = uVar5;
    local_140 = uVar9;
    (**(code **)(*(long *)(puVar6 + 2) + 0x38))();
    puVar6[0x5d] = 0;
    *puVar6 = uVar9;
    puVar6[0x5a] = uVar5;
    puVar6[0x5b] = 0;
    FUN_01b9be60(puVar6,&local_158);
    local_70 = 0;
    local_a8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_88 = 0;
    uStack_80 = 0;
    local_7a = 0;
    uStack_78 = 0;
    local_98 = local_a8;
    ppuStack_90 = ppuVar14;
    FUN_01b970f0(&local_88,&local_98);
    FUN_01b9735c(&local_88,&local_98,&local_a8);
    uVar5 = FUN_01b97400(&local_88);
    puVar6[0x5c] = uVar5;
    *(int *)(param_1 + 0xa88) = *(int *)(param_1 + 0xa88) + 1;
  }
  return;
}

