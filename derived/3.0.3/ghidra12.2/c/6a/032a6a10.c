
void FUN_032a6a10(long param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_48;
  undefined1 auStack_40 [32];
  
  FUN_03285f74(param_2);
  lVar4 = *(long *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0x30] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0x31] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0x32] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0x60] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0x61] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0x62] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0x90] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0x91] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0x92] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0xc0] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0xc1] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0xc2] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0xf0] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0xf1] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0xf2] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0x120] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0x121] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0x122] = *(undefined1 *)(lVar4 + 0x42);
  lVar4 = *(long *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 300) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(lVar4 + 0x38);
  param_2[0x150] = *(undefined1 *)(lVar4 + 0x40);
  param_2[0x151] = *(undefined1 *)(lVar4 + 0x41);
  param_2[0x152] = *(undefined1 *)(lVar4 + 0x42);
  plVar2 = *(long **)(param_1 + 0xb8);
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    local_48 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,auStack_40);
  }
  plVar2 = *(long **)(param_2 + 400);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (local_48 == (long *)0x0) {
    *(undefined8 *)(param_2 + 400) = 0;
  }
  else {
    uVar3 = (**(code **)(*local_48 + 0x18))(local_48,param_2 + 0x198);
    *(undefined8 *)(param_2 + 400) = uVar3;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  uVar3 = **(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x1b8) = **(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x1c0) = uVar3;
  *param_2 = 1;
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0x1c8) = uVar1;
  *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd8);
  *param_2 = *(int *)(param_1 + 0xa8) - 1U < 2;
  *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x100);
  *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x104);
  return;
}

