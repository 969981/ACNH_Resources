
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038555d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  size_t __size;
  ulong uVar25;
  ulong uVar26;
  
  lVar24 = DAT_05ae7600;
  uVar12 = *(uint *)(*(long *)(param_1 + 0x160) + 0x30);
  uVar18 = (ulong)uVar12;
  if ((int)uVar12 < 1) {
    return;
  }
  if (DAT_05ae7600 == 0) {
    puVar15 = malloc(uVar18 << 4);
  }
  else {
    plVar13 = *(long **)(param_1 + 0x168);
    if (plVar13 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar13 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar13 = (long *)(lVar14 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_03855708;
    }
    puVar15 = (undefined4 *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar18 << 4,8);
  }
  if (puVar15 != (undefined4 *)0x0) {
    uVar26 = uVar18 & 3;
    puVar19 = puVar15;
    if ((uVar12 & 3) != 0) {
      do {
        *puVar19 = 0;
        uVar26 = uVar26 - 1;
        *(undefined8 *)(puVar19 + 2) = 0;
        puVar19 = puVar19 + 4;
      } while (uVar26 != 0);
    }
    if (2 < (uVar18 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar19 = 0;
        *(undefined8 *)(puVar19 + 2) = 0;
        puVar19[4] = 0;
        *(undefined8 *)(puVar19 + 6) = 0;
        puVar19[8] = 0;
        *(undefined8 *)(puVar19 + 10) = 0;
        puVar19[0xc] = 0;
        *(undefined8 *)(puVar19 + 0xe) = 0;
        puVar19 = puVar19 + 0x10;
      } while (puVar19 != puVar15 + uVar18 * 4);
    }
    *(undefined4 **)(param_1 + 0x10) = puVar15;
    *(uint *)(param_1 + 8) = uVar12;
  }
LAB_03855708:
  uVar11 = _UNK_04102888;
  uVar10 = _DAT_04102880;
  uVar9 = _UNK_041023d8;
  uVar8 = _DAT_041023d0;
  uVar7 = _UNK_04102208;
  uVar6 = _DAT_04102200;
  uVar26 = 0;
  do {
    plVar13 = (long *)**(long **)(*(long *)(*(long *)(param_1 + 0x160) + 0x38) + uVar26 * 8);
    if (plVar13 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar13 + 0x30))();
      lVar24 = DAT_05ae7600;
      uVar4 = uVar26;
      if (*(uint *)(param_1 + 8) <= uVar26) {
        uVar4 = 0;
      }
      if (0 < (int)uVar12) {
        uVar25 = (ulong)uVar12;
        lVar14 = *(long *)(param_1 + 0x10);
        __size = (uVar25 + (ulong)uVar12 * 2) * 0x20;
        if (DAT_05ae7600 == 0) {
          puVar17 = malloc(__size);
        }
        else {
          plVar13 = *(long **)(param_1 + 0x168);
          if (plVar13 == (long *)0x0) {
            lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar13 = (long *)(lVar24 + 8);
            if (lVar16 != 0) {
              plVar13 = (long *)(lVar16 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_038558e0;
          }
          puVar17 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,8);
        }
        if (puVar17 != (undefined8 *)0x0) {
          uVar22 = uVar25 * 0x60 - 0x60;
          uVar1 = ((uint)(uVar22 / 0x60) & 0x3ffffff) + 1;
          uVar23 = (ulong)uVar1 & 7;
          puVar20 = puVar17;
          if ((uVar1 & 7) != 0) {
            do {
              *puVar20 = &DAT_04b5e8b0;
              uVar23 = uVar23 - 1;
              *(undefined4 *)((long)puVar20 + 0x5c) = 0xffffffff;
              puVar20 = puVar20 + 0xc;
            } while (uVar23 != 0);
          }
          if (0x29f < uVar22) {
            do {
              *puVar20 = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x5c) = 0xffffffff;
              puVar20[0xc] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0xbc) = 0xffffffff;
              puVar20[0x18] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x11c) = 0xffffffff;
              puVar20[0x24] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x17c) = 0xffffffff;
              puVar20[0x30] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x1dc) = 0xffffffff;
              puVar20[0x3c] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x23c) = 0xffffffff;
              puVar20[0x48] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x29c) = 0xffffffff;
              puVar20[0x54] = &DAT_04b5e8b0;
              *(undefined4 *)((long)puVar20 + 0x2fc) = 0xffffffff;
              puVar20 = puVar20 + 0x60;
            } while (puVar20 != puVar17 + uVar25 * 0xc);
          }
          puVar2 = (uint *)(lVar14 + uVar4 * 0x10);
          *puVar2 = uVar12;
          *(undefined8 **)(puVar2 + 2) = puVar17;
        }
      }
LAB_038558e0:
      uVar4 = uVar26;
      if (*(uint *)(param_1 + 8) <= uVar26) {
        uVar4 = 0;
      }
      piVar3 = (int *)(*(long *)(param_1 + 0x10) + uVar4 * 0x10);
      iVar5 = *piVar3;
      if (iVar5 != 0) {
        lVar24 = *(long *)(piVar3 + 2);
        iVar21 = 0;
        uVar12 = (uint)uVar26 & 0xffff;
        do {
          lVar14 = lVar24 + (long)iVar21 * 0x60;
          iVar21 = iVar21 + 1;
          *(undefined4 *)(lVar14 + 0x58) = 0x3f800000;
          *(uint *)(lVar14 + 0x5c) = uVar12;
          uVar12 = uVar12 + 0x10000;
          *(undefined1 **)(lVar14 + 0x50) = &DAT_3f8000003f800000;
          *(undefined8 *)(lVar14 + 0x28) = uVar7;
          *(undefined8 *)(lVar14 + 0x20) = uVar6;
          *(undefined8 *)(lVar14 + 0x38) = uVar11;
          *(undefined8 *)(lVar14 + 0x30) = uVar10;
          *(undefined8 *)(lVar14 + 0x48) = uVar9;
          *(undefined8 *)(lVar14 + 0x40) = uVar8;
        } while (iVar5 != iVar21);
      }
    }
    uVar26 = uVar26 + 1;
    if (uVar26 == uVar18) {
      return;
    }
  } while( true );
}

