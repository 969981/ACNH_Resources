
void FUN_0029c264(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  undefined1 auStack_40 [16];
  
  uVar2 = FUN_002212e4(*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      cVar1 = FUN_002a4004(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      cVar1 = FUN_002a3a28();
    }
    if (cVar1 == '\x03') {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0);
    }
    else if (cVar1 == '\x01') {
      FUN_002a43a8(*(undefined8 *)(param_1 + 0x10));
    }
  }
  FUN_002296c4(auStack_40,param_4);
  FUN_0029c318(param_1,param_2,param_3,auStack_40);
  return;
}

