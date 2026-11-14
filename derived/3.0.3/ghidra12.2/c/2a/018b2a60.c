
uint FUN_018b2a60(uint *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char acStack_94 [63];
  undefined1 local_55;
  
  puVar3 = PTR_PTR_04bb2238;
  local_55 = 0;
  local_98 = 0x40;
  local_a8 = PTR_DAT_04bb2f70 + 0x10;
  local_a0 = acStack_94;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar15 = *(char **)(puVar3 + 8);
  if (acStack_94 != pcVar15) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_018b2b30;
      lVar2 = *(long *)(puVar3 + 8) + lVar11;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_018b2b30;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_018b2b30;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_018b2b30:
    iVar14 = (int)lVar11;
    if (local_98 <= (int)lVar11) {
      iVar14 = local_98 + -1;
    }
    memcpy(acStack_94,pcVar15,(long)iVar14);
    acStack_94[iVar14] = '\0';
  }
  puVar3 = PTR_DAT_04bb4008;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  pcVar10 = (char *)FUN_01a113c0(*(undefined8 *)PTR_DAT_04bb4008,*param_3);
  pcVar15 = local_a0;
  if ((pcVar10 != (char *)0x0) && (local_a0 != pcVar10)) {
    lVar11 = 0;
    do {
      if (pcVar10[lVar11] == '\0') goto LAB_018b2bd0;
      if (pcVar10[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_018b2bd0;
      }
      if (pcVar10[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_018b2bd0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_018b2bd0:
    iVar14 = (int)lVar11;
    if (local_98 <= (int)lVar11) {
      iVar14 = local_98 + -1;
    }
    memcpy(local_a0,pcVar10,(long)iVar14);
    pcVar15[iVar14] = '\0';
  }
  (**(code **)(local_a8 + 0x18))(&local_a8);
  uVar7 = FUN_006bd550(local_a0,0);
  uVar9 = *param_1;
  if (uVar9 == 0) {
LAB_018b2c94:
    uVar8 = FUN_01a1159c(*(undefined8 *)puVar3,*param_3);
    pcVar15 = local_a0;
    switch(uVar8) {
    case 1:
      if (local_a0 != "BeetleDefault") {
        pcVar10 = "BeetleDefault";
LAB_018b2e48:
        bVar4 = SBORROW4(local_98,0xd);
        bVar5 = local_98 + -0xd < 0;
        bVar6 = local_98 == 0xd;
        iVar14 = 0xd;
LAB_018b2f14:
        if (bVar6 || bVar5 != bVar4) {
          iVar14 = local_98 + -1;
        }
        memcpy(local_a0,pcVar10,(long)iVar14);
        pcVar15[iVar14] = '\0';
      }
      break;
    case 2:
      if (local_a0 != "ButterflyDefault") {
        pcVar10 = "ButterflyDefault";
LAB_018b2ed8:
        bVar4 = SBORROW4(local_98,0x10);
        bVar5 = local_98 + -0x10 < 0;
        bVar6 = local_98 == 0x10;
        iVar14 = 0x10;
        goto LAB_018b2f14;
      }
      break;
    case 3:
      if (local_a0 != "CastOffSkinDefault") {
        pcVar10 = "CastOffSkinDefault";
LAB_018b2ea8:
        bVar4 = SBORROW4(local_98,0x12);
        bVar5 = local_98 + -0x12 < 0;
        bVar6 = local_98 == 0x12;
        iVar14 = 0x12;
        goto LAB_018b2f14;
      }
      break;
    case 4:
      if (local_a0 != "CicadaDefault") {
        pcVar10 = "CicadaDefault";
        goto LAB_018b2e48;
      }
      break;
    case 5:
      if (local_a0 != "DragonflyDefault") {
        pcVar10 = "DragonflyDefault";
        goto LAB_018b2ed8;
      }
      break;
    case 6:
      if (local_a0 != "FeatherDefault") {
        pcVar10 = "FeatherDefault";
        bVar4 = SBORROW4(local_98,0xe);
        bVar5 = local_98 + -0xe < 0;
        bVar6 = local_98 == 0xe;
        iVar14 = 0xe;
        goto LAB_018b2f14;
      }
      break;
    default:
      if (local_a0 != "InsectDefault") {
        pcVar10 = "InsectDefault";
        goto LAB_018b2e48;
      }
      break;
    case 0x13:
      if (local_a0 != "PopStoneDefault") {
        pcVar10 = "PopStoneDefault";
LAB_018b2e18:
        bVar4 = SBORROW4(local_98,0xf);
        bVar5 = local_98 + -0xf < 0;
        bVar6 = local_98 == 0xf;
        iVar14 = 0xf;
        goto LAB_018b2f14;
      }
      break;
    case 0x14:
      if (local_a0 != "AttackerDefault") {
        pcVar10 = "AttackerDefault";
        goto LAB_018b2e18;
      }
      break;
    case 0x17:
      if (local_a0 != "ThreadDefault") {
        pcVar10 = "ThreadDefault";
        goto LAB_018b2e48;
      }
      break;
    case 0x18:
      if (local_a0 != "StumpDefault") {
        pcVar10 = "StumpDefault";
        bVar4 = SBORROW4(local_98,0xc);
        bVar5 = local_98 + -0xc < 0;
        bVar6 = local_98 == 0xc;
        iVar14 = 0xc;
        goto LAB_018b2f14;
      }
      break;
    case 0x19:
      if (local_a0 != "TigerBeetleDefault") {
        pcVar10 = "TigerBeetleDefault";
        goto LAB_018b2ea8;
      }
      break;
    case 0x1a:
      if (local_a0 != "TumblebugDefault") {
        pcVar10 = "TumblebugDefault";
        goto LAB_018b2ed8;
      }
      break;
    case 0x1b:
      if (local_a0 != "DytiscidaeDefault") {
        pcVar10 = "DytiscidaeDefault";
        bVar4 = SBORROW4(local_98,0x11);
        bVar5 = local_98 + -0x11 < 0;
        bVar6 = local_98 == 0x11;
        iVar14 = 0x11;
        goto LAB_018b2f14;
      }
    }
    (**(code **)(local_a8 + 0x18))(&local_a8);
    uVar7 = FUN_006bd550(local_a0,0);
    uVar9 = *param_1;
    if (uVar9 != 0) {
      lVar11 = *(long *)(param_1 + 2);
      if ((int)uVar9 < 2) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        iVar14 = uVar9 - 1;
        do {
          uVar1 = iVar14 + uVar12;
          if ((int)uVar1 < 0 != SCARRY4(iVar14,uVar12)) {
            uVar1 = uVar1 + 1;
          }
          uVar13 = (int)uVar1 >> 1;
          uVar1 = *(uint *)(lVar11 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
          if (uVar1 == uVar7) goto joined_r0x018b2ff0;
          if (uVar1 < uVar7) {
            uVar12 = uVar13 + 1;
          }
          else {
            iVar14 = uVar13 - 1;
          }
        } while ((int)uVar12 < iVar14);
      }
      uVar13 = uVar12;
      if (*(uint *)(lVar11 + (long)(int)uVar12 * 0x20 + 0x18) == uVar7) {
joined_r0x018b2ff0:
        if (-1 < (int)uVar13) goto LAB_018b2fc8;
      }
    }
    uVar9 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 2);
    if ((int)uVar9 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar14 = uVar9 - 1;
      do {
        uVar1 = iVar14 + uVar12;
        if ((int)uVar1 < 0 != SCARRY4(iVar14,uVar12)) {
          uVar1 = uVar1 + 1;
        }
        uVar13 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar11 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar7) goto joined_r0x018b2c90;
        if (uVar1 < uVar7) {
          uVar12 = uVar13 + 1;
        }
        else {
          iVar14 = uVar13 - 1;
        }
      } while ((int)uVar12 < iVar14);
    }
    uVar13 = uVar12;
    if (*(uint *)(lVar11 + (long)(int)uVar12 * 0x20 + 0x18) != uVar7) goto LAB_018b2c94;
joined_r0x018b2c90:
    if ((int)uVar13 < 0) goto LAB_018b2c94;
LAB_018b2fc8:
    if (uVar9 <= uVar13) {
      uVar13 = 0;
    }
    uVar9 = (**(code **)(lVar11 + (ulong)uVar13 * 0x20))(param_2,param_3,param_4);
  }
  return uVar9 & 1;
}

