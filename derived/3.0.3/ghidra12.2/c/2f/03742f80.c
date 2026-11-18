
undefined1 FUN_03742f80(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  uint *puVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 != (uint *)0x0) {
    uVar2 = param_2;
    if (3 < param_2) {
      uVar2 = 0;
    }
    if (*(long *)((long)&switchD_03742fb4::switchdataD_04b46378 +
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
            DAT_05abc3c4 = -1;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05abc3cc) {
              puVar1 = (undefined1 *)((DAT_05abc3cc & 0xffffffff) + (long)puVar6);
              if (puVar1 == (undefined1 *)0x0) {
                return 0;
              }
              return *puVar1;
            }
            if ((int)DAT_05abc3cc != -1) {
              return 0;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar9) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) {
            return 0;
          }
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          DAT_05abc3cc = CONCAT44(DAT_05abc3cc._4_4_,0xfffffffe);
          if (uVar8 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != 0x10d23c5c) {
            piVar5 = piVar5 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3cc = CONCAT44(DAT_05abc3cc._4_4_,iVar3);
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
            DAT_05abc3c4 = -1;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            uVar8 = (ulong)DAT_05abc3cc._4_4_;
            if (-1 < (long)DAT_05abc3cc) {
              if ((undefined1 *)(uVar8 + (long)puVar6) == (undefined1 *)0x0) {
                return 0;
              }
              return *(undefined1 *)(uVar8 + (long)puVar6);
            }
            if (DAT_05abc3cc._4_4_ != 0xffffffff) {
              return 0;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar9) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) {
            return 0;
          }
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          DAT_05abc3cc = CONCAT44(0xfffffffe,(int)DAT_05abc3cc);
          if (uVar8 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != 0x26793b2) {
            piVar5 = piVar5 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3cc = CONCAT44(iVar3,(int)DAT_05abc3cc);
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
            DAT_05abc3c4 = -1;
            DAT_05abc3cc = 0xffffffffffffffff;
            DAT_05abc3d4 = 0xffffffffffffffff;
            DAT_05abc3dc = 0xffffffffffffffff;
            DAT_05abc3e4 = 0xffffffffffffffff;
            DAT_05abc3ec = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05abc3d4) {
              puVar1 = (undefined1 *)((DAT_05abc3d4 & 0xffffffff) + (long)puVar6);
              if (puVar1 == (undefined1 *)0x0) {
                return 0;
              }
              return *puVar1;
            }
            if ((int)DAT_05abc3d4 != -1) {
              return 0;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar9) break;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) {
            return 0;
          }
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          DAT_05abc3d4 = CONCAT44(DAT_05abc3d4._4_4_,0xfffffffe);
          if (uVar8 == 0) {
            return 0;
          }
          piVar5 = (int *)(lVar4 + 4);
          while (piVar5[-1] != -0x45240b29) {
            piVar5 = piVar5 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              return 0;
            }
          }
          iVar3 = 0;
          if (*piVar5 != -1) {
            iVar3 = *piVar5;
          }
          DAT_05abc3d4 = CONCAT44(DAT_05abc3d4._4_4_,iVar3);
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
          DAT_05abc3c4 = -1;
          DAT_05abc3cc = 0xffffffffffffffff;
          DAT_05abc3d4 = 0xffffffffffffffff;
          DAT_05abc3dc = 0xffffffffffffffff;
          DAT_05abc3e4 = 0xffffffffffffffff;
          DAT_05abc3ec = 0xffffffffffffffff;
        }
        else {
          uVar8 = (ulong)DAT_05abc3c4._4_4_;
          if (-1 < DAT_05abc3c4) {
            if ((undefined1 *)(uVar8 + (long)puVar6) == (undefined1 *)0x0) {
              return 0;
            }
            return *(undefined1 *)(uVar8 + (long)puVar6);
          }
          if (DAT_05abc3c4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar9) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar6 + (lVar4 - (long)puVar9);
        if (lVar4 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        DAT_05abc3c4 = CONCAT44(0xfffffffe,(undefined4)DAT_05abc3c4);
        if (uVar8 == 0) {
          return 0;
        }
        piVar5 = (int *)(lVar4 + 4);
        while (piVar5[-1] != -0x5791a4c7) {
          piVar5 = piVar5 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar3 = 0;
        if (*piVar5 != -1) {
          iVar3 = *piVar5;
        }
        DAT_05abc3c4 = CONCAT44(iVar3,(undefined4)DAT_05abc3c4);
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
          DAT_05abc3c4 = -1;
          DAT_05abc3cc = 0xffffffffffffffff;
          DAT_05abc3d4 = 0xffffffffffffffff;
          DAT_05abc3dc = 0xffffffffffffffff;
          DAT_05abc3e4 = 0xffffffffffffffff;
          DAT_05abc3ec = 0xffffffffffffffff;
        }
        else {
          uVar8 = (ulong)DAT_05abc3c4._4_4_;
          if (-1 < DAT_05abc3c4) {
            if ((undefined1 *)(uVar8 + (long)puVar6) == (undefined1 *)0x0) {
              return 0;
            }
            return *(undefined1 *)(uVar8 + (long)puVar6);
          }
          if (DAT_05abc3c4._4_4_ != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar9) break;
        lVar4 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar6 + (lVar4 - (long)puVar9);
        if (lVar4 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        DAT_05abc3c4 = CONCAT44(0xfffffffe,(undefined4)DAT_05abc3c4);
        if (uVar8 == 0) {
          return 0;
        }
        piVar5 = (int *)(lVar4 + 4);
        while (piVar5[-1] != -0x5791a4c7) {
          piVar5 = piVar5 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar3 = 0;
        if (*piVar5 != -1) {
          iVar3 = *piVar5;
        }
        DAT_05abc3c4 = CONCAT44(iVar3,(undefined4)DAT_05abc3c4);
        if (*puVar6 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

