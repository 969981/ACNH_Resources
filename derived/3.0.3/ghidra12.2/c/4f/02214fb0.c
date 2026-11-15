
void FUN_02214fb0(byte *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint local_198 [2];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_100 [36];
  undefined *local_70;
  char *pcStack_68;
  uint local_48 [2];
  
  local_100[0x22] = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_108 = 0;
  local_190 = 0;
  local_100[0x1e] = 0;
  local_100[0x1f] = 0;
  local_100[0x20] = 0;
  local_100[0x21] = 0;
  local_100[0x1a] = 0;
  local_100[0x1b] = 0;
  local_100[0x1c] = 0;
  local_100[0x1d] = 0;
  local_100[0x16] = 0;
  local_100[0x17] = 0;
  local_100[0x18] = 0;
  local_100[0x19] = 0;
  local_100[0x12] = 0;
  local_100[0x13] = 0;
  local_100[0x14] = 0;
  local_100[0x15] = 0;
  local_100[0xe] = 0;
  local_100[0xf] = 0;
  local_100[0x10] = 0;
  local_100[0x11] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[0xc] = 0;
  local_100[0xd] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  FUN_0376c3f0(local_100,&local_190,1,0);
  if (**(char **)(param_2 + 8) != '\0') {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    uVar4 = FUN_020fc100(&local_70,local_48,param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)local_70 & 0xffffffff;
      if (local_48[0] < 0x20) {
        if (0x22 < (uint)local_70) {
          uVar4 = 0;
        }
        uVar5 = 1 << (ulong)(local_48[0] & 0x1f);
        local_100[uVar4] = local_100[uVar4] & (uVar5 ^ 0xffffffff);
        uVar4 = (ulong)local_70 & 0xffffffff;
        if (0x22 < (uint)local_70) {
          uVar4 = 0;
        }
        local_198[uVar4 + 2] = local_198[uVar4 + 2] & (uVar5 ^ 0xffffffff);
      }
    }
  }
  if (**(char **)(param_3 + 8) != '\0') {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    uVar4 = FUN_020fc100(&local_70,local_48,param_3);
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)local_70 & 0xffffffff;
      if (local_48[0] < 0x20) {
        if (0x22 < (uint)local_70) {
          uVar4 = 0;
        }
        uVar5 = 1 << (ulong)(local_48[0] & 0x1f);
        local_100[uVar4] = local_100[uVar4] & (uVar5 ^ 0xffffffff);
        uVar4 = (ulong)local_70 & 0xffffffff;
        if (0x22 < (uint)local_70) {
          uVar4 = 0;
        }
        local_198[uVar4 + 2] = local_198[uVar4 + 2] & (uVar5 ^ 0xffffffff);
      }
    }
  }
  uVar5 = 0;
  uVar4 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  do {
    uVar1 = *(uint *)((long)local_100 + (-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2));
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) != 0) {
      local_48[uVar5 >> 5] = local_48[uVar5 >> 5] | 1 << (ulong)(uVar5 & 0x1f);
    }
    uVar5 = uVar5 + 1;
    uVar4 = (ulong)((int)uVar4 + 1);
  } while (uVar5 != 0x23);
  uVar5 = 0;
  uVar4 = 0;
  local_198[0] = 0;
  local_198[1] = 0;
  do {
    uVar1 = *(uint *)((long)local_198 + (-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2) + 8);
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) != 0) {
      local_198[uVar5 >> 5] = local_198[uVar5 >> 5] | 1 << (ulong)(uVar5 & 0x1f);
    }
    uVar5 = uVar5 + 1;
    uVar4 = (ulong)((int)uVar4 + 1);
  } while (uVar5 != 0x23);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Unlock_MncBridgeBoat";
  iVar2 = FUN_02758850(&local_70);
  if (iVar2 != 0) {
    uVar3 = FUN_03773140(param_1[0x1e4] & 1);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar3);
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    switch(uVar3) {
    case 0:
    case 1:
      goto switchD_022152bc_caseD_0;
    case 2:
      break;
    case 3:
      bVar6 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar11 = true;
      break;
    case 4:
      bVar6 = false;
      bVar11 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar10 = true;
      break;
    case 5:
      bVar6 = false;
      bVar11 = false;
      bVar10 = false;
      bVar8 = false;
      bVar7 = false;
      bVar9 = true;
      break;
    case 6:
      bVar6 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar7 = false;
      bVar8 = true;
      break;
    case 7:
      bVar6 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = true;
      break;
    default:
      bVar6 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
    }
    uVar4 = (ulong)*param_1;
    if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[1])) ||
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) == 0)) {
      FUN_02215aa8(param_1,local_48);
      FUN_02216480(param_1,local_48,local_100);
    }
    if (!bVar6) {
      uVar4 = (ulong)param_1[3];
      if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[4])) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[4] & 0x1f) & 1) == 0)) {
        FUN_02215aa8(param_1,local_48);
        FUN_02216480(param_1 + 3,local_48,local_100);
      }
      if (!bVar11) {
        uVar4 = (ulong)param_1[6];
        if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[7])) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[7] & 0x1f) & 1) == 0)) {
          FUN_02215aa8(param_1,local_48);
          FUN_02216480(param_1 + 6,local_48,local_100);
        }
        if (!bVar10) {
          uVar4 = (ulong)param_1[9];
          if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[10])) ||
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[10] & 0x1f) & 1) == 0)) {
            FUN_02215aa8(param_1,local_48);
            FUN_02216480(param_1 + 9,local_48,local_100);
          }
          uVar4 = (ulong)param_1[0xc];
          if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0xd])) ||
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0xd] & 0x1f) & 1) == 0)) {
            FUN_02215aa8(param_1,local_48);
            FUN_02216480(param_1 + 0xc,local_48,local_100);
          }
          if (!bVar9) {
            uVar4 = (ulong)param_1[0xf];
            if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x10])) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x10] & 0x1f) & 1) == 0)
               ) {
              FUN_02215aa8(param_1,local_48);
              FUN_02216480(param_1 + 0xf,local_48,local_100);
            }
            uVar4 = (ulong)param_1[0x12];
            if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x13])) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x13] & 0x1f) & 1) == 0)
               ) {
              FUN_02215aa8(param_1,local_48);
              FUN_02216480(param_1 + 0x12,local_48,local_100);
            }
            if (!bVar8) {
              uVar4 = (ulong)param_1[0x15];
              if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x16])) ||
                 ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x16] & 0x1f) & 1) ==
                  0)) {
                FUN_02215aa8(param_1,local_48);
                FUN_02216480(param_1 + 0x15,local_48,local_100);
              }
              if (!bVar7) {
                uVar4 = (ulong)param_1[0x18];
                if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x19])) ||
                   ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x19] & 0x1f) & 1)
                    == 0)) {
                  FUN_02215aa8(param_1,local_48);
                  FUN_02216480(param_1 + 0x18,local_48,local_100);
                }
              }
            }
          }
        }
      }
    }
  }
switchD_022152bc_caseD_0:
  uVar3 = FUN_03773140(param_1[0x1e4] & 1);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar3);
  bVar6 = false;
  bVar7 = true;
  switch(uVar3) {
  case 0:
    goto switchD_022156c8_caseD_0;
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    bVar7 = false;
    bVar6 = true;
    break;
  default:
    bVar7 = false;
    bVar6 = false;
  }
  uVar4 = (ulong)param_1[0x1b];
  if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x1c])) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x1c] & 0x1f) & 1) == 0)) {
    FUN_02215aa8(param_1,local_198);
    FUN_02216480(param_1 + 0x1b,local_198,&local_190);
  }
  uVar4 = (ulong)param_1[0x1e];
  if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x1f])) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x1f] & 0x1f) & 1) == 0)) {
    FUN_02215aa8(param_1,local_198);
    FUN_02216480(param_1 + 0x1e,local_198,&local_190);
  }
  uVar4 = (ulong)param_1[0x21];
  if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x22])) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x22] & 0x1f) & 1) == 0)) {
    FUN_02215aa8(param_1,local_198);
    FUN_02216480(param_1 + 0x21,local_198,&local_190);
  }
  if (!bVar7) {
    uVar4 = (ulong)param_1[0x24];
    if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x25])) ||
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x25] & 0x1f) & 1) == 0)) {
      FUN_02215aa8(param_1,local_198);
      FUN_02216480(param_1 + 0x24,local_198,&local_190);
    }
    uVar4 = (ulong)param_1[0x27];
    if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x28])) ||
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x28] & 0x1f) & 1) == 0)) {
      FUN_02215aa8(param_1,local_198);
      FUN_02216480(param_1 + 0x27,local_198,&local_190);
    }
    if (!bVar6) {
      uVar4 = (ulong)param_1[0x2a];
      if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < param_1[0x2b])) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(param_1[0x2b] & 0x1f) & 1) == 0)) {
        FUN_02215aa8(param_1,local_198);
        FUN_02216480(param_1 + 0x2a,local_198,&local_190);
      }
    }
  }
switchD_022156c8_caseD_0:
  if ((param_4 & 1) != 0) {
    FUN_02211824(param_1);
  }
  return;
}

