
void FUN_006e3180(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *local_1a8;
  undefined1 *puStack_1a0;
  undefined4 local_198;
  undefined1 local_194 [100];
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [100];
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [100];
  
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[2] = &PTR_LAB_048fb9f8;
  param_1[3] = (undefined1 *)((long)param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 0x40;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0xd] = &PTR_LAB_048fb9f8;
  param_1[0xe] = (undefined1 *)((long)param_1 + 0x7c);
  *(undefined1 *)((long)param_1 + 99) = 0;
  puVar5 = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0xf) = 0x40;
  lVar3 = 100;
  *param_1 = &PTR_LAB_048fb968;
  param_1[1] = 0x400000005;
  puVar2 = PTR_DAT_04bb2b60;
  puVar1 = PTR_DAT_04bb2b60 + 0x10;
  *(undefined1 *)((long)param_1 + 0xbb) = 0;
  puVar4 = param_1;
  do {
    *(undefined1 *)((long)puVar4 + 0xd4) = 0;
    puVar4[0x19] = (undefined1 *)((long)puVar4 + 0xd4);
    lVar3 = lVar3 + -1;
    *(undefined1 *)((long)puVar4 + 0x14c) = 0;
    puVar4[0x28] = (undefined1 *)((long)puVar4 + 0x14c);
    *(undefined4 *)(puVar4 + 0x1a) = 0x61;
    *(undefined1 *)((long)puVar4 + 0x1c4) = 0;
    *(undefined1 *)((long)puVar4 + 0x134) = 0;
    puVar4[0x18] = puVar1;
    *(undefined4 *)(puVar4 + 0x29) = 0x61;
    *(undefined1 *)((long)puVar4 + 0x1ac) = 0;
    puVar4[0x27] = puVar1;
    puVar4[0x37] = (undefined1 *)((long)puVar4 + 0x1c4);
    *(undefined4 *)(puVar4 + 0x38) = 0x61;
    *(undefined1 *)((long)puVar4 + 0x224) = 0;
    puVar4[0x36] = puVar1;
    puVar4 = puVar4 + 0x2d;
  } while (lVar3 != 0);
  memset(&local_198,0,0x158);
  puStack_1a0 = local_194;
  local_1a8 = puVar2 + 0x10;
  local_198 = 0x61;
  puStack_128 = local_11c;
  local_120 = 0x61;
  local_a8 = 0x61;
  lVar3 = 100;
  local_194[0] = 0;
  local_11c[0] = 0;
  puStack_b0 = local_a4;
  local_a4[0] = 0;
  local_130 = local_1a8;
  local_b8 = local_1a8;
  do {
    FUN_006e32e0(puVar5,&local_1a8);
    lVar3 = lVar3 + -1;
    puVar5 = puVar5 + 0x2d;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x11ac) = 0;
  return;
}

