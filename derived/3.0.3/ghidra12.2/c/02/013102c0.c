
void FUN_013102c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  FUN_03ebb160(param_1 + 8,0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_03f45838(param_1 + 0x2b8);
  }
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = *param_2;
  iVar2 = *(int *)(param_2 + 3);
  *(int *)(param_1 + 0x1c8) = iVar2;
  iVar8 = *(int *)((long)param_2 + 0x1c);
  *(int *)(param_1 + 0x1cc) = iVar8;
  iVar9 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 0x1d8) = iVar9;
  iVar3 = *(int *)((long)param_2 + 0x2c);
  *(int *)(param_1 + 0x1dc) = iVar3;
  *(undefined1 *)(param_1 + 0x2d9) = *(undefined1 *)(param_2 + 6);
  if (((iVar9 - iVar2) + 1 < 3) || ((iVar3 - iVar8) + 1 < 3)) {
    if (iVar3 + 1 != iVar8) {
      iVar11 = iVar2;
      iVar10 = iVar2;
      do {
        iVar4 = *(int *)(param_1 + 0x68);
        iVar5 = *(int *)(param_1 + 0x60);
        if (iVar4 < iVar5) {
          *(int *)(param_1 + 0x68) = iVar4 + 1;
          iVar4 = *(int *)(param_1 + 100) + iVar4;
          iVar9 = 0;
          if (iVar5 <= iVar4) {
            iVar9 = iVar5;
          }
          lVar1 = *(long *)(param_1 + 0x58) + (long)(iVar4 - iVar9) * 0x10;
          *(int *)(lVar1 + 8) = iVar10;
          *(int *)(lVar1 + 0xc) = iVar8;
          iVar9 = *(int *)(param_1 + 0x1d8);
          iVar11 = *(int *)(param_1 + 0x1c8);
        }
        if (iVar10 < iVar9) {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          iVar10 = iVar11;
        }
      } while ((iVar2 != iVar10) || (iVar3 + 1 != iVar8));
    }
  }
  else {
    iVar10 = iVar9 + -1;
    iVar4 = iVar3 + -1;
    iVar11 = iVar10;
    if (iVar2 + 1 < iVar10) {
      iVar11 = iVar2 + 1;
    }
    if (iVar10 < iVar2 + 1) {
      iVar10 = iVar2 + 1;
    }
    iVar5 = iVar4;
    if (iVar8 + 1 < iVar4) {
      iVar5 = iVar8 + 1;
    }
    if (iVar4 < iVar8 + 1) {
      iVar4 = iVar8 + 1;
    }
    if (iVar3 + 1 != iVar8) {
      iVar13 = iVar2;
      iVar12 = iVar2;
      do {
        if ((((iVar12 < iVar11) || (iVar10 < iVar12)) || (iVar8 < iVar5)) || (iVar4 < iVar8)) {
          iVar6 = *(int *)(param_1 + 0x68);
          iVar7 = *(int *)(param_1 + 0x60);
          if (iVar6 < iVar7) {
            *(int *)(param_1 + 0x68) = iVar6 + 1;
            iVar6 = *(int *)(param_1 + 100) + iVar6;
            iVar9 = 0;
            if (iVar7 <= iVar6) {
              iVar9 = iVar7;
            }
            lVar1 = *(long *)(param_1 + 0x58) + (long)(iVar6 - iVar9) * 0x10;
            *(int *)(lVar1 + 8) = iVar12;
            *(int *)(lVar1 + 0xc) = iVar8;
            iVar9 = *(int *)(param_1 + 0x1d8);
            iVar13 = *(int *)(param_1 + 0x1c8);
          }
        }
        if (iVar12 < iVar9) {
          iVar12 = iVar12 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          iVar12 = iVar13;
        }
      } while ((iVar2 != iVar12) || (iVar3 + 1 != iVar8));
    }
    *(undefined1 *)(param_1 + 0x2d8) = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}

