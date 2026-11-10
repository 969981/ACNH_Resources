
void FUN_002671e0(long param_1)

{
  int *piVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  *(undefined1 *)(param_1 + 0x58) = 0xfd;
  *(undefined1 *)(param_1 + 0x60) = 0xfd;
  *(undefined1 *)(param_1 + 0x68) = 0xfd;
  *(undefined1 *)(param_1 + 0x70) = 0xfd;
  *(undefined1 *)(param_1 + 0x78) = 0xfd;
  *(undefined1 *)(param_1 + 0x80) = 0xfd;
  *(undefined1 *)(param_1 + 0x88) = 0xfd;
  *(undefined1 *)(param_1 + 0x90) = 0xfd;
  *(undefined1 *)(param_1 + 0x98) = 0xfd;
  *(undefined1 *)(param_1 + 0xa0) = 0xfd;
  *(undefined1 *)(param_1 + 0xa8) = 0xfd;
  *(undefined1 *)(param_1 + 0xb0) = 0xfd;
  *(undefined1 *)(param_1 + 0xb8) = 0xfd;
  *(undefined1 *)(param_1 + 0xc0) = 0xfd;
  *(undefined1 *)(param_1 + 200) = 0xfd;
  *(undefined1 *)(param_1 + 0xd0) = 0xfd;
  *(undefined1 *)(param_1 + 0xd8) = 0xfd;
  *(undefined1 *)(param_1 + 0xe0) = 0xfd;
  *(undefined1 *)(param_1 + 0xe8) = 0xfd;
  *(undefined1 *)(param_1 + 0xf0) = 0xfd;
  *(undefined1 *)(param_1 + 0xf8) = 0xfd;
  *(undefined1 *)(param_1 + 0x100) = 0xfd;
  *(undefined1 *)(param_1 + 0x108) = 0xfd;
  *(undefined1 *)(param_1 + 0x110) = 0xfd;
  *(undefined1 *)(param_1 + 0x118) = 0xfd;
  *(undefined1 *)(param_1 + 0x120) = 0xfd;
  *(undefined1 *)(param_1 + 0x128) = 0xfd;
  *(undefined1 *)(param_1 + 0x130) = 0xfd;
  *(undefined1 *)(param_1 + 0x138) = 0xfd;
  *(undefined1 *)(param_1 + 0x140) = 0xfd;
  *(undefined1 *)(param_1 + 0x148) = 0xfd;
  *(undefined1 *)(param_1 + 0x150) = 0xfd;
  if (*(int *)(param_1 + 0x160) != 1) {
    FUN_00221064(param_1 + 0x160);
  }
  piVar1 = *(int **)(param_1 + 400);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220f8c(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}

