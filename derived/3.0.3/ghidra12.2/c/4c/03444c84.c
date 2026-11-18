
void FUN_03444c84(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_04b2aa78;
  param_1[0x1f8] = param_1 + 0x1f9;
  param_1[0x1f7] = 0x1f400000000;
  param_1[0x3ed] = 0x1f400000000;
  param_1[0x3ee] = param_1 + 0x3ef;
  *(undefined1 *)(param_1 + 0x5e4) = 0;
  param_1[1] = 0x1f400000000;
  param_1[2] = param_1 + 3;
  param_1[0x5e3] = 0;
  FUN_03444de0(param_1 + 0x5e5,500);
  puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar3 = puVar5[3];
  uVar1 = *puVar5 ^ *puVar5 << 0xb;
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar2 = uVar1 ^ uVar3;
  uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar1;
  uVar1 = (uVar1 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x5e8) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x2f44) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x5e9) = uVar1;
  *(uint *)((long)param_1 + 0x2f4c) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0xfb0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar6 + 0xa8);
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0xfb0,8);
  }
  *puVar7 = 0x1f400000000;
  puVar7[1] = puVar7 + 2;
  param_1[0x5e3] = puVar7;
  return;
}

