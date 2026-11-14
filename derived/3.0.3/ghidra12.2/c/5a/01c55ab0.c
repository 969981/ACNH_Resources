
bool FUN_01c55ab0(long param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  
  puVar11 = *(uint **)(param_1 + 8);
  if (puVar11 == (uint *)0x0) {
    uVar10 = 0;
    bVar7 = false;
  }
  else {
    uVar10 = 0;
    if (*puVar11 != 0) {
      cVar12 = DAT_0534e328;
      do {
        if (cVar12 != '\0') {
          if ((int)DAT_0534e34c < 0) {
            if ((int)DAT_0534e34c == -1) goto LAB_01c55b18;
LAB_01c55b94:
            uVar10 = 0;
          }
          else {
            pbVar1 = (byte *)((DAT_0534e34c & 0xffffffff) + (long)puVar11);
            uVar10 = 0;
            if (pbVar1 != (byte *)0x0) {
              uVar10 = (uint)*pbVar1;
            }
          }
          goto LAB_01c55ba8;
        }
        cVar12 = '\x01';
        DAT_0534e32c = 0xffffffffffffffff;
        DAT_0534e334 = 0xffffffffffffffff;
        DAT_0534e328 = '\x01';
        DAT_0534e33c = 0xffffffffffffffff;
        DAT_0534e344 = 0xffffffffffffffff;
        DAT_0534e34c = 0xffffffffffffffff;
        DAT_0534e354 = 0xffffffffffffffff;
LAB_01c55b18:
        puVar8 = (uint *)(ulong)*puVar11;
        uVar10 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar8)) goto LAB_01c55ba8;
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + (lVar6 - (long)puVar8);
        if (lVar6 == 0) goto LAB_01c55b94;
        uVar13 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
        DAT_0534e34c = CONCAT44(DAT_0534e34c._4_4_,0xfffffffe);
        uVar10 = 0;
        if (uVar13 == 0) goto LAB_01c55ba8;
        piVar9 = (int *)(lVar6 + 4);
        while (piVar9[-1] != 0x26c5579) {
          piVar9 = piVar9 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            uVar10 = 0;
            goto LAB_01c55ba8;
          }
        }
        iVar3 = 0;
        if (*piVar9 != -1) {
          iVar3 = *piVar9;
        }
        DAT_0534e34c = CONCAT44(DAT_0534e34c._4_4_,iVar3);
      } while (*puVar11 != 0);
      uVar10 = 0;
LAB_01c55ba8:
      puVar11 = *(uint **)(param_1 + 8);
      bVar7 = false;
      if (puVar11 == (uint *)0x0) goto LAB_01c55c48;
      uVar5 = *puVar11;
      if (uVar5 != 0) {
        uVar14 = DAT_0534e33c._4_4_;
        while( true ) {
          if (-1 < (int)uVar14) {
            bVar7 = false;
            if ((byte *)((long)puVar11 + (ulong)uVar14) != (byte *)0x0) {
              bVar7 = *(byte *)((long)puVar11 + (ulong)uVar14) - 1 < 0x1f;
            }
            goto LAB_01c55c48;
          }
          if ((uVar14 != 0xffffffff) || (lVar6 = (long)puVar11 - (ulong)uVar5, lVar6 == 0)) break;
          lVar4 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          if (lVar4 + lVar6 == 0) break;
          uVar13 = (ulong)*(ushort *)(lVar6 + 8);
          DAT_0534e33c = CONCAT44(0xfffffffe,(undefined4)DAT_0534e33c);
          if (uVar13 == 0) break;
          puVar8 = (uint *)(lVar4 + lVar6 + 4);
          while (puVar8[-1] != 0xd8f76b76) {
            puVar8 = puVar8 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_01c55c44;
          }
          uVar14 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar14 = *puVar8;
          }
          DAT_0534e33c = CONCAT44(uVar14,(undefined4)DAT_0534e33c);
          uVar5 = *puVar11;
          if (uVar5 == 0) break;
        }
      }
    }
LAB_01c55c44:
    bVar7 = false;
  }
LAB_01c55c48:
  bVar2 = false;
  if (uVar10 - 1 < 0xc) {
    bVar2 = bVar7;
  }
  return bVar2;
}

