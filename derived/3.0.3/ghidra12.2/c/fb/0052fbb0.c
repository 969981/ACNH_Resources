
void FUN_0052fbb0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  uint local_6c;
  uint local_68;
  int local_64;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d49e0;
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 9) = uVar4;
  puVar7 = PTR_DAT_048607b8;
  iVar5 = *(int *)(param_2 + 0x58);
  lVar14 = *(long *)(param_2 + 0x50);
  if (iVar5 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_64 = iVar5;
    lVar8 = FUN_00421ed0(PTR_DAT_048607b8,0x30,&local_64);
    iVar16 = 0;
    param_1[10] = lVar8;
    *(int *)(param_1 + 0xb) = iVar5;
    *(int *)((long)param_1 + 0x5c) = local_64;
    do {
      FUN_0043bd50(lVar8,lVar14);
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined8 *)(lVar8 + 0x10) = 0x8000000000000000;
      uVar6 = *(uint *)(lVar14 + 0x10);
      puVar15 = *(undefined4 **)(lVar14 + 8);
      local_6c = uVar6;
      if ((int)uVar6 < 1) {
        *(undefined8 *)(lVar8 + 8) = 0;
        *(undefined8 *)(lVar8 + 0x10) = 0x8000000000000000;
      }
      else {
        puVar9 = (undefined4 *)FUN_00421ed0(puVar7,4,&local_6c);
        *(uint *)(lVar8 + 0x10) = uVar6;
        *(uint *)(lVar8 + 0x14) = local_6c;
        uVar3 = uVar6 & 7;
        *(undefined4 **)(lVar8 + 8) = puVar9;
        if (6 < uVar6 - 1) {
          iVar13 = uVar3 - uVar6;
          puVar10 = puVar9;
          do {
            *puVar10 = *puVar15;
            puVar10[1] = puVar15[1];
            puVar10[2] = puVar15[2];
            puVar10[3] = puVar15[3];
            puVar10[4] = puVar15[4];
            puVar10[5] = puVar15[5];
            puVar10[6] = puVar15[6];
            puVar2 = puVar15 + 7;
            puVar9 = puVar10 + 8;
            puVar15 = puVar15 + 8;
            puVar10[7] = *puVar2;
            iVar13 = iVar13 + 8;
            puVar10 = puVar9;
          } while (iVar13 != 0);
        }
        if (uVar3 != 0) {
          iVar13 = -uVar3;
          do {
            iVar13 = iVar13 + 1;
            *puVar9 = *puVar15;
            puVar9 = puVar9 + 1;
            puVar15 = puVar15 + 1;
          } while (iVar13 != 0);
        }
      }
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0x8000000000000000;
      uVar6 = *(uint *)(lVar14 + 0x20);
      puVar17 = *(undefined1 **)(lVar14 + 0x18);
      local_68 = uVar6;
      if ((int)uVar6 < 1) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0x8000000000000000;
      }
      else {
        puVar11 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_68);
        *(uint *)(lVar8 + 0x20) = uVar6;
        *(uint *)(lVar8 + 0x24) = local_68;
        uVar3 = uVar6 & 7;
        *(undefined1 **)(lVar8 + 0x18) = puVar11;
        if (6 < uVar6 - 1) {
          iVar13 = uVar3 - uVar6;
          puVar12 = puVar11;
          do {
            *puVar12 = *puVar17;
            puVar12[1] = puVar17[1];
            puVar12[2] = puVar17[2];
            puVar12[3] = puVar17[3];
            puVar12[4] = puVar17[4];
            puVar12[5] = puVar17[5];
            puVar12[6] = puVar17[6];
            puVar1 = puVar17 + 7;
            puVar11 = puVar12 + 8;
            puVar17 = puVar17 + 8;
            puVar12[7] = *puVar1;
            iVar13 = iVar13 + 8;
            puVar12 = puVar11;
          } while (iVar13 != 0);
        }
        if (uVar3 != 0) {
          iVar13 = -uVar3;
          do {
            iVar13 = iVar13 + 1;
            *puVar11 = *puVar17;
            puVar11 = puVar11 + 1;
            puVar17 = puVar17 + 1;
          } while (iVar13 != 0);
        }
      }
      iVar16 = iVar16 + 1;
      *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar14 + 0x28);
      lVar14 = lVar14 + 0x30;
      lVar8 = lVar8 + 0x30;
    } while (iVar16 != iVar5);
  }
  return;
}

