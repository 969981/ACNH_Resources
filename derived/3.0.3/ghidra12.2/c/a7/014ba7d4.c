
long FUN_014ba7d4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
    *(undefined4 *)(param_1 + 8) = 1;
    puVar3 = PTR_DAT_04bbcf10;
    puVar2 = PTR_DAT_04bb37e0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined **)(param_1 + 0x10) = puVar3 + 0x10;
    uVar4 = *(undefined4 *)puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x44) = 0x41100000;
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    return param_1;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 3;
    break;
  case 4:
    *(undefined **)(param_1 + 0x10) = PTR_DAT_04bbbc30 + 0x10;
    uVar4 = 4;
    goto LAB_014ba93c;
  case 5:
    *(undefined **)(param_1 + 0x10) = PTR_DAT_04bbbc30 + 0x10;
    uVar4 = 5;
LAB_014ba93c:
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x24) = 0;
    puVar2 = PTR_DAT_04bb37e0;
    *(undefined8 *)(param_1 + 0x3c) = 0x41100000;
    uVar4 = *(undefined4 *)puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 4);
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_011f06e8(param_1 + 0x10,param_2 + 0x10);
  default:
    goto switchD_014ba80c_default;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
switchD_014ba80c_default:
  return param_1;
}

