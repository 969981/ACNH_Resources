
undefined8 FUN_02090b40(undefined8 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Museum2Built";
  uVar3 = FUN_0273f0a0(&local_60);
  if (((uVar3 & 1) != 0) && (lVar6 = *(long *)PTR_DAT_04bb4828, lVar6 != 0)) {
    iVar5 = 0x244db4da;
    uVar3 = FUN_02091640(0xdf6636fe);
    if (((uVar3 & 1) == 0) &&
       ((uVar3 = FUN_02091764(0xdf6636fe,param_4), (uVar3 & 1) == 0 &&
        (uVar3 = FUN_01c27a50(lVar6,0xdf6636fe), (uVar3 & 1) != 0)))) {
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar8 = 1;
      uVar2 = puVar4[3];
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      iVar5 = -0x2099c902;
    }
    else {
      uVar8 = 0;
    }
    uVar3 = FUN_02091640(0x6148bcad);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0x6148bcad,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0x6148bcad), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = 0x6148bcad;
      }
    }
    uVar3 = FUN_02091640(0xfe96ade4);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0xfe96ade4,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0xfe96ade4), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = -0x169521c;
      }
    }
    uVar3 = FUN_02091640(0x3fce6459);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0x3fce6459,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0x3fce6459), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = 0x3fce6459;
      }
    }
    uVar3 = FUN_02091640(0x3b3bf38a);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0x3b3bf38a,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0x3b3bf38a), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = 0x3b3bf38a;
      }
    }
    uVar3 = FUN_02091640(0xea021025);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0xea021025,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0xea021025), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = -0x15fdefdb;
      }
    }
    uVar3 = FUN_02091640(0x17f77b87);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0x17f77b87,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0x17f77b87), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = 0x17f77b87;
      }
    }
    uVar3 = FUN_02091640(0xf19cdbad);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0xf19cdbad,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0xf19cdbad), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = -0xe632453;
      }
    }
    uVar3 = FUN_02091640(0xf7c314c3);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0xf7c314c3,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0xf7c314c3), (uVar3 & 1) != 0)) {
      uVar8 = uVar8 + 1;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if (((ulong)uVar1 * (ulong)uVar8 & 0xffffffff00000000) == 0) {
        iVar5 = -0x83ceb3d;
      }
    }
    uVar3 = FUN_02091640(0xb8855020);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_02091764(0xb8855020,param_4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_01c27a50(lVar6,0xb8855020), (uVar3 & 1) != 0)) {
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      iVar7 = -0x477aafe0;
      if (((ulong)uVar1 * (ulong)(uVar8 + 1) & 0xffffffff00000000) == 0) goto LAB_02091080;
    }
    iVar7 = iVar5;
    if (iVar5 != 0x244db4da) {
LAB_02091080:
      *param_2 = iVar7;
      *param_3 = 2;
      return 1;
    }
  }
  return 0;
}

