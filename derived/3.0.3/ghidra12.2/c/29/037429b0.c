
undefined1 FUN_037429b0(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 != (uint *)0x0) {
    uVar2 = param_2;
    if (3 < param_2) {
      uVar2 = 0;
    }
    if (*(long *)((long)&switchD_037429e4::switchdataD_04b46338 +
                 (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)) != 0) {
      switch(param_2) {
      default:
        puVar6 = *(uint **)(param_1 + 8);
        if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
          return 0;
        }
        cVar7 = DAT_05abc380;
        break;
      case 1:
        puVar6 = *(uint **)(param_1 + 8);
        if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
          return 0;
        }
        cVar7 = DAT_05abc380;
        while( true ) {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            DAT_05abc384 = 0xffffffffffffffff;
            DAT_05abc38c = 0xffffffffffffffff;
            DAT_05abc380 = '\x01';
            DAT_05abc3f4 = 0xffffffffffffffff;
            DAT_05abc394 = 0xffffffffffffffff;
            DAT_05abc39c = 0xffffffffffffffff;
            DAT_05abc3a4 = 0xffffffffffffffff;
            DAT_05abc3ac = 0xffffffffffffffff;
            DAT_05abc3b4 = 0xffffffffffffffff;
            DAT_05abc3bc = 0xffffffffffffffff;
            DAT_05abc3c4 = 0xffffffffffffffff;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            uVar9 = (ulong)DAT_05abc3e4._4_4_;
            if (-1 < (long)DAT_05abc3e4) {
              if ((undefined1 *)(uVar9 + (long)puVar6) == (undefined1 *)0x0) {
                return 0;
              }
              return *(undefined1 *)(uVar9 + (long)puVar6);
            }
            if (DAT_05abc3e4._4_4_ != 0xffffffff) {
              return 0;
            }
          }
          puVar8 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar8) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar8);
          if (lVar4 == 0) {
            return 0;
          }
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
          DAT_05abc3e4 = CONCAT44(0xfffffffe,(int)DAT_05abc3e4);
          if (uVar9 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != 0x28f7ea03) {
            piVar5 = piVar5 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3e4 = CONCAT44(iVar3,(int)DAT_05abc3e4);
          if (*puVar6 == 0) {
            return 0;
          }
        }
        return 0;
      case 2:
        puVar6 = *(uint **)(param_1 + 8);
        if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
          return 0;
        }
        cVar7 = DAT_05abc380;
        while( true ) {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            DAT_05abc384 = 0xffffffffffffffff;
            DAT_05abc38c = 0xffffffffffffffff;
            DAT_05abc380 = '\x01';
            DAT_05abc3f4 = 0xffffffffffffffff;
            DAT_05abc394 = 0xffffffffffffffff;
            DAT_05abc39c = 0xffffffffffffffff;
            DAT_05abc3a4 = 0xffffffffffffffff;
            DAT_05abc3ac = 0xffffffffffffffff;
            DAT_05abc3b4 = 0xffffffffffffffff;
            DAT_05abc3bc = 0xffffffffffffffff;
            DAT_05abc3c4 = 0xffffffffffffffff;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05abc3ec) {
              puVar1 = (undefined1 *)((DAT_05abc3ec & 0xffffffff) + (long)puVar6);
              if (puVar1 == (undefined1 *)0x0) {
                return 0;
              }
              return *puVar1;
            }
            if ((int)DAT_05abc3ec != -1) {
              return 0;
            }
          }
          puVar8 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar8) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar8);
          if (lVar4 == 0) {
            return 0;
          }
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
          DAT_05abc3ec = CONCAT44(DAT_05abc3ec._4_4_,0xfffffffe);
          if (uVar9 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != 0x3a4245ed) {
            piVar5 = piVar5 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3ec = CONCAT44(DAT_05abc3ec._4_4_,iVar3);
          if (*puVar6 == 0) {
            return 0;
          }
        }
        return 0;
      case 3:
        puVar6 = *(uint **)(param_1 + 8);
        if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
          return 0;
        }
        cVar7 = DAT_05abc380;
        while( true ) {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            DAT_05abc384 = 0xffffffffffffffff;
            DAT_05abc38c = 0xffffffffffffffff;
            DAT_05abc380 = '\x01';
            DAT_05abc3f4 = 0xffffffffffffffff;
            DAT_05abc394 = 0xffffffffffffffff;
            DAT_05abc39c = 0xffffffffffffffff;
            DAT_05abc3a4 = 0xffffffffffffffff;
            DAT_05abc3ac = 0xffffffffffffffff;
            DAT_05abc3b4 = 0xffffffffffffffff;
            DAT_05abc3bc = 0xffffffffffffffff;
            DAT_05abc3c4 = 0xffffffffffffffff;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            uVar9 = (ulong)DAT_05abc3ec._4_4_;
            if (-1 < (long)DAT_05abc3ec) {
              if ((undefined1 *)(uVar9 + (long)puVar6) == (undefined1 *)0x0) {
                return 0;
              }
              return *(undefined1 *)(uVar9 + (long)puVar6);
            }
            if (DAT_05abc3ec._4_4_ != 0xffffffff) {
              return 0;
            }
          }
          puVar8 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar8) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar8);
          if (lVar4 == 0) {
            return 0;
          }
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
          DAT_05abc3ec = CONCAT44(0xfffffffe,(int)DAT_05abc3ec);
          if (uVar9 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != -0x7d01dd78) {
            piVar5 = piVar5 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3ec = CONCAT44(iVar3,(int)DAT_05abc3ec);
          if (*puVar6 == 0) {
            return 0;
          }
        }
        return 0;
      }
      while( true ) {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_05abc384 = 0xffffffffffffffff;
          DAT_05abc38c = 0xffffffffffffffff;
          DAT_05abc380 = '\x01';
          DAT_05abc3f4 = 0xffffffffffffffff;
          DAT_05abc394 = 0xffffffffffffffff;
          DAT_05abc39c = 0xffffffffffffffff;
          DAT_05abc3a4 = 0xffffffffffffffff;
          DAT_05abc3ac = 0xffffffffffffffff;
          DAT_05abc3b4 = 0xffffffffffffffff;
          DAT_05abc3bc = 0xffffffffffffffff;
          DAT_05abc3c4 = 0xffffffffffffffff;
          DAT_05abc3cc = 0xffffffffffffffff;
          DAT_05abc3d4 = 0xffffffffffffffff;
          DAT_05abc3dc = 0xffffffffffffffff;
          DAT_05abc3e4 = 0xffffffffffffffff;
          DAT_05abc3ec = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05abc3e4) {
            puVar1 = (undefined1 *)((DAT_05abc3e4 & 0xffffffff) + (long)puVar6);
            if (puVar1 == (undefined1 *)0x0) {
              return 0;
            }
            return *puVar1;
          }
          if ((int)DAT_05abc3e4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar8) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar6 + (lVar4 - (long)puVar8);
        if (lVar4 == 0) {
          return 0;
        }
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
        DAT_05abc3e4 = CONCAT44(DAT_05abc3e4._4_4_,0xfffffffe);
        if (uVar9 == 0) {
          return 0;
        }
        piVar5 = (int *)(lVar4 + 4);
        while (piVar5[-1] != -0x6fb4729a) {
          piVar5 = piVar5 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return 0;
          }
        }
        iVar3 = 0;
        if (*piVar5 != -1) {
          iVar3 = *piVar5;
        }
        DAT_05abc3e4 = CONCAT44(DAT_05abc3e4._4_4_,iVar3);
        if (*puVar6 == 0) {
          return 0;
        }
      }
      return 0;
    }
    if (*puVar6 != 0) {
      cVar7 = DAT_05abc380;
      while( true ) {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          DAT_05abc384 = 0xffffffffffffffff;
          DAT_05abc38c = 0xffffffffffffffff;
          DAT_05abc380 = '\x01';
          DAT_05abc3f4 = 0xffffffffffffffff;
          DAT_05abc394 = 0xffffffffffffffff;
          DAT_05abc39c = 0xffffffffffffffff;
          DAT_05abc3a4 = 0xffffffffffffffff;
          DAT_05abc3ac = 0xffffffffffffffff;
          DAT_05abc3b4 = 0xffffffffffffffff;
          DAT_05abc3bc = 0xffffffffffffffff;
          DAT_05abc3c4 = 0xffffffffffffffff;
          DAT_05abc3cc = 0xffffffffffffffff;
          DAT_05abc3d4 = 0xffffffffffffffff;
          DAT_05abc3dc = 0xffffffffffffffff;
          DAT_05abc3e4 = 0xffffffffffffffff;
          DAT_05abc3ec = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_05abc3e4) {
            puVar1 = (undefined1 *)((DAT_05abc3e4 & 0xffffffff) + (long)puVar6);
            if (puVar1 == (undefined1 *)0x0) {
              return 0;
            }
            return *puVar1;
          }
          if ((int)DAT_05abc3e4 != -1) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar8) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar6 + (lVar4 - (long)puVar8);
        if (lVar4 == 0) {
          return 0;
        }
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
        DAT_05abc3e4 = CONCAT44(DAT_05abc3e4._4_4_,0xfffffffe);
        if (uVar9 == 0) {
          return 0;
        }
        piVar5 = (int *)(lVar4 + 4);
        while (piVar5[-1] != -0x6fb4729a) {
          piVar5 = piVar5 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return 0;
          }
        }
        iVar3 = 0;
        if (*piVar5 != -1) {
          iVar3 = *piVar5;
        }
        DAT_05abc3e4 = CONCAT44(DAT_05abc3e4._4_4_,iVar3);
        if (*puVar6 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

