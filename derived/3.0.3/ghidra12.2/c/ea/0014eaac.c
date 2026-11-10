
void FUN_0014eaac(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x41c);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if ((uVar2 & 4) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x100);
  }
  if ((uVar2 & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x160);
  }
  if ((uVar2 & 0x40) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x120);
  }
  FUN_001460b8(param_2,0x80,"%ld%s",*(undefined8 *)(param_1 + 400),*puVar1);
  return;
}

