
void FUN_01ec6408(long *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  
  *(int *)((long)param_1 + 0xaf34) = *param_2;
  lVar4 = param_1[1];
  lVar6 = *(long *)(lVar4 + 0x68);
  *(undefined4 *)(param_1 + 0x15e7) = *(undefined4 *)(lVar6 + 0x278);
  *(undefined4 *)((long)param_1 + 0xaf3c) = *(undefined4 *)(lVar6 + 0x27c);
  *(undefined4 *)(param_1 + 0x15e8) = *(undefined4 *)(lVar6 + 0x280);
  *(undefined4 *)((long)param_1 + 0xaf44) = *(undefined4 *)(lVar6 + 0x2b4);
  uVar5 = 0;
  if (*(int *)(lVar4 + 0x750) != 0) {
    uVar5 = (uint)(*(int *)(lVar4 + 0x750) != 2);
  }
  *(uint *)(param_1 + 0x15e9) = uVar5;
  *(undefined4 *)((long)param_1 + 0xaf4c) = *(undefined4 *)(lVar4 + 0x750);
  if ((*(ushort *)((long)param_1 + 0xaf64) >> 3 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x750) = 0;
    uVar1 = *(ushort *)((long)param_1 + 0xaf64);
    if ((uVar1 >> 3 & 1) == 0) goto LAB_01ec659c;
  }
  (**(code **)(*param_1 + 0x400))(param_1);
  if ((*(int *)((long)param_1 + 0x77f4) == 0x39) || ((int)param_1[0xef6] == 0x39)) {
    local_28 = 0;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                 PTR_DAT_04bc1600,6);
  }
  fVar7 = *(float *)(lVar6 + 0x278);
  fVar8 = *(float *)(lVar6 + 0x280);
  *(undefined4 *)((long)param_1 + 0xaf6c) = 0;
  fVar10 = fVar7 + -2.5;
  fVar9 = fVar8 + -2.5;
  iVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  uVar1 = *(ushort *)((long)param_1 + 0xaf64);
  *(float *)(param_1 + 0x15ed) = ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5 - fVar7
  ;
  *(float *)(param_1 + 0x15ee) = ((float)iVar3 * 5.0 + (float)(iVar3 + 1) * 5.0 + 5.0) * 0.5 - fVar8
  ;
LAB_01ec659c:
  if ((((uVar1 >> 3 & 1) == 0) && (*param_2 != 3)) &&
     (lVar4 = *(long *)(param_1[1] + 0x3b0), lVar4 != 0)) {
    local_28 = 0;
    FUN_01e5a930(0x40000000,lVar4,0x1e,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                 PTR_DAT_04bc1600,6);
    FUN_01e575a0(lVar4);
    FUN_01e57c78(lVar4,PTR_DAT_04bb37e0,0,1);
    return;
  }
  return;
}

