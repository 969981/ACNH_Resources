
/* WARNING: Removing unreachable block (ram,0x023de938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023de7c4(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined2 uVar3;
  int iVar4;
  
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
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x68) + 0x278);
  if (*(int *)(param_1 + 0x1810) != 7) {
    puVar1 = param_2;
  }
  *(undefined4 *)(param_1 + 0x1980) = *puVar1;
  iVar4 = (int)((float)puVar1[1] * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar4;
  *(undefined4 *)(param_1 + 0x1986) = puVar1[2];
  uVar3 = *(undefined2 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 0x198c) = 0;
  *(undefined2 *)(param_1 + 0x198a) = uVar3;
  *(undefined8 *)(param_1 + 0x1995) = _DAT_05586008;
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
  lVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar2 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar2,0x47);
  return;
}

