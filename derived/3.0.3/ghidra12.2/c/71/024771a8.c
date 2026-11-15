
void FUN_024771a8(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_50;
  float local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x288);
    uVar4 = 0;
    if (uVar1 < 0x149) {
      uVar4 = uVar1;
    }
  }
  FUN_00a74b78(param_1 + 0x1ee8);
  if (0xc < *param_2 - 1U) goto LAB_02477858;
  switch(*param_2) {
  case 1:
    uVar2 = FUN_02372a04(param_1);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar2 & 1) == 0))
    {
      local_48 = 0.0;
      local_50 = CONCAT35(local_50._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_50);
    }
    break;
  case 2:
    FUN_0237432c(param_1,6);
    return;
  case 3:
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined1 *)(param_1 + 0x1983) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = 0x601;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    local_50 = CONCAT44(local_50._4_4_,0x19);
    goto LAB_02477414;
  case 4:
    local_34 = 0;
    uStack_40 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_3c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    uStack_38 = *(undefined4 *)PTR_DAT_04bb4e20;
    local_44 = (uint)*(ushort *)(param_1 + 0x205e) << 0x10;
    local_48 = (float)(int)*(short *)(param_1 + 0x205c) * 0.25;
    local_50 = CONCAT44((float)(int)*(short *)(param_1 + 0x205a) * 0.25,
                        (float)(int)*(short *)(param_1 + 0x2058) * 0.25);
    FUN_024676ec(param_1,&local_50);
    break;
  case 5:
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    iVar5 = (int)(*(float *)(param_1 + 0xb50) * 4.0);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0xb5a);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar5;
    *(int *)(param_1 + 0x1982) = (int)(*(float *)(param_1 + 0xb4c) * 999.99994);
    *(int *)(param_1 + 0x1988) = (int)(*(float *)(param_1 + 0xb54) * 999.99994);
    *(undefined1 *)(param_1 + 0x1996) = *(undefined1 *)(param_1 + 0xb5c);
    *(int *)(param_1 + 0x198c) = (int)(*(float *)(param_1 + 0xb60) * 999.99994);
    iVar5 = (int)(*(float *)(param_1 + 0xb64) * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x1990) = (short)iVar5;
    *(int *)(param_1 + 0x1992) = (int)(*(float *)(param_1 + 0xb68) * 999.99994);
    *(undefined1 *)(param_1 + 0x1997) = *(undefined1 *)(param_1 + 0xb6c);
    local_50 = CONCAT44(local_50._4_4_,0x6e);
LAB_02477414:
    if ((uint)local_50 < 0x149) {
LAB_024777d8:
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
LAB_0247783c:
      lVar3 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar3 = *(long *)(param_1 + 0x70) + 0x278;
      }
LAB_02477920:
      FUN_03ebb160(lVar3,local_50 & 0xffffffff);
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = *(undefined8 *)(param_1 + 0x2090);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c0) = *(undefined8 *)(param_1 + 0x2098);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19c8) = *(undefined8 *)(param_1 + 0x20a0);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x2070);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x2078);
    *(undefined8 *)(param_1 + 0x19a8) = *(undefined8 *)(param_1 + 0x2080);
    *(undefined8 *)(param_1 + 0x19b0) = *(undefined8 *)(param_1 + 0x2088);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x2058);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x2060);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x2068);
    uVar4 = 0x65;
    goto LAB_024776c4;
  case 7:
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = *(undefined8 *)(param_1 + 0x2090);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c0) = *(undefined8 *)(param_1 + 0x2098);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19c8) = *(undefined8 *)(param_1 + 0x20a0);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x2070);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x2078);
    *(undefined8 *)(param_1 + 0x19a8) = *(undefined8 *)(param_1 + 0x2080);
    *(undefined8 *)(param_1 + 0x19b0) = *(undefined8 *)(param_1 + 0x2088);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x2058);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x2060);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x2068);
    uVar4 = 200;
LAB_024776c4:
    *(undefined8 *)(param_1 + 0x19ce) = *(undefined8 *)(param_1 + 0x20a6);
LAB_024776cc:
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    if (0x148 < uVar4) {
      return;
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
    goto LAB_0247783c;
  case 8:
    uVar2 = FUN_023df5e4(param_1,1);
    if ((uVar2 & 1) == 0) {
      local_48 = 0.0;
      local_44 = local_44 & 0xffffff00;
      local_50 = 0x1000000000006;
      FUN_02374564(param_1,&local_50);
    }
    break;
  case 9:
    uVar4 = 7;
    goto LAB_02477858;
  case 10:
    uVar4 = *(int *)(param_1 + 0x1810) - 2;
    if (uVar4 < 6) {
      uVar4 = *(uint *)(&DAT_0417a9e0 + (long)(int)uVar4 * 4);
    }
    else {
      uVar4 = 5;
    }
LAB_02477858:
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    if (0x148 < uVar4) {
      return;
    }
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
    lVar3 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar3 = *(long *)(param_1 + 0x70) + 0x278;
    }
    goto LAB_02477920;
  case 0xb:
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x2060);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x2070);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x2058);
    uVar6 = *(undefined8 *)(param_1 + 0x2068);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19ae) = 0;
    *(undefined8 *)(param_1 + 0x19b6) = 0;
    *(undefined8 *)(param_1 + 0x19be) = 0;
    *(undefined8 *)(param_1 + 0x19c6) = 0;
    *(undefined8 *)(param_1 + 0x19ce) = 0;
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x207e);
    uVar4 = 0x127;
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x2078);
    goto LAB_024777c4;
  case 0xc:
    *(undefined8 *)(param_1 + 0x19ab) = 0;
    *(undefined8 *)(param_1 + 0x19b3) = 0;
    *(undefined8 *)(param_1 + 0x19bb) = 0;
    *(undefined8 *)(param_1 + 0x19c3) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19cb) = 0;
    *(undefined8 *)(param_1 + 0x19d2) = 0;
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x2070);
    *(undefined4 *)(param_1 + 0x19a7) = *(undefined4 *)(param_1 + 0x207f);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x2078);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x2058);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x2060);
    uVar4 = 0x110;
    if (*(char *)(param_1 + 0x19a2) != '\0') {
      uVar4 = 0x8a;
    }
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x2068);
    goto LAB_024776cc;
  case 0xd:
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x2060);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x2070);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x2058);
    uVar6 = *(undefined8 *)(param_1 + 0x2068);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19ab) = 0;
    *(undefined8 *)(param_1 + 0x19b3) = 0;
    *(undefined8 *)(param_1 + 0x19bb) = 0;
    *(undefined8 *)(param_1 + 0x19c3) = 0;
    *(undefined8 *)(param_1 + 0x19cb) = 0;
    *(undefined8 *)(param_1 + 0x19d2) = 0;
    *(undefined4 *)(param_1 + 0x19a7) = *(undefined4 *)(param_1 + 0x207f);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x2078);
    uVar4 = 0x112;
LAB_024777c4:
    *(undefined8 *)(param_1 + 0x1990) = uVar6;
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    if (0x148 < uVar4) {
      return;
    }
    goto LAB_024777d8;
  }
  return;
}

