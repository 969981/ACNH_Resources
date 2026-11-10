
void FUN_001d78b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  FUN_00187810(&local_18);
  puVar2 = PTR_DAT_04bcc7a0;
  puVar1 = PTR_DAT_04bcc798;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = local_18;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x48) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x38) = puVar2 + 0x10;
  *(long *)(param_1 + 0x40) = param_1 + 0x40;
  return;
}

