
bool FUN_01c55c80(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar10 = *(uint **)(param_1 + 8);
  if (puVar10 == (uint *)0x0) {
    uVar9 = 0;
    bVar6 = false;
  }
  else {
    uVar9 = 0;
    if (*puVar10 != 0) {
      cVar11 = DAT_0534e328;
      do {
        if (cVar11 != '\0') {
          if (DAT_0534e34c < 0) {
            if (DAT_0534e34c._4_4_ == 0xffffffff) goto LAB_01c55ce8;
LAB_01c55d64:
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if ((byte *)((ulong)DAT_0534e34c._4_4_ + (long)puVar10) != (byte *)0x0) {
              uVar9 = (uint)*(byte *)((ulong)DAT_0534e34c._4_4_ + (long)puVar10);
            }
          }
          goto LAB_01c55d78;
        }
        cVar11 = '\x01';
        DAT_0534e32c = 0xffffffffffffffff;
        DAT_0534e334 = 0xffffffffffffffff;
        DAT_0534e328 = '\x01';
        DAT_0534e33c = 0xffffffffffffffff;
        DAT_0534e344 = 0xffffffffffffffff;
        DAT_0534e34c = -1;
        DAT_0534e354 = 0xffffffffffffffff;
LAB_01c55ce8:
        puVar7 = (uint *)(ulong)*puVar10;
        uVar9 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar7)) goto LAB_01c55d78;
        lVar5 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar10 + (lVar5 - (long)puVar7);
        if (lVar5 == 0) goto LAB_01c55d64;
        uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
        DAT_0534e34c = CONCAT44(0xfffffffe,(undefined4)DAT_0534e34c);
        uVar9 = 0;
        if (uVar12 == 0) goto LAB_01c55d78;
        piVar8 = (int *)(lVar5 + 4);
        while (piVar8[-1] != -0x728bec5) {
          piVar8 = piVar8 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar9 = 0;
            goto LAB_01c55d78;
          }
        }
        iVar2 = 0;
        if (*piVar8 != -1) {
          iVar2 = *piVar8;
        }
        DAT_0534e34c = CONCAT44(iVar2,(undefined4)DAT_0534e34c);
      } while (*puVar10 != 0);
      uVar9 = 0;
LAB_01c55d78:
      puVar10 = *(uint **)(param_1 + 8);
      bVar6 = false;
      if (puVar10 == (uint *)0x0) goto LAB_01c55e18;
      uVar4 = *puVar10;
      if (uVar4 != 0) {
        uVar13 = (uint)DAT_0534e344;
        while( true ) {
          if (-1 < (int)uVar13) {
            bVar6 = false;
            if ((byte *)((long)puVar10 + (ulong)uVar13) != (byte *)0x0) {
              bVar6 = *(byte *)((long)puVar10 + (ulong)uVar13) - 1 < 0x1f;
            }
            goto LAB_01c55e18;
          }
          if ((uVar13 != 0xffffffff) || (lVar5 = (long)puVar10 - (ulong)uVar4, lVar5 == 0)) break;
          lVar3 = 0xc;
          if (*(char *)(lVar5 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar5 == 0) break;
          uVar12 = (ulong)*(ushort *)(lVar5 + 8);
          DAT_0534e344 = CONCAT44(DAT_0534e344._4_4_,0xfffffffe);
          if (uVar12 == 0) break;
          puVar7 = (uint *)(lVar3 + lVar5 + 4);
          while (puVar7[-1] != 0x224c7f34) {
            puVar7 = puVar7 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01c55e14;
          }
          uVar13 = 0;
          if (*puVar7 != 0xffffffff) {
            uVar13 = *puVar7;
          }
          DAT_0534e344 = CONCAT44(DAT_0534e344._4_4_,uVar13);
          uVar4 = *puVar10;
          if (uVar4 == 0) break;
        }
      }
    }
LAB_01c55e14:
    bVar6 = false;
  }
LAB_01c55e18:
  bVar1 = false;
  if (uVar9 - 1 < 0xc) {
    bVar1 = bVar6;
  }
  return bVar1;
}

