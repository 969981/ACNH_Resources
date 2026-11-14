
void FUN_01c9472c(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined4 *puVar12;
  
  puVar12 = (undefined4 *)(**(code **)(*(long *)*param_1 + 0x150))();
  *puVar12 = *(undefined4 *)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x23);
  *(undefined8 *)(puVar12 + 1) = param_1[0x24];
  *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(puVar12 + 0x1c) = *(undefined1 *)(param_1 + 0x26);
  bVar3 = *(byte *)(param_1 + 0x27);
  bVar4 = *(byte *)((long)param_1 + 0x139);
  puVar12[0x1f] = *(undefined4 *)((long)param_1 + 0x134);
  *(undefined1 *)(puVar12 + 0x2b) = *(undefined1 *)((long)param_1 + 0x13a);
  *(undefined8 *)((long)puVar12 + 0xd) = param_1[0x28];
  *(undefined1 *)((long)puVar12 + 0x15) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)((long)puVar12 + 0x71) = *(undefined1 *)(param_1 + 0x2a);
  uVar1 = (uint)bVar3;
  if (*(char *)(param_1 + 0x2b) != '\0') {
    uVar1 = bVar3 | 2;
  }
  uVar2 = (uint)bVar4;
  if (*(char *)((long)param_1 + 0x159) != '\0') {
    uVar2 = bVar4 | 2;
  }
  puVar12[0x20] = *(undefined4 *)((long)param_1 + 0x154);
  *(undefined1 *)((long)puVar12 + 0xad) = *(undefined1 *)((long)param_1 + 0x15a);
  *(undefined8 *)((long)puVar12 + 0x16) = param_1[0x2c];
  *(undefined1 *)((long)puVar12 + 0x1e) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)((long)puVar12 + 0x72) = *(undefined1 *)(param_1 + 0x2e);
  if (*(char *)(param_1 + 0x2f) != '\0') {
    uVar1 = uVar1 | 4;
  }
  if (*(char *)((long)param_1 + 0x179) != '\0') {
    uVar2 = uVar2 | 4;
  }
  puVar12[0x21] = *(undefined4 *)((long)param_1 + 0x174);
  *(undefined1 *)((long)puVar12 + 0xae) = *(undefined1 *)((long)param_1 + 0x17a);
  *(undefined8 *)((long)puVar12 + 0x1f) = param_1[0x30];
  *(undefined1 *)((long)puVar12 + 0x27) = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)((long)puVar12 + 0x73) = *(undefined1 *)(param_1 + 0x32);
  if (*(char *)(param_1 + 0x33) != '\0') {
    uVar1 = uVar1 | 8;
  }
  if (*(char *)((long)param_1 + 0x199) != '\0') {
    uVar2 = uVar2 | 8;
  }
  puVar12[0x22] = *(undefined4 *)((long)param_1 + 0x194);
  *(undefined1 *)((long)puVar12 + 0xaf) = *(undefined1 *)((long)param_1 + 0x19a);
  *(undefined8 *)(puVar12 + 10) = param_1[0x34];
  *(undefined1 *)(puVar12 + 0xc) = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(puVar12 + 0x1d) = *(undefined1 *)(param_1 + 0x36);
  bVar3 = *(byte *)(param_1 + 0x37);
  bVar4 = *(byte *)((long)param_1 + 0x1b9);
  puVar12[0x23] = *(undefined4 *)((long)param_1 + 0x1b4);
  *(undefined1 *)(puVar12 + 0x2c) = *(undefined1 *)((long)param_1 + 0x1ba);
  *(undefined8 *)((long)puVar12 + 0x31) = param_1[0x38];
  *(undefined1 *)((long)puVar12 + 0x39) = *(undefined1 *)(param_1 + 0x39);
  *(undefined1 *)((long)puVar12 + 0x75) = *(undefined1 *)(param_1 + 0x3a);
  bVar5 = *(byte *)(param_1 + 0x3b);
  bVar6 = *(byte *)((long)param_1 + 0x1d9);
  puVar12[0x24] = *(undefined4 *)((long)param_1 + 0x1d4);
  *(undefined1 *)((long)puVar12 + 0xb1) = *(undefined1 *)((long)param_1 + 0x1da);
  *(undefined8 *)((long)puVar12 + 0x3a) = param_1[0x3c];
  *(undefined1 *)((long)puVar12 + 0x42) = *(undefined1 *)(param_1 + 0x3d);
  *(undefined1 *)((long)puVar12 + 0x76) = *(undefined1 *)(param_1 + 0x3e);
  bVar7 = *(byte *)(param_1 + 0x3f);
  bVar8 = *(byte *)((long)param_1 + 0x1f9);
  puVar12[0x25] = *(undefined4 *)((long)param_1 + 500);
  *(undefined1 *)((long)puVar12 + 0xb2) = *(undefined1 *)((long)param_1 + 0x1fa);
  *(undefined8 *)((long)puVar12 + 0x43) = param_1[0x40];
  *(undefined1 *)((long)puVar12 + 0x4b) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((long)puVar12 + 0x77) = *(undefined1 *)(param_1 + 0x42);
  bVar9 = *(byte *)(param_1 + 0x43);
  bVar10 = *(byte *)((long)param_1 + 0x219);
  puVar12[0x26] = *(undefined4 *)((long)param_1 + 0x214);
  uVar11 = *(undefined1 *)((long)param_1 + 0x21a);
  puVar12[0x2e] =
       uVar1 & 0xffffff0f | (uint)bVar3 << 4 | (uint)bVar5 << 5 | (uint)bVar7 << 6 |
       (uint)bVar9 << 7;
  puVar12[0x2f] =
       uVar2 & 0xffffff0f | (uint)bVar4 << 4 | (uint)bVar6 << 5 | (uint)bVar8 << 6 |
       (uint)bVar10 << 7;
  *(undefined1 *)((long)puVar12 + 0xb3) = uVar11;
  (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,1);
  (**(code **)(*(long *)param_1[1] + 0x38))((long *)param_1[1],1);
  *(undefined1 *)((long)param_1 + 0x224) = 1;
  return;
}

