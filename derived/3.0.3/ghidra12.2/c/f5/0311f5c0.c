
void FUN_0311f5c0(long param_1,byte *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  char local_ac [63];
  undefined1 local_6d;
  undefined1 local_64 [4];
  
  **(undefined1 **)(param_1 + 0x268) = 0;
  uVar14 = 0;
  **(undefined1 **)(param_1 + 0x460) = 0;
  lVar1 = param_1 + 0x250;
  **(undefined1 **)(param_1 + 0x658) = 0;
  puVar6 = PTR_DAT_04bb2f70;
  **(undefined1 **)(param_1 + 0x850) = 0;
  puVar5 = PTR_DAT_04bb2bc0;
  puVar4 = PTR_DAT_04bb2020;
  **(undefined1 **)(param_1 + 0xa48) = 0;
  puVar2 = puVar5 + 0x10;
  **(undefined1 **)(param_1 + 0xc40) = 0;
  **(undefined1 **)(param_1 + 0xe38) = 0;
LAB_0311f6a8:
  if (*(long *)(param_1 + 0x1068) == 0) {
    FUN_038d1270(lVar1 + uVar14 * 0x1f8 + 0x10,&DAT_0409e973,"Layout_PlayerIcon_PlayerIcon");
  }
  switch(uVar14 & 0xffffffff) {
  case 0:
    FUN_038d13f0(lVar1 + uVar14 * 0x1f8 + 0x10,"Face00");
    goto switchD_0311f6e0_default;
  case 1:
    pcVar7 = "Hair%02d";
    lVar11 = lVar1 + uVar14 * 0x1f8 + 0x10;
    uVar8 = (uint)*param_2;
    break;
  case 2:
    pcVar7 = "Mouth%02d";
    lVar11 = lVar1 + uVar14 * 0x1f8 + 0x10;
    uVar8 = (uint)param_2[5];
    break;
  case 3:
    if ((ulong)param_2[2] < 0x34) {
      local_6d = 0;
      local_b0 = 0x40;
      pcVar7 = *(char **)(PTR_DAT_04bb5a38 + (ulong)param_2[2] * 8 + 400);
      local_b8 = local_ac;
      puVar3 = PTR_DAT_04bb2f70;
      if (local_ac != pcVar7) goto LAB_0311f7dc;
    }
    else {
      pcVar7 = "";
      puVar3 = puVar6;
LAB_0311f7dc:
      local_c0 = puVar3 + 0x10;
      local_6d = 0;
      local_b0 = 0x40;
      lVar11 = 0;
      do {
        if (pcVar7[lVar11] == '\0') {
LAB_0311f884:
          iVar9 = (int)lVar11;
joined_r0x0311f888:
          if (0x3f < iVar9) {
            iVar9 = 0x3f;
          }
          goto LAB_0311f890;
        }
        if (pcVar7[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0311f884;
        }
        if (pcVar7[lVar11 + 2] == '\0') {
          iVar9 = (int)lVar11 + 2;
          goto joined_r0x0311f888;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar9 = 0;
LAB_0311f890:
      local_b8 = local_ac;
      memcpy(local_ac,pcVar7,(long)iVar9);
      local_ac[iVar9] = '\0';
    }
    iVar9 = local_b0;
    pcVar7 = local_b8;
    local_c0 = puVar2;
    if (*local_b8 == '\0') goto switchD_0311f6e0_default;
    local_64[0] = 0;
    local_c8 = "Eye";
    local_b8[(long)local_b0 + -1] = '\0';
    local_d0 = puVar4 + 0x10;
    (**(code **)(puVar5 + 0x28))(&local_c0);
    lVar11 = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_0311f9fc;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0311f9fc;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0311f9fc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0311f9fc:
    FUN_038d0770(pcVar7,0,iVar9,pcVar7,lVar11,&local_d0,PTR_PTR_04bb2238,local_64);
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "Bite";
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar11 = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_0311fb20;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0311fb20;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0311fb20;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0311fb20:
    (**(code **)(local_d0 + 0x18))(&local_d0);
    lVar12 = 0;
    do {
      iVar9 = (int)lVar11;
      if (local_c8[lVar12] == '\0') {
LAB_0311fbc8:
        iVar10 = (int)lVar12;
        if (iVar9 < iVar10) goto LAB_0311fe88;
LAB_0311fbe0:
        if ((int)lVar12 < 1) goto LAB_0311fc78;
        uVar15 = 0;
        goto LAB_0311fbf8;
      }
      if (local_c8[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0311fbc8;
      }
      if (local_c8[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        iVar10 = (int)lVar12;
        if (iVar10 <= iVar9) goto LAB_0311fbe0;
        goto LAB_0311fe88;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    if (-1 < iVar9) {
LAB_0311fc78:
      (**(code **)(local_d0 + 0x18))(&local_d0);
LAB_0311fd58:
      iVar9 = local_b0;
      pcVar7 = local_b8;
      local_64[0] = 0;
      local_d0 = PTR_DAT_04bb2020 + 0x10;
      local_c8 = "Bite";
      (**(code **)(local_c0 + 0x18))(&local_c0);
      pcVar13 = local_b8;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar11 = 0;
      do {
        if (local_b8[lVar11] == '\0') goto LAB_0311fe60;
        if (local_b8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0311fe60;
        }
        if (local_b8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0311fe60;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0311fe60:
      FUN_038d0770(pcVar7,0,iVar9,pcVar13,lVar11,&local_d0,PTR_PTR_04bb2238,local_64);
    }
    goto LAB_0311fe88;
  case 4:
    if ((ulong)param_2[2] < 0x34) {
      local_6d = 0;
      local_b0 = 0x40;
      pcVar7 = *(char **)(PTR_DAT_04bb5a38 + (ulong)param_2[2] * 8 + 400);
      local_b8 = local_ac;
      if (local_ac != pcVar7) goto LAB_0311f848;
    }
    else {
      pcVar7 = "";
LAB_0311f848:
      local_6d = 0;
      local_b0 = 0x40;
      local_c0 = PTR_DAT_04bb2f70 + 0x10;
      lVar11 = 0;
      do {
        if (pcVar7[lVar11] == '\0') {
LAB_0311f924:
          iVar9 = (int)lVar11;
joined_r0x0311f928:
          if (0x3f < iVar9) {
            iVar9 = 0x3f;
          }
          goto LAB_0311f930;
        }
        if (pcVar7[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0311f924;
        }
        if (pcVar7[lVar11 + 2] == '\0') {
          iVar9 = (int)lVar11 + 2;
          goto joined_r0x0311f928;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar9 = 0;
LAB_0311f930:
      local_b8 = local_ac;
      memcpy(local_ac,pcVar7,(long)iVar9);
      local_ac[iVar9] = '\0';
    }
    iVar9 = local_b0;
    pcVar7 = local_b8;
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    if (*local_b8 == '\0') goto switchD_0311f6e0_default;
    local_64[0] = 0;
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "Eye";
    local_b8[(long)local_b0 + -1] = '\0';
    (**(code **)(PTR_DAT_04bb2bc0 + 0x28))(&local_c0);
    lVar11 = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_0311fa8c;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0311fa8c;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0311fa8c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0311fa8c:
    FUN_038d0770(pcVar7,0,iVar9,pcVar7,lVar11,&local_d0,PTR_PTR_04bb2238,local_64);
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "Bite";
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar11 = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_0311fb7c;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0311fb7c;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0311fb7c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0311fb7c:
    (**(code **)(local_d0 + 0x18))(&local_d0);
    lVar12 = 0;
    do {
      iVar9 = (int)lVar11;
      if (local_c8[lVar12] == '\0') {
LAB_0311fc90:
        iVar10 = (int)lVar12;
        if (iVar9 < iVar10) goto LAB_0311fee8;
LAB_0311fca8:
        if ((int)lVar12 < 1) goto LAB_0311fd38;
        uVar15 = 0;
        goto LAB_0311fcc0;
      }
      if (local_c8[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0311fc90;
      }
      if (local_c8[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        iVar10 = (int)lVar12;
        if (iVar10 <= iVar9) goto LAB_0311fca8;
        goto LAB_0311fee8;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    if (-1 < iVar9) {
LAB_0311fd38:
      (**(code **)(local_d0 + 0x18))(&local_d0);
LAB_0311fddc:
      iVar9 = local_b0;
      pcVar7 = local_b8;
      local_64[0] = 0;
      local_d0 = PTR_DAT_04bb2020 + 0x10;
      local_c8 = "Bite";
      (**(code **)(local_c0 + 0x18))(&local_c0);
      pcVar13 = local_b8;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar11 = 0;
      do {
        if (local_b8[lVar11] == '\0') goto LAB_0311fec0;
        if (local_b8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0311fec0;
        }
        if (local_b8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0311fec0;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0311fec0:
      FUN_038d0770(pcVar7,0,iVar9,pcVar13,lVar11,&local_d0,PTR_PTR_04bb2238,local_64);
    }
    goto LAB_0311fee8;
  case 5:
    pcVar7 = "Nose%02d";
    lVar11 = lVar1 + uVar14 * 0x1f8 + 0x10;
    uVar8 = (uint)param_2[4];
    break;
  case 6:
    pcVar7 = "Cheek%02d";
    lVar11 = lVar1 + uVar14 * 0x1f8 + 0x10;
    uVar8 = (uint)param_2[6];
    break;
  default:
    goto switchD_0311f6e0_default;
  }
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar8);
  FUN_038d13f0(lVar11,pcVar7,uVar8);
  goto switchD_0311f6e0_default;
  while( true ) {
    pcVar13 = local_c8;
    lVar11 = lVar12;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (pcVar7[uVar15] != *pcVar13) break;
      if ((pcVar7[uVar15] == '\0') || (pcVar7 = pcVar7 + 1, pcVar13 = pcVar13 + 1, lVar11 == 0))
      goto LAB_0311fdd0;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == (iVar9 - iVar10) + 1) break;
LAB_0311fcc0:
    pcVar7 = local_b8;
    pcVar13 = local_b8 + uVar15;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (pcVar13 == local_c8) {
LAB_0311fdd0:
      if ((int)uVar15 != -1) goto LAB_0311fddc;
      break;
    }
  }
LAB_0311fee8:
  (**(code **)(local_c0 + 0x18))(&local_c0);
  pcVar7 = "Pupil%02s";
  goto LAB_0311ff10;
  while( true ) {
    pcVar13 = local_c8;
    lVar11 = lVar12;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (pcVar7[uVar15] != *pcVar13) break;
      if ((pcVar7[uVar15] == '\0') || (pcVar7 = pcVar7 + 1, pcVar13 = pcVar13 + 1, lVar11 == 0))
      goto LAB_0311fd4c;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == (iVar9 - iVar10) + 1) break;
LAB_0311fbf8:
    pcVar7 = local_b8;
    pcVar13 = local_b8 + uVar15;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (pcVar13 == local_c8) {
LAB_0311fd4c:
      if ((int)uVar15 != -1) goto LAB_0311fd58;
      break;
    }
  }
LAB_0311fe88:
  (**(code **)(local_c0 + 0x18))(&local_c0);
  pcVar7 = "Eye%02s";
LAB_0311ff10:
  FUN_038d13f0(lVar1 + uVar14 * 0x1f8 + 0x10,pcVar7,local_b8);
switchD_0311f6e0_default:
  uVar14 = uVar14 + 1;
  if (uVar14 == 7) {
    return;
  }
  goto LAB_0311f6a8;
}

