
void FUN_001a6fb4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  switch(param_2) {
  case 8:
    local_4 = 0x8068000b;
    FUN_0018aa70(param_1,&local_4);
    return;
  default:
    uVar1 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = param_3[2];
    return;
  case 10:
    local_4 = 0x80680011;
    FUN_0018aa70(param_1,&local_4);
    return;
  case 0xb:
    local_4 = 0x80680013;
    FUN_0018aa70(param_1,&local_4);
    return;
  case 0xc:
    local_4 = 0x80680014;
    FUN_0018aa70(param_1,&local_4);
    return;
  case 0xd:
    local_4 = 0x800300e2;
    FUN_0018aa70(param_1,&local_4);
    return;
  case 0xe:
    local_4 = 0x8003006c;
    FUN_0018aa70(param_1,&local_4);
    return;
  }
}

