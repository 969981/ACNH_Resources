
void FUN_0340619c(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_30;
  undefined4 local_28;
  
  if (0 < param_1[8] && 0 < param_1[0x1b]) {
    uVar2 = *(ushort *)(param_1 + 0x29);
    fVar9 = (float)param_1[0x11] - *(float *)(*(long **)(param_1 + 10))[(uint)param_1[0x28]];
    fVar11 = -fVar9;
    if (0.0 <= fVar9) {
      fVar11 = fVar9;
    }
    if (param_1[0x14] == 1) {
      fVar13 = fVar11 * (float)param_1[0x15];
      fVar10 = (float)param_1[0x17];
      if (fVar13 <= (float)param_1[0x17]) {
        fVar10 = fVar13;
      }
      fVar12 = (float)param_1[0x16];
      if ((float)param_1[0x16] <= fVar13) {
        fVar12 = fVar10;
      }
      if ((uVar2 & 1) == 0) {
        fVar12 = fVar12 + (float)param_1[0x18];
      }
    }
    else {
      fVar12 = 0.0;
      if (param_1[0x14] == 0) {
        fVar12 = fVar11 / (float)param_1[0x19];
      }
    }
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
    fVar10 = -fVar11;
    if (0.0 <= fVar9) {
      fVar10 = fVar11;
    }
    bVar4 = false;
    bVar5 = true;
    if (-1.1920929e-07 <= fVar10) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar10)) {
        bVar4 = fVar10 == 1.1920929e-07;
        bVar5 = 1.1920929e-07 <= fVar10;
      }
    }
    if (!bVar5 || bVar4) {
      *(ushort *)(param_1 + 0x29) = uVar2 & 0xfffe;
    }
    else {
      pfVar6 = (float *)**(long **)(param_1 + 10);
      FUN_03405a20(fVar10 + *pfVar6,pfVar6[1] + 0.0,param_1);
      uVar2 = *(ushort *)(param_1 + 0x29);
      *(ushort *)(param_1 + 0x29) = uVar2 | 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar1 = param_1[0x28];
      if (((-1 < (int)uVar1) && ((int)uVar1 < param_1[8])) &&
         ((*(byte *)(*(long *)(*(long *)(param_1 + 10) + (ulong)uVar1 * 8) + 8) & 1) != 0)) {
        iVar7 = *param_1;
        iVar3 = 0;
        if (iVar7 != 0) {
          iVar3 = (int)uVar1 / iVar7;
        }
        plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 2) + (ulong)(uVar1 - iVar3 * iVar7) * 8) +
                           0x10);
        if (plVar8 == (long *)0x0) {
          pfVar6 = (float *)&DAT_0419b56c;
        }
        else {
          local_30 = PTR_DAT_04bc0cb8 + 0x10;
          local_28 = 8;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_30);
          pfVar6 = (float *)(**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
        }
        fVar9 = *pfVar6 - (float)param_1[0x11];
        fVar11 = -fVar9;
        if (0.0 <= fVar9) {
          fVar11 = fVar9;
        }
        if (fVar11 < (float)param_1[0x10] * 0.3) {
          if ((char)param_1[0x2d] == '\0') {
            if (*param_1 < 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)**(undefined8 **)(param_1 + 2);
            }
            local_30 = (undefined *)CONCAT44(1,iVar7 * param_1[0x28]);
          }
          else {
            local_30 = *(undefined **)(param_1 + 0x2e);
            *(undefined1 *)(param_1 + 0x2d) = 0;
          }
          FUN_03406060(param_1,&local_30);
          *(ushort *)(param_1 + 0x29) = *(ushort *)(param_1 + 0x29) & 0xfffd;
        }
      }
    }
  }
  return;
}

