
void FUN_0361e348(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  
  FUN_03608350(param_1 + 0x2640);
  uVar4 = *(ushort *)(param_1 + 0x2604);
  if ((*(byte *)(param_1 + 0xd2) < 3) || (-1 < *(char *)(param_1 + 0x200))) {
    uVar5 = uVar4 & 0x1000;
  }
  else {
    uVar5 = uVar4 & 0x2000;
  }
  if (uVar5 != 0) {
    *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x1510) + 1;
    uVar4 = *(ushort *)(param_1 + 0x2604);
  }
  *(undefined2 *)(param_1 + 0x2604) = 0;
  uVar2 = (uint)(*(byte *)(param_1 + 0x2608) >> 2) &
          (uVar4 >> (ulong)((uint)*(byte *)(param_1 + 0x2608) * 2 + 6 & 6) & 8) >> 3;
  *(undefined8 *)(param_1 + 0x2610) = *(undefined8 *)(param_1 + 0x108);
  uVar1 = *(byte *)(param_1 + 0x2606) + uVar2;
  *(char *)(param_1 + 0x2606) = (char)uVar1;
  uVar3 = 0;
  if ((uVar1 & 0xff) == 0) {
    uVar3 = (char)uVar2;
  }
  *(undefined1 *)(param_1 + 0x2600) = uVar3;
  FUN_036081dc(param_1 + 0x2640);
  return;
}

