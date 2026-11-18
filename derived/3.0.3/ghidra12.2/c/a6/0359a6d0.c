
void FUN_0359a6d0(long param_1,int *param_2)

{
  byte *pbVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  short *psVar19;
  short *psVar20;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  byte local_24 [4];
  
  if (param_2 == (int *)0x0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1f8);
  if (*(byte *)(param_1 + 0x1f8) < 8) {
    local_24[0] = *(byte *)(param_1 + 0x1f8);
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar11 == 0) goto LAB_0359a748;
    FUN_02613254(&local_50,lVar11,0);
    bVar6 = local_44 == '\0';
    uVar13 = local_48;
    if (local_44 == '\0') goto LAB_0359a750;
    uVar12 = local_50;
  }
  else {
LAB_0359a748:
    uVar13 = 0;
    bVar6 = true;
LAB_0359a750:
    uVar12 = 0x300000000;
  }
  uVar5 = 0;
  if (!bVar6) {
    uVar5 = uVar13;
  }
  sVar7 = FUN_02612f30(pbVar1,uVar12,uVar5);
  if (*pbVar1 < 8) {
    local_24[0] = *pbVar1;
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar11 == 0) goto LAB_0359a7bc;
    FUN_02613254(&local_50,lVar11,1);
    bVar6 = local_44 == '\0';
    uVar13 = local_48;
    if (local_44 == '\0') goto LAB_0359a7c4;
    uVar12 = local_50;
  }
  else {
LAB_0359a7bc:
    uVar13 = 0;
    bVar6 = true;
LAB_0359a7c4:
    uVar12 = 0x300000000;
  }
  uVar5 = 0;
  if (!bVar6) {
    uVar5 = uVar13;
  }
  sVar8 = FUN_02612f30(pbVar1,uVar12,uVar5);
  if (*pbVar1 < 8) {
    local_24[0] = *pbVar1;
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar11 == 0) goto LAB_0359a830;
    FUN_02613254(&local_50,lVar11,2);
    bVar6 = local_44 == '\0';
    uVar13 = local_48;
    if (local_44 == '\0') goto LAB_0359a838;
    uVar12 = local_50;
  }
  else {
LAB_0359a830:
    uVar13 = 0;
    bVar6 = true;
LAB_0359a838:
    uVar12 = 0x300000000;
  }
  uVar5 = 0;
  if (!bVar6) {
    uVar5 = uVar13;
  }
  sVar9 = FUN_02612f30(pbVar1,uVar12,uVar5);
  if (*pbVar1 < 8) {
    local_24[0] = *pbVar1;
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar11 == 0) goto LAB_0359a8a4;
    FUN_02613254(&local_50,lVar11,3);
    bVar6 = local_44 == '\0';
    if (local_44 != '\0') goto LAB_0359a8b0;
  }
  else {
LAB_0359a8a4:
    local_48 = 0;
    bVar6 = true;
  }
  local_50 = 0x300000000;
LAB_0359a8b0:
  uVar13 = 0;
  if (!bVar6) {
    uVar13 = local_48;
  }
  sVar10 = FUN_02612f30(pbVar1,local_50,uVar13);
  if (1 < *param_2) {
    lVar11 = *(long *)(param_2 + 2);
    uVar15 = 0;
    uVar18 = *param_2 - 1;
    do {
      if ((int)uVar18 <= (int)uVar15) {
        return;
      }
      uVar14 = (ulong)uVar15;
      uVar16 = (ulong)uVar18;
      uVar17 = uVar14;
      psVar19 = *(short **)(lVar11 + (ulong)uVar15 * 8);
      uVar18 = uVar15;
      do {
        lVar2 = lVar11 + uVar17 * 8;
        psVar20 = *(short **)(lVar2 + 8);
        sVar3 = 0x4c7b;
        if (psVar19[4] != -2) {
          sVar3 = *psVar19;
        }
        if (sVar3 != sVar7) {
          sVar4 = 0x4c7b;
          if (psVar20[4] != -2) {
            sVar4 = *psVar20;
          }
          if ((sVar4 == sVar7) ||
             ((sVar3 != sVar8 &&
              ((sVar4 == sVar8 ||
               ((sVar9 != sVar3 && ((sVar9 == sVar4 || ((sVar3 != sVar10 && (sVar4 == sVar10))))))))
              )))) {
            uVar18 = (uint)uVar17;
            *(short **)(lVar2 + 8) = psVar19;
            *(short **)(lVar11 + uVar17 * 8) = psVar20;
            psVar20 = psVar19;
          }
        }
        uVar17 = uVar17 + 1;
        psVar19 = psVar20;
      } while (uVar16 != uVar17);
      if ((int)uVar18 <= (int)uVar15) {
        return;
      }
      psVar19 = *(short **)(lVar11 + (ulong)uVar18 * 8);
      uVar17 = (ulong)uVar18;
      uVar15 = uVar18;
      do {
        lVar2 = lVar11 + uVar17 * 8;
        psVar20 = *(short **)(lVar2 + -8);
        sVar3 = 0x4c7b;
        if (psVar19[4] != -2) {
          sVar3 = *psVar19;
        }
        if (sVar3 == sVar7) {
LAB_0359aa00:
          uVar15 = (uint)uVar17;
          *(short **)(lVar2 + -8) = psVar19;
          *(short **)(lVar11 + uVar17 * 8) = psVar20;
        }
        else {
          sVar4 = 0x4c7b;
          if (psVar20[4] != -2) {
            sVar4 = *psVar20;
          }
          if ((sVar4 != sVar7) &&
             ((sVar3 == sVar8 ||
              ((sVar4 != sVar8 &&
               ((sVar9 == sVar3 || ((sVar9 != sVar4 && ((sVar3 == sVar10 || (sVar4 != sVar10))))))))
              )))) goto LAB_0359aa00;
          psVar19 = psVar20;
        }
        uVar17 = uVar17 - 1;
      } while ((long)uVar14 < (long)uVar17);
    } while (uVar15 != uVar18);
  }
  return;
}

