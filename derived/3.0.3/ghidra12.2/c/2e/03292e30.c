
void FUN_03292e30(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar3 = *(long *)(param_1 + 0x158);
  if (lVar3 != 0) {
    lVar6 = 0;
    uVar1 = 0;
    iVar2 = 1;
    lVar4 = lVar3;
    do {
      if (*(char *)(lVar3 + 0x34) == '\0' || *(char *)(lVar3 + 0x35) == '\0') {
LAB_03292e50:
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) goto LAB_03292f48;
      }
      else {
        if (lVar6 == 0) {
          fVar8 = 0.0;
          fVar10 = 0.0;
        }
        else {
          fVar8 = *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x20);
          fVar10 = *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x24);
        }
        if (uVar1 != 0) {
          if (7 < uVar1) {
            uVar5 = uVar1 & 0xfffffff8;
            do {
              uVar5 = uVar5 - 8;
              lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *
                                                  )(lVar4 + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) +
                                                  0x10) + 0x10) + 0x10);
            } while (uVar5 != 0);
          }
          if ((uVar1 & 7) != 0) {
            uVar5 = uVar1 & 7;
            do {
              lVar4 = *(long *)(lVar4 + 0x10);
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        fVar12 = *(float *)(lVar3 + 0x18);
        fVar13 = *(float *)(lVar3 + 0x1c);
        fVar14 = *(float *)(lVar3 + 0x20);
        fVar15 = *(float *)(lVar3 + 0x24);
        *(float *)(lVar4 + 0x18) = fVar8;
        *(float *)(lVar4 + 0x1c) = fVar10;
        *(float *)(lVar4 + 0x20) = (fVar14 - fVar12) + fVar8;
        *(float *)(lVar4 + 0x24) = (fVar15 - fVar13) + fVar10;
        lVar4 = *(long *)(param_1 + 0x158);
        if (lVar4 != 0) {
          lVar6 = lVar4;
          iVar7 = iVar2;
          do {
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) break;
            lVar6 = *(long *)(lVar6 + 0x10);
          } while (lVar6 != 0);
          goto LAB_03292e50;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) break;
        lVar4 = 0;
        lVar6 = 0;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 1;
    } while( true );
  }
LAB_03292f60:
  uVar9 = *(undefined4 *)(param_1 + 0x178);
  uVar11 = *(undefined4 *)(param_1 + 0x17c);
LAB_03292f68:
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  return;
LAB_03292f48:
  if (lVar6 != 0) {
    uVar9 = *(undefined4 *)(lVar6 + 0x20);
    *(undefined4 *)(param_1 + 0x178) = uVar9;
    uVar11 = *(undefined4 *)(lVar6 + 0x24);
    *(undefined4 *)(param_1 + 0x17c) = uVar11;
    goto LAB_03292f68;
  }
  goto LAB_03292f60;
}

