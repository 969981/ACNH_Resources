
uint FUN_0043d930(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 *param_7,undefined8 param_8,
                 undefined1 param_9)

{
  uint uVar1;
  undefined1 uStack0000000000000000;
  undefined1 auStack_210 [128];
  long local_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [128];
  
  if (PTR_FUN_04c1ef58 == (undefined *)0x0) {
    uVar1 = 1;
  }
  else {
    local_e0 = (long)(int)*param_7;
    if (0xf < (int)*param_7) {
      local_e0 = 0x10;
    }
    puStack_d8 = param_7;
    FUN_0043db40(auStack_d0,local_e0,auStack_d0 + -0x30);
    FUN_004225b0(auStack_210 + 0x80);
    if (param_6 != 0) {
      FUN_00424dc0(auStack_210 + 0x80,param_6,&local_e0);
    }
    uVar1 = (*(code *)PTR_FUN_04c1ef58)(param_1,param_2,param_3,param_4,param_5,&param_9);
    FUN_00422550(auStack_210 + 0x80);
  }
  return uVar1 & 1;
}

