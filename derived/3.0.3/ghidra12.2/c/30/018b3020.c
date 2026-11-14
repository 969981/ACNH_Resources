
undefined8 FUN_018b3020(uint *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  size_t __n;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0;
  int local_e8;
  char local_e4 [127];
  undefined1 local_65;
  
  puVar4 = PTR_PTR_04bb2238;
  local_65 = 0;
  local_e8 = 0x80;
  local_f8 = PTR_DAT_04bb2e90 + 0x10;
  local_f0 = local_e4;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar17 = *(char **)(puVar4 + 8);
  if (local_e4 != pcVar17) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar12) == '\0') goto LAB_018b30fc;
      lVar2 = *(long *)(puVar4 + 8) + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_018b30fc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_018b30fc;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_018b30fc:
    iVar16 = (int)lVar12;
    if (local_e8 <= (int)lVar12) {
      iVar16 = local_e8 + -1;
    }
    memcpy(local_e4,pcVar17,(long)iVar16);
    local_e4[iVar16] = '\0';
  }
  puVar4 = PTR_DAT_04bb4008;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  pcVar10 = (char *)FUN_01a113c0(*(undefined8 *)PTR_DAT_04bb4008,*param_3);
  pcVar17 = local_f0;
  if ((pcVar10 != (char *)0x0) && (local_f0 != pcVar10)) {
    lVar12 = 0;
    do {
      if (pcVar10[lVar12] == '\0') goto LAB_018b319c;
      if (pcVar10[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_018b319c;
      }
      if (pcVar10[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_018b319c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_018b319c:
    iVar16 = (int)lVar12;
    if (local_e8 <= (int)lVar12) {
      iVar16 = local_e8 + -1;
    }
    memcpy(local_f0,pcVar10,(long)iVar16);
    pcVar17[iVar16] = '\0';
  }
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_100 = "Remote_";
  (**(code **)(local_f8 + 0x18))(&local_f8);
  pcVar17 = local_f0;
  lVar12 = 0;
  do {
    if (local_f0[lVar12] == '\0') goto LAB_018b322c;
    if (local_f0[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_018b322c;
    }
    if (local_f0[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_018b322c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_018b322c:
  iVar16 = local_e8 - (int)lVar12;
  uVar13 = 7;
  if (local_e8 < 8) {
    uVar13 = local_e8 - 1;
  }
  iVar3 = (int)lVar12;
  if (iVar16 < 8) {
    iVar3 = local_e8 + ~uVar13;
  }
  uVar8 = 7;
  if (iVar16 < 8) {
    uVar8 = uVar13;
  }
  __n = (size_t)(int)uVar8;
  memmove(local_f0 + __n,local_f0,(long)iVar3);
  (**(code **)(local_108 + 0x18))(&local_108);
  memcpy(pcVar17,local_100,__n);
  pcVar17[__n + (long)iVar3] = '\0';
  (**(code **)(local_f8 + 0x18))(&local_f8);
  uVar8 = FUN_006bd550(local_f0,0);
  uVar13 = *param_1;
  if (uVar13 == 0) {
LAB_018b3334:
    uVar9 = FUN_01a1159c(*(undefined8 *)puVar4,*param_3);
    pcVar17 = local_f0;
    local_108 = (undefined *)CONCAT44(local_108._4_4_,uVar9);
    switch(uVar9) {
    case 1:
      if (local_f0 != "Remote_BeetleDefault") {
        pcVar10 = "Remote_BeetleDefault";
LAB_018b3518:
        bVar5 = SBORROW4(local_e8,0x14);
        bVar6 = local_e8 + -0x14 < 0;
        bVar7 = local_e8 == 0x14;
        iVar16 = 0x14;
LAB_018b35b4:
        if (bVar7 || bVar6 != bVar5) {
          iVar16 = local_e8 + -1;
        }
        memcpy(local_f0,pcVar10,(long)iVar16);
        pcVar17[iVar16] = '\0';
      }
      break;
    case 2:
      if (local_f0 != "Remote_ButterflyDefault") {
        pcVar10 = "Remote_ButterflyDefault";
LAB_018b341c:
        bVar5 = SBORROW4(local_e8,0x17);
        bVar6 = local_e8 + -0x17 < 0;
        bVar7 = local_e8 == 0x17;
        iVar16 = 0x17;
        goto LAB_018b35b4;
      }
      break;
    case 3:
      if (local_f0 != "Remote_CastOffSkinDefault") {
        pcVar10 = "Remote_CastOffSkinDefault";
LAB_018b3578:
        bVar5 = SBORROW4(local_e8,0x19);
        bVar6 = local_e8 + -0x19 < 0;
        bVar7 = local_e8 == 0x19;
        iVar16 = 0x19;
        goto LAB_018b35b4;
      }
      break;
    case 4:
      if (local_f0 != "Remote_CicadaDefault") {
        pcVar10 = "Remote_CicadaDefault";
        goto LAB_018b3518;
      }
      break;
    case 5:
      if (local_f0 != "Remote_DragonflyDefault") {
        pcVar10 = "Remote_DragonflyDefault";
        goto LAB_018b341c;
      }
      break;
    case 6:
      if (local_f0 != "Remote_FeatherDefault") {
        pcVar10 = "Remote_FeatherDefault";
        bVar5 = SBORROW4(local_e8,0x15);
        bVar6 = local_e8 + -0x15 < 0;
        bVar7 = local_e8 == 0x15;
        iVar16 = 0x15;
        goto LAB_018b35b4;
      }
      break;
    default:
      if (local_f0 != "Remote_InsectDefault") {
        pcVar10 = "Remote_InsectDefault";
        goto LAB_018b3518;
      }
      break;
    case 0xf:
      if (local_f0 != "Remote_LocustDefault") {
        pcVar10 = "Remote_LocustDefault";
        goto LAB_018b3518;
      }
      break;
    case 0x13:
      if (local_f0 != "Remote_PopStoneDefault") {
        pcVar10 = "Remote_PopStoneDefault";
LAB_018b34e8:
        bVar5 = SBORROW4(local_e8,0x16);
        bVar6 = local_e8 + -0x16 < 0;
        bVar7 = local_e8 == 0x16;
        iVar16 = 0x16;
        goto LAB_018b35b4;
      }
      break;
    case 0x14:
      if (local_f0 != "Remote_AttackerDefault") {
        pcVar10 = "Remote_AttackerDefault";
        goto LAB_018b34e8;
      }
      break;
    case 0x17:
      if (local_f0 != "Remote_ThreadDefault") {
        pcVar10 = "Remote_ThreadDefault";
        goto LAB_018b3518;
      }
      break;
    case 0x18:
      if (local_f0 != "Remote_StumpDefault") {
        pcVar10 = "Remote_StumpDefault";
        bVar5 = SBORROW4(local_e8,0x13);
        bVar6 = local_e8 + -0x13 < 0;
        bVar7 = local_e8 == 0x13;
        iVar16 = 0x13;
        goto LAB_018b35b4;
      }
      break;
    case 0x19:
      if (local_f0 != "Remote_TigerBeetleDefault") {
        pcVar10 = "Remote_TigerBeetleDefault";
        goto LAB_018b3578;
      }
      break;
    case 0x1b:
      if (local_f0 != "Remote_DytiscidaeDefault") {
        pcVar10 = "Remote_DytiscidaeDefault";
        bVar5 = SBORROW4(local_e8,0x18);
        bVar6 = local_e8 + -0x18 < 0;
        bVar7 = local_e8 == 0x18;
        iVar16 = 0x18;
        goto LAB_018b35b4;
      }
    }
    (**(code **)(local_f8 + 0x18))(&local_f8);
    uVar8 = FUN_006bd550(local_f0,0);
    uVar13 = *param_1;
    if (uVar13 != 0) {
      lVar12 = *(long *)(param_1 + 2);
      if ((int)uVar13 < 2) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        iVar16 = uVar13 - 1;
        do {
          uVar1 = iVar16 + uVar14;
          if ((int)uVar1 < 0 != SCARRY4(iVar16,uVar14)) {
            uVar1 = uVar1 + 1;
          }
          uVar15 = (int)uVar1 >> 1;
          uVar1 = *(uint *)(lVar12 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
          if (uVar1 == uVar8) goto joined_r0x018b3694;
          if (uVar1 < uVar8) {
            uVar14 = uVar15 + 1;
          }
          else {
            iVar16 = uVar15 - 1;
          }
        } while ((int)uVar14 < iVar16);
      }
      uVar15 = uVar14;
      if (*(uint *)(lVar12 + (long)(int)uVar14 * 0x20 + 0x18) == uVar8) {
joined_r0x018b3694:
        if (-1 < (int)uVar15) goto LAB_018b3668;
      }
    }
    uVar11 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 2);
    if ((int)uVar13 < 2) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      iVar16 = uVar13 - 1;
      do {
        uVar1 = iVar16 + uVar14;
        if ((int)uVar1 < 0 != SCARRY4(iVar16,uVar14)) {
          uVar1 = uVar1 + 1;
        }
        uVar15 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar12 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar8) goto joined_r0x018b3330;
        if (uVar1 < uVar8) {
          uVar14 = uVar15 + 1;
        }
        else {
          iVar16 = uVar15 - 1;
        }
      } while ((int)uVar14 < iVar16);
    }
    uVar15 = uVar14;
    if (*(uint *)(lVar12 + (long)(int)uVar14 * 0x20 + 0x18) != uVar8) goto LAB_018b3334;
joined_r0x018b3330:
    if ((int)uVar15 < 0) goto LAB_018b3334;
LAB_018b3668:
    if (uVar13 <= uVar15) {
      uVar15 = 0;
    }
    (**(code **)(lVar12 + (ulong)uVar15 * 0x20))(param_2,param_3,param_4);
    uVar11 = 1;
  }
  return uVar11;
}

