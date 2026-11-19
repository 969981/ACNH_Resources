
undefined8 * FUN_03ba74c4(undefined4 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  lVar1 = DAT_05ae7600;
  switch(param_1) {
  case 1:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x18);
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
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    }
    *(undefined2 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar4 = &DAT_04b7a118;
    break;
  case 2:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x18);
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
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    }
    *(undefined2 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar4 = &DAT_04b7a150;
    break;
  case 3:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x18);
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
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    }
    *(undefined2 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar4 = &DAT_04b7a188;
    break;
  case 4:
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x18);
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
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    }
    *(undefined2 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar4 = &DAT_04b7a1c0;
    break;
  default:
    return (undefined8 *)0x0;
  }
  *(undefined2 *)((long)puVar3 + 0x14) = 0;
  *puVar3 = puVar4 + 0x10;
  return puVar3;
}

