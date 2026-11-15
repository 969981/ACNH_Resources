
bool FUN_02372704(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 < 0x149) {
    if (param_3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    }
    else {
      uVar2 = *param_3;
      uVar4 = param_3[1];
      uVar3 = param_3[2];
      *(undefined8 *)(param_1 + 0x1878) = param_3[3];
      *(undefined8 *)(param_1 + 0x1870) = uVar3;
      *(undefined8 *)(param_1 + 0x1868) = uVar4;
      *(undefined8 *)(param_1 + 0x1860) = uVar2;
      uVar2 = param_3[4];
      uVar4 = param_3[5];
      uVar3 = param_3[6];
      *(undefined8 *)(param_1 + 0x1898) = param_3[7];
      *(undefined8 *)(param_1 + 0x1890) = uVar3;
      *(undefined8 *)(param_1 + 0x1888) = uVar4;
      *(undefined8 *)(param_1 + 0x1880) = uVar2;
      uVar2 = param_3[8];
      uVar4 = param_3[9];
      uVar3 = param_3[10];
      *(undefined8 *)(param_1 + 0x18b8) = param_3[0xb];
      *(undefined8 *)(param_1 + 0x18b0) = uVar3;
      *(undefined8 *)(param_1 + 0x18a8) = uVar4;
      *(undefined8 *)(param_1 + 0x18a0) = uVar2;
      uVar2 = param_3[0xc];
      uVar3 = param_3[0xd];
      uVar4 = param_3[0xe];
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_3 + 0xf);
      *(undefined8 *)(param_1 + 0x18d0) = uVar4;
      *(undefined8 *)(param_1 + 0x18c8) = uVar3;
      *(undefined8 *)(param_1 + 0x18c0) = uVar2;
    }
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,param_2);
  }
  return param_2 < 0x149;
}

