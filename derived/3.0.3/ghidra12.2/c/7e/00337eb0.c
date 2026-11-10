
long FUN_00337eb0(int *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  
  (**(code **)**(undefined8 **)(param_1 + 8))();
  iVar3 = *param_1;
  if (0 < iVar3) {
    lVar12 = *(long *)(param_1 + 6);
    iVar7 = iVar3;
    iVar10 = param_1[4];
    do {
      pcVar13 = (char *)(lVar12 + (long)iVar10 * 0xa0 + 0x90);
      if (*pcVar13 == '\0') {
        uVar14 = (uint)*(float *)(*(long *)(*(long *)(param_2 + 0x240) + 0x348) + 0x18);
        lVar9 = (ulong)uVar14 * 0x70;
        lVar5 = (**(code **)(**(long **)(param_2 + 0x9b0) + 0x10))
                          (*(long **)(param_2 + 0x9b0),lVar9,0x80);
        if (lVar5 == 0) {
          *(undefined8 *)(lVar12 + (long)iVar10 * 0xa0 + 0x50) = 0;
          FUN_0032c600(**(long **)(param_2 + 0x4d0) + 0x14,param_2,0x4000);
          return 0;
        }
        *(long *)(param_2 + 0x9b8) = *(long *)(param_2 + 0x9b8) + lVar9;
        *(int *)(param_2 + 0x9c0) = *(int *)(param_2 + 0x9c0) + 1;
        plVar6 = (long *)(lVar12 + (long)iVar10 * 0xa0 + 0x50);
        *plVar6 = lVar5;
        uVar4 = uVar14 - 1;
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar8 = 0;
          }
          else {
            lVar9 = 0;
            uVar8 = 0;
            do {
              uVar8 = uVar8 + 2;
              *(long *)(*plVar6 + lVar9 + 0x58) = *plVar6 + lVar9 + 0x70;
              lVar5 = *plVar6 + lVar9;
              lVar9 = lVar9 + 0xe0;
              *(long *)(lVar5 + 200) = lVar5 + 0xe0;
            } while (((ulong)uVar4 & 0xfffffffe) != uVar8);
          }
          if ((uVar4 & 1) != 0) {
            lVar9 = *plVar6 + uVar8 * 0x70;
            *(long *)(lVar9 + 0x58) = lVar9 + 0x70;
          }
          if (1 < uVar14) {
            uVar8 = (ulong)uVar14 - 1;
            if (uVar14 == 2) {
              lVar9 = 1;
            }
            else {
              lVar9 = 0;
              uVar1 = 0;
              do {
                uVar11 = uVar1;
                uVar1 = uVar11 + 2;
                *(long *)(*plVar6 + lVar9 + 0xd0) = *plVar6 + lVar9;
                lVar5 = *plVar6 + lVar9;
                lVar9 = lVar9 + 0xe0;
                *(long *)(lVar5 + 0x140) = lVar5 + 0x70;
              } while ((uVar8 & 0xfffffffffffffffe) != uVar1);
              lVar9 = uVar11 + 3;
            }
            if ((uVar8 & 1) != 0) {
              lVar9 = *plVar6 + lVar9 * 0x70;
              *(long *)(lVar9 + 0x60) = lVar9 + -0x70;
            }
          }
        }
        *(long *)(*plVar6 + (ulong)uVar4 * 0x70 + 0x58) = *plVar6;
        *(ulong *)(*plVar6 + 0x60) = *plVar6 + (ulong)uVar4 * 0x70;
        lVar9 = *plVar6;
        lVar5 = lVar12 + (long)iVar10 * 0xa0;
        *(undefined4 *)(lVar5 + 0x80) = 0;
        *(undefined4 *)(lVar5 + 0x70) = 0;
        *(undefined4 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(long *)(lVar5 + 0x58) = lVar9;
        *(long *)(lVar5 + 0x60) = lVar9;
        *pcVar13 = '\x01';
        param_1[5] = param_1[5] + 1;
        (**(code **)(**(long **)(param_1 + 8) + 8))();
        return lVar12 + (long)iVar10 * 0xa0;
      }
      iVar2 = 0;
      if (iVar10 + 1 < iVar3) {
        iVar2 = iVar10 + 1;
      }
      iVar7 = iVar7 + -1;
      param_1[4] = iVar2;
      iVar10 = iVar2;
    } while (iVar7 != 0);
  }
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  FUN_0032c600(**(long **)(param_2 + 0x4d0) + 0x14,param_2,0x2000);
  FUN_0032c410("There is no available stripe instance.\n");
  return 0;
}

