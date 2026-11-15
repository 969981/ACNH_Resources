
undefined8 FUN_0219b680(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  char *pcVar20;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb2208;
  pcVar20 = (char *)(param_1 + 0x818);
  lVar13 = *(long *)PTR_DAT_04bb2208;
  local_48._0_4_ = FUN_006bd550("ChristmasApproachTalk",0);
  puVar9 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_48);
  puVar5 = PTR_DAT_04bb6380;
  puVar1 = PTR_DAT_04bb6378;
  if (puVar9 != (uint *)0x0) {
    pcVar14 = pcVar20;
    if (*puVar9 != 0) {
      cVar17 = *PTR_DAT_04bb6378;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar9;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar9) != (ushort *)0x0) &&
               (uVar12 = *(ushort *)((ulong)uVar2 + (long)puVar9), uVar12 < 0x80)) {
              pcVar14 = pcVar20 + uVar12;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar9;
        }
        if ((uVar2 == 0) || (puVar18 = (uint *)(ulong)uVar2, puVar9 == puVar18)) break;
        lVar13 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar9 + (lVar13 - (long)puVar18);
        if (lVar13 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar19 = (int *)(lVar13 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_0219b7bc;
        }
        iVar8 = 0;
        if (*piVar19 != -1) {
          iVar8 = *piVar19;
        }
        *(int *)(puVar5 + 8) = iVar8;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0219b7bc:
    *pcVar14 = '\0';
  }
  if ((char)DAT_05454194 != '\0') {
    FUN_0252d11c(local_34);
    if (7 < local_34[0]) {
      return 0;
    }
    if (*(char *)(param_1 + 0xaf9) == '\0') {
      return 0;
    }
    uVar10 = FUN_02197a94(0,(long)*(char *)(param_1 + 0xaf8),local_34);
    if ((uVar10 & 1) != 0) {
      local_48._0_4_ = (uint)*(char *)(param_1 + 0xaf8);
      lVar13 = *(long *)PTR_DAT_04bb4760 + (ulong)(uint)local_48 * 0x15;
      if (0x6c < (uint)local_48) {
        lVar13 = *(long *)PTR_DAT_04bb4760;
      }
      uVar12 = (ushort)*(byte *)(lVar13 + 4) | (*(byte *)(lVar13 + 5) & 3) << 8;
      if (0x1ff < uVar12) {
        uVar12 = uVar12 | 0xfc00;
      }
      bVar6 = DAT_055c1b60 == &DAT_055c1b58;
      puVar16 = DAT_055c1b60 + -8;
      if ((!bVar6) && (puVar15 = DAT_055c1b60, uVar12 != 0)) {
        do {
          puVar15 = (undefined8 *)puVar15[1];
          uVar12 = uVar12 - 1;
          bVar6 = puVar15 == &DAT_055c1b58;
        } while (!bVar6 && uVar12 != 0);
        puVar16 = puVar15 + -8;
      }
      puVar15 = &DAT_055c04a0;
      if (!bVar6) {
        puVar15 = puVar16;
      }
      if (*(int *)(puVar15 + 7) == 0x6622bd46) {
        lVar13 = *(long *)puVar4;
        uVar7 = FUN_006bd550("ChristmasApproachTalk",0);
        local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar7);
        puVar9 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_48);
        puVar5 = PTR_DAT_04bb6380;
        puVar1 = PTR_DAT_04bb6378;
        if (puVar9 != (uint *)0x0) {
          uVar2 = *puVar9;
          pcVar14 = pcVar20;
          if (uVar2 != 0) {
            cVar17 = *PTR_DAT_04bb6378;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                uVar2 = *puVar9;
              }
              else {
                uVar3 = *(uint *)(puVar5 + 8);
                if (-1 < (int)uVar3) {
                  if (((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) &&
                     (uVar12 = *(ushort *)((ulong)uVar3 + (long)puVar9), uVar12 < 0x80)) {
                    pcVar14 = pcVar20 + uVar12;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar2;
              if ((puVar18 == (uint *)0x0) || (puVar9 == puVar18)) break;
              lVar13 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar9 + (lVar13 - (long)puVar18);
              if (lVar13 == 0) break;
              uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar19 = (int *)(lVar13 + 4);
              while (piVar19[-1] != 0x54706054) {
                piVar19 = piVar19 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_0219b9a8;
              }
              iVar8 = 0;
              if (*piVar19 != -1) {
                iVar8 = *piVar19;
              }
              *(int *)(puVar5 + 8) = iVar8;
              uVar2 = *puVar9;
              if (uVar2 == 0) break;
            } while( true );
          }
LAB_0219b9a8:
          if (*pcVar14 != '\0') {
            return 0;
          }
        }
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ChristmasWreathGetYear";
    local_48 = puVar1;
    iVar8 = FUN_0274bce0(local_34,&local_48);
    if (iVar8 != *(short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060)) {
      pcStack_50 = "ChristmasWreathNoGetFlag";
      local_58 = puVar1;
      iVar8 = FUN_0274bce0(local_34,&local_58);
      if (iVar8 == 0) {
        lVar13 = *(long *)puVar4;
        uVar7 = FUN_006bd550("ChristmasApproachTalk",0);
        local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar7);
        lVar13 = FUN_021cb820(lVar13 + 0x660,&local_48);
        if (lVar13 == 0) {
          return 1;
        }
        puVar11 = (ushort *)FUN_00aa97d0(lVar13,2,0x54706054,DAT_054573c8);
        if ((puVar11 != (ushort *)0x0) && (*puVar11 < 0x80)) {
          pcVar20 = pcVar20 + *puVar11;
        }
        *pcVar20 = '\x01';
        return 1;
      }
    }
  }
  return 0;
}

