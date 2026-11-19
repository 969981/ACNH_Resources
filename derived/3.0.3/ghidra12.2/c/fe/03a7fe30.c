
void FUN_03a7fe30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  
  if ((*(long *)(param_1 + 0x420) == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x550) == '\0')) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x3d0);
  if (((*(ushort *)(lVar2 + 0x8a) & 0x21) == 0 || (*(ushort *)(lVar2 + 0x8a) & 2) == 0) ||
     (*(long *)(lVar2 + 0x1f8) == 0)) {
    puVar1 = &DAT_05ae9148;
    if (*(undefined8 **)(lVar2 + 0x78) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(lVar2 + 0x78);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x1f8) + 8);
  }
  FUN_03a8d3c0(*(long *)(param_1 + 0x420),*(undefined1 *)(param_2 + 8),puVar1);
  lVar2 = *(long *)(param_2 + 0x3d0);
  uVar3 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x420) + 0x1d0) <= (uint)*(byte *)(param_2 + 8)) {
    uVar3 = 0;
  }
  if ((((*(ushort *)(lVar2 + 0x8a) & 0x21) == 0) || ((*(ushort *)(lVar2 + 0x8a) >> 1 & 1) == 0)) ||
     (*(long *)(lVar2 + 0x1f8) == 0)) {
    puVar1 = &DAT_05ae91b0;
    if (*(undefined8 **)(lVar2 + 0x80) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(lVar2 + 0x80);
    }
  }
  else {
    puVar1 = *(undefined8 **)(*(long *)(lVar2 + 0x1f8) + 0x100);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x420) + 0x1d8) + (ulong)uVar3 * 0x3b0 + 0x350;
  FUN_039eea20(param_2,3,lVar2,puVar1,lVar2);
  return;
}

