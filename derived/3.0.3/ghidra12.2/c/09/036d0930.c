
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_036d0930(long param_1)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar9 = DAT_05ab4368;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_05ab436c = 0xffffffffffffffff;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = 0xffffffffffffffff;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
          uVar5 = *puVar8;
        }
        else {
          if (-1 < DAT_05ab438c) {
            psVar1 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar8);
            if ((psVar1 != (short *)0x0) && (*psVar1 == -1)) {
              return 0;
            }
            break;
          }
          if (DAT_05ab438c != -1) break;
          uVar5 = *puVar8;
        }
        if ((uVar5 == 0) || (puVar10 = (uint *)(ulong)uVar5, puVar8 == puVar10)) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar8 + (lVar4 - (long)puVar10);
        if (lVar4 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        _DAT_05ab4390 = (undefined4)(_DAT_05ab438c >> 0x20);
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
        if (uVar11 == 0) break;
        piVar7 = (int *)(lVar4 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_036d0a40;
        }
        iVar3 = 0;
        if (*piVar7 != -1) {
          iVar3 = *piVar7;
        }
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar3);
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_036d0a40:
    puVar8 = *(uint **)(param_1 + 8);
    if (*puVar8 != 0) {
      cVar9 = DAT_05ab4368;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_05ab436c = 0xffffffffffffffff;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = 0xffffffffffffffff;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05ab43b4) {
            pbVar2 = (byte *)((DAT_05ab43b4 & 0xffffffff) + (long)puVar8);
            if (pbVar2 == (byte *)0x0) {
              return 0;
            }
            bVar6 = *pbVar2;
            if (bVar6 < 3) {
              return bVar6;
            }
            return 0;
          }
          if ((int)DAT_05ab43b4 != -1) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar8;
        if (*puVar8 == 0) {
          return 0;
        }
        if (puVar8 == puVar10) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar8 + (lVar4 - (long)puVar10);
        if (lVar4 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        DAT_05ab43b4 = CONCAT44(DAT_05ab43b4._4_4_,0xfffffffe);
        if (uVar11 == 0) {
          return 0;
        }
        piVar7 = (int *)(lVar4 + 4);
        while (piVar7[-1] != -0x14dd42c5) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar3 = 0;
        if (*piVar7 != -1) {
          iVar3 = *piVar7;
        }
        DAT_05ab43b4 = CONCAT44(DAT_05ab43b4._4_4_,iVar3);
        if (*puVar8 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

