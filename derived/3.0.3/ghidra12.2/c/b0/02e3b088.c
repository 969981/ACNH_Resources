
void FUN_02e3b088(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 0x84) = *param_2;
  puVar7 = *(undefined8 **)(param_2 + 2);
  uVar4 = puVar7[2];
  uVar3 = *puVar7;
  uVar5 = puVar7[1];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(puVar7 + 3);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  uVar3 = *(undefined8 *)((long)puVar7 + 0x24);
  uVar5 = *(undefined8 *)((long)puVar7 + 0x2c);
  uVar1 = *(undefined4 *)((long)puVar7 + 0x34);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)((long)puVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  plVar6 = (long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb4) = uVar5;
  *(undefined8 *)(param_1 + 0xac) = uVar3;
  (**(code **)(*plVar6 + 0x28))(plVar6,puVar7 + 9);
  (**(code **)(*plVar6 + 0x30))(plVar6,puVar7 + 9);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(puVar7 + 8);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(puVar7 + 0x28);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(puVar7 + 7);
  *(undefined8 *)(param_1 + 0x1d0) = puVar7[0x29];
  *(undefined8 *)(param_1 + 0x1d8) = puVar7[0x2a];
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(puVar7 + 0x2b);
  *(undefined1 *)(param_1 + 0x1e1) = *(undefined1 *)((long)puVar7 + 0x159);
  *(undefined1 *)(param_1 + 0x1e2) = *(undefined1 *)((long)puVar7 + 0x15a);
  *(undefined1 *)(param_1 + 0x1e3) = *(undefined1 *)((long)puVar7 + 0x15b);
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)((long)puVar7 + 0x15c);
  *(undefined1 *)(param_1 + 0x1e5) = *(undefined1 *)((long)puVar7 + 0x15d);
  *(undefined1 *)(param_1 + 0x1e6) = *(undefined1 *)((long)puVar7 + 0x15e);
  *(undefined1 *)(param_1 + 0x1e7) = *(undefined1 *)((long)puVar7 + 0x15f);
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(puVar7 + 0x2c);
  uVar2 = *(undefined2 *)((long)puVar7 + 0x162);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x1ea) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  if (*(uint *)(param_1 + 0x84) < 3) {
    FUN_03ebb160(param_1 + 8,*(uint *)(param_1 + 0x84) + 8);
    return;
  }
  return;
}

