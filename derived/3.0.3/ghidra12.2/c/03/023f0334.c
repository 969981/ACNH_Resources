
void FUN_023f0334(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
  *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(char *)(param_1 + 0x1921) == '\0') {
      *(undefined4 *)(lVar5 + 0x424) = 2;
      iVar3 = FUN_01392d64(lVar5 + 0x4c8);
      *(int *)(lVar5 + 0x420) = iVar3;
      *(int *)(lVar5 + 0x4c0) = *(int *)(lVar5 + 0x4c0) + 1;
    }
    else {
      iVar3 = FUN_01392d64(lVar5 + 0xb0);
    }
    if (iVar3 == 1) {
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
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      iVar3 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
      iVar4 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar3;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
      if (0x7ffe < iVar4) {
        iVar4 = 0x7fff;
      }
      if (iVar4 < -0x7fff) {
        iVar4 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar4;
      *(int *)(param_1 + 0x198c) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1992) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1996) = (int)((float)*(int *)(param_1 + 0x1916) * 0.001 * 999.99994);
      iVar3 = (int)((float)(int)*(short *)(param_1 + 0x191a) * 0.25 * 4.0);
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x199a) = (short)iVar3;
      *(int *)(param_1 + 0x199c) = (int)((float)*(int *)(param_1 + 0x191c) * 0.001 * 999.99994);
      *(undefined1 *)(param_1 + 0x19a0) = *(undefined1 *)(param_1 + 0x1920);
      *(bool *)(param_1 + 0x19a1) = *(char *)(param_1 + 0x1921) != '\0';
      *(undefined4 *)(param_1 + 0x19a4) = *(undefined4 *)(param_1 + 0x1924);
      *(undefined4 *)(param_1 + 0x19a8) = *(undefined4 *)(param_1 + 0x1928);
      *(bool *)(param_1 + 0x19a2) = *(char *)(param_1 + 0x1922) != '\0';
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
      lVar5 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      uVar6 = 0x76;
    }
    else {
      if (iVar3 == 3) {
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
      iVar3 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar3;
      *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar5 + 0x280) * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(lVar5 + 0x2b6);
      *(undefined1 *)(param_1 + 0x198c) = *(undefined1 *)(param_1 + 0x1920);
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
      lVar5 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      uVar6 = 0x73;
    }
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + 0x278;
    }
    FUN_03ebb160(lVar2,uVar6);
  }
  return;
}

