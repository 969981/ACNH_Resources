
void FUN_024c9ff4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  if ((0x77 < *(uint *)(param_1 + 0x1c04)) &&
     (uVar5 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar5 & 1) == 0)) {
    local_38 = 0.0;
    local_40 = 8.40779e-45;
    local_3c = (float)CONCAT31(local_3c._1_3_,1);
    FUN_02374e74(param_1,&local_40);
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    local_3c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_40 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_38 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_40);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_34 = 10;
      local_40 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar3 + 0x148))();
    iVar4 = iVar8 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar4 + 0x5b05afU) {
      iVar7 = (int)((float)iVar4 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar7 < 1) {
        iVar4 = -0x5b05b0;
      }
      iVar8 = -0x10000000;
      if (0 < iVar7) {
        iVar8 = 0x5b05b0;
      }
      iVar1 = iVar7;
      if (iVar4 <= iVar7) {
        iVar1 = iVar4;
      }
      if (iVar8 <= iVar7) {
        iVar8 = iVar1;
      }
      iVar8 = iVar8 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar8;
  }
  return;
}

