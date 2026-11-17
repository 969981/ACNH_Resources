
undefined8 FUN_02b40530(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != 0) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
      uVar2 = FUN_02b428a8();
      return uVar2;
    case 2:
      uVar2 = FUN_02b42b84();
      return uVar2;
    case 3:
      uVar2 = FUN_02b42cd4();
      return uVar2;
    case 4:
      if (*(int *)(param_1 + 8) != -1) {
        *(undefined4 *)(param_2 + 8) = 0x1a;
        fVar3 = *(float *)(param_1 + 0xc);
        fVar4 = *(float *)(param_1 + 0x14);
        *(short *)(param_2 + 0x10) = (short)*(undefined4 *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        *(undefined1 *)(param_2 + 0x20) = 0;
        *(undefined4 *)(param_2 + 0x14) = uVar1;
        *(uint *)(param_2 + 0x18) = (int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0);
        *(uint *)(param_2 + 0x1c) = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
        return 1;
      }
      break;
    case 5:
      if (*(int *)(param_1 + 8) != -1) {
        *(undefined4 *)(param_2 + 8) = 0x1b;
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(param_2 + 0x12) = 0;
        *(short *)(param_2 + 0x10) = (short)uVar1;
        return 1;
      }
    }
  }
  return 0;
}

