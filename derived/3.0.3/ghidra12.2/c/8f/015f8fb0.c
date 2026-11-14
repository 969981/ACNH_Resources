
void FUN_015f8fb0(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  
  if (param_2 == 0xd) {
    lVar13 = param_1 + 0x2b8;
    puVar14 = *(undefined4 **)(param_1 + 0x290);
    iVar15 = *(int *)(param_1 + 0x3b0);
    lVar16 = *(long *)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x38))(lVar13,0x20);
    if (0 < iVar15) {
      puVar10 = (undefined4 *)(lVar16 + (ulong)*(ushort *)(**(long **)(param_1 + 0x2c0) + 4));
      do {
        iVar15 = iVar15 + -1;
        *puVar10 = *puVar14;
        puVar10[1] = puVar14[1];
        puVar10[2] = puVar14[2];
        puVar10[3] = puVar14[3];
        puVar10[4] = puVar14[4];
        puVar10[5] = puVar14[5];
        puVar10[6] = puVar14[6];
        puVar1 = puVar14 + 7;
        puVar14 = puVar14 + 8;
        puVar10[7] = *puVar1;
        puVar10 = puVar10 + 8;
      } while (iVar15 != 0);
    }
    puVar14 = *(undefined4 **)(param_1 + 0x298);
    lVar16 = *(long *)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    lVar17 = **(long **)(param_1 + 0x2c0);
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x14) * 4];
    uVar9 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar13);
    if (bVar4 != 0) {
      iVar15 = 0;
      lVar16 = lVar16 + (ulong)*(ushort *)(lVar17 + 0x10);
      do {
        if (bVar4 < 8) {
          lVar11 = 0;
        }
        else {
          lVar17 = 0;
          lVar11 = 0;
          do {
            puVar10 = (undefined4 *)((long)puVar14 + lVar17);
            puVar1 = (undefined4 *)(lVar16 + lVar17);
            lVar11 = lVar11 + -8;
            lVar17 = lVar17 + 0x20;
            *puVar1 = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            puVar1[4] = puVar10[4];
            puVar1[5] = puVar10[5];
            puVar1[6] = puVar10[6];
            puVar1[7] = puVar10[7];
          } while (-lVar11 != ((ulong)bVar4 & 0xf8));
          puVar14 = (undefined4 *)((long)puVar14 + lVar17);
          lVar11 = -lVar11;
        }
        if ((bVar4 & 7) != 0) {
          lVar11 = lVar11 << 2;
          uVar12 = (ulong)bVar4 & 7;
          puVar10 = puVar14;
          do {
            puVar14 = puVar10 + 1;
            uVar12 = uVar12 - 1;
            *(undefined4 *)(lVar16 + lVar11) = *puVar10;
            lVar11 = lVar11 + 4;
            puVar10 = puVar14;
          } while (uVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + (uVar9 & 0xff) * 4;
      } while (iVar15 != 0x200);
    }
    puVar14 = *(undefined4 **)(param_1 + 0x2a0);
    lVar16 = *(long *)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    lVar17 = **(long **)(param_1 + 0x2c0);
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x20) * 4];
    uVar9 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar13);
    if (bVar4 != 0) {
      iVar15 = 0;
      lVar16 = lVar16 + (ulong)*(ushort *)(lVar17 + 0x1c);
      do {
        if (bVar4 < 8) {
          lVar11 = 0;
        }
        else {
          lVar17 = 0;
          lVar11 = 0;
          do {
            puVar10 = (undefined4 *)((long)puVar14 + lVar17);
            puVar1 = (undefined4 *)(lVar16 + lVar17);
            lVar11 = lVar11 + -8;
            lVar17 = lVar17 + 0x20;
            *puVar1 = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            puVar1[4] = puVar10[4];
            puVar1[5] = puVar10[5];
            puVar1[6] = puVar10[6];
            puVar1[7] = puVar10[7];
          } while (-lVar11 != ((ulong)bVar4 & 0xf8));
          puVar14 = (undefined4 *)((long)puVar14 + lVar17);
          lVar11 = -lVar11;
        }
        if ((bVar4 & 7) != 0) {
          lVar11 = lVar11 << 2;
          uVar12 = (ulong)bVar4 & 7;
          puVar10 = puVar14;
          do {
            puVar14 = puVar10 + 1;
            uVar12 = uVar12 - 1;
            *(undefined4 *)(lVar16 + lVar11) = *puVar10;
            lVar11 = lVar11 + 4;
            puVar10 = puVar14;
          } while (uVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + (uVar9 & 0xff) * 4;
      } while (iVar15 != 0x200);
    }
    puVar14 = *(undefined4 **)(param_1 + 0x2a8);
    lVar16 = *(long *)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    lVar17 = **(long **)(param_1 + 0x2c0);
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x2c) * 4];
    uVar9 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar13);
    if (bVar4 != 0) {
      iVar15 = 0;
      lVar16 = lVar16 + (ulong)*(ushort *)(lVar17 + 0x28);
      do {
        if (bVar4 < 8) {
          lVar11 = 0;
        }
        else {
          lVar17 = 0;
          lVar11 = 0;
          do {
            puVar10 = (undefined4 *)((long)puVar14 + lVar17);
            puVar1 = (undefined4 *)(lVar16 + lVar17);
            lVar11 = lVar11 + -8;
            lVar17 = lVar17 + 0x20;
            *puVar1 = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            puVar1[4] = puVar10[4];
            puVar1[5] = puVar10[5];
            puVar1[6] = puVar10[6];
            puVar1[7] = puVar10[7];
          } while (-lVar11 != ((ulong)bVar4 & 0xf8));
          puVar14 = (undefined4 *)((long)puVar14 + lVar17);
          lVar11 = -lVar11;
        }
        if ((bVar4 & 7) != 0) {
          lVar11 = lVar11 << 2;
          uVar12 = (ulong)bVar4 & 7;
          puVar10 = puVar14;
          do {
            puVar14 = puVar10 + 1;
            uVar12 = uVar12 - 1;
            *(undefined4 *)(lVar16 + lVar11) = *puVar10;
            lVar11 = lVar11 + 4;
            puVar10 = puVar14;
          } while (uVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + (uVar9 & 0xff) * 4;
      } while (iVar15 != 0x200);
    }
    puVar14 = *(undefined4 **)(param_1 + 0x2b0);
    lVar16 = *(long *)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    lVar17 = **(long **)(param_1 + 0x2c0);
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x38) * 4];
    uVar9 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar13);
    if (bVar4 != 0) {
      iVar15 = 0;
      lVar16 = lVar16 + (ulong)*(ushort *)(lVar17 + 0x34);
      do {
        if (bVar4 < 8) {
          lVar11 = 0;
        }
        else {
          lVar17 = 0;
          lVar11 = 0;
          do {
            puVar10 = (undefined4 *)((long)puVar14 + lVar17);
            puVar1 = (undefined4 *)(lVar16 + lVar17);
            lVar11 = lVar11 + -8;
            lVar17 = lVar17 + 0x20;
            *puVar1 = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            puVar1[4] = puVar10[4];
            puVar1[5] = puVar10[5];
            puVar1[6] = puVar10[6];
            puVar1[7] = puVar10[7];
          } while (-lVar11 != ((ulong)bVar4 & 0xf8));
          puVar14 = (undefined4 *)((long)puVar14 + lVar17);
          lVar11 = -lVar11;
        }
        if ((bVar4 & 7) != 0) {
          lVar11 = lVar11 << 2;
          uVar12 = (ulong)bVar4 & 7;
          puVar10 = puVar14;
          do {
            puVar14 = puVar10 + 1;
            uVar12 = uVar12 - 1;
            *(undefined4 *)(lVar16 + lVar11) = *puVar10;
            lVar11 = lVar11 + 4;
            puVar10 = puVar14;
          } while (uVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + (uVar9 & 0xff) * 4;
      } while (iVar15 != 0x200);
    }
    bVar4 = *(byte *)(param_1 + 0x2f1);
    uVar5 = *(ushort *)(param_1 + 0x2f2);
    iVar15 = *(int *)(param_1 + 0x2e8);
    iVar6 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    iVar7 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x20))(lVar13);
    lVar13 = *(long *)(param_1 + 0x2d8);
    if (lVar13 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2e8);
      iVar3 = *(int *)(param_1 + 0x2d0);
      uVar8 = (**(code **)PTR_DAT_04bcf030)(lVar13);
      if ((uVar8 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x015f95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_04c61fd8)(lVar13,iVar3 + (uint)uVar5 * (uint)bVar4 * ((iVar15 + iVar6) - 1U & -iVar7),
                        uVar2);
        return;
      }
    }
  }
  return;
}

