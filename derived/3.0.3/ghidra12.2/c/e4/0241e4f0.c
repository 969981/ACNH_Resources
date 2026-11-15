
bool FUN_0241e4f0(long param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined2 extraout_var;
  long lVar5;
  long *plVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  float local_5c;
  float local_58;
  float local_54;
  
  local_5c = 4.37205e-43;
  uVar8 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar10 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar8 = 0;
    if (uVar10 < 0x149) {
      uVar8 = uVar10;
    }
  }
  if (uVar8 == 0x138) goto LAB_0241e88c;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  lVar5 = FUN_00a77090(param_1 + 0x1ee8);
  if ((lVar5 != 0) && (-1 < (int)DAT_04c47dc0)) {
    uVar9 = 0;
    puVar11 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar1 = puVar11;
      if (999 < uVar9) {
        puVar1 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == *(long *)(lVar5 + 0x10))) {
        if ((uint)uVar9 != 0xffffffff) {
          if (999 < (uint)uVar9) {
            puVar11 = (uint *)PTR_DAT_04bb6258;
          }
          uVar10 = *puVar11;
          goto LAB_0241e61c;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar9);
  }
  uVar10 = 0;
LAB_0241e61c:
  if (DAT_04c93e08 == 0) {
LAB_0241e78c:
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar12 = *(float *)((long)puVar2 + 0x27c);
    fVar13 = *(float *)(puVar2 + 0x50);
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(puVar2 + 0x4f) * 999.99994);
    iVar4 = (int)(fVar12 * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar4;
    *(int *)(param_1 + 0x1986) = (int)(fVar13 * 999.99994);
    uVar7 = *(undefined2 *)((long)puVar2 + 0x2b6);
  }
  else {
    if ((((uVar10 == 0) ||
         (lVar5 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                           (ulong)(uVar10 >> 0x14) * 8), lVar5 == 0)) ||
        ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar5 + 0x230) != uVar10)) {
      lVar5 = 0;
    }
    if (*(int *)(DAT_04c93e08 + 0x288) != 1 && *(int *)(DAT_04c93e08 + 0x288) != -1) {
LAB_0241e6b8:
      uVar10 = 0;
      if (lVar5 != 0) goto LAB_0241e6cc;
      goto LAB_0241e78c;
    }
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar3 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar3 + 0x5e8)) goto LAB_0241e6b8;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar3 + 0x5e8) & 0x1f) & 1;
    }
    if (lVar5 == 0) goto LAB_0241e78c;
LAB_0241e6cc:
    uVar10 = uVar10 ^ 1;
    if (*(int *)(lVar5 + 0x150) != 1) {
      uVar10 = 1;
    }
    if (uVar10 != 0) goto LAB_0241e78c;
    lVar5 = *(long *)(lVar5 + 0x68);
    local_5c = *(float *)(lVar5 + 0x278) + 0.0;
    local_58 = *(float *)(lVar5 + 0x27c) + 0.0;
    local_54 = *(float *)(lVar5 + 0x280) + 10.0;
    local_58 = (float)FUN_016e026c(0,&local_5c,0,0);
    *(int *)(param_1 + 0x1980) = (int)(local_5c * 999.99994);
    iVar4 = (int)(local_58 * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar4;
    *(int *)(param_1 + 0x1986) = (int)(local_54 * 999.99994);
    FUN_006f0400(*(float *)(lVar5 + 0x278) - local_5c,*(float *)(lVar5 + 0x280) - local_54);
    uVar7 = extraout_var;
  }
  *(undefined2 *)(param_1 + 0x198a) = uVar7;
  *(undefined1 *)(param_1 + 0x1995) = 0;
  local_5c = 4.37205e-43;
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
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,0x138);
LAB_0241e88c:
  return uVar8 != 0x138;
}

