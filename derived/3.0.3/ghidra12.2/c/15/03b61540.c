
void FUN_03b61540(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  plVar4 = *(long **)(param_1 + 0x90);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
    *(long *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  plVar4 = *(long **)(param_1 + 0xa8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
    *(long *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
    *(long *)(param_1 + 0xc0) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0x1f0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xda) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar3 != puVar1) {
    puVar5 = (undefined8 *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar5;
  }
  uVar2 = *(ushort *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 **)(param_1 + 0xe8) = puVar1;
  *(undefined8 **)(param_1 + 0xf0) = puVar1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  FUN_03b55fd0(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x32) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  *(ushort *)(param_1 + 0x30) = uVar2 | 0x4000;
  return;
}

