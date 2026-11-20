
float FUN_03ed6ea0(long param_1,undefined2 *param_2,short *param_3,long param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = *(long *)(param_1 + 0x10);
  *param_2 = 0;
  *param_3 = -1;
  fVar9 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),*(long *)(param_1 + 0x18) + 4,
                              *(undefined8 *)(param_5 + 0x70),1,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar3 + 0xc);
  if (bVar1 != 0) {
    uVar7 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      iVar6 = (int)uVar7;
      lVar3 = *(long *)(lVar5 + 8);
      if (iVar6 < (int)(bVar1 - 1)) {
        lVar8 = lVar3 + *(int *)(lVar4 + (ulong)(iVar6 + (uint)*(byte *)(lVar4 + 0xd) + 1) * 4 +
                                0x1c);
      }
      else {
        lVar8 = 0;
      }
      lVar3 = lVar3 + *(int *)(lVar4 + (uVar7 + *(byte *)(lVar4 + 0xd)) * 4 + 0x1c);
      fVar10 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar3 + 4,
                                   *(undefined8 *)(param_5 + 0x70),1,0,0);
      fVar11 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar3 + 0xc,
                                   *(undefined8 *)(param_5 + 0x70),1,0,0);
      bVar2 = false;
      if ((fVar10 <= fVar9) && (bVar2 = false, !NAN(fVar9) && !NAN(fVar11))) {
        bVar2 = fVar9 < fVar11;
      }
      if (bVar2) {
        if (lVar8 != 0) {
          fVar12 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar8 + 4,
                                       *(undefined8 *)(param_5 + 0x70),1,0,0);
          if (fVar12 <= fVar9) {
            fVar12 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar8 + 0xc,
                                         *(undefined8 *)(param_5 + 0x70),1,0,0);
            if (fVar9 < fVar12) {
              fVar12 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar8 + 4,
                                           *(undefined8 *)(param_5 + 0x70),1,0,0);
              if (fVar10 <= fVar12) {
                fVar10 = fVar12;
              }
              fVar12 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar8 + 0xc,
                                           *(undefined8 *)(param_5 + 0x70),1,0,0);
              if (fVar12 <= fVar11) {
                fVar11 = fVar12;
              }
              if (0.0 < fVar11 - fVar10) {
                fVar9 = (fVar9 - fVar10) / (fVar11 - fVar10);
                fVar10 = 0.0;
                if ((0.01 <= fVar9) && (fVar10 = fVar9, 0.99 < fVar9)) {
                  fVar10 = 1.0;
                }
                *param_3 = (short)uVar7 + 1;
                goto LAB_03ed7104;
              }
              uVar7 = (ulong)(iVar6 + 1);
            }
          }
        }
        fVar10 = 0.0;
        goto LAB_03ed7104;
      }
      uVar7 = uVar7 + 1;
    } while ((uint)bVar1 != (uint)uVar7);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  fVar11 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),
                               *(long *)(lVar5 + 8) +
                               (long)*(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0xd) * 4 + 0x1c) + 4,
                               *(undefined8 *)(param_5 + 0x70),1,0,0);
  fVar10 = 0.0;
  if (fVar11 <= fVar9) {
    uVar7 = (ulong)(bVar1 - 1);
LAB_03ed7104:
    *param_2 = (short)uVar7;
  }
  return fVar10;
}

