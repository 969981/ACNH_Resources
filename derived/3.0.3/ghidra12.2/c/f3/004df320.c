
void FUN_004df320(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_58;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04868d60;
  param_1[1] = 0xffffffff;
  param_1[6] = 0x8000000000000000;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  FUN_0043d3a0(param_1 + 7);
  param_1[9] = 0;
  param_1[10] = 0xffffffff00000000;
  puVar2 = (undefined8 *)FUN_00438810(0x18);
  FUN_0043dcf0();
  puVar2[2] = param_1;
  *puVar2 = &PTR_FUN_04868dc8;
  param_1[0xb] = puVar2;
  puVar2 = (undefined8 *)FUN_00438810(0x18);
  FUN_0043dcf0();
  puVar2[2] = param_1;
  *puVar2 = &PTR_FUN_04868e68;
  param_1[0xc] = puVar2;
  puVar1 = PTR_DAT_048607b8;
  FUN_004c4c40(param_1 + 0xd,param_3,param_2,PTR_DAT_048607b8,param_1[0xb],param_1[0xb],puVar2,
               param_1 + 0x3b,0);
  FUN_00464a70(param_1 + 0x3b,param_1 + 0xd);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x8000000000000000;
  param_1[0x40] = param_3;
  param_1[0x41] = 0;
  FUN_004866c0(param_1 + 0x42);
  param_1[0x45] = 0;
  param_1[0x46] = 0x8000000000000000;
  param_1[0x42] = &PTR_FUN_04868f00;
  param_1[0x47] = 0;
  param_1[0x48] = 0x8000000000000000;
  FUN_004547b0(param_1 + 0x49,puVar1,0x4000);
  puVar2 = param_1 + 0x5b;
  param_1[0x54] = 0;
  param_1[0x55] = 0x8000000000000000;
  param_1[0x56] = 0;
  param_1[0x57] = 0x8000000000000000;
  param_1[0x58] = param_1;
  param_1[0x59] = 0;
  param_1[0x5a] = 0xffffffff00000000;
  FUN_00461750(puVar2);
  FUN_004547b0(param_1 + 0x68,puVar1,0x4000);
  param_1[0x73] = 0;
  param_1[0x74] = 0xffffffff00000000;
  param_1[0x76] = 0;
  param_1[0x77] = 0x8000000000000000;
  param_1[0x78] = 0;
  param_1[0x79] = 0x8000000000000000;
  FUN_004c9930(param_1 + 0x7a);
  local_58 = 0;
  local_68 = 0;
  FUN_00470440(param_1 + 0x59,puVar1,&local_58,&local_68);
  FUN_00460560(puVar2);
  uVar3 = FUN_00438810(8);
  FUN_00460ee0();
  FUN_004619b0(puVar2,uVar3);
  *(undefined2 *)(param_1 + 0x5b) = 0x100;
  return;
}

