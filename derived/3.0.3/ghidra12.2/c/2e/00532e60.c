
/* WARNING: Removing unreachable block (ram,0x00533608) */

long FUN_00532e60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x48);
    lVar16 = *(long *)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar2) {
      lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x10,*(undefined8 *)(param_1 + 0x40),
                           *(undefined4 *)(param_1 + 0x48));
      *(long *)(param_1 + 0x40) = lVar4;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x40);
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    uVar1 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar1 = uVar2;
    }
    if ((lVar4 != lVar16) && (0 < (int)uVar1)) {
      uVar14 = (ulong)uVar1;
      if (uVar14 - 1 < 3) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        puVar9 = (undefined8 *)(lVar16 + 0x20);
        puVar12 = (undefined8 *)(lVar4 + 0x20);
        do {
          uVar5 = puVar9[-3];
          lVar13 = lVar13 + 4;
          puVar12[-4] = puVar9[-4];
          puVar12[-3] = uVar5;
          uVar5 = puVar9[-1];
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar5;
          uVar5 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar5;
          puVar8 = puVar9 + 2;
          uVar5 = puVar9[3];
          puVar9 = puVar9 + 8;
          puVar12[2] = *puVar8;
          puVar12[3] = uVar5;
          puVar12 = puVar12 + 8;
        } while (uVar14 - (uVar14 & 3) != lVar13);
      }
      if ((uVar1 & 3) != 0) {
        lVar15 = -(uVar14 & 3);
        puVar9 = (undefined8 *)(lVar4 + lVar13 * 0x10);
        puVar12 = (undefined8 *)(lVar16 + lVar13 * 0x10);
        do {
          uVar5 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar5;
          lVar15 = lVar15 + 1;
          puVar9 = puVar9 + 2;
          puVar12 = puVar12 + 2;
        } while (lVar15 != 0);
      }
      lVar4 = *(long *)(param_1 + 0x40);
    }
    if ((int)uVar3 < (int)uVar2) {
      puVar9 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 0x10);
      puVar12 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 0x10);
      uVar1 = uVar2 + ~uVar3 + 1 & 3;
      if (2 < uVar2 + ~uVar3) {
        iVar7 = (uVar3 + uVar1) - uVar2;
        puVar8 = puVar9;
        puVar11 = puVar12;
        do {
          uVar5 = puVar8[1];
          puVar9 = puVar8 + 8;
          *puVar11 = *puVar8;
          puVar11[1] = uVar5;
          puVar12 = puVar11 + 8;
          uVar5 = puVar8[3];
          iVar7 = iVar7 + 4;
          puVar11[2] = puVar8[2];
          puVar11[3] = uVar5;
          uVar5 = puVar8[5];
          puVar11[4] = puVar8[4];
          puVar11[5] = uVar5;
          uVar5 = puVar8[7];
          puVar11[6] = puVar8[6];
          puVar11[7] = uVar5;
          puVar8 = puVar9;
          puVar11 = puVar12;
        } while (iVar7 != 0);
      }
      if (uVar1 != 0) {
        iVar7 = -uVar1;
        do {
          uVar5 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar5;
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 2;
          puVar12 = puVar12 + 2;
        } while (iVar7 != 0);
      }
    }
    *(uint *)(param_1 + 0x48) = uVar2;
    if (param_2 != param_1) {
      uVar17 = *(undefined8 *)(param_2 + 0x50);
      iVar7 = *(int *)(param_2 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,2,uVar5,*(undefined4 *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x50) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 1);
      *(int *)(param_1 + 0x58) = iVar7;
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
      iVar7 = *(int *)(param_2 + 0x70);
      uVar17 = *(undefined8 *)(param_2 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      if ((int)(*(uint *)(param_1 + 0x74) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,4,uVar5,*(undefined4 *)(param_1 + 0x70));
        *(undefined8 *)(param_1 + 0x68) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 2);
      *(int *)(param_1 + 0x70) = iVar7;
      iVar7 = *(int *)(param_2 + 0x80);
      uVar17 = *(undefined8 *)(param_2 + 0x78);
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      if ((int)(*(uint *)(param_1 + 0x84) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,8,uVar5,*(undefined4 *)(param_1 + 0x80));
        *(undefined8 *)(param_1 + 0x78) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 3);
      *(int *)(param_1 + 0x80) = iVar7;
      iVar7 = *(int *)(param_2 + 0x90);
      uVar17 = *(undefined8 *)(param_2 + 0x88);
      uVar5 = *(undefined8 *)(param_1 + 0x88);
      if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,8,uVar5,*(undefined4 *)(param_1 + 0x90));
        *(undefined8 *)(param_1 + 0x88) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 3);
      *(int *)(param_1 + 0x90) = iVar7;
      iVar7 = *(int *)(param_2 + 0xa0);
      uVar17 = *(undefined8 *)(param_2 + 0x98);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      if ((int)(*(uint *)(param_1 + 0xa4) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,8,uVar5,*(undefined4 *)(param_1 + 0xa0));
        *(undefined8 *)(param_1 + 0x98) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 3);
      *(int *)(param_1 + 0xa0) = iVar7;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
      iVar7 = *(int *)(param_2 + 0xb8);
      uVar17 = *(undefined8 *)(param_2 + 0xb0);
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,4,uVar5,*(undefined4 *)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb0) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 2);
      *(int *)(param_1 + 0xb8) = iVar7;
      iVar7 = *(int *)(param_2 + 200);
      uVar17 = *(undefined8 *)(param_2 + 0xc0);
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      if ((int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,0x40,uVar5,*(undefined4 *)(param_1 + 200));
        *(undefined8 *)(param_1 + 0xc0) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 6);
      *(int *)(param_1 + 200) = iVar7;
      iVar7 = *(int *)(param_2 + 0xd8);
      uVar17 = *(undefined8 *)(param_2 + 0xd0);
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      if ((int)(*(uint *)(param_1 + 0xdc) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,8,uVar5,*(undefined4 *)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 0xd0) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 3);
      *(int *)(param_1 + 0xd8) = iVar7;
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
      iVar7 = *(int *)(param_2 + 0xf0);
      uVar17 = *(undefined8 *)(param_2 + 0xe8);
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
      if ((int)(*(uint *)(param_1 + 0xf4) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,4,uVar5,*(undefined4 *)(param_1 + 0xf0));
        *(undefined8 *)(param_1 + 0xe8) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 2);
      *(int *)(param_1 + 0xf0) = iVar7;
      iVar7 = *(int *)(param_2 + 0x100);
      uVar17 = *(undefined8 *)(param_2 + 0xf8);
      uVar5 = *(undefined8 *)(param_1 + 0xf8);
      if ((int)(*(uint *)(param_1 + 0x104) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,8,uVar5,*(undefined4 *)(param_1 + 0x100),
                             param_1 + 0x104);
        *(undefined8 *)(param_1 + 0xf8) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7 << 3);
      *(int *)(param_1 + 0x100) = iVar7;
      uVar5 = *(undefined8 *)(param_2 + 0x108);
      uVar17 = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(param_1 + 0x118) = uVar17;
      *(undefined8 *)(param_1 + 0x108) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + 0x120);
      uVar17 = *(undefined8 *)(param_2 + 0x128);
      uVar10 = *(undefined8 *)(param_2 + 0x138);
      uVar6 = *(undefined8 *)(param_1 + 0x160);
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      *(undefined8 *)(param_1 + 0x120) = uVar5;
      *(undefined8 *)(param_1 + 0x128) = uVar17;
      uVar10 = *(undefined8 *)(param_2 + 0x150);
      uVar5 = *(undefined8 *)(param_2 + 0x140);
      uVar17 = *(undefined8 *)(param_2 + 0x148);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
      *(undefined8 *)(param_1 + 0x148) = uVar17;
      *(undefined8 *)(param_1 + 0x150) = uVar10;
      *(undefined8 *)(param_1 + 0x140) = uVar5;
      iVar7 = *(int *)(param_2 + 0x168);
      uVar5 = *(undefined8 *)(param_2 + 0x160);
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x3fffffff) < iVar7) {
        uVar6 = FUN_004267f0(PTR_DAT_048607b8,iVar7,2,uVar6,*(undefined4 *)(param_1 + 0x168),
                             param_1 + 0x16c);
        *(undefined8 *)(param_1 + 0x160) = uVar6;
      }
      FUN_0043aa30(uVar6,uVar5,(long)iVar7 << 1);
      *(int *)(param_1 + 0x168) = iVar7;
      iVar7 = *(int *)(param_2 + 0x178);
      uVar17 = *(undefined8 *)(param_2 + 0x170);
      uVar5 = *(undefined8 *)(param_1 + 0x170);
      if ((int)(*(uint *)(param_1 + 0x17c) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,1,uVar5,*(undefined4 *)(param_1 + 0x178),
                             param_1 + 0x17c);
        *(undefined8 *)(param_1 + 0x170) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7);
      *(int *)(param_1 + 0x178) = iVar7;
      *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
      iVar7 = *(int *)(param_2 + 400);
      uVar17 = *(undefined8 *)(param_2 + 0x188);
      uVar5 = *(undefined8 *)(param_1 + 0x188);
      if ((int)(*(uint *)(param_1 + 0x194) & 0x3fffffff) < iVar7) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,iVar7,1,uVar5,*(undefined4 *)(param_1 + 400),
                             param_1 + 0x194);
        *(undefined8 *)(param_1 + 0x188) = uVar5;
      }
      FUN_0043aa30(uVar5,uVar17,(long)iVar7);
      *(int *)(param_1 + 400) = iVar7;
      uVar2 = *(uint *)(param_2 + 0x1a0);
      lVar16 = *(long *)(param_2 + 0x198);
      if ((int)(*(uint *)(param_1 + 0x1a4) & 0x3fffffff) < (int)uVar2) {
        lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,*(undefined8 *)(param_1 + 0x198),
                             *(undefined4 *)(param_1 + 0x1a0),param_1 + 0x1a4);
        *(long *)(param_1 + 0x198) = lVar4;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x198);
      }
      uVar3 = *(uint *)(param_1 + 0x1a0);
      uVar1 = uVar3;
      if ((int)uVar2 <= (int)uVar3) {
        uVar1 = uVar2;
      }
      if ((lVar4 != lVar16) && (0 < (int)uVar1)) {
        if (uVar1 == 1) {
          lVar13 = 0;
LAB_00533640:
          *(undefined8 *)(lVar4 + lVar13 * 8) = *(undefined8 *)(lVar16 + lVar13 * 8);
        }
        else {
          lVar13 = 0;
          do {
            lVar15 = lVar13 * 8;
            lVar13 = lVar13 + 2;
            puVar9 = (undefined8 *)(lVar16 + lVar15);
            puVar12 = (undefined8 *)(lVar4 + lVar15);
            *puVar12 = *puVar9;
            puVar12[1] = puVar9[1];
          } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar13);
          if ((uVar1 & 1) != 0) goto LAB_00533640;
        }
        lVar4 = *(long *)(param_1 + 0x198);
      }
      if ((int)uVar3 < (int)uVar2) {
        puVar9 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8);
        puVar12 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8);
        uVar1 = uVar2 + ~uVar3 + 1 & 3;
        if (2 < uVar2 + ~uVar3) {
          iVar7 = (uVar3 + uVar1) - uVar2;
          puVar8 = puVar9;
          puVar11 = puVar12;
          do {
            *puVar11 = *puVar8;
            puVar11[1] = puVar8[1];
            puVar11[2] = puVar8[2];
            puVar9 = puVar8 + 4;
            puVar12 = puVar11 + 4;
            puVar11[3] = puVar8[3];
            iVar7 = iVar7 + 4;
            puVar8 = puVar9;
            puVar11 = puVar12;
          } while (iVar7 != 0);
        }
        if (uVar1 != 0) {
          iVar7 = -uVar1;
          do {
            iVar7 = iVar7 + 1;
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar7 != 0);
        }
      }
      *(uint *)(param_1 + 0x1a0) = uVar2;
      goto LAB_005336e4;
    }
  }
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  uVar5 = *(undefined8 *)(param_2 + 0x108);
  uVar17 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar17;
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x120);
  uVar17 = *(undefined8 *)(param_2 + 0x128);
  uVar10 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar10;
  *(undefined8 *)(param_1 + 0x120) = uVar5;
  *(undefined8 *)(param_1 + 0x128) = uVar17;
  uVar10 = *(undefined8 *)(param_2 + 0x150);
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  uVar17 = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x148) = uVar17;
  *(undefined8 *)(param_1 + 0x150) = uVar10;
  *(undefined8 *)(param_1 + 0x140) = uVar5;
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
LAB_005336e4:
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  FUN_00533710(param_1 + 0x1b0,param_2 + 0x1b0);
  return param_1;
}

