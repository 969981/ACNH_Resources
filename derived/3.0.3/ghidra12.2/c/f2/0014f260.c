
undefined8 FUN_0014f260(long param_1)

{
  if (param_1 != 0) {
    FUN_001479e8();
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_001477d8(*(long *)(param_1 + 0xd8),param_1);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_001497c4();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN_00143b8c(param_1 + 0x12f8,0);
    *(undefined4 *)(param_1 + 0x1710) = 0;
    if ((*(ushort *)(param_1 + 0x15c4) >> 10 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(param_1 + 0x1510));
    }
    FUN_00143300(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN_00144288(param_1);
    FUN_00143300(*(undefined8 *)(param_1 + 0x1168));
    *(undefined8 *)(param_1 + 0x1168) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x11d8));
    *(undefined8 *)(param_1 + 0x11d8) = 0;
    FUN_001443f4(param_1);
    FUN_00143300(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if ((*(byte *)(param_1 + 0xf88) >> 1 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(param_1 + 0xf70));
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0xf70) = 0;
    FUN_0014f424(param_1);
    FUN_00143300(*(undefined8 *)(param_1 + 0x1150));
    *(undefined8 *)(param_1 + 0x1150) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1140));
    *(undefined8 *)(param_1 + 0x1140) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1158));
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_0014d118(param_1,1);
    FUN_001551a0(param_1);
    FUN_00143300(*(undefined8 *)(param_1 + 0x1658));
    *(undefined8 *)(param_1 + 0x1658) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1660));
    *(undefined8 *)(param_1 + 0x1660) = 0;
    thunk_FUN_00143300(*(undefined8 *)(param_1 + 0x12a8));
    FUN_0015a9bc(param_1);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_0014b7c4(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + -1;
      FUN_0014b80c(param_1,1);
    }
    FUN_00164ae8(param_1 + 0x15c8);
    FUN_0014f1dc(param_1);
    FUN_00143300(param_1);
  }
  return 0;
}

