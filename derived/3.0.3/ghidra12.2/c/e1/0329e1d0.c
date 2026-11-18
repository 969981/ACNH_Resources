
void FUN_0329e1d0(long *param_1,float *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  lVar8 = param_1[3];
  (**(code **)(*param_1 + 0x90))(auStack_60);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  local_28 = *(undefined8 *)(*(long *)(lVar8 + 0xf0) + 0x18);
  local_48 = local_58;
  local_50 = puVar1;
  uVar3 = FUN_032d32b0(&local_28,&local_50);
  lVar8 = param_1[3];
  (**(code **)(*param_1 + 0x88))(auStack_60,param_1);
  local_28 = *(undefined8 *)(*(long *)(lVar8 + 0xf0) + 0x18);
  local_48 = local_58;
  local_50 = puVar1;
  lVar8 = FUN_032d32b0(&local_28,&local_50);
  puVar9 = (uint *)(param_1 + 1);
  uVar4 = *puVar9;
  if (0 < (int)uVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(long *)(param_1[2] + lVar6) == lVar8) {
        iVar2 = -(int)lVar7;
        if ((-1 < iVar2) && (iVar2 < (int)uVar4)) {
          if (1 - (int)lVar7 < (int)uVar4) {
            memmove((void *)(param_1[2] + lVar6),(void *)(param_1[2] + lVar6 + 8),
                    ((long)(int)uVar4 * 8 - lVar6) - 8);
            uVar4 = *(uint *)(param_1 + 1);
          }
          *puVar9 = uVar4 - 1;
        }
        break;
      }
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar4 + lVar7 != 0);
  }
  iVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
    iVar2 = iVar2 + 1;
  }
  FUN_032d5da0(&local_50,uVar3,PTR_DAT_04bc95c8,puVar9,0,0,iVar2,0);
  uVar5 = (uint)(float)local_50;
  fVar10 = (float)(int)(float)local_50;
  uVar4 = -(uVar5 & 1);
  if (-1 < (int)uVar5) {
    uVar4 = uVar5 & 1;
  }
  if (((float)local_50 != fVar10) || (uVar4 != 0)) {
    iVar2 = 2;
    if ((int)uVar5 < 0) {
      iVar2 = -2;
    }
    fVar10 = (float)(int)((uVar5 - uVar4) + iVar2);
  }
  uVar5 = (uint)local_50._4_4_;
  fVar11 = (float)(int)local_50._4_4_;
  uVar4 = -(uVar5 & 1);
  if (-1 < (int)uVar5) {
    uVar4 = uVar5 & 1;
  }
  if ((local_50._4_4_ != fVar11) || (uVar4 != 0)) {
    iVar2 = 2;
    if ((int)uVar5 < 0) {
      iVar2 = -2;
    }
    fVar11 = (float)(int)((uVar5 - uVar4) + iVar2);
  }
  uVar5 = (uint)(float)local_48;
  fVar12 = (float)(int)(float)local_48;
  uVar4 = -(uVar5 & 1);
  if (-1 < (int)uVar5) {
    uVar4 = uVar5 & 1;
  }
  if (((float)local_48 != fVar12) || (uVar4 != 0)) {
    iVar2 = 2;
    if ((int)uVar5 < 0) {
      iVar2 = -2;
    }
    fVar12 = (float)(int)((uVar5 - uVar4) + iVar2);
  }
  uVar5 = (uint)local_48._4_4_;
  fVar13 = (float)(int)local_48._4_4_;
  uVar4 = -(uVar5 & 1);
  if (-1 < (int)uVar5) {
    uVar4 = uVar5 & 1;
  }
  if ((local_48._4_4_ != fVar13) || (uVar4 != 0)) {
    iVar2 = 2;
    if ((int)uVar5 < 0) {
      iVar2 = -2;
    }
    fVar13 = (float)(int)((uVar5 - uVar4) + iVar2);
  }
  *param_2 = fVar10;
  param_2[1] = fVar11;
  param_2[2] = fVar12;
  param_2[3] = fVar13;
  if ((int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
    *(long *)(param_1[2] + (long)(int)param_1[1] * 8) = lVar8;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}

