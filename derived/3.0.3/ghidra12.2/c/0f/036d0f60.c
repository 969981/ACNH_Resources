
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_036d0f60(long param_1)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
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
          DAT_05ab43b4 = 0xffffffffffffffff;
          uVar5 = *puVar7;
        }
        else {
          if (-1 < DAT_05ab438c) {
            psVar1 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar7);
            if ((psVar1 != (short *)0x0) && (*psVar1 == -1)) {
              return false;
            }
            break;
          }
          if (DAT_05ab438c != -1) break;
          uVar5 = *puVar7;
        }
        if ((uVar5 == 0) || (puVar9 = (uint *)(ulong)uVar5, puVar7 == puVar9)) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar7 + (lVar4 - (long)puVar9);
        if (lVar4 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        _DAT_05ab4390 = (undefined4)(_DAT_05ab438c >> 0x20);
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
        if (uVar10 == 0) break;
        piVar6 = (int *)(lVar4 + 4);
        while (piVar6[-1] != 0x54706054) {
          piVar6 = piVar6 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_036d1070;
        }
        iVar3 = 0;
        if (*piVar6 != -1) {
          iVar3 = *piVar6;
        }
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar3);
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_036d1070:
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
          DAT_05ab43b4 = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05ab43a4) {
            pcVar2 = (char *)((DAT_05ab43a4 & 0xffffffff) + (long)puVar7);
            if (pcVar2 == (char *)0x0) {
              return false;
            }
            return *pcVar2 != '\0';
          }
          if ((int)DAT_05ab43a4 != -1) {
            return false;
          }
        }
        puVar9 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return false;
        }
        if (puVar7 == puVar9) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar7 + (lVar4 - (long)puVar9);
        if (lVar4 == 0) {
          return false;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        DAT_05ab43a4 = CONCAT44(DAT_05ab43a4._4_4_,0xfffffffe);
        if (uVar10 == 0) {
          return false;
        }
        piVar6 = (int *)(lVar4 + 4);
        while (piVar6[-1] != 0x1bbfe498) {
          piVar6 = piVar6 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return false;
          }
        }
        iVar3 = 0;
        if (*piVar6 != -1) {
          iVar3 = *piVar6;
        }
        DAT_05ab43a4 = CONCAT44(DAT_05ab43a4._4_4_,iVar3);
        if (*puVar7 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return false;
}

