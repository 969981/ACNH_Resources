
bool FUN_012ee4e0(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar11 = PTR_DAT_04bb2018;
  lVar14 = *param_2;
  if (lVar14 != 0) {
    psVar15 = (short *)param_2[3];
    if ((int)param_2[4] == 0) {
      local_70 = PTR_DAT_04bb2018 + 0x10;
      local_68 = (int)*psVar15;
      iStack_64 = (int)psVar15[1];
      sVar5 = psVar15[2];
      if (psVar15[4] <= psVar15[2]) {
        sVar5 = psVar15[4];
      }
      sVar6 = psVar15[3];
      if (psVar15[5] <= psVar15[3]) {
        sVar6 = psVar15[5];
      }
      psVar4 = psVar15 + (ulong)(uint)((iStack_64 - sVar6) * 3 + (local_68 - sVar5)) * 7 + 6;
      if (2 < (uint)(iStack_64 - sVar6) || 2 < (uint)(local_68 - sVar5)) {
        psVar4 = (short *)PTR_DAT_04bbc2f8;
      }
      FUN_0130af1c(lVar14,psVar4,&local_70,1,1);
      lVar12 = param_2[1];
    }
    else {
      FUN_0130ac20(lVar14,psVar15,1);
      lVar12 = param_2[1];
    }
    if (lVar12 != 0) {
      local_68 = (int)*psVar15;
      iStack_64 = (int)psVar15[1];
      local_70 = puVar11 + 0x10;
      FUN_0132101c(lVar12,&local_70,PTR_DAT_04bb3170);
    }
    lVar12 = param_2[2];
    if (lVar12 != 0) {
      lVar13 = param_2[3];
      sVar5 = *(short *)(lVar13 + 4);
      sVar6 = *(short *)(lVar13 + 8);
      sVar7 = *(short *)(lVar13 + 6);
      sVar8 = *(short *)(lVar13 + 10);
      iVar1 = (int)sVar5;
      if (sVar6 <= sVar5) {
        iVar1 = (int)sVar6;
      }
      iVar2 = (int)sVar5;
      if (sVar5 <= sVar6) {
        iVar2 = (int)sVar6;
      }
      iVar16 = (int)sVar7;
      if (sVar8 <= sVar7) {
        iVar16 = (int)sVar8;
      }
      iVar3 = (int)sVar7;
      if (sVar7 <= sVar8) {
        iVar3 = (int)sVar8;
      }
      if (iVar3 + 1 != iVar16) {
        iVar17 = iVar1;
        do {
          uVar9 = iVar17 - *(int *)(lVar12 + 0x28);
          uVar10 = iVar16 - *(int *)(lVar12 + 0x2c);
          if ((uVar9 < *(uint *)(lVar12 + 0x18) && uVar10 <= *(uint *)(lVar12 + 0x1c)) &&
              (*(uint *)(lVar12 + 0x18) <= uVar9 || *(uint *)(lVar12 + 0x1c) != uVar10)) {
            lVar13 = lVar12 + 0x40;
LAB_012ee608:
            FUN_0138367c(lVar13);
          }
          else if (((*(char *)(lVar12 + 0x88) != '\0') &&
                   ((uint)(iVar17 - *(int *)(lVar12 + 0x98)) < *(uint *)(lVar12 + 0xa0))) &&
                  ((uint)(iVar16 - *(int *)(lVar12 + 0x9c)) < *(uint *)(lVar12 + 0xa4))) {
            lVar13 = lVar12 + 0xa8;
            goto LAB_012ee608;
          }
          if (iVar17 < iVar2) {
            iVar17 = iVar17 + 1;
          }
          else {
            iVar16 = iVar16 + 1;
            iVar17 = iVar1;
          }
        } while ((iVar1 != iVar17) || (iVar3 + 1 != iVar16));
      }
    }
  }
  return lVar14 != 0;
}

