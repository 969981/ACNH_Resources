
/* WARNING: Removing unreachable block (ram,0x021b4fa4) */
/* WARNING: Removing unreachable block (ram,0x021b4f1c) */
/* WARNING: Removing unreachable block (ram,0x021b4e94) */
/* WARNING: Removing unreachable block (ram,0x021b4e0c) */
/* WARNING: Removing unreachable block (ram,0x021b44b0) */
/* WARNING: Removing unreachable block (ram,0x021b4c48) */
/* WARNING: Removing unreachable block (ram,0x021b4b60) */
/* WARNING: Removing unreachable block (ram,0x021b4a78) */
/* WARNING: Removing unreachable block (ram,0x021b4990) */
/* WARNING: Removing unreachable block (ram,0x021b48a8) */
/* WARNING: Removing unreachable block (ram,0x021b47c0) */
/* WARNING: Removing unreachable block (ram,0x021b46dc) */
/* WARNING: Removing unreachable block (ram,0x021b45f4) */
/* WARNING: Removing unreachable block (ram,0x021b450c) */
/* WARNING: Removing unreachable block (ram,0x021b41fc) */
/* WARNING: Removing unreachable block (ram,0x021b44c0) */
/* WARNING: Removing unreachable block (ram,0x021b45a8) */
/* WARNING: Removing unreachable block (ram,0x021b4690) */
/* WARNING: Removing unreachable block (ram,0x021b4774) */
/* WARNING: Removing unreachable block (ram,0x021b485c) */
/* WARNING: Removing unreachable block (ram,0x021b4944) */
/* WARNING: Removing unreachable block (ram,0x021b4a2c) */
/* WARNING: Removing unreachable block (ram,0x021b4b14) */
/* WARNING: Removing unreachable block (ram,0x021b4bfc) */
/* WARNING: Removing unreachable block (ram,0x021b4dc8) */
/* WARNING: Removing unreachable block (ram,0x021b4e50) */
/* WARNING: Removing unreachable block (ram,0x021b4ed8) */
/* WARNING: Removing unreachable block (ram,0x021b4f60) */
/* WARNING: Removing unreachable block (ram,0x021b4fe8) */

void FUN_021b3c40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ushort uVar8;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ushort uVar22;
  uint uVar23;
  ushort uVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb2020;
  lVar17 = **(long **)PTR_DAT_04bb27d0;
  bVar10 = *(byte *)(lVar17 + 0x473);
  if ((long)(char)bVar10 != 0xffffffffffffffff) {
    pbVar9 = (byte *)(lVar17 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
    if (7 < bVar10) {
      pbVar9 = (byte *)(lVar17 + 0x48);
    }
    if (((*pbVar9 >> 3 & 1) != 0) && (*(byte *)(lVar17 + 0x472) != bVar10)) {
      return;
    }
  }
  pcVar3 = (char *)(param_1 + 0x7399);
  pcVar4 = (char *)(param_1 + 0x5c59);
  pcVar5 = (char *)(param_1 + 0x4519);
  pcVar6 = (char *)(param_1 + 0x2dd9);
  pcVar7 = (char *)(param_1 + 0x1699);
  uVar25 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar13 = (uint)uVar25 >> 0x10 & 0xff;
  uVar18 = (uint)((ulong)uVar25 >> 0x18) & 0xff;
  uVar23 = (uint)((ulong)uVar25 >> 0x20);
  uVar16 = uVar23 & 0xff;
  cVar11 = (char)((ulong)uVar25 >> 0x28);
  if (uVar13 == 1) {
    if (uVar18 != 1) {
      return;
    }
    if ((char)((ulong)uVar25 >> 0x20) < '\x02') {
      uVar13 = 4;
      if (uVar16 != 1) {
        uVar13 = 2;
      }
      uVar13 = uVar13 | '\x1d' < cVar11;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "SetCountdownEarlyAggregator";
      local_78 = puVar2;
      iVar12 = FUN_02743000(&local_78);
      if ((int)uVar13 <= iVar12) {
        return;
      }
      pcStack_70 = "SetCountdownEarlyAggregator";
      local_78 = puVar2;
      FUN_02743234(&local_78,uVar13);
      puVar21 = DAT_055c1b60;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        do {
          if (*(int *)(puVar21 + -1) == 0x6622bd46) break;
          puVar19 = puVar21 + 1;
          puVar21 = (undefined8 *)*puVar19;
        } while ((undefined8 *)*puVar19 != &DAT_055c1b58);
      }
      local_78 = puVar1 + 0x10;
      pcStack_70 = "SetCountdownEarlyAggregator";
      iVar12 = FUN_02743000(&local_78);
      puVar1 = PTR_DAT_04bb39d8;
      uVar13 = 0xffffffff;
      for (iVar12 = iVar12 + -2; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*(char *)(param_1 + 0xaf9) == '\0') {
LAB_021b3e80:
          uVar13 = uVar13 & 0xfffffffe;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3e80;
        }
        if (*pcVar7 == '\0') {
LAB_021b3ec8:
          uVar13 = uVar13 & 0xfffffffd;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3ec8;
        }
        if (*(char *)(param_1 + 0x2239) == '\0') {
LAB_021b3f10:
          uVar13 = uVar13 & 0xfffffffb;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3f10;
        }
        if (*pcVar6 == '\0') {
LAB_021b3f58:
          uVar13 = uVar13 & 0xfffffff7;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3f58;
        }
        if (*(char *)(param_1 + 0x3979) == '\0') {
LAB_021b3fa0:
          uVar13 = uVar13 & 0xffffffef;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3fa0;
        }
        if (*pcVar5 == '\0') {
LAB_021b3fe8:
          uVar13 = uVar13 & 0xffffffdf;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3fe8;
        }
        if (*(char *)(param_1 + 0x50b9) == '\0') {
LAB_021b4030:
          uVar13 = uVar13 & 0xffffffbf;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b4030;
        }
        if (*pcVar4 == '\0') {
LAB_021b4078:
          uVar13 = uVar13 & 0xffffff7f;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b4078;
        }
        if (*(char *)(param_1 + 0x67f9) == '\0') {
LAB_021b40c0:
          uVar13 = uVar13 & 0xfffffeff;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b40c0;
        }
        if (*pcVar3 == '\0') {
LAB_021b3e30:
          uVar13 = uVar13 & 0xfffffdff;
        }
        else {
          puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
          uVar23 = *puVar15 ^ *puVar15 << 0xb;
          uVar16 = puVar15[3];
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar23 = uVar23 >> 8 ^ uVar16 >> 0x13 ^ uVar23 ^ uVar16;
          puVar15[2] = uVar16;
          puVar15[3] = uVar23;
          if ((uint)((ulong)uVar23 * 100 >> 0x20) < 0x14) goto LAB_021b3e30;
        }
      }
      if (*(char *)(param_1 + 0xaf9) != '\0') {
        FUN_020ef1ec(0,uVar13 & 1);
      }
      if (*pcVar7 != '\0') {
        FUN_020ef1ec(1,uVar13 >> 1 & 1);
      }
      if (*(char *)(param_1 + 0x2239) != '\0') {
        FUN_020ef1ec(2,uVar13 >> 2 & 1);
      }
      if (*pcVar6 != '\0') {
        FUN_020ef1ec(3,uVar13 >> 3 & 1);
      }
      if (*(char *)(param_1 + 0x3979) != '\0') {
        FUN_020ef1ec(4,uVar13 >> 4 & 1);
      }
      if (*pcVar5 != '\0') {
        FUN_020ef1ec(5,uVar13 >> 5 & 1);
      }
      if (*(char *)(param_1 + 0x50b9) != '\0') {
        FUN_020ef1ec(6,uVar13 >> 6 & 1);
      }
      if (*pcVar4 != '\0') {
        FUN_020ef1ec(7,uVar13 >> 7 & 1);
      }
      if (*(char *)(param_1 + 0x67f9) != '\0') {
        FUN_020ef1ec(8,uVar13 >> 8 & 1);
      }
      if (*pcVar3 == '\0') {
        return;
      }
      uVar13 = uVar13 >> 9 & 1;
      goto LAB_021b4cf8;
    }
    if (4 < uVar16) {
      return;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "SetCountdownEarlyAggregator";
    local_78 = puVar1;
    iVar12 = FUN_02743000(&local_78);
    if (5 < iVar12) {
      return;
    }
    pcStack_70 = "SetCountdownEarlyAggregator";
    local_78 = puVar1;
    FUN_02743234(&local_78,6);
LAB_021b4298:
    if (*(char *)(param_1 + 0xaf9) != '\0') {
      FUN_020ef1ec(0,0);
    }
    if (*pcVar7 != '\0') {
      FUN_020ef1ec(1,0);
    }
    if (*(char *)(param_1 + 0x2239) != '\0') {
      FUN_020ef1ec(2,0);
    }
    if (*pcVar6 != '\0') {
      FUN_020ef1ec(3,0);
    }
    if (*(char *)(param_1 + 0x3979) != '\0') {
      FUN_020ef1ec(4,0);
    }
    if (*pcVar5 != '\0') {
      FUN_020ef1ec(5,0);
    }
    if (*(char *)(param_1 + 0x50b9) != '\0') {
      FUN_020ef1ec(6,0);
    }
    if (*pcVar4 != '\0') {
      FUN_020ef1ec(7,0);
    }
    if (*(char *)(param_1 + 0x67f9) != '\0') {
      FUN_020ef1ec(8,0);
    }
    if (*pcVar3 == '\0') {
      return;
    }
    uVar13 = 0;
    goto LAB_021b4cf8;
  }
  if ((uVar13 != 0xc || uVar18 != 0x1f) || uVar16 != 0x17) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SetCountdownEarlyAggregator";
  local_78 = puVar1;
  iVar12 = FUN_02743000(&local_78);
  if (iVar12 == 0) {
    if (cVar11 < '\x1e') goto LAB_021b4298;
    if ((uVar23 >> 8 & 0xff) < 0x32) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "SetCountdownEarlyAggregator";
      FUN_02743234(&local_78,1);
      if (DAT_055c1b60 != &DAT_055c1b58) {
        iVar12 = 0;
        puVar21 = DAT_055c1b60;
        do {
          if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4484;
          puVar21 = (undefined8 *)puVar21[1];
          iVar12 = iVar12 + 1;
        } while (puVar21 != &DAT_055c1b58);
      }
      iVar12 = 0xffff;
LAB_021b4484:
      if (*(char *)(param_1 + 0xaf9) == '\0') {
        uVar13 = 0;
      }
      else {
        local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
        uVar13 = FUN_020e9b90(*(undefined8 *)PTR_DAT_04bb4760,iVar12);
        uVar13 = uVar13 & 1;
      }
      uVar23 = uVar13;
      if (*pcVar7 != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x15,iVar12);
        uVar23 = uVar13 | 2;
        if ((uVar14 & 1) == 0) {
          uVar23 = uVar13;
        }
      }
      uVar13 = uVar23;
      if (*(char *)(param_1 + 0x2239) != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x2a,iVar12);
        uVar13 = uVar23 | 4;
        if ((uVar14 & 1) == 0) {
          uVar13 = uVar23;
        }
      }
      uVar23 = uVar13;
      if (*pcVar6 != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x3f,iVar12);
        uVar23 = uVar13 | 8;
        if ((uVar14 & 1) == 0) {
          uVar23 = uVar13;
        }
      }
      uVar13 = uVar23;
      if (*(char *)(param_1 + 0x3979) != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x54,iVar12);
        uVar13 = uVar23 | 0x10;
        if ((uVar14 & 1) == 0) {
          uVar13 = uVar23;
        }
      }
      uVar23 = uVar13;
      if (*pcVar5 != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x69,iVar12);
        uVar23 = uVar13 | 0x20;
        if ((uVar14 & 1) == 0) {
          uVar23 = uVar13;
        }
      }
      uVar13 = uVar23;
      if (*(char *)(param_1 + 0x50b9) != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,6);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x7e,iVar12);
        uVar13 = uVar23 | 0x40;
        if ((uVar14 & 1) == 0) {
          uVar13 = uVar23;
        }
      }
      uVar23 = uVar13;
      if (*pcVar4 != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,7);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0x93,iVar12);
        uVar23 = uVar13 | 0x80;
        if ((uVar14 & 1) == 0) {
          uVar23 = uVar13;
        }
      }
      uVar13 = uVar23;
      if (*(char *)(param_1 + 0x67f9) != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,8);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0xa8,iVar12);
        uVar13 = uVar23 | 0x100;
        if ((uVar14 & 1) == 0) {
          uVar13 = uVar23;
        }
      }
      uVar23 = uVar13;
      if (*pcVar3 != '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
        uVar14 = FUN_020e9b90(*(long *)PTR_DAT_04bb4760 + 0xbd,iVar12);
        uVar23 = uVar13 | 0x200;
        if ((uVar14 & 1) == 0) {
          uVar23 = uVar13;
        }
      }
      uVar13 = uVar23 - (uVar23 >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      uVar13 = (uint)((float)(uVar13 + (uVar13 >> 0x10) & 0x3f) * 0.6 + 0.5);
      uVar14 = (ulong)uVar13;
      if (uVar13 == 0) {
        return;
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar26 = (undefined4 *)PTR_DAT_04bb39d8;
      do {
        puVar15 = (uint *)nn::os::GetTlsValue(*puVar26);
        uVar13 = *puVar15 ^ *puVar15 << 0xb;
        uVar18 = puVar15[3];
        *puVar15 = puVar15[1];
        puVar15[1] = puVar15[2];
        uVar16 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
        puVar15[2] = uVar18;
        puVar15[3] = uVar16;
        uVar13 = uVar23 - (uVar23 >> 1 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        iVar12 = (int)(uVar14 * uVar16 >> 0x20);
        uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
        uVar13 = uVar13 + (uVar13 >> 8);
        if ((int)(uVar13 + (uVar13 >> 0x10) & 0x3f) < iVar12 + 1) {
          local_64 = 0xffffffff;
          pcStack_70 = "GotoEventPlazaForCountdown";
          local_78 = puVar1;
          FUN_021be8c0(&local_64,&local_78,1);
          local_64 = CONCAT22(local_64._2_2_,0x1ff);
          local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
          local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
          }
        }
        else {
          if (uVar23 != 0) {
            iVar12 = iVar12 + 2;
            uVar13 = uVar23;
            do {
              iVar12 = iVar12 + -1;
              if (iVar12 < 2) {
                uVar13 = uVar13 - 1 & (uVar13 ^ 0xffffffff);
                uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
                uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
                uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
                uVar13 = uVar13 + (uVar13 >> 8);
                uVar13 = uVar13 + (uVar13 >> 0x10) & 0x3f;
                goto LAB_021b51c0;
              }
              uVar13 = uVar13 - 1 & uVar13;
            } while (uVar13 != 0);
          }
          uVar13 = 0xffffffff;
LAB_021b51c0:
          local_78 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "GotoEventPlazaForCountdown";
          local_64 = uVar13;
          FUN_021be8c0(&local_64,&local_78,1);
          local_64._0_2_ = CONCAT11(1,(char)uVar13);
          local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
          local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
          }
          if (uVar13 < 10) {
            uVar23 = uVar23 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
          }
          puVar26 = (undefined4 *)PTR_DAT_04bb39d8;
        }
        uVar14 = uVar14 - 1;
        if ((int)uVar14 == 0) {
          return;
        }
      } while( true );
    }
  }
  else {
    pcStack_70 = "SetCountdownEarlyAggregator";
    local_78 = puVar1;
    iVar12 = FUN_02743000(&local_78);
    if (cVar11 < '2') {
      return;
    }
    if (iVar12 != 1) {
      return;
    }
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SetCountdownEarlyAggregator";
  FUN_02743234(&local_78,2);
  puVar1 = PTR_DAT_04bb4760;
  puVar21 = DAT_055c1b60 + -8;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar24 = 0;
    puVar19 = DAT_055c1b60;
    puVar20 = puVar21;
    do {
      if (*(int *)(puVar20 + 7) == 0x6622bd46) goto LAB_021b41d4;
      puVar19 = (undefined8 *)puVar19[1];
      uVar24 = uVar24 + 1;
      puVar20 = puVar19 + -8;
    } while (puVar19 != &DAT_055c1b58);
  }
  uVar24 = 0xffff;
LAB_021b41d4:
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    uVar14 = (ulong)local_78 >> 0x20;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44((int)uVar14,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 & 8) != 0) {
        uVar22 = 0xffff;
      }
      if ((puVar21 != &DAT_055c1b18) && ((*puVar15 & 8) != 0)) {
        uVar22 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar21 + 7) == 0x6622bd46) goto LAB_021b44c4;
          puVar19 = (undefined8 *)puVar19[1];
          uVar22 = uVar22 + 1;
          puVar21 = puVar19 + -8;
        } while (puVar19 != &DAT_055c1b58);
        uVar22 = 0xffff;
      }
    }
LAB_021b44c4:
    uVar8 = (ushort)*(byte *)(*(long *)PTR_DAT_04bb4760 + 4) |
            (*(byte *)(*(long *)PTR_DAT_04bb4760 + 5) & 3) << 8;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(0,1);
    }
  }
  if (*pcVar7 != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b45ac;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b45ac:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x19) | (*(byte *)(*(long *)puVar1 + 0x1a) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(1,1);
    }
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4694;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4694:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x2e) | (*(byte *)(*(long *)puVar1 + 0x2f) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(2,1);
    }
  }
  if (*pcVar6 != '\0') {
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4778;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4778:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x43) | (*(byte *)(*(long *)puVar1 + 0x44) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(3,1);
    }
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4860;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4860:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x58) | (*(byte *)(*(long *)puVar1 + 0x59) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(4,1);
    }
  }
  if (*pcVar5 != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4948;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4948:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x6d) | (*(byte *)(*(long *)puVar1 + 0x6e) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(5,1);
    }
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,6);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4a30;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4a30:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x82) | (*(byte *)(*(long *)puVar1 + 0x83) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(6,1);
    }
  }
  if (*pcVar4 != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,7);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4b18;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4b18:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0x97) | (*(byte *)(*(long *)puVar1 + 0x98) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(7,1);
    }
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,8);
    uVar22 = 0xffff;
    if (uVar24 != 0xffff) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
      if ((uVar24 & 0xff00) != 0) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = uVar24;
      if ((*puVar15 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar22 = 0;
          puVar21 = DAT_055c1b60;
          do {
            if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4c00;
            puVar21 = (undefined8 *)puVar21[1];
            uVar22 = uVar22 + 1;
          } while (puVar21 != &DAT_055c1b58);
        }
        uVar22 = 0xffff;
      }
    }
LAB_021b4c00:
    uVar8 = (ushort)*(byte *)(*(long *)puVar1 + 0xac) | (*(byte *)(*(long *)puVar1 + 0xad) & 3) << 8
    ;
    if (0x1ff < uVar8) {
      uVar8 = uVar8 | 0xfc00;
    }
    if (uVar8 == uVar22) {
      FUN_020ef1ec(8,1);
    }
  }
  if (*pcVar3 == '\0') {
    return;
  }
  if (uVar24 == 0xffff) {
LAB_021b4cd8:
    uVar24 = 0xffff;
  }
  else {
    puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar24 & 0xffffffffU) * 8);
    if ((uVar24 & 0xff00) != 0) {
      puVar15 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar15 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar24 = 0;
        puVar21 = DAT_055c1b60;
        do {
          if (*(int *)(puVar21 + -1) == 0x6622bd46) goto LAB_021b4cdc;
          puVar21 = (undefined8 *)puVar21[1];
          uVar24 = uVar24 + 1;
        } while (puVar21 != &DAT_055c1b58);
      }
      goto LAB_021b4cd8;
    }
  }
LAB_021b4cdc:
  uVar22 = (ushort)*(byte *)(*(long *)puVar1 + 0xc1) | (*(byte *)(*(long *)puVar1 + 0xc2) & 3) << 8;
  if (0x1ff < uVar22) {
    uVar22 = uVar22 | 0xfc00;
  }
  if (uVar22 != uVar24) {
    return;
  }
  uVar13 = 1;
LAB_021b4cf8:
  local_64 = 9;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "GotoEventPlazaForCountdown";
  FUN_021be8c0(&local_64,&local_78,uVar13);
  local_64._0_2_ = CONCAT11((char)uVar13,9);
  local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
  local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
  if (-1 < DAT_053d0e90) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
  }
  return;
}

