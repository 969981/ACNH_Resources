
void FUN_039d3574(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x498) & 0xfffffffe;
  *(uint *)(param_1 + 0x498) = uVar2;
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  uVar2 = uVar2 & 0xfffffffd;
  *(uint *)(param_1 + 0x498) = uVar2;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  uVar2 = uVar2 & 0xfffffffb;
  *(uint *)(param_1 + 0x498) = uVar2;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  uVar2 = uVar2 & 0xfffffff7;
  *(uint *)(param_1 + 0x498) = uVar2;
  if (*(long *)(param_1 + 0x3b0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  *(uint *)(param_1 + 0x498) = uVar2 & 0xffffffef;
  if (*(long *)(param_1 + 0x5e8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0xa70) & 0xfffffffe;
  *(uint *)(param_1 + 0xa70) = uVar2;
  if (*(long *)(param_1 + 0x6d0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0xa70);
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  uVar2 = uVar2 & 0xfffffffd;
  *(uint *)(param_1 + 0xa70) = uVar2;
  if (*(long *)(param_1 + 0x7b8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0xa70);
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  uVar2 = uVar2 & 0xfffffffb;
  *(uint *)(param_1 + 0xa70) = uVar2;
  if (*(long *)(param_1 + 0x8a0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0xa70);
    *(undefined8 *)(param_1 + 0x8a0) = 0;
  }
  uVar2 = uVar2 & 0xfffffff7;
  *(uint *)(param_1 + 0xa70) = uVar2;
  if (*(long *)(param_1 + 0x988) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    uVar2 = *(uint *)(param_1 + 0xa70);
    *(undefined8 *)(param_1 + 0x988) = 0;
  }
  *(uint *)(param_1 + 0xa70) = uVar2 & 0xffffffef;
  FUN_039d1bfc(param_1);
  return;
}

