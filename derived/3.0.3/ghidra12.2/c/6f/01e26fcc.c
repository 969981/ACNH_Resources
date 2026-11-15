
void FUN_01e26fcc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_04bb5d40;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar4 = PTR_DAT_04bb3238;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  uVar1 = *(undefined4 *)(puVar5 + 8);
  uVar2 = *(undefined4 *)(puVar5 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  puVar5 = PTR_DAT_04bb37e0;
  uVar1 = *(undefined4 *)puVar4;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)puVar5;
  *(undefined *)(param_1 + 0x5a) = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)(param_1 + 0x5b) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = 0x3bf800000;
  return;
}

