
undefined4 FUN_00be6348(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined *local_60;
  char *pcStack_58;
  
  puVar5 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar1;
  iVar7 = FUN_0265ced0(0,puVar2,&local_60);
  puVar6 = PTR_DAT_04bb39d8;
  if (iVar7 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar9 = 0;
    uVar3 = puVar8[3];
    uVar10 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    puVar8[2] = uVar3;
    puVar8[3] = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
  }
  uVar10 = (uint)(iVar7 != 0);
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar1;
  iVar7 = FUN_0265ced0(1,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 1;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(2,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 2;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(3,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 3;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(4,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 4;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(5,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 5;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(6,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 6;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(7,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 7;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(8,puVar2,&local_60);
  if (iVar7 != 0) {
    uVar10 = uVar10 + 1;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)uVar10 & 0xffffffff00000000) == 0) {
      uVar9 = 8;
    }
  }
  pcStack_58 = "HasAcquaintanceship";
  local_60 = puVar5 + 0x10;
  iVar7 = FUN_0265ced0(9,puVar2,&local_60);
  if (iVar7 != 0) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    if (((ulong)uVar3 * (ulong)(uVar10 + 1) & 0xffffffff00000000) == 0) {
      uVar9 = 9;
    }
  }
  return uVar9;
}

