
void FUN_028b0920(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  byte bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  undefined8 uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 local_16a8;
  undefined8 local_16a0;
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  undefined *local_f38;
  undefined1 auStack_f30 [1876];
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined8 local_7c0;
  undefined8 local_7b8;
  
  puVar11 = PTR_DAT_04bb37e0;
  if ((char)param_2[5] == '\0' && *param_2 == 0) {
    return;
  }
  puVar1 = (undefined1 *)(param_1 + 0x16c2);
  uVar5 = PTR_DAT_04bb37e0[2];
  uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
  *puVar1 = uVar5;
  *(undefined2 *)(param_1 + 0x16c0) = uVar7;
  *(undefined2 *)(param_1 + 0x16c8) = uVar7;
  uVar6 = puVar11[3];
  *(undefined1 *)(param_1 + 0x16c3) = uVar6;
  uVar4 = *(undefined4 *)(puVar11 + 4);
  *(undefined1 *)(param_1 + 0x16ca) = uVar5;
  *(undefined1 *)(param_1 + 0x16cb) = uVar6;
  *(undefined4 *)(param_1 + 0x16c4) = uVar4;
  *(undefined4 *)(param_1 + 0x16cc) = uVar4;
  puVar11 = PTR_DAT_04bb46b0;
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 == 0) {
LAB_028b09f8:
    lVar23 = 0;
  }
  else {
    puVar24 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar24 + 0x38))();
      lVar23 = 0;
      if (lVar17 != 0) {
        lVar23 = lVar17 + 0x70;
      }
    }
    else {
      if (puVar24 == (undefined8 *)0x0) goto LAB_028b09f8;
      lVar23 = 0;
      if ((long *)puVar24[0x26] != (long *)0x0) {
        lVar23 = (**(code **)(*(long *)puVar24[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar23 + 0x1a0b70) == (long *)0x0) {
    uVar18 = 0;
  }
  else {
    puVar24 = (undefined8 *)**(long **)(lVar23 + 0x1a0b70);
    uVar18 = 0;
    if (puVar24 != (undefined8 *)0x0) {
      uVar18 = (**(code **)*puVar24)();
    }
  }
  uVar15 = *(uint *)(*(long *)(lVar23 + 0x1a0b58) + *(long *)(lVar23 + 0x1a0b50));
  if (3 < uVar15) {
    uVar15 = 0;
  }
  local_f38 = (undefined *)CONCAT44(local_f38._4_4_,uVar15);
  if ((((uVar18 & 1) != 0) && (*(long *)(lVar23 + 0x1a0b70) != 0)) &&
     (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1a0b70) + 8), puVar24 != (undefined8 *)0x0)) {
    (**(code **)*puVar24)();
  }
  puVar25 = PTR_DAT_04bbfe60;
  if (uVar15 == 2) {
    bVar9 = false;
    uVar15 = 1;
  }
  else {
    if (uVar15 != 3) {
      return;
    }
    uVar15 = 2;
    bVar9 = true;
  }
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7dc = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar19 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar19,0,0x754);
  local_7c0 = (undefined **)((ulong)local_7c0._4_4_ << 0x20);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,0);
  puVar10 = PTR_DAT_04bb2020;
  if (lVar23 == 0) {
    bVar12 = false;
  }
  else {
    local_16a8 = PTR_DAT_04bb2020 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    bVar12 = iVar14 != 0;
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,1);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,1);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,2);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,2);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,3);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,3);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,4);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,4);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,5);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,6);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,6);
  if (lVar23 != 0) {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
  }
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,7);
  lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,7);
  if (lVar23 == 0) {
    if (!bVar12) goto LAB_028b0e14;
LAB_028b0ccc:
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "ImmQ_B_OutdoorPattern";
    iVar14 = FUN_0273ea30(&local_16a8);
    if (iVar14 == 0) {
      local_16a8 = (undefined *)0xc85;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0xa2d;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0x65a;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0x65b;
    }
    else {
      local_16a8 = (undefined *)0xc85;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0xa2d;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0xa1a;
      FUN_0277d4ac(&local_16a8);
      FUN_0277dedc(&local_16a8);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_16a8);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_16a8 = (undefined *)0xd44;
    }
    FUN_0277d4ac(&local_16a8);
    FUN_0277dedc(&local_16a8);
    lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
    puVar24 = &local_16a8;
  }
  else {
    local_16a8 = puVar10 + 0x10;
    local_16a0 = "DailyQuestFirstFivePointToday";
    iVar14 = FUN_0274ce10(&local_7c0,&local_16a8);
    if (iVar14 != 0) {
      bVar12 = true;
    }
    if (bVar12) goto LAB_028b0ccc;
LAB_028b0e14:
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,0);
    puVar10 = PTR_DAT_04bb46f0;
    puVar25 = PTR_DAT_04bb27d0;
    if (lVar23 != 0) {
      lVar17 = *(long *)PTR_DAT_04bb46f0;
      lVar23 = **(long **)PTR_DAT_04bb27d0;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b0e80:
        if (*(long *)puVar11 == 0) goto LAB_028b0fe8;
        uVar20 = FUN_026eec4c(*(long *)puVar11,0);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b0e80;
LAB_028b0fe8:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,1);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b107c:
        if (*(long *)puVar11 == 0) goto LAB_028b1094;
        uVar20 = FUN_026eec4c(*(long *)puVar11,1);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b107c;
LAB_028b1094:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,2);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b1128:
        if (*(long *)puVar11 == 0) goto LAB_028b1140;
        uVar20 = FUN_026eec4c(*(long *)puVar11,2);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b1128;
LAB_028b1140:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,3);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b11d4:
        if (*(long *)puVar11 == 0) goto LAB_028b11ec;
        uVar20 = FUN_026eec4c(*(long *)puVar11,3);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b11d4;
LAB_028b11ec:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,4);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b1280:
        if (*(long *)puVar11 == 0) goto LAB_028b1298;
        uVar20 = FUN_026eec4c(*(long *)puVar11,4);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b1280;
LAB_028b1298:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,5);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b132c:
        if (*(long *)puVar11 == 0) goto LAB_028b1344;
        uVar20 = FUN_026eec4c(*(long *)puVar11,5);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b132c;
LAB_028b1344:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,6);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b13d8:
        if (*(long *)puVar11 == 0) goto LAB_028b13f0;
        uVar20 = FUN_026eec4c(*(long *)puVar11,6);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b13d8;
LAB_028b13f0:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    lVar23 = FUN_026eec4c(*(undefined8 *)puVar11,7);
    if (lVar23 != 0) {
      lVar17 = *(long *)puVar10;
      lVar23 = **(long **)puVar25;
      bVar8 = *(byte *)(lVar23 + 0x473);
      if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_028b1484:
        if (*(long *)puVar11 == 0) goto LAB_028b149c;
        uVar20 = FUN_026eec4c(*(long *)puVar11,7);
      }
      else {
        pbVar3 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
        if (7 < bVar8) {
          pbVar3 = (byte *)(lVar23 + 0x48);
        }
        if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar23 + 0x472) == bVar8)) goto LAB_028b1484;
LAB_028b149c:
        uVar20 = 0;
      }
      FUN_02630570(lVar17,&local_f38,uVar20,lVar17 + 0xe98e0);
      FUN_02631090(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
      FUN_026313d0(*(long *)puVar10,&local_f38,*(long *)puVar10 + 0xe98e0);
    }
    local_16a8 = PTR_DAT_04bbfe60 + 0x10;
    memset(&local_16a0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_f4c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
    local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
    local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
    pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
    memset(pvVar19,0,0x754);
    local_7c8 = 0;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = (char *)&local_7c8;
    FUN_008a1ba0(&local_16a8,&local_7c0);
    local_7c0 = &PTR_FUN_049ff448;
    local_7c8 = 0x77;
    local_7b8 = (char *)&local_7c8;
    FUN_008a1ba0(&local_16a8,&local_7c0);
    local_7c0 = &PTR_FUN_049ff448;
    local_7c8 = 0x29;
    local_7b8 = (char *)&local_7c8;
    FUN_008a1ba0(&local_16a8,&local_7c0);
    pvVar19 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
    lVar17 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
    puVar11 = PTR_DAT_04bb2020;
    for (lVar23 = 0;
        *(uint *)((long)&local_7c0 + lVar23) =
             *(uint *)(lVar17 + lVar23) & *(uint *)((long)pvVar19 + lVar23), lVar23 != 0x750;
        lVar23 = lVar23 + 8) {
      *(uint *)((long)&local_7c0 + lVar23 + 4) =
           *(uint *)(lVar17 + lVar23 + 4) & *(uint *)((long)pvVar19 + lVar23 + 4);
    }
    memcpy(pvVar19,&local_7c0,0x754);
    *(uint *)((long)pvVar19 + 0x750) = *(uint *)((long)pvVar19 + 0x750) & 0xffffff;
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    puVar25 = PTR_DAT_04bbfe60;
    lVar23 = 0;
    uVar13 = 0;
    do {
      puVar22 = (uint *)(lVar17 + lVar23);
      lVar23 = lVar23 + 4;
      uVar16 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uVar13 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + uVar13;
    } while (lVar23 != 0x754);
    if (uVar15 <= uVar13) goto LAB_028b1984;
    local_7b8 = "ImmQ_B_OutdoorPattern";
    local_7c0 = (undefined **)(puVar11 + 0x10);
    iVar14 = FUN_0273ea30(&local_7c0);
    if (iVar14 == 0) {
      local_7c0 = (undefined **)0xc85;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0xa2d;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0x65a;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0x65b;
    }
    else {
      local_7c0 = (undefined **)0xc85;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0xa2d;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0xa1a;
      FUN_0277d4ac(&local_7c0);
      FUN_0277dedc(&local_7c0);
      lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar15 = FUN_0277d6c4(&local_7c0);
      if ((uVar15 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
        *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
      }
      local_7c0 = (undefined **)0xd44;
    }
    FUN_0277d4ac(&local_7c0);
    FUN_0277dedc(&local_7c0);
    lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
    puVar24 = &local_7c0;
  }
  uVar15 = FUN_0277d6c4(puVar24);
  if ((uVar15 >> 3 & 0x1fff) < 0x753) {
    lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
    *(uint *)(lVar23 + lVar17) = *(uint *)(lVar23 + lVar17) | 1 << (ulong)(uVar15 & 0x1f);
  }
LAB_028b1984:
  puVar11 = PTR_DAT_04bb43c0;
  if (bVar9) {
    lVar23 = 0;
    bVar9 = true;
    do {
      bVar12 = bVar9;
      local_16a8 = puVar25 + 0x10;
      memset(&local_16a0,0,0x754);
      uVar15 = nn::os::GetSystemTick();
      local_f4c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
      local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
      local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
      pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
      memset(pvVar19,0,0x754);
      if (bVar12) {
        pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
        lVar21 = (**(code **)(local_f38 + 0x20))(&local_f38);
        lVar17 = 0;
        while( true ) {
          puVar22 = (uint *)(lVar21 + 8 + lVar17);
          *(uint *)((long)&local_7c0 + lVar17) = puVar22[-2] | *(uint *)((long)pvVar19 + lVar17);
          if (lVar17 == 0x750) break;
          *(uint *)((long)&local_7c0 + lVar17 + 4) =
               puVar22[-1] | *(uint *)((long)pvVar19 + lVar17 + 4);
          *(uint *)((long)&local_7b8 + lVar17) = *puVar22 | *(uint *)((long)pvVar19 + lVar17 + 8);
          *(uint *)((long)&local_7b8 + lVar17 + 4) =
               puVar22[1] | *(uint *)((long)pvVar19 + lVar17 + 0xc);
          lVar17 = lVar17 + 0x10;
        }
        memcpy(pvVar19,&local_7c0,0x754);
        uVar15 = 0;
        *(uint *)((long)pvVar19 + 0x750) = *(uint *)((long)pvVar19 + 0x750) & 0xffffff;
        local_7c0 = &PTR_FUN_049ff740;
        local_7b8 = (char *)CONCAT44(local_7b8._4_4_,3999);
        do {
          (**(code **)(local_16a8 + 0x10))(&local_7c8,&local_16a8,uVar15);
          lVar17 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
          uVar13 = 1 << (ulong)(uVar15 & 0x1f);
          if ((*(uint *)(lVar17 + (ulong)(uVar15 >> 5) * 4) & uVar13) != 0) {
            lVar17 = *(long *)puVar11;
            uVar16 = FUN_0277d6c4(&local_7c8);
            if (*(long *)puVar11 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if (((uVar16 < *(uint *)(lVar17 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                 (uVar18 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar18 & 1) != 0))
              goto LAB_028b1cc0;
            }
            lVar17 = (**(code **)(local_16a8 + 0x18))(&local_16a8);
            lVar21 = (ulong)(uVar15 >> 5) * 4;
            *(uint *)(lVar17 + lVar21) = *(uint *)(lVar17 + lVar21) & (uVar13 ^ 0xffffffff);
          }
LAB_028b1cc0:
          uVar15 = uVar15 + 1;
        } while (uVar15 != 15000);
        lVar21 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
        lVar17 = 0;
        iVar14 = 0;
        do {
          puVar22 = (uint *)(lVar21 + lVar17);
          lVar17 = lVar17 + 4;
          uVar15 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
          uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
          uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
          uVar15 = uVar15 + (uVar15 >> 8);
          iVar14 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar14;
        } while (lVar17 != 0x754);
        if (iVar14 == 0) {
          pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
          lVar21 = (**(code **)(local_f38 + 0x20))(&local_f38);
          lVar17 = 0;
          while( true ) {
            puVar22 = (uint *)(lVar21 + 8 + lVar17);
            *(uint *)((long)&local_7c0 + lVar17) = puVar22[-2] | *(uint *)((long)pvVar19 + lVar17);
            if (lVar17 == 0x750) break;
            *(uint *)((long)&local_7c0 + lVar17 + 4) =
                 puVar22[-1] | *(uint *)((long)pvVar19 + lVar17 + 4);
            *(uint *)((long)&local_7b8 + lVar17) = *puVar22 | *(uint *)((long)pvVar19 + lVar17 + 8);
            *(uint *)((long)&local_7b8 + lVar17 + 4) =
                 puVar22[1] | *(uint *)((long)pvVar19 + lVar17 + 0xc);
            lVar17 = lVar17 + 0x10;
          }
          goto LAB_028b2080;
        }
      }
      else {
        puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar15 = *puVar22 ^ *puVar22 << 0xb;
        uVar13 = puVar22[3];
        *puVar22 = puVar22[1];
        puVar22[1] = puVar22[2];
        uVar15 = uVar15 >> 8 ^ uVar13 >> 0x13 ^ uVar15 ^ uVar13;
        puVar22[2] = uVar13;
        puVar22[3] = uVar15;
        if ((uVar15 & 1) != 0) {
          pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
          memset(pvVar19,0,0x754);
          FUN_0261d2f0(*(undefined8 *)PTR_DAT_04bb46f0,&local_16a8);
          lVar21 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
          lVar17 = 0;
          uVar15 = 0;
          do {
            puVar22 = (uint *)(lVar21 + lVar17);
            lVar17 = lVar17 + 4;
            uVar13 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
            uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
            uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
            uVar13 = uVar13 + (uVar13 >> 8);
            uVar15 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar15;
          } while (lVar17 != 0x754);
          if (4 < uVar15) goto LAB_028b209c;
          pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
          memset(pvVar19,0,0x754);
        }
        pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
        lVar21 = (**(code **)(local_f38 + 0x20))(&local_f38);
        lVar17 = 0;
        while( true ) {
          puVar22 = (uint *)(lVar21 + 8 + lVar17);
          *(uint *)((long)&local_7c0 + lVar17) = puVar22[-2] | *(uint *)((long)pvVar19 + lVar17);
          if (lVar17 == 0x750) break;
          *(uint *)((long)&local_7c0 + lVar17 + 4) =
               puVar22[-1] | *(uint *)((long)pvVar19 + lVar17 + 4);
          *(uint *)((long)&local_7b8 + lVar17) = *puVar22 | *(uint *)((long)pvVar19 + lVar17 + 8);
          *(uint *)((long)&local_7b8 + lVar17 + 4) =
               puVar22[1] | *(uint *)((long)pvVar19 + lVar17 + 0xc);
          lVar17 = lVar17 + 0x10;
        }
        memcpy(pvVar19,&local_7c0,0x754);
        uVar15 = 0;
        *(uint *)((long)pvVar19 + 0x750) = *(uint *)((long)pvVar19 + 0x750) & 0xffffff;
        local_7c0 = &PTR_FUN_049ff718;
        local_7b8 = (char *)CONCAT44(local_7b8._4_4_,4000);
        do {
          (**(code **)(local_16a8 + 0x10))(&local_7c8,&local_16a8,uVar15);
          lVar17 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
          uVar13 = 1 << (ulong)(uVar15 & 0x1f);
          if ((*(uint *)(lVar17 + (ulong)(uVar15 >> 5) * 4) & uVar13) != 0) {
            lVar17 = *(long *)puVar11;
            uVar16 = FUN_0277d6c4(&local_7c8);
            if (*(long *)puVar11 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if (((uVar16 < *(uint *)(lVar17 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                 (uVar18 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar18 & 1) != 0))
              goto LAB_028b1ed0;
            }
            lVar17 = (**(code **)(local_16a8 + 0x18))(&local_16a8);
            lVar21 = (ulong)(uVar15 >> 5) * 4;
            *(uint *)(lVar17 + lVar21) = *(uint *)(lVar17 + lVar21) & (uVar13 ^ 0xffffffff);
          }
LAB_028b1ed0:
          uVar15 = uVar15 + 1;
        } while (uVar15 != 15000);
        lVar21 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
        lVar17 = 0;
        iVar14 = 0;
        do {
          puVar22 = (uint *)(lVar21 + lVar17);
          lVar17 = lVar17 + 4;
          uVar15 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
          uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
          uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
          uVar15 = uVar15 + (uVar15 >> 8);
          iVar14 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar14;
        } while (lVar17 != 0x754);
        if (iVar14 == 0) {
          pvVar19 = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
          lVar21 = (**(code **)(local_f38 + 0x20))(&local_f38);
          lVar17 = 0;
          while( true ) {
            puVar22 = (uint *)(lVar21 + 8 + lVar17);
            *(uint *)((long)&local_7c0 + lVar17) = puVar22[-2] | *(uint *)((long)pvVar19 + lVar17);
            if (lVar17 == 0x750) break;
            *(uint *)((long)&local_7c0 + lVar17 + 4) =
                 puVar22[-1] | *(uint *)((long)pvVar19 + lVar17 + 4);
            *(uint *)((long)&local_7b8 + lVar17) = *puVar22 | *(uint *)((long)pvVar19 + lVar17 + 8);
            *(uint *)((long)&local_7b8 + lVar17 + 4) =
                 puVar22[1] | *(uint *)((long)pvVar19 + lVar17 + 0xc);
            lVar17 = lVar17 + 0x10;
          }
LAB_028b2080:
          memcpy(pvVar19,&local_7c0,0x754);
          *(uint *)((long)pvVar19 + 0x750) = *(uint *)((long)pvVar19 + 0x750) & 0xffffff;
        }
      }
LAB_028b209c:
      puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar15 = *puVar22 ^ *puVar22 << 0xb;
      uVar16 = puVar22[3];
      *puVar22 = puVar22[1];
      puVar22[1] = puVar22[2];
      uVar13 = uVar15 ^ uVar16;
      uVar15 = uVar15 >> 8 ^ uVar16 >> 0x13 ^ uVar13;
      puVar22[2] = uVar16;
      puVar22[3] = uVar15;
      uVar15 = (uVar15 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
      local_7c0 = (undefined **)CONCAT44(uVar13,uVar15);
      uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      local_7b8 = (char *)CONCAT44((uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4,uVar15);
      lVar21 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
      lVar17 = 0;
      iVar14 = 0;
      do {
        puVar22 = (uint *)(lVar21 + lVar17);
        lVar17 = lVar17 + 4;
        uVar15 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        iVar14 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar14;
      } while (lVar17 != 0x754);
      if (iVar14 == 0) {
        local_7c8 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_7c4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar21 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
        lVar17 = 0;
        uVar15 = 0;
        do {
          puVar22 = (uint *)(lVar21 + lVar17);
          lVar17 = lVar17 + 4;
          uVar13 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
          uVar13 = uVar13 + (uVar13 >> 8);
          uVar15 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar15;
        } while (lVar17 != 0x754);
        uVar13 = (uint)local_7c0 ^ (uint)local_7c0 << 0xb;
        local_7c0 = (undefined **)CONCAT44((undefined4)local_7b8,local_7c0._4_4_);
        uVar13 = uVar13 >> 8 ^ local_7b8._4_4_ >> 0x13 ^ uVar13 ^ local_7b8._4_4_;
        local_7b8 = (char *)CONCAT44(uVar13,local_7b8._4_4_);
        FUN_00889f80(&local_7c8,&local_16a8,(int)((ulong)uVar13 * (ulong)uVar15 >> 0x20) + 1);
        FUN_01a4c66c(&local_7c0,&local_7c8);
      }
      lVar17 = *(long *)puVar11;
      uVar15 = FUN_0277d6c4(&local_7c8);
      if (*(long *)puVar11 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          puVar2 = (undefined4 *)(param_1 + 0x16c0 + lVar23 * 8);
          *puVar2 = local_7c8;
          puVar2[1] = local_7c4;
          lVar23 = (**(code **)(local_f38 + 0x18))(&local_f38);
          uVar15 = FUN_0277d6c4(&local_7c8);
          if ((uVar15 >> 3 & 0x1fff) < 0x753) {
            lVar17 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
            *(uint *)(lVar23 + lVar17) =
                 *(uint *)(lVar23 + lVar17) & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar23 = 1;
      bVar9 = false;
    } while (bVar12);
  }
  else {
    FUN_02690004(&local_16a8);
    puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar16 = puVar22[3];
    uVar15 = *puVar22 ^ *puVar22 << 0xb;
    *puVar22 = puVar22[1];
    puVar22[1] = puVar22[2];
    uVar13 = uVar15 ^ uVar16;
    uVar15 = uVar15 >> 8 ^ uVar16 >> 0x13 ^ uVar13;
    puVar22[2] = uVar16;
    puVar22[3] = uVar15;
    uVar15 = (uVar15 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar13 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
    local_7c0 = (undefined **)CONCAT44(uVar13,uVar15);
    uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
    local_7b8 = (char *)CONCAT44((uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4,uVar15);
    iVar14 = FUN_01a4cc70(&local_7c0,&local_16a8,&local_f38,1,0,0,PTR_FUN_04bb67e0,0);
    puVar11 = PTR_DAT_04bb43c0;
    uVar15 = iVar14 - 1;
    uVar18 = (ulong)uVar15;
    if (0 < iVar14) {
      uVar7 = (undefined2)local_16a8;
      uVar5 = local_16a8._2_1_;
      uVar6 = local_16a8._3_1_;
      if (0x1e < uVar15) {
        uVar15 = 0x1f;
      }
      uVar4 = local_16a8._4_4_;
      local_7c8 = SUB84(local_16a8,0);
      local_7c4 = local_16a8._4_4_;
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar13 = FUN_0277d6c4(&local_7c8);
      lVar17 = *(long *)puVar11;
      if (lVar17 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          *(undefined2 *)(param_1 + 0x16c0) = uVar7;
          *puVar1 = uVar5;
          *(undefined1 *)(param_1 + 0x16c3) = uVar6;
          *(undefined4 *)(param_1 + 0x16c4) = uVar4;
        }
      }
      if (uVar15 != 0) {
        uVar7 = (undefined2)local_16a0;
        uVar5 = local_16a0._2_1_;
        uVar6 = local_16a0._3_1_;
        uVar4 = local_16a0._4_4_;
        local_7c8 = SUB84(local_16a0,0);
        local_7c4 = local_16a0._4_4_;
        uVar13 = FUN_0277d6c4(&local_7c8);
        lVar23 = *(long *)puVar11;
        if (lVar23 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            *(undefined2 *)(param_1 + 0x16c8) = uVar7;
            *(undefined1 *)(param_1 + 0x16ca) = uVar5;
            *(undefined1 *)(param_1 + 0x16cb) = uVar6;
            *(undefined4 *)(param_1 + 0x16cc) = uVar4;
          }
        }
        if (uVar15 != 1) {
          uVar15 = 2;
          if (0x1e < uVar18) {
            uVar18 = 0x1f;
          }
          lVar17 = uVar18 - 1;
          do {
            lVar21 = (long)((ulong)uVar15 << 0x20) >> 0x1d;
            uVar7 = *(undefined2 *)((long)&local_16a8 + lVar21);
            uVar5 = *(undefined1 *)((long)&local_16a8 + lVar21 + 2);
            uVar6 = *(undefined1 *)((long)&local_16a8 + lVar21 + 3);
            uVar4 = *(undefined4 *)((long)&local_16a8 + lVar21 + 4);
            local_7c8 = CONCAT13(uVar6,CONCAT12(uVar5,uVar7));
            local_7c4 = uVar4;
            uVar13 = FUN_0277d6c4(&local_7c8);
            lVar21 = *(long *)puVar11;
            if (lVar21 != 0) {
              lVar23 = *(long *)(lVar23 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                *(undefined2 *)(param_1 + 0x16c0) = uVar7;
                *puVar1 = uVar5;
                *(undefined1 *)(param_1 + 0x16c3) = uVar6;
                *(undefined4 *)(param_1 + 0x16c4) = uVar4;
              }
            }
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + -1;
            lVar23 = lVar21;
          } while (lVar17 != 0);
        }
      }
    }
  }
  return;
}

