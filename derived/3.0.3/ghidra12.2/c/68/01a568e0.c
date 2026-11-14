
int FUN_01a568e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  uint *puVar18;
  uint *puVar19;
  
  puVar8 = PTR_DAT_04bbfe80;
  puVar7 = PTR_DAT_04bbfe78;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    return 0;
  }
  iVar9 = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x1f0);
  uVar3 = *(uint *)(param_1 + 0x1c0);
  lVar15 = *(long *)(param_1 + 0xb0);
  cVar14 = *PTR_DAT_04bbfe78;
  puVar1 = puVar13 + *(int *)(param_1 + 0x1e8);
  uVar11 = (ulong)*(uint *)(PTR_DAT_04bbfe80 + 8);
  uVar4 = *(uint *)(param_1 + 200);
  lVar16 = *(long *)(param_1 + 0xd0);
  uVar5 = *(uint *)(param_1 + 0x1b0);
  lVar12 = *(long *)(param_1 + 0x1b8);
  do {
    uVar6 = *(uint *)*puVar13;
    if ((int)uVar3 < 1) {
      if (lVar15 == 0) {
        puVar18 = (uint *)0x0;
      }
      else {
        puVar18 = *(uint **)(lVar15 + 8);
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)0x0;
        }
        else if ((uVar6 < uVar4) && (*(char *)(lVar16 + (int)uVar6) == '\0')) {
          puVar18 = (uint *)0x0;
        }
        else if (uVar6 < *puVar18) {
          if (puVar18[1] == 0) {
            puVar18 = (uint *)0x0;
          }
          else if ((ushort)puVar18[2] == 0) {
            puVar18 = (uint *)0x0;
          }
          else {
            iVar10 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              iVar10 = 0x1c;
            }
            puVar18 = (uint *)((ulong)(puVar18[1] * uVar6 + (uint)(ushort)puVar18[2] * 8 + iVar10) +
                              (long)puVar18);
          }
        }
        else {
          puVar18 = (uint *)0x0;
        }
      }
    }
    else if (uVar6 < uVar3) {
      if (uVar5 <= uVar6) {
        uVar6 = 0;
      }
      puVar18 = *(uint **)(lVar12 + (ulong)uVar6 * 8);
    }
    else {
      puVar18 = (uint *)0x0;
    }
    while (puVar19 = (uint *)(ulong)*puVar18, *puVar18 != 0) {
      if (cVar14 != '\0') {
        if ((int)uVar11 < 0) {
          if (uVar11 == 0xffffffff) {
            if (puVar19 != (uint *)0x0) goto LAB_01a56a88;
LAB_01a56ae4:
            bVar17 = 0;
            uVar11 = 0xffffffff;
            goto LAB_01a56958;
          }
        }
        else {
          bVar17 = 0;
          if (((byte *)(uVar11 + (long)puVar18) == (byte *)0x0) ||
             (bVar17 = *(byte *)(uVar11 + (long)puVar18), bVar17 < 2)) goto LAB_01a56958;
        }
        break;
      }
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      cVar14 = '\x01';
      *(undefined4 *)(puVar8 + 8) = 0xffffffff;
      puVar19 = (uint *)(ulong)*puVar18;
      *puVar7 = 1;
      if (puVar19 == (uint *)0x0) goto LAB_01a56ae4;
LAB_01a56a88:
      if (puVar18 == puVar19) goto LAB_01a56ae4;
      lVar2 = 0xc;
      if (*(char *)((long)puVar18 + (10 - (long)puVar19)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar18 + (lVar2 - (long)puVar19);
      if (lVar2 == 0) goto LAB_01a56ae4;
      uVar11 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar19));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar11 == 0) {
LAB_01a56ad8:
        bVar17 = 0;
        uVar11 = 0xfffffffe;
        goto LAB_01a56958;
      }
      puVar19 = (uint *)(lVar2 + 4);
      while (puVar19[-1] != 0x7a6965c5) {
        puVar19 = puVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01a56ad8;
      }
      uVar11 = 0;
      if (*puVar19 != 0xffffffff) {
        uVar11 = (ulong)*puVar19;
      }
      *(int *)(puVar8 + 8) = (int)uVar11;
    }
    bVar17 = 0;
LAB_01a56958:
    puVar13 = puVar13 + 1;
    if (bVar17 != 0) {
      iVar9 = iVar9 + 1;
    }
    if (puVar13 == puVar1) {
      return iVar9;
    }
  } while( true );
}

