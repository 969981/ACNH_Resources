
void FUN_023f6d3c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_34;
  
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
  *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_1 + 0x1924) == '\0') {
      lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(char *)(param_1 + 0x1922) == '\0') {
        *(undefined4 *)(lVar3 + 0x424) = 2;
        local_34 = FUN_01392d64(lVar3 + 0x4c8);
        *(int *)(lVar3 + 0x420) = local_34;
        *(int *)(lVar3 + 0x4c0) = *(int *)(lVar3 + 0x4c0) + 1;
      }
      else {
        local_34 = FUN_01392d64(lVar3 + 0xb0);
      }
    }
    else {
      local_34 = 1;
    }
    if (local_34 == 1) {
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      iVar5 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
      iVar4 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar5;
      if (0x7ffe < iVar4) {
        iVar4 = 0x7fff;
      }
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
      if (iVar4 < -0x7fff) {
        iVar4 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar4;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x198c) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1992) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1996) = (int)((float)*(int *)(param_1 + 0x1916) * 0.001 * 999.99994);
      iVar5 = (int)((float)(int)*(short *)(param_1 + 0x191a) * 0.25 * 4.0);
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      *(short *)(param_1 + 0x199a) = (short)iVar5;
      *(int *)(param_1 + 0x199c) = (int)((float)*(int *)(param_1 + 0x191c) * 0.001 * 999.99994);
      *(bool *)(param_1 + 0x19a0) = *(char *)(param_1 + 0x1920) != '\0';
      *(undefined1 *)(param_1 + 0x19a1) = *(undefined1 *)(param_1 + 0x1921);
      *(bool *)(param_1 + 0x19a2) = *(char *)(param_1 + 0x1922) != '\0';
      *(bool *)(param_1 + 0x19a4) = *(char *)(param_1 + 0x1924) != '\0';
      *(undefined4 *)(param_1 + 0x19a8) = *(undefined4 *)(param_1 + 0x1928);
      *(undefined4 *)(param_1 + 0x19ac) = *(undefined4 *)(param_1 + 0x192c);
      *(bool *)(param_1 + 0x19a3) = *(char *)(param_1 + 0x1923) != '\0';
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
      lVar3 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      uVar6 = 0x6a;
    }
    else {
      if (local_34 == 3) {
        return;
      }
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1916) * 0.001 * 999.99994);
      iVar5 = (int)((float)(int)*(short *)(param_1 + 0x191a) * 0.25 * 4.0);
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar5;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x191c) * 0.001 * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
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
      lVar3 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      uVar6 = 0x6b;
    }
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + 0x278;
    }
    FUN_03ebb160(lVar2,uVar6);
  }
  return;
}

