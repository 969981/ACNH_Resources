
undefined8 FUN_001500d0(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN_00146c9c(lVar3,3);
  if ((*(byte *)(param_1[0x88] + 0x84) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xff7fffff;
    if (*(long *)(lVar3 + 0xdd0) != 0) {
      FUN_00143300(param_1[0x90]);
      param_1[0x90] = 0;
      lVar1 = FUN_00146120("User-Agent: %s\r\n",*(undefined8 *)(lVar3 + 0xdd0));
      param_1[0x90] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x1508) = 0;
    auVar4 = FUN_00147178();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
    if ((int)param_1[0x4b] == -1) {
      *(undefined1 *)((long)param_1 + 0x41a) = 0;
      uVar2 = FUN_001584c8(param_1,param_1[0xd]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN_00146c9c(lVar3,4);
      FUN_00146c9c(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x41a) = 1;
      *param_2 = 1;
      FUN_00157c90(param_1,(int)param_1[0x4b]);
      FUN_0014fc8c(param_1);
    }
    auVar4 = FUN_00147178();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}

