
void FUN_0033a450(undefined8 param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  lVar10 = *(long *)(param_2 + 0x4a8);
  lVar11 = *(long *)(lVar10 + 0x38);
  if (lVar11 != 0) {
    fVar16 = *(float *)(param_2 + 0x48);
    lVar9 = *(long *)(*(long *)(param_2 + 0x240) + 0x348);
    lVar6 = 0;
    do {
      while( true ) {
        lVar12 = lVar11;
        lVar11 = *(long *)(lVar12 + 0x68);
        iVar4 = *(int *)(lVar12 + 0x70);
        if (0 < iVar4) {
          iVar5 = 0;
          lVar7 = *(long *)(lVar12 + 0x58);
          fVar13 = *(float *)(lVar9 + 0x34) + (1.0 - fVar16) * (1.0 - *(float *)(lVar9 + 0x34));
          do {
            iVar5 = iVar5 + 1;
            uVar15 = *(undefined8 *)(lVar9 + 0x38);
            lVar7 = *(long *)(lVar7 + 0x58);
            *(ulong *)(lVar7 + 0x18) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + fVar16 * 0.0) *
                          fVar13,((float)*(undefined8 *)(lVar7 + 0x18) +
                                 *(float *)(lVar9 + 0x40) * fVar16) * fVar13);
            *(ulong *)(lVar7 + 0x10) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                          (float)((ulong)uVar15 >> 0x20) * fVar16) * fVar13,
                          ((float)*(undefined8 *)(lVar7 + 0x10) + (float)uVar15 * fVar16) * fVar13);
            iVar4 = *(int *)(lVar12 + 0x70);
          } while (iVar5 < iVar4);
          if (0 < iVar4) {
            puVar8 = *(undefined8 **)(lVar12 + 0x58);
            iVar5 = 0;
            do {
              puVar8 = (undefined8 *)puVar8[0xb];
              iVar5 = iVar5 + 1;
              puVar8[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) +
                                   (float)((ulong)puVar8[3] >> 0x20) * fVar16,
                                   (float)puVar8[1] + (float)puVar8[3] * fVar16);
              *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) +
                                 (float)((ulong)puVar8[2] >> 0x20) * fVar16,
                                 (float)*puVar8 + (float)puVar8[2] * fVar16);
              iVar4 = *(int *)(lVar12 + 0x70);
            } while (iVar5 < iVar4);
          }
        }
        iVar5 = iVar4 + -1;
        fVar13 = *(float *)(param_2 + 0x48) + *(float *)(lVar12 + 0x80);
        fVar14 = *(float *)(lVar12 + 0x88);
        *(float *)(lVar12 + 0x80) = fVar13;
        *(float *)(lVar12 + 0x88) = fVar13;
        if (iVar5 == 0 || iVar4 < 1) break;
        lVar7 = *(long *)(lVar10 + 0x40);
        uVar2 = *(uint *)(lVar10 + 0x60);
        iVar3 = *(int *)(lVar10 + 0x48);
        lVar6 = *(long *)(lVar10 + 0x30);
        if (0.0 < (float)(int)fVar13 - (float)(int)fVar14) {
          *(int *)(lVar12 + 0x70) = iVar5;
          iVar4 = iVar5;
        }
        lVar6 = lVar6 + (lVar7 * (ulong)uVar2 + (long)iVar3 * (long)*(int *)(lVar12 + 0x7c) * 0x50 &
                        0xfffffffffffffffc);
        if (*(int *)(lVar9 + 0x28) == 0) {
          param_1 = FUN_00339d80(param_1,lVar6,lVar12,lVar9);
        }
        else {
          param_1 = FUN_0033a030((float)(*(int *)(lVar12 + 0x74) - iVar4) *
                                 (float)(*(int *)(lVar9 + 0x28) + 1),param_1,lVar6,lVar12,lVar9);
        }
        lVar6 = lVar12;
        if (lVar11 == 0) {
          return;
        }
      }
      plVar1 = (long *)(lVar10 + 0x38);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 0x68);
      }
      *plVar1 = lVar11;
      lVar7 = FUN_0031e3e8(param_2);
      lVar7 = *(long *)(lVar7 + 0x1a08);
      (**(code **)**(undefined8 **)(lVar7 + 0x20))();
      if (*(long *)(lVar12 + 0x50) != 0) {
        fVar13 = *(float *)(*(long *)(*(long *)(param_2 + 0x240) + 0x348) + 0x18);
        *(int *)(param_2 + 0x9c0) = *(int *)(param_2 + 0x9c0) + -1;
        *(ulong *)(param_2 + 0x9b8) = *(long *)(param_2 + 0x9b8) + (ulong)(uint)(int)fVar13 * -0x70;
        (**(code **)(**(long **)(param_2 + 0x9b0) + 0x18))();
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined1 *)(lVar12 + 0x90) = 0;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + -1;
      param_1 = (**(code **)(**(long **)(lVar7 + 0x20) + 8))();
    } while (lVar11 != 0);
  }
  return;
}

