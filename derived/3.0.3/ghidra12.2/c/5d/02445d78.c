
void FUN_02445d78(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb27c0;
  iVar5 = *(int *)(param_1 + 0x178);
  if (iVar5 != 0) goto joined_r0x02446000;
  if ((DAT_0546aef0 == 0) || (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 == 0)) {
LAB_02445eac:
    local_40 = (float)FUN_00a74b78(param_1 + 0x1ee8);
    if (local_40 == 2.66247e-44) {
      uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar8 & 1) == 0) {
        local_38 = 0.0;
        local_40 = 8.40779e-45;
        local_3c = (float)CONCAT31(local_3c._1_3_,1);
        FUN_02374e74(param_1,&local_40);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined2 *)(param_1 + 0x198c) = 0x101;
      *(undefined1 *)(param_1 + 0x198e) = 6;
      local_40 = 2.10195e-44;
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
      lVar9 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar9 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar9,0xf);
    }
  }
  else {
    plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                        ((ulong)(DAT_0546aef0 >> 0x11) & 0x7ff8));
    if ((plVar11 == (long *)0x0) ||
       (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != DAT_0546aef0))))
    {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar4;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02445e54;
        uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar11 != (long *)0x0) goto LAB_02445e68;
      goto LAB_02445eac;
    }
LAB_02445e54:
    uVar12 = 0;
    if (plVar11 == (long *)0x0) goto LAB_02445eac;
LAB_02445e68:
    if (((*PTR_DAT_04bb8118 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb8118), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb8110 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8118);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb8110);
    if (((uVar12 & uVar6) != 1) || (*(int *)(plVar11[0xe] + 0x280) == 0)) goto LAB_02445eac;
  }
  iVar5 = *(int *)(param_1 + 0x178);
joined_r0x02446000:
  if (iVar5 == 1) {
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
    iVar5 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar11 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar11 + 0x148))();
    iVar3 = iVar5 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar10 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar10 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar5 = -0x10000000;
      if (0 < iVar10) {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar3 <= iVar10) {
        iVar1 = iVar3;
      }
      if (iVar5 <= iVar10) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar5;
  }
  return;
}

