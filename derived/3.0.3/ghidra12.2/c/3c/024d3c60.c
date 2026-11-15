
/* WARNING: Removing unreachable block (ram,0x024d3f00) */

void FUN_024d3c60(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float local_3c;
  float local_38;
  float local_34;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar10 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar10 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar6 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    local_38 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_3c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_34 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar6 + 0x4f,&local_3c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_3c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar5 = (**(code **)(*plVar2 + 0x148))();
      iVar3 = iVar4 - *(int *)(lVar5 + 4);
      if (0xb60b5e < iVar3 + 0x5b05afU) {
        iVar9 = (int)((float)iVar3 * 0.1666667);
        iVar3 = 0x10000000;
        if (iVar9 < 1) {
          iVar3 = -0x5b05b0;
        }
        iVar4 = -0x10000000;
        if (0 < iVar9) {
          iVar4 = 0x5b05b0;
        }
        iVar1 = iVar9;
        if (iVar3 <= iVar9) {
          iVar1 = iVar3;
        }
        if (iVar4 <= iVar9) {
          iVar4 = iVar1;
        }
        iVar4 = iVar4 + *(int *)(lVar5 + 4);
      }
      *(int *)(lVar5 + 4) = iVar4;
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 == 0)) {
      puVar6 = &DAT_05240280;
      goto LAB_024d3ed4;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar6 = &DAT_05240280;
    if (DAT_052413b8 == 0) {
      local_3c = 0.0;
      goto LAB_024d3f04;
    }
  }
  else {
LAB_024d3ed4:
    local_3c = 0.0;
    if (puVar6[0x227] == 0) goto LAB_024d3f04;
  }
  local_3c = (float)(*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
LAB_024d3f04:
  uVar7 = FUN_0073da08(puVar6,local_3c);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar7 & 1) == 0) {
      local_34 = 0.0;
      local_3c = 8.40779e-45;
      local_38 = (float)CONCAT31(local_38._1_3_,1);
      FUN_02374e74(param_1,&local_3c);
    }
  }
  return;
}

