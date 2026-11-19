
void FUN_038657e4(long *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (param_1[0x5b] != 0 && (int)param_1[0x53] == 2) {
    uVar5 = *(uint *)((long)param_1 + 0x43c);
    if ((((-1 < (int)uVar5) && ((int)uVar5 < (int)*(uint *)(param_1 + 0x41))) &&
        (uVar5 < *(uint *)(param_1 + 0x41))) && (*(long *)(param_1[0x42] + (ulong)uVar5 * 8) != 0))
    {
      FUN_03d83840();
    }
    *(undefined4 *)((long)param_1 + 0x43c) = 0xffffffff;
    (**(code **)(*param_1 + 0x118))(param_1,(int)param_1[0x5c]);
  }
  if ((int)param_1[0x83] != 2) {
    fVar6 = *(float *)((long)param_1 + 0x424);
    fVar7 = fVar6 - *(float *)(param_1 + 0x85);
    bVar1 = false;
    bVar2 = true;
    if (-0.0001 <= fVar7) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 == 0.0001;
        bVar2 = 0.0001 <= fVar7;
      }
    }
    if (bVar2 && !bVar1) {
      iVar3 = (int)param_1[0x7e];
      if ((int)param_1[0x83] == iVar3) {
        iVar4 = *(int *)((long)param_1 + 0x41c);
        iVar3 = (int)param_1[0x83];
      }
      else {
        uVar5 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar5 = (uint)(fVar6 < 0.0);
        }
        *(float *)((long)param_1 + 0x424) = fVar6 - (float)(int)((int)fVar6 - uVar5);
        if (iVar3 == 0) {
          fVar6 = 1.0;
        }
        else {
          fVar6 = -1.0;
        }
        iVar4 = (int)((float)(int)param_1[0x86] + fVar6);
        *(int *)((long)param_1 + 0x41c) = iVar4;
      }
      goto LAB_038658c0;
    }
  }
  iVar4 = (int)param_1[0x86];
  *(undefined4 *)((long)param_1 + 0x424) = 0;
  *(int *)((long)param_1 + 0x41c) = iVar4;
  iVar3 = (int)param_1[0x7e];
LAB_038658c0:
  *(int *)(param_1 + 0x83) = iVar3;
  iVar4 = iVar4 - param_3;
  iVar3 = -iVar4;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  *(undefined1 *)((long)param_1 + 0x42c) = 1;
  *(int *)(param_1 + 0x84) = param_3;
  *(float *)(param_1 + 0x85) = (float)iVar3;
  FUN_03865674(param_1,param_2);
  return;
}

