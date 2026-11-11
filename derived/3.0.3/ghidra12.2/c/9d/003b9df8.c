
bool FUN_003b9df8(long param_1,uint *param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = (ushort *)FUN_003b95ac(*(undefined8 *)(param_1 + 0x40));
  if (puVar1 != (ushort *)0x0) {
    *param_2 = (uint)*puVar1;
    param_2[1] = (uint)puVar1[1];
    param_2[2] = (uint)puVar1[2];
    param_2[3] = (uint)puVar1[3];
    param_2[4] = (uint)puVar1[4];
    param_2[5] = (uint)puVar1[5];
    param_2[6] = (uint)puVar1[6];
    if (*(uint *)(param_1 + 8) >> 9 < 0x101) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)(byte)puVar1[7];
    }
    param_2[7] = uVar2;
    *(byte *)(param_2 + 8) = *(byte *)((long)puVar1 + 0xf) & 1;
  }
  return puVar1 != (ushort *)0x0;
}

