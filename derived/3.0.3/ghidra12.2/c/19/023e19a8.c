
/* WARNING: Removing unreachable block (ram,0x023e1b30) */

void FUN_023e19a8(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined4 *)(param_1 + 0x1980) = *param_2;
  iVar4 = (int)((float)param_2[1] * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar4;
  *(undefined4 *)(param_1 + 0x1986) = param_2[2];
  *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(param_3 + 2);
  if ((*(long *)(param_1 + 0x70) == 0) ||
     (uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280), 0x148 < uVar3)) {
    *(undefined1 *)(param_1 + 0x198c) = 0;
  }
  else {
    *(bool *)(param_1 + 0x198c) = uVar3 == 0x47;
    if ((uVar3 == 0x47) && (*(byte *)(param_1 + 0x1ee8) < 8)) {
      uVar3 = FUN_02582d8c(param_1 + 0x1ee8,1);
      puVar2 = PTR_DAT_04bb4fb8;
      if (((uVar3 < 8) &&
          (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
           (uVar3 = FUN_02582d8c(param_1 + 0x1ee8,1), uVar3 < 8)))) &&
         (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
        if ((*(char *)(*(long *)PTR_DAT_04bb47c8 + 0x1a0) == '\0') ||
           (uVar5 = *(ulong *)(*(long *)PTR_DAT_04bb47c8 + 0x188), uVar5 == 0xffffffffffffffff)) {
          uVar5 = (ulong)*(uint *)(DAT_04cac4e0 + 0x508);
        }
        *(ulong *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x4e8) = uVar5;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1f50) = *param_2;
  *(undefined4 *)(param_1 + 0x1f54) = param_2[1];
  *(undefined4 *)(param_1 + 0x1f58) = param_2[2];
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
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar1,0x48);
  return;
}

