
void FUN_03a38e70(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_2 + 8)) {
    uVar2 = 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar2 * 0x23c0 + 0x1fa8);
  if (*(long *)(param_2 + 0x198) != 0) {
    *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x198) = 0;
  }
  puVar1 = PTR_DAT_04bbd510;
  if (*(long *)(lVar3 + 0x1bd8) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(lVar3 + 0x1bd8) = 0;
  }
  *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) & 0xfb;
  if (*(long *)(param_2 + 0x228) != 0) {
    *(long *)(param_2 + 0xd0) = *(long *)(param_2 + 0x228);
    *(undefined8 *)(param_2 + 0x228) = 0;
  }
  if (*(long *)(lVar3 + 0x1cc0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(lVar3 + 0x1cc0) = 0;
  }
  *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) & 0xf7;
  if (*(long *)(param_2 + 0x1a0) != 0) {
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x1a0);
    *(undefined8 *)(param_2 + 0x1a0) = 0;
  }
  FUN_039d346c(lVar3,0);
  if (*(long *)(param_2 + 0x1b0) != 0) {
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1b0) = 0;
  }
  if (*(long *)(lVar3 + 0x1da8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(lVar3 + 0x1da8) = 0;
  }
  *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) & 0xef;
  if (*(long *)(param_2 + 0x1f8) != 0) {
    *(long *)(param_2 + 0xa0) = *(long *)(param_2 + 0x1f8);
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  if (*(long *)(lVar3 + 0x1e90) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(lVar3 + 0x1e90) = 0;
  }
  *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) & 0xdf;
  return;
}

