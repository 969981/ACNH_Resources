
void FUN_0271da60(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = 0;
  puVar1 = PTR_DAT_04bb4c40 + 0x10;
  lVar8 = param_1;
  do {
    lVar10 = 0;
    lVar9 = lVar8;
    do {
      puVar7 = (undefined8 *)(param_1 + lVar5 * 0x8458 + lVar10 * 0xc08);
      *puVar7 = &PTR_LAB_04a8e5a0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      puVar7[0xc] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined1 *)(puVar7 + 0xd) = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[7] = &PTR_LAB_04a8e600;
      puVar7[0x13] = 0;
      *(undefined1 *)(puVar7 + 0x14) = 0;
      puVar7[0x1a] = 0;
      *(undefined1 *)(puVar7 + 0x1b) = 0;
      puVar7[2] = 0;
      puVar7[3] = puVar7 + 7;
      puVar7[0xe] = &PTR_LAB_04a8e660;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = puVar7 + 0xe;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0x11] = puVar7 + 0x15;
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      puVar7[0x19] = 0;
      memset(puVar7 + 0x1c,0,0xa80);
      lVar3 = 0;
      do {
        lVar4 = lVar9 + lVar3;
        lVar3 = lVar3 + 0x150;
        *(undefined1 *)(lVar4 + 0x110) = 0;
        *(undefined8 *)(lVar4 + 0x100) = 0;
        *(undefined8 *)(lVar4 + 0x108) = 0;
        *(undefined1 *)(lVar4 + 0x148) = 0;
        *(undefined1 *)(lVar4 + 0x180) = 0;
        *(undefined1 *)(lVar4 + 0x1b8) = 0;
        *(undefined1 *)(lVar4 + 0x1f0) = 0;
        *(undefined1 *)(lVar4 + 0x228) = 0;
        *(undefined8 *)(lVar4 + 0x220) = 0;
        *(undefined8 *)(lVar4 + 0x218) = 0;
        *(undefined8 *)(lVar4 + 0x210) = 0;
        *(undefined8 *)(lVar4 + 0x208) = 0;
        *(undefined8 *)(lVar4 + 0xf0) = 0;
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        *(undefined **)(lVar4 + 0xe0) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 0xe8) = 0;
        *(undefined8 *)(lVar4 + 0x128) = 0;
        *(undefined8 *)(lVar4 + 0x130) = 0;
        *(undefined8 *)(lVar4 + 0x138) = 0;
        *(undefined8 *)(lVar4 + 0x140) = 0;
        *(undefined **)(lVar4 + 0x118) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 0x120) = 0;
        *(undefined8 *)(lVar4 + 0x160) = 0;
        *(undefined8 *)(lVar4 + 0x168) = 0;
        *(undefined8 *)(lVar4 + 0x170) = 0;
        *(undefined8 *)(lVar4 + 0x178) = 0;
        *(undefined **)(lVar4 + 0x150) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 0x158) = 0;
        *(undefined8 *)(lVar4 + 0x1a8) = 0;
        *(undefined8 *)(lVar4 + 0x1b0) = 0;
        *(undefined8 *)(lVar4 + 0x198) = 0;
        *(undefined8 *)(lVar4 + 0x1a0) = 0;
        *(undefined **)(lVar4 + 0x188) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 400) = 0;
        *(undefined8 *)(lVar4 + 0x1e0) = 0;
        *(undefined8 *)(lVar4 + 0x1e8) = 0;
        *(undefined8 *)(lVar4 + 0x1d0) = 0;
        *(undefined8 *)(lVar4 + 0x1d8) = 0;
        *(undefined **)(lVar4 + 0x1c0) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 0x1c8) = 0;
        *(undefined **)(lVar4 + 0x1f8) = &DAT_04a8edf0;
        *(undefined8 *)(lVar4 + 0x200) = 0;
      } while (lVar3 != 0xa80);
      lVar3 = 0;
      iVar6 = 0;
      puVar7[0x15] = &PTR_LAB_04a8edc0;
      do {
        lVar4 = puVar7[0x18];
        puVar2 = puVar7 + 0x1c + (long)iVar6 * 7;
        puVar7[0x18] = puVar2;
        if (lVar4 != 0) {
          puVar2[4] = lVar4;
        }
        puVar2[2] = lVar3 + puVar2[2];
        FUN_026400e0(puVar2,lVar3);
        lVar3 = lVar3 + 2;
        iVar6 = iVar6 + 1;
      } while (lVar3 != 0x60);
      puVar7[0x16d] = 0;
      puVar7[0xe] = &PTR_LAB_04a8e630;
      puVar7[7] = &PTR_LAB_04a8e5d0;
      lVar3 = puVar7[2];
      puVar7[0x16f] = 0;
      puVar7[0x170] = 0;
      puVar7[0x171] = 0;
      *(undefined1 *)(puVar7 + 0x172) = 0;
      puVar7[0x16e] = lVar3 + 0x60;
      if (puVar7[3] != 0) {
        puVar7[0x170] = puVar7[3];
      }
      puVar7[0x174] = 0;
      puVar7[0x17c] = lVar3 + 0x6a;
      puVar7[0x177] = puVar7 + 0x16c;
      lVar10 = lVar10 + 1;
      puVar7[0x16c] = &DAT_04a8c890;
      puVar7[0x173] = &DAT_04a8f390;
      puVar7[0x17a] = puVar1;
      lVar9 = lVar9 + 0xc08;
      puVar7[0x175] = lVar3 + 0x68;
      puVar7[0x176] = 0;
      puVar7[0x178] = 0;
      *(undefined1 *)(puVar7 + 0x179) = 0;
      puVar7[0x17b] = 0;
      puVar7[0x17d] = 0;
      puVar7[0x17f] = 0;
      *(undefined1 *)(puVar7 + 0x180) = 0;
      puVar7[3] = puVar7 + 0x17a;
      puVar7[0x17e] = puVar7 + 0x173;
      *puVar7 = &PTR_LAB_04a8e570;
    } while (lVar10 != 0xb);
    lVar5 = lVar5 + 1;
    lVar8 = lVar8 + 0x8458;
  } while (lVar5 != 8);
  return;
}

