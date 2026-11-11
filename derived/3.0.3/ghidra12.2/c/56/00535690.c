
long FUN_00535690(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (param_2 != param_1) {
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    iVar13 = *(int *)(param_2 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar13) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,0x10,uVar7,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar7;
    }
    FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 4);
    *(int *)(param_1 + 0x28) = iVar13;
    iVar13 = *(int *)(param_2 + 0x38);
    uVar14 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar13) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,0x10,uVar7,*(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x30) = uVar7;
    }
    FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 4);
    *(int *)(param_1 + 0x38) = iVar13;
    iVar13 = *(int *)(param_2 + 0x48);
    uVar14 = *(undefined8 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar13) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,0x10,uVar7,*(undefined4 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x40) = uVar7;
    }
    FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 4);
    *(int *)(param_1 + 0x48) = iVar13;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0xd0);
    iVar13 = *(int *)(param_2 + 0xd8);
    uVar7 = *(undefined8 *)(param_1 + 0xd0);
    if ((int)(*(uint *)(param_1 + 0xdc) & 0x3fffffff) < iVar13) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,8,uVar7,*(undefined4 *)(param_1 + 0xd8));
      *(undefined8 *)(param_1 + 0xd0) = uVar7;
    }
    FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 3);
    *(int *)(param_1 + 0xd8) = iVar13;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    iVar13 = *(int *)(param_2 + 0xf0);
    uVar14 = *(undefined8 *)(param_2 + 0xe8);
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    if ((int)(*(uint *)(param_1 + 0xf4) & 0x3fffffff) < iVar13) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,8,uVar7,*(undefined4 *)(param_1 + 0xf0));
      *(undefined8 *)(param_1 + 0xe8) = uVar7;
    }
    FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 3);
    *(int *)(param_1 + 0xf0) = iVar13;
  }
  FUN_00438670(param_1 + 0x100,param_2 + 0x100);
  uVar7 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x140);
  uVar14 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar14;
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  if (param_2 != param_1) {
    uVar3 = *(uint *)(param_2 + 0x160);
    lVar15 = *(long *)(param_2 + 0x158);
    if ((int)(*(uint *)(param_1 + 0x164) & 0x3fffffff) < (int)uVar3) {
      lVar6 = FUN_004267f0(PTR_DAT_048607b8,uVar3,0x10,*(undefined8 *)(param_1 + 0x158),
                           *(undefined4 *)(param_1 + 0x160),param_1 + 0x164);
      *(long *)(param_1 + 0x158) = lVar6;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x158);
    }
    uVar4 = *(uint *)(param_1 + 0x160);
    uVar1 = uVar4;
    if ((int)uVar3 <= (int)uVar4) {
      uVar1 = uVar3;
    }
    if ((lVar6 != lVar15) && (0 < (int)uVar1)) {
      uVar10 = (ulong)uVar1;
      puVar9 = (undefined8 *)(lVar6 + 8);
      puVar12 = (undefined8 *)(lVar15 + 8);
      do {
        *(undefined4 *)(puVar9 + -1) = *(undefined4 *)(puVar12 + -1);
        uVar10 = uVar10 - 1;
        *puVar9 = *puVar12;
        puVar9 = puVar9 + 2;
        puVar12 = puVar12 + 2;
      } while (uVar10 != 0);
      lVar6 = *(long *)(param_1 + 0x158);
    }
    if ((int)uVar4 < (int)uVar3) {
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 0x10);
      puVar12 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10);
      uVar1 = uVar3 + ~uVar4 + 1 & 3;
      if (2 < uVar3 + ~uVar4) {
        iVar13 = (uVar4 + uVar1) - uVar3;
        puVar8 = puVar9;
        puVar11 = puVar12;
        do {
          uVar7 = puVar8[1];
          puVar9 = puVar8 + 8;
          *puVar11 = *puVar8;
          puVar11[1] = uVar7;
          puVar12 = puVar11 + 8;
          uVar7 = puVar8[3];
          iVar13 = iVar13 + 4;
          puVar11[2] = puVar8[2];
          puVar11[3] = uVar7;
          uVar7 = puVar8[5];
          puVar11[4] = puVar8[4];
          puVar11[5] = uVar7;
          uVar7 = puVar8[7];
          puVar11[6] = puVar8[6];
          puVar11[7] = uVar7;
          puVar8 = puVar9;
          puVar11 = puVar12;
        } while (iVar13 != 0);
      }
      if (uVar1 != 0) {
        iVar13 = -uVar1;
        do {
          uVar7 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar7;
          iVar13 = iVar13 + 1;
          puVar9 = puVar9 + 2;
          puVar12 = puVar12 + 2;
        } while (iVar13 != 0);
      }
    }
    *(uint *)(param_1 + 0x160) = uVar3;
    if (param_2 != param_1) {
      iVar13 = *(int *)(param_2 + 0x170);
      uVar14 = *(undefined8 *)(param_2 + 0x168);
      uVar7 = *(undefined8 *)(param_1 + 0x168);
      if ((int)(*(uint *)(param_1 + 0x174) & 0x3fffffff) < iVar13) {
        uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,8,uVar7,*(undefined4 *)(param_1 + 0x170),
                             param_1 + 0x174);
        *(undefined8 *)(param_1 + 0x168) = uVar7;
      }
      FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 3);
      *(int *)(param_1 + 0x170) = iVar13;
      iVar13 = *(int *)(param_2 + 0x180);
      uVar14 = *(undefined8 *)(param_2 + 0x178);
      uVar7 = *(undefined8 *)(param_1 + 0x178);
      if ((int)(*(uint *)(param_1 + 0x184) & 0x3fffffff) < iVar13) {
        uVar7 = FUN_004267f0(PTR_DAT_048607b8,iVar13,8,uVar7,*(undefined4 *)(param_1 + 0x180),
                             param_1 + 0x184);
        *(undefined8 *)(param_1 + 0x178) = uVar7;
      }
      FUN_0043aa30(uVar7,uVar14,(long)iVar13 << 3);
      *(int *)(param_1 + 0x180) = iVar13;
    }
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  uVar7 = *(undefined8 *)(param_2 + 400);
  uVar14 = *(undefined8 *)(param_2 + 0x198);
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 400) = uVar7;
  *(undefined8 *)(param_1 + 0x198) = uVar14;
  uVar7 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar7;
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar5 = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  uVar7 = *(undefined8 *)(param_2 + 0x1e0);
  uVar14 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1f8) = uVar5;
  *(undefined8 *)(param_1 + 0x1f0) = uVar14;
  *(undefined8 *)(param_1 + 0x1e0) = uVar7;
  if (param_2 != param_1) {
    uVar3 = *(uint *)(param_2 + 0x208);
    lVar15 = *(long *)(param_2 + 0x200);
    if ((int)(*(uint *)(param_1 + 0x20c) & 0x3fffffff) < (int)uVar3) {
      lVar6 = FUN_004267f0(PTR_DAT_048607b8,uVar3,0x10,*(undefined8 *)(param_1 + 0x200),
                           *(undefined4 *)(param_1 + 0x208),param_1 + 0x20c);
      *(long *)(param_1 + 0x200) = lVar6;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x200);
    }
    uVar4 = *(uint *)(param_1 + 0x208);
    uVar1 = uVar4;
    if ((int)uVar3 <= (int)uVar4) {
      uVar1 = uVar3;
    }
    if ((lVar6 != lVar15) && (0 < (int)uVar1)) {
      uVar10 = (ulong)uVar1;
      puVar9 = (undefined8 *)(lVar6 + 8);
      puVar12 = (undefined8 *)(lVar15 + 8);
      do {
        *(undefined4 *)(puVar9 + -1) = *(undefined4 *)(puVar12 + -1);
        uVar10 = uVar10 - 1;
        *puVar9 = *puVar12;
        puVar9 = puVar9 + 2;
        puVar12 = puVar12 + 2;
      } while (uVar10 != 0);
      lVar6 = *(long *)(param_1 + 0x200);
    }
    if ((int)uVar4 < (int)uVar3) {
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 0x10);
      puVar12 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10);
      uVar1 = uVar3 + ~uVar4 + 1 & 3;
      if (2 < uVar3 + ~uVar4) {
        iVar13 = (uVar4 + uVar1) - uVar3;
        puVar8 = puVar9;
        puVar11 = puVar12;
        do {
          uVar7 = puVar8[1];
          puVar9 = puVar8 + 8;
          *puVar11 = *puVar8;
          puVar11[1] = uVar7;
          puVar12 = puVar11 + 8;
          uVar7 = puVar8[3];
          iVar13 = iVar13 + 4;
          puVar11[2] = puVar8[2];
          puVar11[3] = uVar7;
          uVar7 = puVar8[5];
          puVar11[4] = puVar8[4];
          puVar11[5] = uVar7;
          uVar7 = puVar8[7];
          puVar11[6] = puVar8[6];
          puVar11[7] = uVar7;
          puVar8 = puVar9;
          puVar11 = puVar12;
        } while (iVar13 != 0);
      }
      if (uVar1 != 0) {
        iVar13 = -uVar1;
        do {
          uVar7 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar7;
          iVar13 = iVar13 + 1;
          puVar9 = puVar9 + 2;
          puVar12 = puVar12 + 2;
        } while (iVar13 != 0);
      }
    }
    *(uint *)(param_1 + 0x208) = uVar3;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x218) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x238) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 600) = uVar7;
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  uVar7 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x220) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x240) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x260) = uVar7;
  if (*(long *)(param_2 + 0x278) == 0) {
    lVar15 = *(long *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  else {
    FUN_004435a0();
    lVar15 = *(long *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  }
  if (lVar15 != 0) {
    FUN_004435c0();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = uVar7;
  return param_1;
}

