
void FUN_023b62d0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float local_5c [3];
  ulong local_50;
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    iVar9 = *(int *)(param_1 + 0x18e5);
    iVar10 = *(int *)(param_1 + 0x18eb);
    lVar6 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
    local_5c[1] = 0.0;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_48 = *(undefined4 *)(puVar2 + 0x50);
    local_50 = puVar2[0x4f] & 0xffffffff;
    local_5c[0] = (float)iVar9 * 0.001;
    local_5c[2] = (float)iVar10 * 0.001;
    FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,&local_50,local_5c);
    *(undefined4 *)(puVar2 + 0x4f) = (undefined4)local_50;
    *(undefined4 *)(puVar2 + 0x50) = local_48;
    uVar4 = *(ushort *)(param_1 + 0x18ef);
    lVar6 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
    fVar11 = *pfVar8;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c[0] = 1.4013e-44;
      local_50 = CONCAT44(local_50._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar9 = (uint)uVar4 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar3 + 0x148))();
    iVar10 = iVar9 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar9 = -0x15555560;
      iVar10 = (int)(fVar11 * (float)iVar10);
      if (iVar10 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar5 <= iVar10) {
        iVar1 = iVar5;
      }
      if (iVar9 <= iVar10) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar9;
  }
  return;
}

