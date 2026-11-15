
byte FUN_0242a0b0(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  void *__src;
  long lVar15;
  undefined4 local_2d0;
  undefined4 local_2cc;
  char *local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  char *local_270;
  int local_268;
  void *local_218;
  int local_210;
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_188;
  undefined *local_180;
  char *pcStack_178;
  undefined4 local_170 [6];
  undefined4 local_158;
  undefined4 uStack_154;
  byte local_150 [4];
  byte local_14c [4];
  undefined4 local_148;
  undefined4 local_144;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  int local_108;
  char local_104 [63];
  undefined1 local_c5;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined8 local_98 [5];
  undefined1 local_6d;
  
  puVar2 = PTR_DAT_04bb37e0;
  puVar1 = PTR_DAT_04bb2010;
  local_6d = 0;
  uVar9 = (ulong)local_b0 >> 0x20;
  local_c5 = 0;
  local_b0 = CONCAT44((uint)uVar9 & 0xffffff00,0x40);
  local_b8 = (char *)((long)&local_b0 + 4);
  local_108 = 0x40;
  local_110 = local_104;
  local_104[0] = '\0';
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  uVar8 = (uint)bVar14;
  local_148 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_144 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar8 * 0x740;
  if (7 < uVar8) {
    lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  local_11c = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_140 = PTR_DAT_04bb2010 + 0x10;
  uStack_138 = 0;
  if (7 < uVar8) {
    bVar14 = 0xff;
  }
  local_c0 = local_118;
  if ((param_2 & 1) == 0) {
    local_150[0] = bVar14;
    FUN_022cf570(&local_148,local_150);
  }
  else {
    local_11c = 0;
    local_14c[0] = bVar14;
    local_11c = FUN_022cdafc(local_14c);
    bVar14 = local_14c[0];
    if (7 < local_14c[0]) {
      bVar14 = 0xff;
    }
    local_2d0 = CONCAT31(local_2d0._1_3_,bVar14);
    uVar9 = FUN_0150e210(&local_148,&local_2d0,1);
    if ((uVar9 & 1) == 0) {
      local_11c = 0;
    }
  }
  uVar9 = FUN_0277e294(&local_148);
  pcVar10 = local_b8;
  if ((uVar9 & 1) == 0) goto LAB_0242a5c4;
  bVar5 = false;
  switch(local_11c) {
  case 1:
    goto switchD_0242a220_caseD_1;
  case 2:
    if (local_b8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_b0 < 0x16) {
        iVar13 = (int)local_b0 + -1;
      }
      memcpy(local_b8,"Player_FtrActionError",(long)iVar13);
      pcVar10[iVar13] = '\0';
    }
    if (local_110 == "FtrPickupError_ExistsVisitor") goto LAB_0242a5c4;
    pcVar10 = "FtrPickupError_ExistsVisitor";
    iVar12 = local_108 + -1;
    bVar7 = SBORROW4(local_108,0x1c);
    bVar5 = local_108 + -0x1c < 0;
    bVar6 = local_108 == 0x1c;
    iVar13 = 0x1c;
    break;
  case 3:
  case 4:
    if (local_b8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_b0 < 0x16) {
        iVar13 = (int)local_b0 + -1;
      }
      memcpy(local_b8,"Player_FtrActionError",(long)iVar13);
      pcVar10[iVar13] = '\0';
    }
    if (local_110 == "FtrIndoorOperateError_ExistsVisitor") goto LAB_0242a5c4;
    pcVar10 = "FtrIndoorOperateError_ExistsVisitor";
    iVar12 = local_108 + -1;
    bVar7 = SBORROW4(local_108,0x23);
    bVar5 = local_108 + -0x23 < 0;
    bVar6 = local_108 == 0x23;
    iVar13 = 0x23;
    break;
  case 5:
    if (local_b8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_b0 < 0x16) {
        iVar13 = (int)local_b0 + -1;
      }
      memcpy(local_b8,"Player_FtrActionError",(long)iVar13);
      pcVar10[iVar13] = '\0';
    }
    if (local_110 == "WallFtrPickupError_ExistsOtherP") goto LAB_0242a5c4;
    pcVar10 = "WallFtrPickupError_ExistsOtherP";
    iVar12 = local_108 + -1;
    bVar7 = SBORROW4(local_108,0x1f);
    bVar5 = local_108 + -0x1f < 0;
    bVar6 = local_108 == 0x1f;
    iVar13 = 0x1f;
    break;
  case 6:
    if (local_b8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_b0 < 0x16) {
        iVar13 = (int)local_b0 + -1;
      }
      memcpy(local_b8,"Player_FtrActionError",(long)iVar13);
      pcVar10[iVar13] = '\0';
    }
    if (local_110 == "CeilingFtrPickupError_ExistsOtherP") goto LAB_0242a5c4;
    pcVar10 = "CeilingFtrPickupError_ExistsOtherP";
    iVar12 = local_108 + -1;
    bVar7 = SBORROW4(local_108,0x22);
    bVar5 = local_108 + -0x22 < 0;
    bVar6 = local_108 == 0x22;
    iVar13 = 0x22;
    break;
  case 7:
    if (local_b8 != "Player_FtrActionError") {
      iVar13 = 0x15;
      if ((int)local_b0 < 0x16) {
        iVar13 = (int)local_b0 + -1;
      }
      memcpy(local_b8,"Player_FtrActionError",(long)iVar13);
      pcVar10[iVar13] = '\0';
    }
    if (local_110 == "RugPickupError_ExistsOtherP") goto LAB_0242a5c4;
    pcVar10 = "RugPickupError_ExistsOtherP";
    iVar12 = local_108 + -1;
    bVar7 = SBORROW4(local_108,0x1b);
    bVar5 = local_108 + -0x1b < 0;
    bVar6 = local_108 == 0x1b;
    iVar13 = 0x1b;
    break;
  default:
    bVar14 = *(byte *)(param_1 + 0x1ee8);
    local_2b8 = puVar1 + 0x10;
    local_2b0 = 0;
    local_2a0 = 0;
    local_2c0 = PTR_DAT_04bbc1a0 + 0x10;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_2d0 = CONCAT31(local_2d0._1_3_,bVar14);
    local_2cc = *(undefined4 *)puVar2;
    local_2c8 = (char *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(puVar2 + 4));
    local_2a8 = local_2b8;
    uVar9 = FUN_0150ee60(&local_2d0);
    puVar3 = PTR_DAT_04bb43c0;
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    local_158 = local_148;
    uStack_154 = local_144;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_158);
    if (*(long *)puVar3 == 0) {
LAB_0242a5c4:
      bVar5 = false;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0242a5c4;
      local_170[0] = 0;
      uVar9 = FUN_0232697c((byte *)(param_1 + 0x1ee8),&local_158,local_170);
      FUN_01ad5d04(local_170,&local_158);
      bVar5 = false;
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_01ae59b0(local_170);
        if (((((uVar9 & 1) == 0) || (uVar9 = FUN_01ae89e0(local_170), (uVar9 & 1) != 0)) ||
            (uVar9 = FUN_01ae887c(local_170), (uVar9 & 1) != 0)) ||
           ((uVar9 = FUN_01ae8b58(local_170), (uVar9 & 1) != 0 ||
            (uVar9 = FUN_01ae893c(local_170), (uVar9 & 1) != 0)))) goto LAB_0242a5c4;
        FUN_006e43a0(&local_c0,&DAT_054c2648);
        local_180 = PTR_DAT_04bb2020 + 0x10;
        pcStack_178 = "PickupFtr_FullItem";
        FUN_006e43a0(&local_118,&local_180);
        bVar5 = true;
      }
    }
    goto switchD_0242a220_caseD_1;
  }
  pcVar4 = local_110;
  if (bVar6 || bVar5 != bVar7) {
    iVar13 = iVar12;
  }
  memcpy(local_110,pcVar10,(long)iVar13);
  bVar5 = false;
  pcVar4[iVar13] = '\0';
switchD_0242a220_caseD_1:
  if (*local_b8 == '\0') {
    bVar6 = false;
    bVar7 = true;
  }
  else {
    bVar7 = *local_110 == '\0';
    bVar6 = !bVar7;
    if ((*local_110 != '\0') && ((param_3 & 1) == 0)) {
      FUN_0257a010(&local_2d0);
      pcVar10 = local_2c8;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      pcVar4 = local_b8;
      if (pcVar10 != local_b8) {
        (**(code **)(local_c0 + 0x18))(&local_c0);
        lVar11 = 0;
        do {
          if (local_b8[lVar11] == '\0') goto LAB_0242a8b8;
          if (local_b8[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0242a8b8;
          }
          if (local_b8[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0242a8b8;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0242a8b8:
        iVar13 = (int)lVar11;
        if ((int)local_2c0 <= (int)lVar11) {
          iVar13 = (int)local_2c0 + -1;
        }
        memcpy(pcVar10,pcVar4,(long)iVar13);
        pcVar10[iVar13] = '\0';
      }
      (**(code **)(local_118 + 0x18))(&local_118);
      pcVar10 = local_110;
      if (local_270 != local_110) {
        (**(code **)(local_118 + 0x18))(&local_118);
        lVar11 = 0;
        do {
          if (local_110[lVar11] == '\0') goto LAB_0242a95c;
          if (local_110[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0242a95c;
          }
          if (local_110[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0242a95c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0242a95c:
        iVar13 = (int)lVar11;
        if (local_268 <= (int)lVar11) {
          iVar13 = local_268 + -1;
        }
        memcpy(local_270,pcVar10,(long)iVar13);
        local_270[iVar13] = '\0';
      }
      puVar1 = PTR_PTR_04bb2238;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      __src = *(void **)(puVar1 + 8);
      if (local_218 != __src) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
        lVar11 = 0;
        do {
          if (*(char *)(*(long *)(puVar1 + 8) + lVar11) == '\0') goto LAB_0242aa00;
          lVar15 = *(long *)(puVar1 + 8) + lVar11;
          if (*(char *)(lVar15 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0242aa00;
          }
          if (*(char *)(lVar15 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0242aa00;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0242aa00:
        iVar13 = (int)lVar11;
        if (local_210 <= (int)lVar11) {
          iVar13 = local_210 + -1;
        }
        memcpy(local_218,__src,(long)iVar13);
        *(undefined1 *)((long)local_218 + (long)iVar13) = 0;
      }
      local_1c8 = 0;
      local_1bc = 9;
      if (!bVar5) {
        local_1bc = 0xc;
      }
      local_1c0 = 0;
      local_198 = 1;
      local_194 = 1;
      local_188 = 0x3c;
      FUN_024480f0(param_1,&local_2d0);
      return 1;
    }
  }
  if (bVar7 == false) {
    return bVar6 | bVar7;
  }
  if ((param_3 & 1) != 0) {
    return bVar6 | bVar7;
  }
  local_2d0 = *(undefined4 *)puVar2;
  local_2cc = *(undefined4 *)(puVar2 + 4);
  local_2c8 = puVar1 + 0x10;
  local_2a8._1_7_ = (uint7)((ulong)local_2a8 >> 8) & 0xffffff;
  local_2c0 = (undefined *)0x0;
  local_2a8 = (undefined *)((ulong)local_2a8._1_7_ << 8);
  *(undefined4 *)(lVar11 + 0x650) = 0;
  *(undefined8 *)(lVar11 + 0x5b0) = 0x100000000;
  local_2b8 = (undefined *)0x0;
  local_2b0 = 0;
  if ((param_2 & 1) == 0) {
    uVar9 = FUN_022cf250(lVar11 + 0x658,&local_2d0,0);
    bVar14 = 0;
    if ((uVar9 & 1) == 0) goto LAB_0242a8a4;
  }
  else {
    uVar9 = FUN_022cf250(lVar11 + 0x658,&local_2d0,1);
    if ((uVar9 & 1) == 0) {
      bVar14 = 0;
      goto LAB_0242a8a4;
    }
  }
  local_c0 = *(undefined **)puVar2;
  local_a8 = 0.0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  local_98[0] = 0xfffe;
  FUN_0277d4ac(local_98);
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  local_c0 = (undefined *)CONCAT44(local_2cc,local_2d0);
  local_b8 = (char *)((ulong)(uint)local_2b8._4_4_ << 0x20);
  local_b0 = local_2b0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  uStack_a4 = (undefined4)local_2b8;
  uStack_a0 = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x1989) = (int)(local_2b8._4_4_ * 999.99994);
  iVar13 = (int)((float)local_2b0 * 4.0);
  if (0x7ffe < iVar13) {
    iVar13 = 0x7fff;
  }
  if (iVar13 < -0x7fff) {
    iVar13 = -0x8000;
  }
  *(short *)(param_1 + 0x198d) = (short)iVar13;
  *(int *)(param_1 + 0x198f) = (int)(local_2b0._4_4_ * 999.99994);
  iVar13 = (int)(local_a8 * 999.99994);
  if (0x7ffe < iVar13) {
    iVar13 = 0x7fff;
  }
  if (iVar13 < -0x7fff) {
    iVar13 = -0x8000;
  }
  *(short *)(param_1 + 0x1993) = (short)iVar13;
  *(undefined1 *)(param_1 + 0x1988) = 0;
  *(undefined **)(param_1 + 0x1980) = local_c0;
  *(char *)(param_1 + 0x1996) = (char)local_2b8;
  *(undefined1 *)(param_1 + 0x1995) = 0;
  *(undefined1 *)(param_1 + 0x1997) = local_9c;
  *(undefined8 *)(param_1 + 0x1998) = local_98[0];
  local_118 = (undefined *)CONCAT44((int)((ulong)local_118 >> 0x20),0x22);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar11 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar11,0x22);
  bVar14 = 1;
  bVar6 = true;
LAB_0242a8a4:
  return bVar14 & bVar6;
}

