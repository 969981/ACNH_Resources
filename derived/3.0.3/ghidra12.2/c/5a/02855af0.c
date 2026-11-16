
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_02855af0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar2 = DAT_05582b70;
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      puVar5 = puVar1 + 3;
      uVar3 = *puVar5;
      puVar1[2] = uVar3;
    }
    else {
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar2 = uVar2 ^ uVar2 << 0xb;
      puVar5 = &DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      uVar3 = DAT_05582b7c;
    }
    uVar4 = 0;
    uVar6 = 1;
    *puVar5 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    uVar3 = *param_1;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    uVar3 = *param_1;
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 1;
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 2;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 3;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 4;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 5;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 6;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 7;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    uVar6 = uVar6 + 1;
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)uVar6 & 0xffffffff00000000) == 0) {
      uVar4 = 8;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    if (DAT_055a345c == '\0') {
      puVar1 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar1 ^ *puVar1 << 0xb;
      uVar3 = puVar1[3];
      *puVar1 = puVar1[1];
      puVar1[1] = puVar1[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar1[2] = uVar3;
      puVar1[3] = uVar2;
    }
    else {
      uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar2;
    }
    if (((ulong)uVar2 * (ulong)(uVar6 + 1) & 0xffffffff00000000) == 0) {
      uVar4 = 9;
    }
  }
  return uVar4;
}

