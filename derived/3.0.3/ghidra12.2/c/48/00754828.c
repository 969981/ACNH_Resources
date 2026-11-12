
long FUN_00754828(long *param_1)

{
  long lVar1;
  
  if (param_1[0x22a] != 0) {
    lVar1 = param_1[0x229];
    if (param_1[0x227] != 0) {
      lVar1 = param_1[0x227] + 0xc0;
    }
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x1c8))(param_1);
    }
    else {
      *(undefined1 *)(lVar1 + 0x17b) = 0;
      *(undefined2 *)(lVar1 + 0x179) = 0;
      (**(code **)(*param_1 + 0x1c8))(param_1);
      *(undefined2 *)(lVar1 + 0x179) = 0x101;
      *(undefined1 *)(lVar1 + 0x17b) = 1;
    }
    FUN_0161cca0(param_1 + 0x23e,(long)param_1 + 0x11c4);
  }
  return (long)param_1 + 0x11c4;
}

