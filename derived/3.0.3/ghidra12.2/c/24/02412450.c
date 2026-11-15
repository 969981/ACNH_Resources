
void FUN_02412450(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float local_6c [3];
  ulong local_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x178) == 0) goto LAB_02412630;
  uVar4 = *(ushort *)(param_1 + 0x18ef);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar13 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c[0] = 1.4013e-44;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0241250c;
  }
  else {
LAB_0241250c:
    iVar11 = (uint)uVar4 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar9 = iVar11 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar11 = -0x15555560;
      iVar9 = (int)(fVar13 * (float)iVar9);
      if (iVar9 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar11 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar5 <= iVar9) {
        iVar1 = iVar5;
      }
      if (iVar11 <= iVar9) {
        iVar11 = iVar1;
      }
      iVar11 = iVar11 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar11;
  }
  iVar11 = *(int *)(param_1 + 0x18e5);
  iVar9 = *(int *)(param_1 + 0x18eb);
  lVar6 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  local_6c[1] = 0.0;
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar3 + 0x50);
  local_60 = puVar3[0x4f] & 0xffffffff;
  local_6c[0] = (float)iVar11 * 0.001;
  local_6c[2] = (float)iVar9 * 0.001;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_60,local_6c);
  *(undefined4 *)(puVar3 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar3 + 0x50) = local_58;
LAB_02412630:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
    iVar11 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
    if (0x7ffe < iVar11) {
      iVar11 = 0x7fff;
    }
    if (iVar11 < -0x7fff) {
      iVar11 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar11;
    fVar13 = *(float *)(lVar6 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar13 * 999.99994);
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar10;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar12 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar12;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
    if (*(int *)(param_1 + 0x1810) == 2) {
      FUN_016f8230(param_1,1,0,0);
    }
  }
  return;
}

