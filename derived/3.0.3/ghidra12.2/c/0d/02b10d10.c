
/* WARNING: Removing unreachable block (ram,0x02b10f68) */
/* WARNING: Removing unreachable block (ram,0x02b10d8c) */
/* WARNING: Removing unreachable block (ram,0x02b10f78) */

void FUN_02b10d10(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  plVar2 = (long *)(param_1 + 8) + param_2;
  if (6 < param_2) {
    plVar2 = (long *)(param_1 + 8);
  }
  if (((long *)*plVar2 != (long *)0x0) &&
     (lVar7 = (**(code **)(*(long *)*plVar2 + 0x38))(), lVar7 != 0)) {
    if ((*(byte *)(lVar7 + 8) >> 1 & 1) == 0) {
      lVar7 = lVar7 + 0x18;
    }
    else {
      lVar7 = lVar7 + 0x350;
    }
    fVar14 = (float)*(int *)(lVar7 + 0x14) * 0.5;
    fVar13 = (float)*(int *)(lVar7 + 0x10) * 0.5;
    fVar16 = (float)*(int *)(lVar7 + 0x20) * 0.5;
    fVar15 = (float)*(int *)(lVar7 + 0x24) * 0.5;
    uVar9 = 0;
    if (fVar13 != (float)(int)fVar13) {
      uVar9 = (uint)(fVar13 < 0.0);
    }
    iVar10 = (int)fVar13 - uVar9;
    uVar9 = 0;
    if (fVar14 != (float)(int)fVar14) {
      uVar9 = (uint)(fVar14 < 0.0);
    }
    iVar12 = (int)fVar14 - uVar9;
    uVar9 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar9 = (uint)(fVar16 < 0.0);
    }
    iVar4 = (int)fVar16 - uVar9;
    uVar9 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar9 = (uint)(fVar15 < 0.0);
    }
    iVar5 = (int)fVar15 - uVar9;
    iVar3 = iVar10;
    if (iVar4 <= iVar10) {
      iVar3 = iVar4;
    }
    if (iVar10 <= iVar4) {
      iVar10 = iVar4;
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar12;
    if (iVar5 <= iVar12) {
      iVar4 = iVar5;
    }
    if (iVar12 <= iVar5) {
      iVar12 = iVar5;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar3;
    if (iVar10 + 1 <= iVar3) {
      iVar5 = iVar10 + 1;
    }
    if (iVar3 <= iVar10 + 1) {
      iVar3 = iVar10 + 1;
    }
    iVar10 = iVar4;
    if (iVar12 + 1 <= iVar4) {
      iVar10 = iVar12 + 1;
    }
    if (iVar4 <= iVar12 + 1) {
      iVar4 = iVar12 + 1;
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      if ((*(long *)(param_1 + 0x70) != 0) && (iVar12 = *(int *)(param_1 + 0x68), iVar12 != 0)) {
        iVar11 = 0;
        do {
          iVar1 = 0;
          if (*(int *)(param_1 + 0x60) <= iVar11 + *(int *)(param_1 + 100)) {
            iVar1 = *(int *)(param_1 + 0x60);
          }
          lVar7 = *(long *)(param_1 + 0x58) +
                  (long)(iVar11 + (*(int *)(param_1 + 100) - iVar1)) * 0x18;
          FUN_0132101c(*(undefined8 *)(param_1 + 0x70),lVar7,lVar7 + 0x10);
          iVar11 = iVar11 + 1;
        } while (iVar12 != iVar11);
      }
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      if ((*(long *)(param_1 + 0xa0) != 0) && (iVar12 = *(int *)(param_1 + 0x98), iVar12 != 0)) {
        iVar11 = 0;
        do {
          iVar1 = 0;
          if (*(int *)(param_1 + 0x90) <= iVar11 + *(int *)(param_1 + 0x94)) {
            iVar1 = *(int *)(param_1 + 0x90);
          }
          lVar7 = *(long *)(param_1 + 0x88) +
                  (long)(iVar11 + (*(int *)(param_1 + 0x94) - iVar1)) * 0x20;
          FUN_01309ff0(*(undefined8 *)(param_1 + 0xa0),lVar7 + 0x10,lVar7);
          FUN_01319350(lVar7);
          iVar11 = iVar11 + 1;
        } while (iVar12 != iVar11);
      }
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    lVar7 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
    if (lVar7 != 0 && iVar4 + 1 != iVar10) {
      iVar12 = iVar5;
      do {
        uVar9 = iVar12 - *(int *)(lVar7 + 0x28);
        uVar6 = iVar10 - *(int *)(lVar7 + 0x2c);
        if ((uVar9 < *(uint *)(lVar7 + 0x18) && uVar6 <= *(uint *)(lVar7 + 0x1c)) &&
            (*(uint *)(lVar7 + 0x18) <= uVar9 || *(uint *)(lVar7 + 0x1c) != uVar6)) {
          lVar8 = lVar7 + 0x40;
LAB_02b11008:
          FUN_0138367c(lVar8);
        }
        else if (((*(char *)(lVar7 + 0x88) != '\0') &&
                 ((uint)(iVar12 - *(int *)(lVar7 + 0x98)) < *(uint *)(lVar7 + 0xa0))) &&
                ((uint)(iVar10 - *(int *)(lVar7 + 0x9c)) < *(uint *)(lVar7 + 0xa4))) {
          lVar8 = lVar7 + 0xa8;
          goto LAB_02b11008;
        }
        if (iVar12 < iVar3) {
          iVar12 = iVar12 + 1;
        }
        else {
          iVar10 = iVar10 + 1;
          iVar12 = iVar5;
        }
      } while ((iVar5 != iVar12) || (iVar4 + 1 != iVar10));
    }
  }
  return;
}

