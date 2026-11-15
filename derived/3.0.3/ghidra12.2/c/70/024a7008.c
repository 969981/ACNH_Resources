
void FUN_024a7008(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float local_4c;
  float local_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    local_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_4c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_4c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar9 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar2 + 0x148))();
      iVar4 = iVar9 - *(int *)(lVar5 + 4);
      if (0xb60b5e < iVar4 + 0x5b05afU) {
        iVar7 = (int)((float)iVar4 * 0.1666667);
        iVar4 = 0x10000000;
        if (iVar7 < 1) {
          iVar4 = -0x5b05b0;
        }
        iVar9 = -0x10000000;
        if (0 < iVar7) {
          iVar9 = 0x5b05b0;
        }
        iVar1 = iVar7;
        if (iVar4 <= iVar7) {
          iVar1 = iVar4;
        }
        if (iVar9 <= iVar7) {
          iVar9 = iVar1;
        }
        iVar9 = iVar9 + *(int *)(lVar5 + 4);
      }
      *(int *)(lVar5 + 4) = iVar9;
    }
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar9 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar9;
    fVar10 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar10 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  if (((*(int *)(param_1 + 0x178) == 0) && (4 < *(uint *)(param_1 + 0x1c04))) &&
     (uVar6 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar6 & 1) == 0)) {
    local_44 = 0.0;
    local_4c = 8.40779e-45;
    local_48 = (float)CONCAT31(local_48._1_3_,1);
    FUN_02374e74(param_1,&local_4c);
  }
  return;
}

