
bool FUN_023fb380(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x178);
  if ((iVar2 != 0) || ((param_2 & 1) != 0)) goto LAB_023fb6c8;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  lVar5 = *(long *)(param_1 + 0x68);
  *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
  iVar7 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
  if (0x7ffe < iVar7) {
    iVar7 = 0x7fff;
  }
  if (iVar7 < -0x7fff) {
    iVar7 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar7;
  *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar5 + 0x280) * 999.99994);
  lVar5 = FUN_00a77090(param_1 + 0x1ee8);
  if ((lVar5 != 0) && (-1 < (int)DAT_04c47dc0)) {
    uVar6 = 0;
    puVar9 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar1 = puVar9;
      if (999 < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == *(long *)(lVar5 + 0x10))) {
        if ((uint)uVar6 != 0xffffffff) {
          if (999 < (uint)uVar6) {
            puVar9 = (uint *)PTR_DAT_04bb6258;
          }
          uVar8 = *puVar9;
          goto LAB_023fb4d8;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar6);
  }
  uVar8 = 0;
LAB_023fb4d8:
  if (DAT_04c93e08 != 0) {
    if ((((uVar8 == 0) ||
         (lVar5 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                           (ulong)(uVar8 >> 0x14) * 8), lVar5 == 0)) ||
        ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar5 + 0x230) != uVar8)) {
      lVar5 = 0;
    }
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar3 = DAT_04c93e08;
      iVar7 = (**(code **)(*plVar4 + 0x60))();
      if (iVar7 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar3 + 0x5e8)) goto LAB_023fb578;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar3 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_023fb578:
      uVar8 = 0;
    }
    if (lVar5 != 0) {
      uVar8 = uVar8 ^ 1;
      if (*(int *)(lVar5 + 0x150) != 1) {
        uVar8 = 1;
      }
      if (uVar8 == 0) {
        iVar7 = FUN_006f0400(*(float *)(*(long *)(lVar5 + 0x68) + 0x278) -
                             *(float *)(param_1 + 0x1f50),
                             *(float *)(*(long *)(lVar5 + 0x68) + 0x280) -
                             *(float *)(param_1 + 0x1f58));
        *(short *)(param_1 + 0x1980) =
             (short)((ulong)(long)((float)(iVar7 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0) >> 0x10
                    );
      }
    }
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x1693a871) ||
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x57d4aeba)) {
    *(undefined2 *)(param_1 + 0x1980) = 0x8000;
  }
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
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,0xd0);
LAB_023fb6c8:
  return iVar2 == 0;
}

