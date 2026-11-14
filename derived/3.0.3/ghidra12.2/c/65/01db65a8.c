
void FUN_01db65a8(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((int)param_1[2] == 1) {
    FUN_01df89e0(param_1 + 0x1082);
  }
  *(undefined1 *)(param_1 + 0x1082) = 0xff;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)((long)param_1 + 0x14);
    uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
    *(int *)(lVar2 + 8) = (int)param_1[2];
    *(int *)(lVar2 + 0xc) = (int)uVar3;
    *(int *)(lVar2 + 0x10) = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)(lVar2 + 0x14) = uVar1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

