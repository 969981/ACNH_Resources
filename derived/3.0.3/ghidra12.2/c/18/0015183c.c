
undefined8 FUN_0015183c(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  if (param_2 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x15c4);
  }
  else {
    *(uint *)(param_2 + 0x41c) = *(uint *)(param_2 + 0x41c) & 0xfffff7ff;
    uVar2 = *(ushort *)(param_1 + 0x15c4);
    if ((uVar2 >> 7 & 1) != 0) {
      uVar1 = uVar2 & 0xff7f;
      if ((*(byte *)(*(long *)(param_2 + 0x440) + 0x85) & 0x10) != 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x15c4) = uVar2 & 0xf6ff;
  if ((*(byte *)(param_1 + 0xf63) & 1) == 0) {
    if (*(int *)(param_1 + 0xa38) != 6) goto LAB_001518b0;
    uVar3 = 1;
  }
  else {
    uVar3 = 6;
  }
  *(undefined4 *)(param_1 + 0xa38) = uVar3;
LAB_001518b0:
  auVar4 = FUN_00147178();
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar4;
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1150);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar4;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfff7 | 1;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1140);
  FUN_001628c0(param_1);
  FUN_00146f3c(param_1,0);
  FUN_00146f34(param_1,0);
  return 0;
}

