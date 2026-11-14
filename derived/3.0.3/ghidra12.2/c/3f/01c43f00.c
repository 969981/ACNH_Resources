
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c43f00(undefined4 *param_1,long param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  uVar4 = DAT_0558600c;
  uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(param_2 + 0x200);
  if ((*(uint *)(param_2 + 0x1e0) <= uVar3) ||
     (puVar9 = *(uint **)(*(long *)(param_2 + 0x1e8) + (long)(int)uVar3 * 8), puVar9 == (uint *)0x0)
     ) {
switchD_01c43f44_default:
    *param_1 = _DAT_05586008;
    param_1[1] = uVar4;
    return;
  }
  switch(param_4) {
  case 0:
    if (*puVar9 != 0) {
      cVar10 = DAT_0534cd78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd8c = -1;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_0534cd94 & 0xffffffff;
          if (-1 < (int)DAT_0534cd94) goto LAB_01c443b8;
          if ((int)DAT_0534cd94 != -1) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        uVar5 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01c443cc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        DAT_0534cd94 = CONCAT44(DAT_0534cd94._4_4_,0xfffffffe);
        if (uVar6 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != 0x3574933b) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01c443c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        DAT_0534cd94 = CONCAT44(DAT_0534cd94._4_4_,iVar1);
        if (*puVar9 == 0) break;
      } while( true );
    }
    break;
  case 1:
    if (*puVar9 != 0) {
      cVar10 = DAT_0534cd78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd8c = -1;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = DAT_0534cd9c & 0xffffffff;
          if (-1 < (int)DAT_0534cd9c) goto LAB_01c443b8;
          if ((int)DAT_0534cd9c != -1) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        uVar5 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01c443cc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        DAT_0534cd9c = CONCAT44(DAT_0534cd9c._4_4_,0xfffffffe);
        if (uVar6 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != 0x50650a2b) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01c443c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        DAT_0534cd9c = CONCAT44(DAT_0534cd9c._4_4_,iVar1);
        if (*puVar9 == 0) break;
      } while( true );
    }
    break;
  case 2:
    if (*puVar9 != 0) {
      cVar10 = DAT_0534cd78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd8c = -1;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_0534cd9c._4_4_;
          if (-1 < (long)DAT_0534cd9c) goto LAB_01c443b8;
          if (DAT_0534cd9c._4_4_ != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        uVar5 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01c443cc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        DAT_0534cd9c = CONCAT44(0xfffffffe,(int)DAT_0534cd9c);
        if (uVar6 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != -0x4a728abf) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01c443c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        DAT_0534cd9c = CONCAT44(iVar1,(int)DAT_0534cd9c);
        if (*puVar9 == 0) break;
      } while( true );
    }
    break;
  case 3:
    if (*puVar9 != 0) {
      cVar10 = DAT_0534cd78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd8c = -1;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_0534cd94._4_4_;
          if (-1 < (long)DAT_0534cd94) goto LAB_01c443b8;
          if (DAT_0534cd94._4_4_ != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        uVar5 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01c443cc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        DAT_0534cd94 = CONCAT44(0xfffffffe,(int)DAT_0534cd94);
        if (uVar6 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != -0x20533cb9) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01c443c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        DAT_0534cd94 = CONCAT44(iVar1,(int)DAT_0534cd94);
        if (*puVar9 == 0) break;
      } while( true );
    }
    break;
  case 4:
    if (*puVar9 != 0) {
      cVar10 = DAT_0534cd78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd8c = -1;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
        }
        else {
          uVar6 = (ulong)DAT_0534cd8c._4_4_;
          if (-1 < DAT_0534cd8c) goto LAB_01c443b8;
          if (DAT_0534cd8c._4_4_ != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        uVar5 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01c443cc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        DAT_0534cd8c = CONCAT44(0xfffffffe,(undefined4)DAT_0534cd8c);
        if (uVar6 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != 0x1ef061dd) {
          piVar8 = piVar8 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01c443c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        DAT_0534cd8c = CONCAT44(iVar1,(undefined4)DAT_0534cd8c);
        if (*puVar9 == 0) break;
      } while( true );
    }
    break;
  default:
    goto switchD_01c43f44_default;
  }
LAB_01c443c8:
  uVar5 = 0xfffe;
LAB_01c443cc:
  *(undefined2 *)param_1 = uVar5;
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  return;
LAB_01c443b8:
  if ((undefined2 *)(uVar6 + (long)puVar9) != (undefined2 *)0x0) {
    uVar5 = *(undefined2 *)(uVar6 + (long)puVar9);
    goto LAB_01c443cc;
  }
  goto LAB_01c443c8;
}

