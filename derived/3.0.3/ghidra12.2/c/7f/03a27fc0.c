
void FUN_03a27fc0(float param_1,long param_2,uint param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_b0;
  undefined4 local_ac;
  long local_a8;
  long lStack_a0;
  int local_98;
  undefined4 uStack_94;
  long local_90;
  long lStack_88;
  
  iVar2 = param_4 * param_3;
  if (0 < (int)param_3) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar3 = (*DAT_04c61fd0)(*(undefined8 *)(param_2 + 0x200));
      lVar5 = 0;
      if (*(long *)(param_2 + 0x208) != 0) {
        lVar5 = *(long *)(param_2 + 0x1f0) - *(long *)(*(long *)(param_2 + 0x208) + 0x10);
      }
      pfVar1 = (float *)(lVar3 + lVar5 + lVar6);
      fVar13 = (float)param_4 * param_1 * (float)(int)uVar7;
      *pfVar1 = (1.0 / (float)iVar2) * (float)param_4 * (float)(int)uVar7;
      fVar8 = cosf(fVar13);
      pfVar1[2] = fVar8;
      fVar8 = sinf(fVar13);
      pfVar1[1] = fVar8;
      lVar3 = (*DAT_04c61fd0)(*(undefined8 *)(param_2 + 0x358));
      lVar5 = 0;
      if (*(long *)(param_2 + 0x360) != 0) {
        lVar5 = *(long *)(param_2 + 0x348) - *(long *)(*(long *)(param_2 + 0x360) + 0x10);
      }
      lVar6 = lVar6 + 0xc;
      *(short *)(lVar3 + lVar5 + uVar7 * 2) = (short)uVar7;
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
  }
  *(undefined4 *)(param_2 + 4) = 0;
  fVar13 = sinf(param_1);
  fVar9 = cosf(param_1);
  fVar8 = *(float *)(param_2 + 4);
  if (0 < iVar2) {
    fVar11 = 0.0;
    iVar4 = 0;
    fVar12 = 1.0;
    fVar10 = fVar8;
    do {
      fVar8 = fVar11 * -fVar13;
      fVar11 = fVar9 * fVar11 + fVar12 * fVar13;
      fVar12 = fVar8 + fVar12 * fVar9;
      fVar8 = (float)iVar4;
      iVar4 = iVar4 + 1;
      fVar8 = fVar10 + fVar8 * (1.0 / (float)iVar2) * fVar12;
      if (fVar12 <= 0.0) {
        fVar8 = fVar10;
      }
      fVar10 = fVar8;
    } while (iVar2 != iVar4);
  }
  local_a8 = *(long *)(param_2 + 0x200);
  lStack_a0 = param_2 + 0x1e8;
  lVar6 = param_2 + 0x220;
  *(float *)(param_2 + 4) = 1.0 / fVar8;
  local_b0 = 0;
  if (*(long *)(param_2 + 0x208) != 0) {
    local_b0 = *(int *)(param_2 + 0x1f0) - *(int *)(*(long *)(param_2 + 0x208) + 0x10);
  }
  local_ac = 0;
  if (local_a8 != 0) {
    local_ac = *(undefined4 *)(local_a8 + 0x104);
  }
  FUN_0390ebc0(lVar6,&local_b0,0xc,(long)(int)param_3 * 0xc);
  *(undefined8 *)(param_2 + 600) = 10;
  *(undefined8 *)(param_2 + 0x264) = 0x40000000a;
  lVar5 = param_2 + 8;
  *(undefined2 *)(param_2 + 0x260) = 1;
  *(undefined2 *)(param_2 + 0x26c) = 1;
  *(undefined8 *)(param_2 + 0x270) = 0x80000000a;
  *(undefined2 *)(param_2 + 0x278) = 1;
  FUN_0390e4c0(lVar5,0,lVar6,0);
  FUN_0390e4c0(lVar5,1,lVar6,1);
  FUN_0390e4c0(lVar5,2,lVar6,2);
  FUN_0390e640(lVar5);
  local_90 = *(long *)(param_2 + 0x358);
  local_98 = 0;
  if (*(long *)(param_2 + 0x360) != 0) {
    local_98 = *(int *)(param_2 + 0x348) - *(int *)(*(long *)(param_2 + 0x360) + 0x10);
  }
  if (local_90 == 0) {
    uStack_94 = 0;
  }
  else {
    uStack_94 = *(undefined4 *)(local_90 + 0x104);
  }
  lStack_88 = param_2 + 0x340;
  FUN_03901480(param_2 + 0x378,&local_98,1,param_3);
  *(undefined4 *)(param_2 + 900) = 0;
  return;
}

