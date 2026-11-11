
undefined8 FUN_003db7a0(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_003dbc20(param_1[1]);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar2 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar2 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar2 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar2 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(puVar2 + 0x2c);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(puVar2 + 0x30);
  *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(puVar2 + 0x38);
  *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(puVar2 + 0x3c);
  if (*(uint *)(*param_1 + 8) < 0x40000) {
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(puVar2 + 8);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar2 + 0xc);
    uVar1 = *(uint *)(*param_1 + 8);
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(puVar2 + 0x44);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar2 + 0x48);
    uVar1 = *(uint *)(*param_1 + 8);
  }
  if (uVar1 < 0x50000) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    return 1;
  }
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(puVar2 + 0x4c);
  return 1;
}

