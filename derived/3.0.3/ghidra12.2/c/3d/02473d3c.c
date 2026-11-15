
void FUN_02473d3c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  float local_4c;
  float local_48;
  float local_44;
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  iVar5 = *(int *)(param_1 + 0x178);
  if (iVar5 == 1) {
    local_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_4c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_4c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar9 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar3 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x4c8);
      }
      lVar6 = (**(code **)(*plVar3 + 0x148))();
      iVar4 = iVar9 - *(int *)(lVar6 + 4);
      if (0xb60b5e < iVar4 + 0x5b05afU) {
        iVar8 = (int)((float)iVar4 * 0.1666667);
        iVar4 = 0x10000000;
        if (iVar8 < 1) {
          iVar4 = -0x5b05b0;
        }
        iVar9 = -0x10000000;
        if (0 < iVar8) {
          iVar9 = 0x5b05b0;
        }
        iVar1 = iVar8;
        if (iVar4 <= iVar8) {
          iVar1 = iVar4;
        }
        if (iVar9 <= iVar8) {
          iVar9 = iVar1;
        }
        iVar9 = iVar9 + *(int *)(lVar6 + 4);
      }
      *(int *)(lVar6 + 4) = iVar9;
    }
  }
  uVar7 = FUN_0170a6d0(puVar10,0);
  if ((uVar7 & 1) != 0) {
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar7 & 1) == 0) {
      local_44 = 0.0;
      local_4c = 8.40779e-45;
      local_48 = (float)CONCAT31(local_48._1_3_,1);
      FUN_02374e74(param_1,&local_4c);
    }
  }
  return;
}

