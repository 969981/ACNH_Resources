
uint FUN_02848b98(long param_1,undefined4 param_2,byte *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  byte *pbVar18;
  uint *puVar19;
  byte bVar20;
  int iVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  undefined8 uVar26;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  local_5c[0] = *param_3;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
  if (lVar13 == 0) {
    uVar12 = 0;
    goto LAB_028494e8;
  }
  plVar1 = (long *)(lVar13 + 0x17f48);
  uVar12 = FUN_0265b400(param_2,0);
  if ((*(long **)(lVar13 + 0x17f68) != (long *)0x0) &&
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x17f68), puVar14 != (undefined8 *)0x0)) {
    uVar15 = (**(code **)*puVar14)();
    uVar15 = uVar15 & 0xffffffff;
    if (uVar12 < 7) goto LAB_02848c3c;
LAB_02848c28:
    uVar12 = 0;
    goto LAB_028494c8;
  }
  uVar15 = 0;
  if (6 < uVar12) goto LAB_02848c28;
LAB_02848c3c:
  switch((ulong)(&switchD_02848c54::switchdataD_0417baf8)[uVar12] * 4 + 0x2848c58) {
  case 0x2848c58:
    puVar14 = (undefined8 *)(param_1 + 8);
    piVar2 = (int *)(*(long *)(lVar13 + 0x17f50) + *plVar1);
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar26 = *(undefined8 *)piVar2;
      uVar4 = *(undefined8 *)(piVar2 + 2);
      uVar23 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0x20) = piVar2[6];
      *puVar14 = uVar26;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 0x18) = uVar23;
    }
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_02847d38(puVar14,(long)*(char *)(param_1 + 0x38));
    uVar12 = 1;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0x37) = 2;
    break;
  case 0x2848c90:
    puVar14 = (undefined8 *)(param_1 + 0x44);
    piVar2 = (int *)(*(long *)(lVar13 + 0x17f50) + *plVar1);
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    else {
      uVar26 = *(undefined8 *)piVar2;
      uVar4 = *(undefined8 *)(piVar2 + 2);
      uVar23 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0x5c) = piVar2[6];
      *puVar14 = uVar26;
      *(undefined8 *)(param_1 + 0x4c) = uVar4;
      *(undefined8 *)(param_1 + 0x54) = uVar23;
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_02847d38(puVar14,(long)*(char *)(param_1 + 0x74));
    uVar12 = 1;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0x73) = 2;
    break;
  case 0x2848cc0:
    lVar17 = *plVar1;
    lVar3 = *(long *)(lVar13 + 0x17f50);
    *(undefined2 *)(param_1 + 0xbe) = 0;
    piVar2 = (int *)(lVar3 + lVar17);
    lVar17 = *(long *)PTR_DAT_04bb32e8;
    uVar26 = *(undefined8 *)(lVar17 + 0x4060);
    cVar7 = (char)((ulong)uVar26 >> 0x20);
    iVar25 = (int)cVar7;
    iVar21 = iVar25 + 0x18;
    if (4 < iVar25) {
      iVar21 = iVar25;
    }
    if (iVar21 < 0x12) {
      uVar16 = 1;
    }
    else {
      uVar16 = 2;
    }
    puVar14 = (undefined8 *)(param_1 + 0x80);
    *(char *)(param_1 + 0xb0) = (char)uVar16;
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      uVar4 = *(undefined8 *)piVar2;
      uVar23 = *(undefined8 *)(piVar2 + 2);
      uVar24 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0x98) = piVar2[6];
      *puVar14 = uVar4;
      *(undefined8 *)(param_1 + 0x88) = uVar23;
      *(undefined8 *)(param_1 + 0x90) = uVar24;
    }
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(lVar17 + 0x4060);
    local_58._0_4_ = uVar16;
    FUN_02847d38(puVar14,(char)uVar16);
    puVar22 = PTR_DAT_04bb3968;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0xaf) = 2;
    lVar17 = *(long *)puVar22;
    if ((int)*(uint *)(lVar17 + 0x16718) < 1) {
      if ((((*(long *)(lVar17 + 0x16608) != 0) &&
           (puVar19 = *(uint **)(*(long *)(lVar17 + 0x16608) + 8), puVar19 != (uint *)0x0)) &&
          ((*(uint *)(lVar17 + 0x16620) < 0x13 ||
           (*(char *)(*(long *)(lVar17 + 0x16628) + 0x12) != '\0')))) &&
         (((0x12 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
        iVar21 = 0xc;
        if (*(char *)((long)puVar19 + 10) != '\0') {
          iVar21 = 0x1c;
        }
        lVar17 = (ulong)(puVar19[1] * 0x12 + (uint)(ushort)puVar19[2] * 8 + iVar21) + (long)puVar19;
        goto joined_r0x02849388;
      }
    }
    else if (0x12 < *(uint *)(lVar17 + 0x16718)) {
      lVar3 = 0x90;
      if (*(uint *)(lVar17 + 0x16708) < 0x13) {
        lVar3 = 0;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x16710) + lVar3);
joined_r0x02849388:
      if (lVar17 != 0) {
        cVar6 = cVar7 + '\x18';
        if (4 < iVar25) {
          cVar6 = cVar7;
        }
        FUN_0214ca00(&local_58);
        cVar7 = *(char *)(param_1 + 0xbc);
        uVar12 = (uint)cVar7;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1d0000);
        local_58._0_2_ = CONCAT11((char)((ulong)uVar26 >> 0x28),cVar6);
        puVar22 = &DAT_053fe348 + (ulong)uVar12 * 0xba0;
        if (9 < (uint)(int)cVar7) {
          puVar22 = &DAT_053fe348;
        }
        FUN_0214e6d0(puVar22 + 0x8b0,&local_58,(int)cVar7);
LAB_028494b4:
        FUN_0219d7e0(&DAT_053fe348,uVar12,0,0);
      }
    }
    goto LAB_028494c4;
  case 0x2848cfc:
    puVar14 = (undefined8 *)(param_1 + 0xc0);
    piVar2 = (int *)(*(long *)(lVar13 + 0x17f50) + *plVar1);
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    else {
      uVar26 = *(undefined8 *)piVar2;
      uVar4 = *(undefined8 *)(piVar2 + 2);
      uVar23 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0xd8) = piVar2[6];
      *puVar14 = uVar26;
      *(undefined8 *)(param_1 + 200) = uVar4;
      *(undefined8 *)(param_1 + 0xd0) = uVar23;
    }
    *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_02847d38(puVar14,(long)*(char *)(param_1 + 0xf0));
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0xef) = 2;
    uVar16 = 6;
    if (*(char *)(param_1 + 0xee) != '\0') {
      uVar16 = 3;
    }
    FUN_02847d38(puVar14,uVar16);
    *(undefined1 *)(param_1 + 0xf4) = 0;
    FUN_021c9830(&DAT_053fe348);
    lVar17 = *(long *)PTR_DAT_04bb39b0;
    pbVar18 = PTR_DAT_04bb32e0;
    if (lVar17 == 0) {
LAB_02849258:
      if (*pbVar18 < 8) goto LAB_028492d0;
LAB_02849264:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_028492c8:
        pbVar18 = PTR_DAT_04bb5038;
        goto LAB_028492d0;
      }
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar17 + 0x473);
      pbVar18 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar19 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar19 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar19 & 8) != 0) {
          pbVar18 = (byte *)(lVar17 + 0x471);
        }
      }
      bVar20 = *pbVar18;
      bVar11 = 7 < bVar20;
      if (bVar11) {
        bVar20 = 0xff;
      }
      local_44 = CONCAT31(local_44._1_3_,bVar20);
      if (bVar11) goto LAB_028492c8;
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pbVar18 = (byte *)(lVar17 + 0x158);
      }
      if (7 < *pbVar18) {
        if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02849258;
        }
        goto LAB_02849264;
      }
LAB_028492d0:
      bVar20 = *pbVar18;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_44 = CONCAT31(local_44._1_3_,bVar20);
    }
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "TreasureHuntJustMissed";
    FUN_0274bfe8(&local_44,&local_58,0);
    uVar12 = FUN_028496d0(puVar14);
    break;
  case 0x2848d2c:
    puVar14 = (undefined8 *)(param_1 + 0xfc);
    piVar2 = (int *)(*(long *)(lVar13 + 0x17f50) + *plVar1);
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x104) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0;
    }
    else {
      uVar26 = *(undefined8 *)piVar2;
      uVar4 = *(undefined8 *)(piVar2 + 2);
      uVar23 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0x114) = piVar2[6];
      *puVar14 = uVar26;
      *(undefined8 *)(param_1 + 0x104) = uVar4;
      *(undefined8 *)(param_1 + 0x10c) = uVar23;
    }
    puVar22 = PTR_DAT_04bb32e8;
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_02847d38(puVar14,(long)*(char *)(param_1 + 300));
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0x132) = 0;
    *(undefined1 *)(param_1 + 299) = 2;
    if (*(char *)(param_1 + 0x12a) != '\x02') {
      uVar12 = 0;
      if (*(char *)(param_1 + 0x12a) != '\x01') break;
      lVar17 = *(long *)PTR_DAT_04bb3968;
      if ((int)*(uint *)(lVar17 + 0x16718) < 1) {
        if ((((*(long *)(lVar17 + 0x16608) != 0) &&
             (puVar19 = *(uint **)(*(long *)(lVar17 + 0x16608) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(lVar17 + 0x16620) < 0x18 ||
             (*(char *)(*(long *)(lVar17 + 0x16628) + 0x17) != '\0')))) &&
           (((0x17 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar21 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar21 = 0x1c;
          }
          lVar17 = (ulong)(puVar19[1] * 0x17 + (uint)(ushort)puVar19[2] * 8 + iVar21) +
                   (long)puVar19;
          goto joined_r0x02849400;
        }
      }
      else if (0x17 < *(uint *)(lVar17 + 0x16718)) {
        lVar3 = 0xb8;
        if (*(uint *)(lVar17 + 0x16708) < 0x18) {
          lVar3 = 0;
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x16710) + lVar3);
joined_r0x02849400:
        uVar12 = 1;
        if (lVar17 == 0) break;
        cVar6 = *(char *)(*(long *)puVar22 + 0x4064);
        uVar5 = *(undefined1 *)(*(long *)puVar22 + 0x4065);
        cVar7 = cVar6 + '\x18';
        if ('\x04' < cVar6) {
          cVar7 = cVar6;
        }
        FUN_0214ca00(&local_58);
        pcVar9 = local_50;
        puVar8 = local_58;
        uVar12 = (uint)(char)*(byte *)(param_1 + 0x128);
        local_50 = (char *)CONCAT71(local_50._1_7_,1);
        pcVar10 = local_50;
        local_58._0_2_ = CONCAT11(uVar5,cVar7);
        puVar22 = &DAT_053fe348 + (ulong)uVar12 * 0xba0;
        local_58._4_4_ = SUB84(puVar8,4);
        local_58._0_4_ = CONCAT22(0x1d,(undefined2)local_58);
        if (9 < *(byte *)(param_1 + 0x128)) {
          puVar22 = &DAT_053fe348;
        }
        local_44 = *(int *)(puVar22 + 0xa94);
        if ((local_44 == 0) || (local_48 = local_44, local_44 == 0x22)) {
          *(undefined2 *)(puVar22 + 0xa92) = 0x1d;
          local_50._1_2_ = SUB82(pcVar9,1);
          puVar22[0xa91] = uVar5;
          puVar22[0xa90] = cVar7;
          puVar22[0xa98] = 1;
          *(undefined4 *)(puVar22 + 0xa94) = local_58._4_4_;
          *(undefined2 *)(puVar22 + 0xa99) = local_50._1_2_;
          if (*(long *)(puVar22 + 0xaa0) == 0) {
            uVar16 = 0x22;
          }
          else {
            uVar16 = *(undefined4 *)(*(long *)(puVar22 + 0xaa0) + 4);
          }
          *(undefined4 *)(puVar22 + 0xaac) = uVar16;
          *(undefined8 *)(puVar22 + 0xaa0) = 0;
          local_50 = pcVar10;
          FUN_0214d220(puVar22 + 0x8b0);
          puVar22[0xae6] = 1;
        }
        goto LAB_028494b4;
      }
    }
    goto LAB_028494c4;
  case 0x2848d5c:
    puVar14 = (undefined8 *)(param_1 + 0x134);
    piVar2 = (int *)(*(long *)(lVar13 + 0x17f50) + *plVar1);
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x144) = 0;
    }
    else {
      uVar26 = *(undefined8 *)piVar2;
      uVar4 = *(undefined8 *)(piVar2 + 2);
      uVar23 = *(undefined8 *)(piVar2 + 4);
      *(int *)(param_1 + 0x14c) = piVar2[6];
      *puVar14 = uVar26;
      *(undefined8 *)(param_1 + 0x13c) = uVar4;
      *(undefined8 *)(param_1 + 0x144) = uVar23;
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_02847d38(puVar14,(long)*(char *)(param_1 + 0x164));
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
    *(undefined1 *)(param_1 + 0x168) = 0;
    *(undefined1 *)(param_1 + 0x16a) = 0;
    *(undefined1 *)(param_1 + 0x163) = 2;
    if (*(char *)(param_1 + 0x162) != '\x02') {
      uVar12 = 0;
      if (*(char *)(param_1 + 0x162) != '\x01') break;
      lVar17 = *(long *)PTR_DAT_04bb3968;
      if ((int)*(uint *)(lVar17 + 0x16718) < 1) {
        if ((((*(long *)(lVar17 + 0x16608) != 0) &&
             (puVar19 = *(uint **)(*(long *)(lVar17 + 0x16608) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(lVar17 + 0x16620) < 0x15 ||
             (*(char *)(*(long *)(lVar17 + 0x16628) + 0x14) != '\0')))) &&
           (((0x14 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar21 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar21 = 0x1c;
          }
          lVar17 = (ulong)(puVar19[1] * 0x14 + (uint)(ushort)puVar19[2] * 8 + iVar21) +
                   (long)puVar19;
          goto joined_r0x02849474;
        }
      }
      else if (0x14 < *(uint *)(lVar17 + 0x16718)) {
        lVar3 = 0xa0;
        if (*(uint *)(lVar17 + 0x16708) < 0x15) {
          lVar3 = 0;
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x16710) + lVar3);
joined_r0x02849474:
        if (lVar17 != 0) {
          FUN_0214ca00(&local_58);
          uVar12 = (uint)(char)*(byte *)(param_1 + 0x160);
          local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1d0005);
          puVar22 = &DAT_053fe348 + (ulong)uVar12 * 0xba0;
          if (9 < *(byte *)(param_1 + 0x160)) {
            puVar22 = &DAT_053fe348;
          }
          local_44 = *(int *)(puVar22 + 0xa94);
          if ((local_44 == 0) || (local_48 = local_44, local_44 == 0x22)) {
            *(undefined4 *)(puVar22 + 0xa90) = 0x1d0005;
            *(undefined4 *)(puVar22 + 0xa94) = local_58._4_4_;
            puVar22[0xa98] = (undefined1)local_50;
            *(undefined2 *)(puVar22 + 0xa99) = local_50._1_2_;
            if (*(long *)(puVar22 + 0xaa0) == 0) {
              uVar16 = 0x22;
            }
            else {
              uVar16 = *(undefined4 *)(*(long *)(puVar22 + 0xaa0) + 4);
            }
            *(undefined4 *)(puVar22 + 0xaac) = uVar16;
            *(undefined8 *)(puVar22 + 0xaa0) = 0;
            FUN_0214d220(puVar22 + 0x8b0);
            puVar22[0xae6] = 1;
          }
          goto LAB_028494b4;
        }
      }
    }
LAB_028494c4:
    uVar12 = 1;
    break;
  case 0x2848d8c:
    uVar12 = FUN_02849504(param_1 + 0x16c);
  }
LAB_028494c8:
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar13 + 0x17f68) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x17f68) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
LAB_028494e8:
  return uVar12 & 1;
}

