
void FUN_0310c2a0(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_40;
  undefined4 local_38;
  
  if (param_2 != (long *)0x0) {
    plVar3 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x270))();
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0xb;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
    pfVar4 = (float *)(**(code **)(plVar3[3] + 0xd0))(plVar3[1]);
    if (*(long *)(param_1 + 0x270) == 0) {
      fVar10 = 1.0;
    }
    else {
      fVar10 = (float)(int)*(float *)(*(long *)(param_1 + 0x270) + 0x78);
    }
    fVar8 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar5 = (int)(fVar8 * 1.442695);
    fVar11 = ((fVar8 - (float)iVar5 * 0.6931472) + 0.6931472) * 23.08312;
    fVar8 = *pfVar4;
    fVar9 = pfVar4[1];
    uVar6 = (ulong)(uint)(int)fVar11;
    uVar7 = (ulong)param_3;
    fVar10 = fVar10 * ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar6 * 8) +
                                       *(float *)((long)(PTR_DAT_04bd0d90 + uVar6 * 8) + 4) *
                                       (fVar11 - (float)uVar6)) + iVar5 * 0x800000));
    iVar5 = (int)fVar10;
    fVar10 = (float)(int)fVar10;
    do {
      pfVar4 = (float *)*param_2;
      uVar7 = uVar7 - 1;
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = (int)(fVar9 * pfVar4[1]) / iVar5;
      }
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = (int)(fVar8 * *pfVar4) / iVar5;
      }
      *pfVar4 = (fVar10 * (float)iVar2) / fVar8;
      pfVar4[1] = (fVar10 * (float)iVar1) / fVar9;
      param_2 = param_2 + 1;
    } while (uVar7 != 0);
  }
  return;
}

