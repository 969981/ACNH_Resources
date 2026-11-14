
undefined8 FUN_01a1d000(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  
  lVar1 = param_1 + 8;
  iVar7 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
  if (iVar7 - 0xbU < 7) {
    uVar8 = FUN_0124ea54(param_1);
    puVar6 = PTR_DAT_04bbbc78;
    puVar5 = PTR_DAT_04bbbc70;
    if ((uVar8 & 1) != 0) {
      puVar10 = *(uint **)(param_1 + 0x10);
      if ((puVar10 != (uint *)0x0) && (uVar3 = *puVar10, uVar3 != 0)) {
        cVar11 = *PTR_DAT_04bbbc70;
        do {
          puVar12 = (uint *)(ulong)uVar3;
          if (cVar11 != '\0') {
            uVar3 = *(uint *)(puVar6 + 0x4c);
            uVar8 = (ulong)uVar3;
            if ((int)uVar3 < 0) {
              if (uVar3 == 0xffffffff) {
                if (puVar12 != (uint *)0x0) goto LAB_01a1d0bc;
LAB_01a1d1bc:
                uVar8 = 0xffffffff;
              }
            }
            else if (((char *)(uVar8 + (long)puVar10) != (char *)0x0) &&
                    (*(char *)(uVar8 + (long)puVar10) == '\x04')) goto LAB_01a1d22c;
            break;
          }
          cVar11 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          puVar12 = (uint *)(ulong)*puVar10;
          if (puVar12 == (uint *)0x0) goto LAB_01a1d1bc;
LAB_01a1d0bc:
          uVar8 = 0xffffffff;
          if (puVar10 == puVar12) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar10 + (lVar4 - (long)puVar12);
          if (lVar4 == 0) goto LAB_01a1d1bc;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
          uVar8 = 0xfffffffe;
          *(undefined4 *)(puVar6 + 0x4c) = 0xfffffffe;
          if (uVar13 == 0) break;
          puVar12 = (uint *)(lVar4 + 4);
          while (puVar12[-1] != 0xf5a73337) {
            puVar12 = puVar12 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              uVar8 = 0xfffffffe;
              goto LAB_01a1d130;
            }
          }
          uVar3 = 0;
          if (*puVar12 != 0xffffffff) {
            uVar3 = *puVar12;
          }
          uVar8 = (ulong)uVar3;
          *(uint *)(puVar6 + 0x4c) = uVar3;
          uVar3 = *puVar10;
        } while (uVar3 != 0);
LAB_01a1d130:
        puVar10 = *(uint **)(param_1 + 0x10);
        if ((puVar10 != (uint *)0x0) && (uVar3 = *puVar10, uVar3 != 0)) {
          while( true ) {
            if (-1 < (int)uVar8) break;
            if (((int)uVar8 != -1) || (lVar4 = (long)puVar10 - (ulong)uVar3, lVar4 == 0))
            goto LAB_01a1d1f0;
            lVar2 = 0xc;
            if (*(char *)(lVar4 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar4 == 0) goto LAB_01a1d1f0;
            uVar8 = (ulong)*(ushort *)(lVar4 + 8);
            *(undefined4 *)(puVar6 + 0x4c) = 0xfffffffe;
            if (uVar8 == 0) goto LAB_01a1d1f0;
            puVar12 = (uint *)(lVar2 + lVar4 + 4);
            while (puVar12[-1] != 0xf5a73337) {
              puVar12 = puVar12 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_01a1d1f0;
            }
            uVar3 = 0;
            if (*puVar12 != 0xffffffff) {
              uVar3 = *puVar12;
            }
            uVar8 = (ulong)uVar3;
            *(uint *)(puVar6 + 0x4c) = uVar3;
            uVar3 = *puVar10;
            if (uVar3 == 0) goto LAB_01a1d1f0;
          }
          if (((byte *)((long)puVar10 + uVar8) != (byte *)0x0) &&
             (2 < *(byte *)((long)puVar10 + uVar8))) goto LAB_01a1d234;
        }
      }
LAB_01a1d1f0:
      iVar7 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
      if (((iVar7 != 0xb) &&
          (iVar7 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar7 != 0xe)) &&
         (iVar7 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar7 != 0xc))
      goto LAB_01a1d234;
    }
LAB_01a1d22c:
    uVar9 = 1;
  }
  else {
LAB_01a1d234:
    uVar9 = 0;
  }
  return uVar9;
}

