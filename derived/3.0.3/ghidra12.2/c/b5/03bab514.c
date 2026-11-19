
undefined8 * FUN_03bab514(undefined4 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  lVar1 = DAT_05ae7600;
  switch(param_1) {
  case 1:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x40);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
    }
    *(undefined8 *)((long)puVar3 + 0x24) = 0x40b60b8040000000;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0xb60b8000000000;
    puVar3[2] = &DAT_04089b0e;
    puVar3[3] = 0x3f800000;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *puVar3 = &PTR_LAB_04b7a438;
    puVar3[1] = &PTR_LAB_048f9770;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0xc0000000;
    uVar4 = 0x800000007f49f480;
    break;
  case 2:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x40);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
    }
    *(undefined8 *)((long)puVar3 + 0x24) = 0x4e38e38015555560;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0x38e38e2000000000;
    puVar3[2] = &DAT_040e6e37;
    puVar3[3] = 0x3f800000;
    ppuVar5 = &PTR_LAB_04b7a3b8;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    goto LAB_03bab810;
  case 3:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x40);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
    }
    *(undefined8 *)((long)puVar3 + 0x24) = 0x4e38e38015555560;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0x38e38e2000000000;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    puVar3[2] = &DAT_040d731e;
    puVar3[3] = 0x3f800000;
    ppuVar5 = &PTR_LAB_04b7a3f8;
LAB_03bab810:
    *puVar3 = ppuVar5;
    puVar3[1] = &PTR_LAB_048f9770;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0xeaaaaaa0;
    uVar4 = 0xd55555409c71c720;
    break;
  case 4:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x40);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
    }
    *(undefined8 *)((long)puVar3 + 0x24) = 0x6000000020000000;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0x4000000000000000;
    puVar3[2] = &DAT_040d72fc;
    puVar3[3] = 0x3f800000;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *puVar3 = &PTR_LAB_04b7a338;
    puVar3[1] = &PTR_LAB_048f9770;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0xe0000000;
    uVar4 = 0xc000000080000000;
    break;
  case 5:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x40);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_2 = (long *)(lVar2 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
    }
    *(undefined8 *)((long)puVar3 + 0x24) = 0x4e38e3802aaaaac0;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0x238e38c000000000;
    puVar3[2] = &DAT_0405f448;
    puVar3[3] = 0x3f800000;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *puVar3 = &PTR_LAB_04b7a378;
    puVar3[1] = &PTR_LAB_048f9770;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0xd5555540;
    uVar4 = 0xaaaaaa80871c71c0;
    break;
  default:
    return (undefined8 *)0x0;
  }
  *(undefined8 *)((long)puVar3 + 0x34) = uVar4;
  return puVar3;
}

