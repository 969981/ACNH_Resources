
void FUN_00b692cc(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  
  switch(param_2) {
  default:
    puVar5 = (undefined4 *)&DAT_05586008;
    break;
  case 1:
    puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar4[3];
    uVar1 = *puVar4 ^ *puVar4 << 0xb;
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    puVar4[2] = uVar3;
    puVar4[3] = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
    FUN_01b8d970(param_1,param_5,param_6,param_4,param_3);
    return;
  case 2:
  case 3:
    puVar5 = &DAT_05405f5c;
    break;
  case 4:
    *param_1 = 0xfffe;
    FUN_0277d4ac(param_1);
    FUN_00b47010(param_1,0xe,PTR_DAT_04bb32e0);
    return;
  }
  uVar2 = puVar5[1];
  *(undefined4 *)param_1 = *puVar5;
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  return;
}

