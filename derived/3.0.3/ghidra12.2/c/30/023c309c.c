
void FUN_023c309c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar1 + 0x424) = 2;
  iVar2 = FUN_01392d64(lVar1 + 0x4c8);
  *(int *)(lVar1 + 0x420) = iVar2;
  *(int *)(lVar1 + 0x4c0) = *(int *)(lVar1 + 0x4c0) + 1;
  if (iVar2 == 1) {
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
    iVar2 = (int)((float)(int)*(short *)(param_1 + 0x190c) * 0.25 * 4.0);
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *(short *)(param_1 + 0x198c) = (short)iVar2;
    lVar5 = *(long *)(param_1 + 0x70);
    *(int *)(param_1 + 0x198e) = (int)((float)*(int *)(param_1 + 0x190e) * 0.001 * 999.99994);
    *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
    uVar4 = 0;
    lVar1 = 0;
    if (lVar5 != 0) {
      uVar4 = 0;
      if (*(uint *)(lVar5 + 0x280) < 0x149) {
        uVar4 = *(uint *)(lVar5 + 0x280);
      }
      lVar1 = lVar5 + 0x278;
    }
    if (uVar4 != 0xc5) {
      local_40 = CONCAT44(local_40._4_4_,0xc5);
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
      FUN_03ebb160(lVar1,0xc5);
    }
  }
  else if ((iVar2 != 3) &&
          (uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar3 & 1) == 0
          )) {
    local_38 = 0;
    local_40 = CONCAT35(local_40._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_40);
  }
  return;
}

