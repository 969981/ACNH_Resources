
/* WARNING: Removing unreachable block (ram,0x024d3000) */

void FUN_024d2d60(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
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
    fVar11 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar11 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar12 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar6 + 0x2ec) = uVar12;
    *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_40 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_38 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar6 + 0x4f,&local_40);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_34 = 10;
      local_40 = CONCAT44(local_40._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024d2fb4;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar4 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar10 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar10 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar10) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar3 <= iVar10) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar10) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar4;
  }
LAB_024d2fb4:
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 == 0)) {
      puVar6 = &DAT_05240280;
      goto LAB_024d2fd4;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar6 = &DAT_05240280;
    if (DAT_052413b8 == 0) {
      uVar9 = 0;
      goto LAB_024d3004;
    }
  }
  else {
LAB_024d2fd4:
    uVar9 = 0;
    if (puVar6[0x227] == 0) goto LAB_024d3004;
  }
  local_40 = CONCAT44(local_40._4_4_,1);
  uVar9 = *(uint *)(puVar6 + 0x2d3) >> 1 & 1;
LAB_024d3004:
  local_40 = CONCAT44(local_40._4_4_,uVar9);
  uVar7 = FUN_0073da08(puVar6,uVar9);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_40 = 0xfffe;
    FUN_0277d4ac(&local_40);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    local_34 = 0x124;
    lVar8 = *(long *)(param_1 + 0x70);
    uVar9 = 0;
    lVar5 = 0;
    if (lVar8 != 0) {
      uVar9 = 0;
      if (*(uint *)(lVar8 + 0x280) < 0x149) {
        uVar9 = *(uint *)(lVar8 + 0x280);
      }
      lVar5 = lVar8 + 0x278;
    }
    if (uVar9 != 0x124) {
      local_40 = CONCAT44(local_40._4_4_,0x124);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      FUN_03ebb160(lVar5,0x124);
    }
  }
  return;
}

