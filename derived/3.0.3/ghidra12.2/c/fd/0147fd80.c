
bool FUN_0147fd80(long param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_50 [8];
  int local_48;
  int iStack_44;
  
  uVar1 = *param_2;
  if (uVar1 != 0x80000000) {
    uVar1 = uVar1 & 0x7fffffff;
  }
  lVar6 = FUN_0147f934(0xb);
  pbVar7 = (byte *)(**(code **)(*(long *)(lVar6 + 0x260) + 0xf0))(lVar6 + 0x260);
  uVar4 = 0;
  if (*pbVar7 != 0) {
    uVar4 = uVar1 / *pbVar7;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  FUN_015380bc(*(undefined8 *)(param_1 + 0xa90),param_3);
  iVar2 = *(int *)(lVar6 + 0x2b4);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x8d4) = uVar4;
  *(uint *)(param_1 + 0x8d0) = uVar1 + iVar2;
  FUN_01473944(auStack_50,param_1);
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (local_48 != iStack_44) {
    if (local_48 < iStack_44) {
      iVar2 = iStack_44;
      iVar5 = local_48;
    }
    else {
      iVar2 = local_48;
      iVar5 = iStack_44;
    }
    iVar3 = *param_3;
    fVar9 = 0.0;
    fVar11 = 1.0;
    if (iVar3 != 2) {
      fVar11 = 0.0;
    }
    fVar10 = -1.0;
    if (iVar3 != 0) {
      fVar10 = fVar11;
    }
    fVar10 = (float)(iVar2 + 1) * 0.5 * (1.0 - (float)(iVar5 + 1) / (float)(iVar2 + 1)) * 5.0 *
             fVar10;
    if ((iVar3 == 3) && ((iStack_44 + local_48 & 0x80000001U) == 1)) {
      fVar9 = (float)iStack_44 * 5.0 * -0.5;
    }
  }
  lVar8 = *(long *)(param_1 + 0xa90);
  *(float *)(param_1 + 0x8d8) = fVar10;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(float *)(param_1 + 0x8e0) = fVar9;
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(lVar8 + 0x284);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar8 + 0x288);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(lVar8 + 0x28c);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar6 + 0x27c);
  return *(int *)(param_1 + 0x8d0) != *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
}

