
void FUN_023e4b7c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float local_5c [3];
  ulong local_50;
  undefined4 local_48;
  
  if ((*(uint *)(param_1 + 0x20f0) < 2) || (uVar6 = FUN_0231eddc(param_1,0), (uVar6 & 1) != 0)) {
    if (*(int *)(param_1 + 0x178) == 0) {
      if (((*(char *)(param_1 + 0x17ac) == '\0') &&
          (local_50 = local_50 & 0xffffffff00000000, (*(uint *)(param_1 + 0xec8) & 1) != 0)) &&
         (uVar6 = FUN_023de480(param_1), (uVar6 & 1) != 0)) {
        local_50 = CONCAT44(local_50._4_4_,*(int *)(param_1 + 0x159c));
        if (*(int *)(param_1 + 0x159c) != 2) {
          FUN_023e19a8(param_1,*(long *)(param_1 + 0x68) + 0x278,*(long *)(param_1 + 0x68) + 0x2b4);
          return;
        }
      }
      else {
        uVar6 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar6 & 1) == 0) {
          local_48 = 0;
          local_50 = CONCAT35(local_50._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_50);
        }
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 0x18e5);
      iVar11 = *(int *)(param_1 + 0x18eb);
      uVar4 = *(ushort *)(param_1 + 0x18ef);
      lVar7 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
      local_5c[1] = 0.0;
      puVar2 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_48 = *(undefined4 *)(puVar2 + 0x50);
      local_50 = puVar2[0x4f] & 0xffffffff;
      local_5c[0] = (float)iVar10 * 0.001;
      local_5c[2] = (float)iVar11 * 0.001;
      FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_50,local_5c);
      *(undefined4 *)(puVar2 + 0x4f) = (undefined4)local_50;
      *(undefined4 *)(puVar2 + 0x50) = local_48;
      lVar7 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
      fVar12 = *pfVar9;
      if (*(int *)(param_1 + 0x178) == 0) {
        local_5c[0] = 1.4013e-44;
        local_50 = CONCAT44(local_50._4_4_,10);
        if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
          return;
        }
      }
      iVar10 = (uint)uVar4 * 0x10000;
      plVar3 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x4c8);
      }
      lVar7 = (**(code **)(*plVar3 + 0x148))();
      iVar11 = iVar10 - *(int *)(lVar7 + 4);
      if (0xb60b5e < iVar11 + 0x5b05afU) {
        iVar5 = 0x15555560;
        iVar10 = -0x15555560;
        iVar11 = (int)(fVar12 * (float)iVar11);
        if (iVar11 < 1) {
          iVar5 = -0x5b05b0;
        }
        else {
          iVar10 = 0x5b05b0;
        }
        iVar1 = iVar11;
        if (iVar5 <= iVar11) {
          iVar1 = iVar5;
        }
        if (iVar10 <= iVar11) {
          iVar10 = iVar1;
        }
        iVar10 = iVar10 + *(int *)(lVar7 + 4);
      }
      *(int *)(lVar7 + 4) = iVar10;
    }
  }
  return;
}

