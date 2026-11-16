
/* WARNING: Type propagation algorithm not settling */

uint FUN_027b2bc0(ushort *param_1,uint param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  undefined **ppuVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined ***pppuVar10;
  uint uVar11;
  ulong uVar12;
  undefined **local_b8;
  char *local_b0;
  uint *local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined **local_98;
  char *pcStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  uint *local_78;
  uint local_70;
  uint auStack_6c [2];
  undefined4 local_64;
  
  local_64 = param_4;
  if (param_2 == 0) {
    return 0;
  }
  local_88 = &PTR_LAB_04a912b8;
  uStack_80 = 0x100000020;
  local_78 = auStack_6c;
  local_70 = 0;
  auStack_6c[0] = 0;
  if (2 < param_2) goto switchD_027b2cf4_default;
  local_70 = 10;
  auStack_6c[0] = 0x7fe;
  if (param_2 != 2) goto switchD_027b2cf4_default;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_b0 = "KinuyoTalkBoforeFlag";
  local_b8 = ppuVar1;
  iVar4 = FUN_0274ce10(&local_64,&local_b8);
  local_b0 = "FoxFirstTalkInShipFlag";
  local_b8 = ppuVar1;
  iVar5 = FUN_0274ce10(&local_64,&local_b8);
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    pcStack_90 = "Museum3Built";
    local_98 = ppuVar1;
    uVar7 = FUN_0273f0a0(&local_98);
    uVar7 = uVar7 & 0xffffffff;
  }
  local_b0 = "SkkTalkBeforeFlag";
  local_b8 = ppuVar1;
  iVar6 = FUN_0274ce10(&local_64,&local_b8);
  local_b0 = "RollanTalkBeforeFlag";
  local_b8 = ppuVar1;
  iVar5 = FUN_0274ce10(&local_64,&local_b8);
  switch(param_3 & 0xff) {
  case 0:
    uVar9 = *local_78;
    if ((uVar9 >> 7 & 1) != 0) {
      *local_78 = uVar9 & 0xffffff7f;
      local_70 = local_70 - 1;
      uVar9 = *local_78;
    }
    if ((uVar9 >> 8 & 1) != 0) {
      *local_78 = uVar9 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if (iVar4 == 0) {
      uVar9 = *local_78;
      uVar11 = auStack_6c[0];
      if ((uVar9 >> 3 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffff7;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      if ((uVar9 >> 4 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffef;
        local_70 = local_70 - 1;
        auStack_6c[0] = uVar11;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      auStack_6c[0] = uVar11;
      if ((uVar9 >> 5 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffdf;
        local_70 = local_70 - 1;
      }
    }
    if (((uVar7 & 1) == 0) && ((*local_78 >> 7 & 1) != 0)) {
      uVar9 = *local_78 & 0xffffff7f;
LAB_027b30ac:
      *local_78 = uVar9;
      local_70 = local_70 - 1;
    }
    goto LAB_027b30bc;
  case 1:
    uVar9 = *local_78;
    if ((uVar9 >> 7 & 1) != 0) {
      *local_78 = uVar9 & 0xffffff7f;
      local_70 = local_70 - 1;
      uVar9 = *local_78;
    }
    if ((uVar9 >> 8 & 1) != 0) {
      *local_78 = uVar9 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if ((iVar4 == 0) && ((*local_78 >> 4 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffffef;
      local_70 = local_70 - 1;
    }
    if ((uVar7 & 1) != 0) goto switchD_027b2cf4_default;
    lVar8 = 8;
    goto LAB_027b30c4;
  case 2:
    if ((*local_78 >> 8 & 1) != 0) {
      *local_78 = *local_78 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if (iVar4 == 0) {
      uVar9 = *local_78;
      uVar11 = auStack_6c[0];
      if ((uVar9 >> 1 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffffd;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      if ((uVar9 >> 2 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffffb;
        local_70 = local_70 - 1;
        auStack_6c[0] = uVar11;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      auStack_6c[0] = uVar11;
      if ((uVar9 >> 4 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffef;
        local_70 = local_70 - 1;
      }
    }
    if (((uVar7 & 1) == 0) && ((*local_78 >> 8 & 1) != 0)) {
      *local_78 = *local_78 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if (iVar4 != 0) goto switchD_027b2cf4_default;
    lVar8 = 9;
    goto LAB_027b30c4;
  case 3:
    if ((*local_78 >> 9 & 1) != 0) {
      *local_78 = *local_78 & 0xfffffdff;
      local_70 = local_70 - 1;
    }
    if (iVar4 == 0) {
      uVar9 = *local_78;
      uVar11 = auStack_6c[0];
      if ((uVar9 >> 1 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffffd;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      if ((uVar9 >> 2 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffffb;
        local_70 = local_70 - 1;
        auStack_6c[0] = uVar11;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      auStack_6c[0] = uVar11;
      if ((uVar9 >> 5 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffdf;
        local_70 = local_70 - 1;
      }
    }
    if (((uVar7 & 1) == 0) && ((*local_78 >> 9 & 1) != 0)) {
      *local_78 = *local_78 & 0xfffffdff;
      local_70 = local_70 - 1;
    }
    break;
  case 4:
    if ((iVar4 == 0) && ((*local_78 >> 4 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffffef;
      local_70 = local_70 - 1;
    }
    if ((iVar5 == 0) && ((*local_78 >> 7 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffff7f;
      local_70 = local_70 - 1;
    }
    if ((iVar4 == 0) && ((*local_78 >> 8 & 1) != 0)) {
      *local_78 = *local_78 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if ((iVar6 == 0) && ((*local_78 >> 8 & 1) != 0)) {
      *local_78 = *local_78 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    if ((iVar4 == 0) && ((*local_78 >> 9 & 1) != 0)) {
      uVar9 = *local_78 & 0xfffffdff;
      goto LAB_027b30ac;
    }
LAB_027b30bc:
    if (iVar6 != 0) goto switchD_027b2cf4_default;
    goto LAB_027b30c0;
  case 5:
    if (iVar4 == 0) {
      uVar9 = *local_78;
      uVar11 = auStack_6c[0];
      if ((uVar9 >> 3 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffff7;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      if ((uVar9 >> 6 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffbf;
        local_70 = local_70 - 1;
        auStack_6c[0] = uVar11;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      auStack_6c[0] = uVar11;
      if ((uVar9 >> 7 & 1) != 0) {
        *local_78 = uVar9 & 0xffffff7f;
        local_70 = local_70 - 1;
      }
    }
    iVar5 = iVar4;
    if ((iVar6 == 0) && ((*local_78 >> 8 & 1) != 0)) {
      uVar9 = *local_78 & 0xfffffeff;
LAB_027b3020:
      *local_78 = uVar9;
      local_70 = local_70 - 1;
      iVar5 = iVar4;
    }
    break;
  case 6:
    if (iVar4 == 0) {
      uVar9 = *local_78;
      uVar11 = auStack_6c[0];
      if ((uVar9 >> 1 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffffd;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      if ((uVar9 >> 3 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffff7;
        local_70 = local_70 - 1;
        auStack_6c[0] = uVar11;
        uVar9 = *local_78;
        uVar11 = auStack_6c[0];
      }
      auStack_6c[0] = uVar11;
      if ((uVar9 >> 4 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffef;
        local_70 = local_70 - 1;
      }
    }
    if ((iVar5 == 0) && ((*local_78 >> 6 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffffbf;
      local_70 = local_70 - 1;
    }
    if (iVar4 != 0) goto switchD_027b2cf4_default;
    if ((*local_78 >> 8 & 1) != 0) {
      *local_78 = *local_78 & 0xfffffeff;
      local_70 = local_70 - 1;
    }
    goto LAB_027b30c0;
  case 7:
    if (iVar4 == 0) {
      uVar9 = *local_78;
      if ((uVar9 >> 3 & 1) != 0) {
        *local_78 = uVar9 & 0xfffffff7;
        local_70 = local_70 - 1;
        uVar9 = *local_78;
      }
      if ((uVar9 >> 6 & 1) != 0) {
        *local_78 = uVar9 & 0xffffffbf;
        local_70 = local_70 - 1;
      }
    }
    if ((iVar6 == 0) && ((*local_78 >> 6 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffffbf;
      local_70 = local_70 - 1;
    }
    if ((iVar4 == 0) && ((*local_78 >> 7 & 1) != 0)) {
      *local_78 = *local_78 & 0xffffff7f;
      local_70 = local_70 - 1;
    }
    iVar5 = iVar4;
    if ((iVar6 == 0) && ((*local_78 >> 7 & 1) != 0)) {
      uVar9 = *local_78 & 0xffffff7f;
      goto LAB_027b3020;
    }
    break;
  default:
    goto switchD_027b2cf4_default;
  }
  if (iVar5 == 0) {
LAB_027b30c0:
    lVar8 = 10;
LAB_027b30c4:
    if ((*local_78 & 1 << lVar8) != 0) {
      *local_78 = *local_78 & (1 << lVar8 ^ 0xffffffffU);
      local_70 = local_70 - 1;
    }
  }
switchD_027b2cf4_default:
  local_b0 = (char *)0x100000020;
  local_a8 = &uStack_9c;
  local_a0 = 0;
  uStack_9c = 0;
  uVar9 = *local_78;
  bVar2 = (uVar9 & 1) != 0;
  if (bVar2) {
    local_a0 = 1;
    uStack_9c = 1;
    uVar9 = *local_78;
  }
  uStack_9c = (uint)bVar2;
  uVar11 = (uint)bVar2;
  local_a0 = uVar11;
  if ((uVar9 >> 1 & 1) != 0) {
    local_a0 = uVar11 + 1;
    uStack_9c = uVar11 | 2;
    uVar9 = *local_78;
    uVar11 = uVar11 | 2;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11 | 4;
    uVar9 = *local_78;
    uVar11 = uVar11 | 4;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    uVar11 = uVar11 | 8;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 4 & 1) != 0) {
    uVar11 = uVar11 | 0x10;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 5 & 1) != 0) {
    uVar11 = uVar11 | 0x20;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 6 & 1) != 0) {
    uVar11 = uVar11 | 0x40;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 7 & 1) != 0) {
    uVar11 = uVar11 | 0x80;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 8 & 1) != 0) {
    uVar11 = uVar11 | 0x100;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 9 & 1) != 0) {
    uVar11 = uVar11 | 0x200;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 10 & 1) != 0) {
    uVar11 = uVar11 | 0x400;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0xb & 1) != 0) {
    uVar11 = uVar11 | 0x800;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0xc & 1) != 0) {
    uVar11 = uVar11 | 0x1000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0xd & 1) != 0) {
    uVar11 = uVar11 | 0x2000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0xe & 1) != 0) {
    uVar11 = uVar11 | 0x4000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0xf & 1) != 0) {
    uVar11 = uVar11 | 0x8000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x10 & 1) != 0) {
    uVar11 = uVar11 | 0x10000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x11 & 1) != 0) {
    uVar11 = uVar11 | 0x20000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x12 & 1) != 0) {
    uVar11 = uVar11 | 0x40000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x13 & 1) != 0) {
    uVar11 = uVar11 | 0x80000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x14 & 1) != 0) {
    uVar11 = uVar11 | 0x100000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x15 & 1) != 0) {
    uVar11 = uVar11 | 0x200000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x16 & 1) != 0) {
    uVar11 = uVar11 | 0x400000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x17 & 1) != 0) {
    uVar11 = uVar11 | 0x800000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x18 & 1) != 0) {
    uVar11 = uVar11 | 0x1000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x19 & 1) != 0) {
    uVar11 = uVar11 | 0x2000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x1a & 1) != 0) {
    uVar11 = uVar11 | 0x4000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x1b & 1) != 0) {
    uVar11 = uVar11 | 0x8000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x1c & 1) != 0) {
    uVar11 = uVar11 | 0x10000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x1d & 1) != 0) {
    uVar11 = uVar11 | 0x20000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((uVar9 >> 0x1e & 1) != 0) {
    uVar11 = uVar11 | 0x40000000;
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11;
    uVar9 = *local_78;
  }
  if ((int)uVar9 < 0) {
    local_a0 = local_a0 + 1;
    uStack_9c = uVar11 | 0x80000000;
  }
  uVar9 = (param_2 & 0x7f) << 9 | (param_3 & 7) << 6;
  uVar12 = (ulong)param_1[9] & 0x3f;
  uVar7 = 0;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[9] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[8] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[8] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[7] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[7] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[6] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[6] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[5] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[5] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[4] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[4] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[3] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[3] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[2] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[2] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)param_1[1] & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (param_1[1] & 0xffc0))) {
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((local_78[uVar12 >> 5] & uVar11) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar11 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
    uVar7 = uVar12;
  }
  uVar12 = (ulong)*param_1 & 0x3f;
  if (((uint)uVar12 != 0) && (uVar9 == (*param_1 & 0xffc0))) {
    uVar9 = 1 << (ulong)((uint)uVar12 & 0x1f);
    uVar7 = uVar12;
    if ((local_78[uVar12 >> 5] & uVar9) != 0) {
      local_78[uVar12 >> 5] = local_78[uVar12 >> 5] & (uVar9 ^ 0xffffffff);
      local_70 = local_70 - 1;
    }
  }
  if ((int)local_70 < 1) {
    uVar11 = 1 << (ulong)((uint)uVar7 & 0x1f);
    uVar9 = (&uStack_9c)[uVar7 >> 5];
    if ((uVar9 & uVar11) == 0) {
      pppuVar10 = &local_b8;
      local_70 = local_a0;
    }
    else {
      (&uStack_9c)[uVar7 >> 5] = uVar9 & (uVar11 ^ 0xffffffff);
      pppuVar10 = &local_b8;
      local_70 = local_a0 - 1;
      _local_a0 = CONCAT44(uStack_9c,local_70);
    }
  }
  else {
    pppuVar10 = &local_88;
  }
  uVar9 = *param_5 ^ *param_5 << 0xb;
  uVar11 = param_5[3];
  *param_5 = param_5[1];
  param_5[1] = param_5[2];
  uVar9 = uVar9 >> 8 ^ uVar11 >> 0x13 ^ uVar9 ^ uVar11;
  uVar3 = *(uint *)(pppuVar10 + 1);
  param_5[2] = uVar11;
  param_5[3] = uVar9;
  if (0 < (int)uVar3) {
    uVar11 = 0;
    uVar7 = (ulong)uVar9 * (ulong)local_70 >> 0x20;
    do {
      if ((*(uint *)((long)pppuVar10[2] + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1)
          != 0) {
        if ((int)uVar7 == 0) {
          return uVar11;
        }
        uVar7 = (ulong)((int)uVar7 - 1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return 0xffffffff;
}

