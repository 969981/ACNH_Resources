
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039ee490(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  uint local_80 [8];
  
  *(undefined1 *)(param_1 + 10) = 0;
  uVar17 = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  lVar19 = *(long *)PTR_DAT_04bb31c8;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar19 + 0xd0);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar19 + 0xd0);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar19 + 0xd0);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar19 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar19 + 0x58);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar19 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar19 + 0x40);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar19 + 0x30);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar19 + 0x58);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(lVar19 + 200);
  while( true ) {
    *(undefined8 *)(param_1 + 0x178 + (-(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3)) = 0;
    uVar2 = (int)uVar17 + 1;
    if (uVar2 == 0x2b) break;
    uVar17 = (ulong)((int)uVar17 + 2);
    *(undefined8 *)
     (param_1 + 0x178 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)) = 0;
  }
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  uVar11 = _UNK_04102888;
  uVar10 = _DAT_04102880;
  uVar9 = _UNK_041023d8;
  uVar8 = _DAT_041023d0;
  uVar7 = _UNK_04102208;
  uVar6 = _DAT_04102200;
  if (param_2 != 0xffffffff) {
    bVar4 = *(byte *)(param_1 + 8) & 3;
    local_80[4] = 0x3f800000;
    if ((*(byte *)(param_1 + 8) & 3) != 0) {
      local_80[4] = 0;
    }
    local_80[5] = 0x3f800000;
    if (bVar4 != 1) {
      local_80[5] = 0;
    }
    local_80[6] = 0x3f800000;
    if (bVar4 != 2) {
      local_80[6] = 0;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    local_80[7] = 0x3f800000;
    if (bVar4 != 3) {
      local_80[7] = 0;
    }
    if (iVar3 != 0) {
      iVar27 = 0;
      lVar19 = *(long *)(param_1 + 0x18);
      do {
        puVar23 = (undefined8 *)(lVar19 + (long)iVar27 * 0x410);
        *(undefined1 *)((long)puVar23 + 0x409) = 0;
        *(char *)((long)puVar23 + 0x3c9) = (char)param_2;
        plVar22 = puVar23 + 0x72;
        puVar23[1] = uVar7;
        *puVar23 = uVar6;
        puVar23[3] = uVar11;
        puVar23[2] = uVar10;
        uVar5 = *(ushort *)((long)puVar23 + 0x3ca);
        puVar23[5] = uVar9;
        puVar23[4] = uVar8;
        puVar23[7] = uVar7;
        puVar23[6] = uVar6;
        iVar14 = *(int *)(puVar23 + 0x78);
        puVar23[9] = uVar11;
        puVar23[8] = uVar10;
        puVar23[0xb] = uVar9;
        puVar23[10] = uVar8;
        iVar12 = (**(code **)(puVar23[0x72] + 0x20))(plVar22);
        iVar13 = (**(code **)(puVar23[0x72] + 0x20))(plVar22);
        iVar15 = *(int *)(puVar23 + 0x75);
        if (puVar23[0x76] == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (*DAT_04c61fd0)();
        }
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        uVar17 = (ulong)(iVar15 + (param_2 & 0xff) * (uint)uVar5 *
                                  ((iVar14 + iVar12) - 1U & -iVar13));
        lVar25 = lVar19 + (long)iVar27 * 0x410;
        lVar24 = lVar16 + uVar17;
        *(long *)(lVar25 + 0x3a0) = lVar24;
        local_80[0] = (uint)*(byte *)(param_1 + 8);
        (**(code **)(*plVar22 + 0x20))(plVar22);
        (**(code **)(*plVar22 + 0x20))(plVar22);
        lVar26 = **(long **)(lVar25 + 0x398);
        bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x11c) * 4];
        (**(code **)(*plVar22 + 0x18))(plVar22);
        if (bVar4 != 0) {
          uVar20 = (ulong)*(ushort *)(lVar26 + 0x118);
          if (bVar4 < 8) {
            lVar26 = 0;
            puVar18 = local_80;
          }
          else {
            lVar26 = 0;
            puVar21 = (uint *)(lVar16 + uVar20 + uVar17 + 0x10);
            puVar18 = local_80;
            do {
              lVar26 = lVar26 + -8;
              puVar21[-4] = *puVar18;
              puVar21[-3] = puVar18[1];
              puVar21[-2] = puVar18[2];
              puVar21[-1] = puVar18[3];
              uVar2 = puVar18[5];
              *puVar21 = puVar18[4];
              puVar21[1] = uVar2;
              puVar21[2] = puVar18[6];
              puVar1 = puVar18 + 7;
              puVar18 = puVar18 + 8;
              puVar21[3] = *puVar1;
              puVar21 = puVar21 + 8;
            } while (-lVar26 != ((ulong)bVar4 & 0xf8));
            lVar26 = -lVar26;
          }
          if ((bVar4 & 7) != 0) {
            uVar17 = (ulong)bVar4 & 7;
            puVar21 = (uint *)(lVar24 + uVar20 + lVar26 * 4);
            do {
              uVar17 = uVar17 - 1;
              *puVar21 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar21 = puVar21 + 1;
            } while (uVar17 != 0);
          }
        }
        lVar16 = *(long *)(lVar25 + 0x3a0);
        (**(code **)(*plVar22 + 0x20))(plVar22);
        (**(code **)(*plVar22 + 0x20))(plVar22);
        lVar24 = **(long **)(lVar25 + 0x398);
        bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x128) * 4];
        (**(code **)(*plVar22 + 0x18))(plVar22);
        if ((ulong)bVar4 != 0) {
          memcpy((void *)(lVar16 + (ulong)*(ushort *)(lVar24 + 0x124)),local_80 + 4,
                 (ulong)bVar4 << 2);
        }
        iVar27 = iVar27 + 1;
      } while (iVar3 != iVar27);
    }
    iVar3 = *(int *)(param_1 + 0x388);
    if (iVar3 != 0) {
      iVar27 = 0;
      lVar19 = *(long *)(param_1 + 0x390);
      do {
        plVar22 = (long *)(lVar19 + (long)iVar27 * 0xb8);
        *(undefined1 *)(plVar22 + 0x16) = 1;
        uVar5 = *(ushort *)((long)plVar22 + 0x3a);
        lVar24 = plVar22[6];
        plVar22[0xf] = 0xffffffff;
        *(char *)((long)plVar22 + 0x39) = (char)param_2;
        iVar14 = (**(code **)(*plVar22 + 0x20))(plVar22);
        iVar15 = (**(code **)(*plVar22 + 0x20))(plVar22);
        lVar25 = plVar22[3];
        lVar16 = 0;
        if (plVar22[4] != 0) {
          lVar16 = (*DAT_04c61fd0)();
        }
        plVar22[2] = lVar16 + (ulong)((int)lVar25 +
                                     (param_2 & 0xff) * (uint)uVar5 *
                                     (((int)lVar24 + iVar14) - 1U & -iVar15));
        iVar27 = iVar27 + 1;
      } while (iVar3 != iVar27);
    }
  }
  return;
}

