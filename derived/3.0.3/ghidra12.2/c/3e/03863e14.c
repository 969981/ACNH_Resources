
void FUN_03863e14(long *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  float fVar11;
  undefined4 local_48 [2];
  long *local_40;
  byte local_38;
  
  if (param_1[0x5b] != 0 && (int)param_1[0x53] == 2) {
    if ((int)param_1[0x83] != 2) {
      fVar11 = *(float *)((long)param_1 + 0x424) - *(float *)(param_1 + 0x85);
      if ((1.0 <= *(float *)(param_1 + 0x85) - *(float *)((long)param_1 + 0x424)) &&
         (0.0001 < fVar11 || fVar11 < -0.0001)) {
        return;
      }
    }
    iVar9 = (int)param_1[0x86] - (int)param_1[0x87];
    if ((*(byte *)(param_1 + 0x7d) >> 1 & 1) != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x434);
      uVar3 = 0;
      if ((int)uVar4 < iVar9) {
        uVar3 = ~uVar4;
      }
      if (iVar9 < 0) {
        uVar3 = uVar4 + 1;
      }
      iVar9 = uVar3 + iVar9;
    }
    iVar9 = (int)param_1[0x88] - iVar9;
    uVar3 = *(int *)((long)param_1 + 0x444) +
            ((*(uint *)(param_1 + 0x7a) & iVar9 >> 0x1f) + iVar9) * (int)param_1[0x5d];
    if ((((-1 < (int)uVar3) &&
         ((int)uVar3 < (int)*(uint *)(param_1 + 0x41) && uVar3 < *(uint *)(param_1 + 0x41))) &&
        (plVar10 = *(long **)(param_1[0x42] + (ulong)uVar3 * 8), plVar10 != (long *)0x0)) &&
       ((*(uint *)(plVar10[0x43] + 0x14b0) >> (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f) & 1) != 0))
    {
      uVar8 = (**(code **)(*plVar10 + 0xf0))(plVar10);
      if ((uVar8 & 1) == 0) {
        local_38 = param_2 & 1;
        local_48[0] = (undefined4)param_1[0x5c];
        local_40 = plVar10;
        (**(code **)(*param_1 + 0x110))(param_1,local_48);
      }
      else {
        iVar5 = (int)param_1[0x5d];
        *(uint *)((long)param_1 + 0x43c) = uVar3;
        iVar9 = (int)param_1[0x86] - (int)param_1[0x87];
        iVar7 = 0;
        if (iVar5 != 0) {
          iVar7 = (int)uVar3 / iVar5;
        }
        if ((*(byte *)(param_1 + 0x7d) >> 1 & 1) == 0) {
          iVar9 = iVar9 + iVar7;
        }
        else {
          uVar6 = *(uint *)((long)param_1 + 0x434);
          uVar4 = 0;
          if ((int)uVar6 < iVar9) {
            uVar4 = ~uVar6;
          }
          if (iVar9 < 0) {
            uVar4 = uVar6 + 1;
          }
          iVar1 = iVar9 + iVar7 + uVar4;
          iVar9 = (int)param_1[0x7a];
          iVar2 = 0;
          if (iVar9 <= iVar1) {
            iVar2 = iVar9;
          }
          if (-1 < iVar1) {
            iVar9 = -iVar2;
          }
          iVar9 = iVar9 + iVar1;
        }
        *(int *)(param_1 + 0x88) = iVar9;
        *(uint *)((long)param_1 + 0x444) = uVar3 - iVar7 * iVar5;
      }
    }
  }
  return;
}

