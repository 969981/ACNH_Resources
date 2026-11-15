
/* WARNING: Removing unreachable block (ram,0x02476e18) */

void FUN_02476cb0(long param_1,undefined1 param_2,undefined8 *param_3,byte param_4,byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *(undefined8 *)(param_1 + 0x2068) = param_3[2];
    *(undefined8 *)(param_1 + 0x2060) = uVar3;
    *(undefined8 *)(param_1 + 0x2058) = uVar2;
    uVar2 = param_3[3];
    uVar4 = param_3[4];
    uVar3 = param_3[5];
    *(undefined8 *)(param_1 + 0x2088) = param_3[6];
    *(undefined8 *)(param_1 + 0x2080) = uVar3;
    *(undefined8 *)(param_1 + 0x2078) = uVar4;
    *(undefined8 *)(param_1 + 0x2070) = uVar2;
    uVar2 = param_3[7];
    uVar3 = *(undefined8 *)((long)param_3 + 0x4e);
    uVar4 = param_3[9];
    *(undefined8 *)(param_1 + 0x2098) = param_3[8];
    *(undefined8 *)(param_1 + 0x2090) = uVar2;
    *(undefined8 *)(param_1 + 0x20a0) = uVar4;
    *(undefined8 *)(param_1 + 0x20a6) = uVar3;
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
  *(undefined1 *)(param_1 + 0x198a) = param_2;
  *(byte *)(param_1 + 0x198b) = param_4 & 1;
  *(byte *)(param_1 + 0x198c) = param_5 & 1;
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
  FUN_03ebb160(lVar1,0x2a);
  return;
}

