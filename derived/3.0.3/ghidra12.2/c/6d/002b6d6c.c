
void FUN_002b6d6c(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x78) == 5) {
    if (*(char *)(param_1 + 0xd2) != 'd') {
      return;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0xffff;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    memset((void *)(param_1 + 0x94),0xff,0x20);
    *(undefined1 *)(param_1 + 0xd2) = 100;
    uVar2 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 2) {
      return;
    }
    uVar1 = FUN_002b5888(param_1,*(undefined1 *)(param_1 + 0xb8));
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0xffff;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined2 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd2) = 0;
      memset((void *)(param_1 + 0x94),0xff,0x20);
      uVar2 = 0xc;
    }
    else {
      uVar1 = FUN_002a5c40(*(undefined8 *)(param_1 + 0x70),*(undefined2 *)(param_1 + 0xd0));
      if ((uVar1 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0xffff;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined2 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd2) = 0;
      memset((void *)(param_1 + 0x94),0xff,0x20);
      *(undefined1 *)(param_1 + 0xd2) = 100;
      uVar2 = 3;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}

