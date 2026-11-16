
void FUN_027c94e0(byte *param_1,long param_2,int *param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  pbVar12 = param_1 + 4;
  memset(pbVar12,0,0xb10);
  lVar5 = 0;
  do {
    pbVar13 = param_1 + lVar5 + 4;
    pbVar13[0] = 0xfe;
    pbVar13[1] = 0xff;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    FUN_0277d4ac(pbVar13);
    lVar1 = lVar5 + 0xc;
    pbVar13 = param_1 + lVar5 + 0xc;
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0xb10);
  memset(param_1 + 0xb14,0,0x588);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 0x18;
    param_1[lVar5 + 0xb18] = 0;
    pbVar2 = param_1 + lVar5 + 0xb1a;
    pbVar13 = param_1 + lVar5 + 0xb14;
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2 = param_1 + lVar5 + 0xb26;
    param_1[lVar5 + 0xb1e] = 0;
    pbVar13 = param_1 + lVar5 + 0xb20;
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    param_1[lVar5 + 0xb24] = 0;
    param_1[lVar5 + 0xb2a] = 0;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0x588);
  iVar11 = *param_3;
  if (*(int *)(DAT_053d2ea8 + 0x26bc) == iVar11) {
    lVar5 = 0x26bc;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x26c8) == iVar11) {
    lVar5 = 0x26c8;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x26d4) == iVar11) {
    lVar5 = 0x26d4;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x26e0) == iVar11) {
    lVar5 = 0x26e0;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x26ec) == iVar11) {
    lVar5 = 0x26ec;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x26f8) == iVar11) {
    lVar5 = 0x26f8;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x2704) == iVar11) {
    lVar5 = 0x2704;
  }
  else if (*(int *)(DAT_053d2ea8 + 10000) == iVar11) {
    lVar5 = 10000;
  }
  else if (*(int *)(DAT_053d2ea8 + 0x271c) == iVar11) {
    lVar5 = 0x271c;
  }
  else {
    if (*(int *)(DAT_053d2ea8 + 0x2728) != iVar11) goto LAB_027c9688;
    lVar5 = 0x2728;
  }
  *(undefined1 *)(DAT_053d2ea8 + lVar5 + 9) = 1;
LAB_027c9688:
  lVar5 = 0;
  do {
    psVar8 = (short *)(param_2 + lVar5 * 0xc);
    if (*psVar8 == -2) break;
    iVar11 = 0;
    do {
      pbVar13 = pbVar12 + (long)iVar11 * 0xc;
      if (*(short *)pbVar13 == -2) {
        *(short *)pbVar13 = *psVar8;
        pbVar13[2] = *(byte *)(psVar8 + 1);
        pbVar13[3] = *(byte *)((long)psVar8 + 3);
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(psVar8 + 2);
        *(undefined4 *)(pbVar12 + (long)iVar11 * 0xc + 8) =
             *(undefined4 *)(param_2 + lVar5 * 0xc + 8);
        break;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0xec);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xec);
  lVar5 = 0;
  sVar4 = *(short *)PTR_DAT_04bbc1c0;
  do {
    psVar8 = (short *)(param_2 + 0xb10 + lVar5 * 6);
    if (*psVar8 == sVar4) break;
    iVar11 = 0;
    do {
      pbVar12 = param_1 + 0xb14 + (long)iVar11 * 6;
      if (*(short *)pbVar12 == sVar4) {
        uVar3 = *(undefined4 *)psVar8;
        pbVar12[4] = *(byte *)(psVar8 + 2);
        *(undefined4 *)pbVar12 = uVar3;
        break;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0xec);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xec);
  uVar6 = *(undefined8 *)(param_2 + 0x10a0);
  uVar7 = *(undefined8 *)(param_2 + 0x10a8);
  uVar9 = *(undefined8 *)(param_2 + 0x10b0);
  *(undefined4 *)(param_1 + 0x10bc) = *(undefined4 *)(param_2 + 0x10b8);
  uVar10 = *(undefined8 *)(param_2 + 0x1098);
  *(undefined8 *)(param_1 + 0x10ac) = uVar7;
  *(undefined8 *)(param_1 + 0x10b4) = uVar9;
  *(undefined8 *)(param_1 + 0x109c) = uVar10;
  *(undefined8 *)(param_1 + 0x10a4) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x10bc);
  uVar7 = *(undefined8 *)(param_2 + 0x10c4);
  *(undefined4 *)(param_1 + 0x10d0) = *(undefined4 *)(param_2 + 0x10cc);
  *(undefined8 *)(param_1 + 0x10c8) = uVar7;
  *(undefined8 *)(param_1 + 0x10c0) = uVar6;
  *(undefined2 *)(param_1 + 0x10d4) = *(undefined2 *)(param_2 + 0x10d0);
  param_1[0x10d6] = *(byte *)(param_2 + 0x10d2);
  param_1[0x10d7] = *(byte *)(param_2 + 0x10d3);
  *(undefined4 *)(param_1 + 0x10d8) = *(undefined4 *)(param_2 + 0x10d4);
  *(undefined2 *)(param_1 + 0x10dc) = *(undefined2 *)(param_2 + 0x10d8);
  param_1[0x10de] = *(byte *)(param_2 + 0x10da);
  param_1[0x10df] = *(byte *)(param_2 + 0x10db);
  *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(param_2 + 0x10dc);
  uVar6 = *(undefined8 *)(param_2 + 0x10e0);
  uVar7 = *(undefined8 *)(param_2 + 0x10e8);
  uVar9 = *(undefined8 *)(param_2 + 0x10f8);
  *(undefined8 *)(param_1 + 0x10f4) = *(undefined8 *)(param_2 + 0x10f0);
  *(undefined8 *)(param_1 + 0x10fc) = uVar9;
  *(undefined8 *)(param_1 + 0x10e4) = uVar6;
  *(undefined8 *)(param_1 + 0x10ec) = uVar7;
  param_1[0x1104] = *(byte *)(param_2 + 0x1100);
  *param_1 = *param_1 | 1;
  return;
}

