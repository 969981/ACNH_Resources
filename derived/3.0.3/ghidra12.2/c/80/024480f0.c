
void FUN_024480f0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint *puVar4;
  undefined1 uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  char *__src;
  undefined1 *puVar11;
  long *plVar12;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined1 *local_1b8;
  int local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined *local_168;
  undefined1 *local_160;
  int local_158;
  undefined1 local_154 [63];
  undefined1 local_115;
  undefined **local_110;
  char *local_108;
  int local_100;
  char local_fc [63];
  undefined1 local_bd;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_6c;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  local_1b0 = 0x40;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  local_16d = 0;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  local_1c0 = puVar1;
  local_1b8 = local_1ac;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar10 = (undefined1 *)param_2[1];
  if (local_1ac != puVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = 0;
    do {
      if (*(char *)(param_2[1] + lVar9) == '\0') goto LAB_0244820c;
      lVar3 = param_2[1] + lVar9;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0244820c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0244820c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0244820c:
    iVar8 = (int)lVar9;
    if (local_1b0 <= (int)lVar9) {
      iVar8 = local_1b0 + -1;
    }
    memcpy(local_1ac,puVar10,(long)iVar8);
    local_1ac[iVar8] = 0;
  }
  local_158 = 0x40;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_115 = 0;
  plVar12 = param_2 + 0xb;
  local_1c0 = puVar2;
  local_168 = puVar1;
  local_160 = local_154;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar10 = (undefined1 *)param_2[0xc];
  if (local_154 != puVar10) {
    (**(code **)(param_2[0xb] + 0x18))(plVar12);
    lVar9 = 0;
    do {
      if (*(char *)(param_2[0xc] + lVar9) == '\0') goto LAB_024482cc;
      lVar3 = param_2[0xc] + lVar9;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_024482cc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_024482cc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_024482cc:
    iVar8 = (int)lVar9;
    if (local_158 <= (int)lVar9) {
      iVar8 = local_158 + -1;
    }
    memcpy(local_154,puVar10,(long)iVar8);
    local_154[iVar8] = 0;
  }
  local_100 = 0x40;
  local_bd = 0;
  plVar12 = param_2 + 0x16;
  local_110 = (undefined **)(PTR_DAT_04bb2f70 + 0x10);
  local_168 = puVar2;
  local_108 = local_fc;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  __src = (char *)param_2[0x17];
  if (local_fc != __src) {
    (**(code **)(param_2[0x16] + 0x18))(plVar12);
    lVar9 = 0;
    do {
      if (*(char *)(param_2[0x17] + lVar9) == '\0') goto LAB_02448390;
      lVar3 = param_2[0x17] + lVar9;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_02448390;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_02448390;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_02448390:
    iVar8 = (int)lVar9;
    if (local_100 <= (int)lVar9) {
      iVar8 = local_100 + -1;
    }
    memcpy(local_fc,__src,(long)iVar8);
    local_fc[iVar8] = '\0';
  }
  uStack_98 = (undefined4)param_2[0x25];
  local_110 = &PTR_LAB_048fb9f8;
  local_b8 = param_2[0x21];
  local_b0 = param_2[0x22];
  local_a8 = param_2[0x23];
  local_a0 = (float)param_2[0x24];
  local_9c = (undefined4)((ulong)param_2[0x24] >> 0x20);
  local_94 = *(undefined8 *)((long)param_2 + 300);
  local_8c = *(undefined2 *)((long)param_2 + 0x134);
  local_88 = (undefined4)param_2[0x27];
  uStack_84 = (undefined4)((ulong)param_2[0x27] >> 0x20);
  local_80 = (undefined2)param_2[0x28];
  local_7e = *(undefined2 *)((long)param_2 + 0x142);
  local_7c = *(undefined4 *)((long)param_2 + 0x144);
  local_78 = (undefined4)param_2[0x29];
  local_74 = *(undefined1 *)((long)param_2 + 0x14c);
  if ((9 < *(uint *)(param_1 + 0x1810)) ||
     ((1 << (ulong)(*(uint *)(param_1 + 0x1810) & 0x1f) & 0x222U) == 0)) {
    local_b8 = local_b8 & 0xffffffffffffff00;
  }
  if (*local_108 == '\0') {
    uVar7 = 0;
  }
  else {
    local_108[(long)local_100 + -1] = '\0';
    uVar7 = FUN_006bd550(local_108,0);
  }
  *(undefined4 *)(param_1 + 0x1980) = uVar7;
  *(undefined1 *)(param_1 + 0x1984) = (undefined1)local_b8;
  local_1c4 = *(undefined4 *)(param_1 + 0x230);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_6c = 1;
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 1 & 1) != 0) {
      local_6c._2_2_ = 0;
      goto LAB_02448508;
    }
  }
  FUN_016f742c(&local_6c,&local_1c4,1);
LAB_02448508:
  *(undefined2 *)(param_1 + 0x1985) = local_6c._2_2_;
  local_6c = 0;
  *(int *)(param_1 + 0x1987) = (int)((float)local_a8 * 999.99994);
  iVar8 = (int)(local_a8._4_4_ * 4.0);
  if (0x7ffe < iVar8) {
    iVar8 = 0x7fff;
  }
  if (iVar8 < -0x7fff) {
    iVar8 = -0x8000;
  }
  *(short *)(param_1 + 0x198b) = (short)iVar8;
  *(int *)(param_1 + 0x198d) = (int)(local_a0 * 999.99994);
  *(ulong *)(param_1 + 0x1991) = CONCAT44(uStack_98,local_9c);
  *(undefined1 *)(param_1 + 0x199d) = 0;
  *(undefined2 *)(param_1 + 0x199a) = (undefined2)local_b0;
  *(undefined1 *)(param_1 + 0x199c) = local_8c._1_1_;
  puVar11 = *(undefined1 **)(param_1 + 0x9f0);
  (**(code **)(local_1c0 + 0x18))(&local_1c0);
  puVar10 = local_1b8;
  if (puVar11 != local_1b8) {
    (**(code **)(local_1c0 + 0x18))(&local_1c0);
    lVar9 = 0;
    do {
      if (local_1b8[lVar9] == '\0') goto LAB_024485f0;
      if (local_1b8[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_024485f0;
      }
      if (local_1b8[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_024485f0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_024485f0:
    iVar8 = (int)lVar9;
    if (*(int *)(param_1 + 0x9f8) <= (int)lVar9) {
      iVar8 = *(int *)(param_1 + 0x9f8) + -1;
    }
    memcpy(puVar11,puVar10,(long)iVar8);
    puVar11[iVar8] = 0;
  }
  puVar11 = *(undefined1 **)(param_1 + 0xa48);
  (**(code **)(local_168 + 0x18))(&local_168);
  puVar10 = local_160;
  if (puVar11 != local_160) {
    (**(code **)(local_168 + 0x18))(&local_168);
    lVar9 = 0;
    do {
      if (local_160[lVar9] == '\0') goto LAB_02448690;
      if (local_160[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_02448690;
      }
      if (local_160[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_02448690;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_02448690:
    iVar8 = (int)lVar9;
    if (*(int *)(param_1 + 0xa50) <= (int)lVar9) {
      iVar8 = *(int *)(param_1 + 0xa50) + -1;
    }
    memcpy(puVar11,puVar10,(long)iVar8);
    puVar11[iVar8] = 0;
  }
  *(undefined4 *)(param_1 + 0xa98) = local_b0._4_4_;
  *(undefined1 *)(param_1 + 0xaa0) = (undefined1)local_88;
  *(undefined4 *)(param_1 + 0xa9c) = local_b8._4_4_;
  *(undefined1 *)(param_1 + 0xab8) = (undefined1)local_94;
  *(ulong *)(param_1 + 0xaa4) = CONCAT26(local_7e,CONCAT24(local_80,uStack_84));
  *(undefined4 *)(param_1 + 0xaac) = local_7c;
  *(undefined4 *)(param_1 + 0xab0) = local_78;
  *(undefined1 *)(param_1 + 0xab4) = local_74;
  *(undefined4 *)(param_1 + 0xabc) = local_94._4_4_;
  *(undefined1 *)(param_1 + 0xac1) = (undefined1)local_8c;
  uVar5 = local_b0._2_1_;
  if (*(char *)((long)param_2 + 0x111) == '\0') {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0xac0) = uVar5;
  local_6c = 0x18;
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
  lVar9 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar9 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar9,0x18);
  return;
}

