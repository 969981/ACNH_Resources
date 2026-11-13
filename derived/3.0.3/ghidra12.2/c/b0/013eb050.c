
void FUN_013eb050(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
  (**(code **)(*(long *)(param_1 + 0xf0) + 0xf0))((long *)(param_1 + 0xf0));
  (**(code **)(*(long *)(param_1 + 0x120) + 0xf0))(param_1 + 0x120);
  (**(code **)(*(long *)(param_1 + 0x150) + 0xf0))(param_1 + 0x150);
  (**(code **)(*(long *)(param_1 + 0x180) + 0xf0))(param_1 + 0x180);
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xf0))(param_1 + 0x1b0);
  (**(code **)(*(long *)(param_1 + 0x1e0) + 0xf0))(param_1 + 0x1e0);
  (**(code **)(*(long *)(param_1 + 0x3c0) + 0xf0))(param_1 + 0x3c0);
  (**(code **)(*(long *)(param_1 + 0x390) + 0xf0))(param_1 + 0x390);
  (**(code **)(*(long *)(param_1 + 0x3f0) + 0xf0))(param_1 + 0x3f0);
  (**(code **)(*(long *)(param_1 + 0x420) + 0xf0))(param_1 + 0x420);
  (**(code **)(*(long *)(param_1 + 0x3c0) + 0xf0))(param_1 + 0x3c0);
  (**(code **)(*(long *)(param_1 + 0x390) + 0xf0))(param_1 + 0x390);
  (**(code **)(*(long *)(param_1 + 0x240) + 0xf0))(param_1 + 0x240);
  (**(code **)(*(long *)(param_1 + 0x210) + 0xf0))(param_1 + 0x210);
  (**(code **)(*(long *)(param_1 + 0x2a0) + 0xf0))(param_1 + 0x2a0);
  (**(code **)(*(long *)(param_1 + 0x270) + 0xf0))(param_1 + 0x270);
  (**(code **)(*(long *)(param_1 + 0x2d0) + 0xf0))(param_1 + 0x2d0);
  (**(code **)(*(long *)(param_1 + 0x300) + 0xf0))(param_1 + 0x300);
  puVar4 = PTR_DAT_04bb3d68;
  puVar3 = PTR_DAT_04bb2bc0;
  local_65 = 0;
  local_a8 = 0x40;
  local_a4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  if (0 < *(int *)(param_1 + 0x488)) {
    uVar6 = 0;
    local_b8 = puVar1;
    puStack_b0 = local_a4;
    do {
      puVar5 = &DAT_0407ebb1;
      if (uVar6 < 9) {
        puVar5 = *(undefined8 **)(puVar4 + uVar6 * 8 + 0x18);
      }
      FUN_038d1270(&local_b8,&DAT_04062006,puVar5);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x490) + uVar6 * 8) + 0xf0))();
      (**(code **)(**(long **)(*(long *)(param_1 + 0x6e0) + uVar6 * 8) + 0xf0))();
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x488));
  }
  local_a8 = 0x40;
  local_65 = 0;
  local_a4[0] = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    uVar6 = 0;
    local_b8 = puVar1;
    puStack_b0 = local_a4;
    do {
      uVar2 = uVar6 + 1;
      FUN_038d1270(&local_b8,&DAT_040f43ad,uVar2 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x930) + uVar6 * 8) + 0xf0))();
      uVar6 = uVar2;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x928));
  }
  local_65 = 0;
  puStack_b0 = local_a4;
  local_a8 = 0x40;
  local_b8 = puVar3 + 0x10;
  local_a4[0] = 0;
  if (0 < *(int *)(param_1 + 0xa98)) {
    uVar6 = 0;
    do {
      uVar2 = uVar6 + 1;
      FUN_038d1270(&local_b8,&DAT_040c4cb9,uVar2 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0xaa0) + uVar6 * 8) + 0xf0))();
      (**(code **)(**(long **)(*(long *)(param_1 + 0xc10) + uVar6 * 8) + 0xf0))();
      uVar6 = uVar2;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0xa98));
  }
  (**(code **)(*(long *)(param_1 + 0xd40) + 0xf0))(param_1 + 0xd40);
  (**(code **)(*(long *)(param_1 + 0xd70) + 0xf0))(param_1 + 0xd70);
  (**(code **)(*(long *)(param_1 + 0xda0) + 0xf0))(param_1 + 0xda0);
  (**(code **)(*(long *)(param_1 + 0xdd0) + 0xf0))(param_1 + 0xdd0);
  return;
}

