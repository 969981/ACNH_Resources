
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_036d0d50(long param_1)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar8 = DAT_05ab4368;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
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
          DAT_05ab43b4 = -1;
          uVar4 = *puVar7;
        }
        else {
          if (-1 < DAT_05ab438c) {
            psVar1 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar7);
            if ((psVar1 != (short *)0x0) && (*psVar1 == -1)) {
              return 0;
            }
            break;
          }
          if (DAT_05ab438c != -1) break;
          uVar4 = *puVar7;
        }
        if ((uVar4 == 0) || (puVar9 = (uint *)(ulong)uVar4, puVar7 == puVar9)) break;
        lVar3 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar7 + (lVar3 - (long)puVar9);
        if (lVar3 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        _DAT_05ab4390 = (undefined4)(_DAT_05ab438c >> 0x20);
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
        if (uVar10 == 0) break;
        piVar6 = (int *)(lVar3 + 4);
        while (piVar6[-1] != 0x54706054) {
          piVar6 = piVar6 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_036d0e60;
        }
        iVar2 = 0;
        if (*piVar6 != -1) {
          iVar2 = *piVar6;
        }
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar2);
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_036d0e60:
    puVar7 = *(uint **)(param_1 + 8);
    if (*puVar7 != 0) {
      cVar8 = DAT_05ab4368;
      while( true ) {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
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
          DAT_05ab43b4 = -1;
        }
        else {
          if (-1 < DAT_05ab43b4) {
            if ((byte *)((ulong)DAT_05ab43b4._4_4_ + (long)puVar7) == (byte *)0x0) {
              return 0;
            }
            bVar5 = *(byte *)((ulong)DAT_05ab43b4._4_4_ + (long)puVar7);
            if (bVar5 < 3) {
              return bVar5;
            }
            return 0;
          }
          if (DAT_05ab43b4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar9) break;
        lVar3 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar7 + (lVar3 - (long)puVar9);
        if (lVar3 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        DAT_05ab43b4 = CONCAT44(0xfffffffe,(undefined4)DAT_05ab43b4);
        if (uVar10 == 0) {
          return 0;
        }
        piVar6 = (int *)(lVar3 + 4);
        while (piVar6[-1] != -0x6dc51e0e) {
          piVar6 = piVar6 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar2 = 0;
        if (*piVar6 != -1) {
          iVar2 = *piVar6;
        }
        DAT_05ab43b4 = CONCAT44(iVar2,(undefined4)DAT_05ab43b4);
        if (*puVar7 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

