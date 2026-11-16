
void FUN_026e8094(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  
  memset(param_1 + 8,0,0x1180);
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = *(undefined2 *)puVar5;
  *(undefined *)(param_1 + 1) = puVar5[2];
  *(undefined *)((long)param_1 + 3) = puVar5[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 4);
  FUN_027c0ee4(param_1 + 8);
  memset(param_1 + 0x40,0,0x830);
  *(undefined8 *)(param_1 + 0x464) = 0;
  uVar4 = *(undefined2 *)puVar5;
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  param_1[0x458] = uVar4;
  *(undefined1 *)(param_1 + 0x459) = uVar2;
  *(undefined1 *)((long)param_1 + 0x8b3) = uVar3;
  param_1[0x45c] = uVar4;
  *(undefined1 *)(param_1 + 0x45d) = uVar2;
  *(undefined1 *)((long)param_1 + 0x8bb) = uVar3;
  param_1[0x460] = uVar4;
  *(undefined1 *)(param_1 + 0x461) = uVar2;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)((long)param_1 + 0x8c3) = uVar3;
  *(undefined4 *)(param_1 + 0x45a) = uVar1;
  *(undefined4 *)(param_1 + 0x45e) = uVar1;
  *(undefined4 *)(param_1 + 0x462) = uVar1;
  FUN_027c0ee4(param_1 + 0x468);
  memset(param_1 + 0x4a0,0,0x830);
  uVar2 = puVar5[2];
  *(undefined8 *)(param_1 + 0x8f4) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  uVar4 = *(undefined2 *)puVar5;
  *(undefined8 *)(param_1 + 0x8ec) = 0;
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  *(undefined1 *)(param_1 + 0x8b9) = uVar2;
  param_1[0x8b8] = uVar4;
  param_1[0x8bc] = uVar4;
  param_1[0x8c0] = uVar4;
  param_1[0x8c4] = uVar4;
  uVar3 = puVar5[3];
  *(byte *)(param_1 + 0x49c) = *(byte *)(param_1 + 0x49c) | 1;
  *(undefined8 *)(param_1 + 0x8e4) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  *(undefined8 *)(param_1 + 0x8dc) = 0;
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  *(undefined8 *)(param_1 + 0x8d4) = 0;
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8cc) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined1 *)((long)param_1 + 0x1173) = uVar3;
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)((long)param_1 + 0x117b) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1183) = uVar3;
  *(undefined1 *)((long)param_1 + 0x118b) = uVar3;
  *(undefined1 *)(param_1 + 0x8bd) = uVar2;
  *(undefined1 *)(param_1 + 0x8c1) = uVar2;
  *(undefined1 *)(param_1 + 0x8c5) = uVar2;
  *(undefined8 *)(param_1 + 0x8f8) = 0xfffe;
  *(undefined4 *)(param_1 + 0x8ba) = uVar1;
  *(undefined4 *)(param_1 + 0x8be) = uVar1;
  *(undefined4 *)(param_1 + 0x8c2) = uVar1;
  *(undefined4 *)(param_1 + 0x8c6) = uVar1;
  FUN_0277d4ac(param_1 + 0x8f8);
  return;
}

