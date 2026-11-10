
undefined8 FUN_002b3ac8(long param_1,short param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x12) != '\0') {
      if (*(short *)(param_1 + 0x10) == -1) {
        *(undefined2 *)(param_1 + 0x10) = 0xffff;
        *(undefined1 *)(param_1 + 0x12) = 0;
        return 1;
      }
      *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    }
    return 1;
  }
  uVar2 = *(ushort *)(param_1 + 10);
  uVar3 = (uint)(short)(param_2 - uVar2);
  if ((int)uVar3 < 1) {
    return 0;
  }
  if (uVar2 != 0) {
    uVar3 = uVar3 - ((int)(-(uint)uVar2 & 0xffff) < (int)uVar3);
  }
  uVar3 = uVar3 & 0xffff;
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0xc) + uVar3;
    if (uVar1 >> 0x10 != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(ushort *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + ~*(ushort *)(param_1 + 0xc);
      *(undefined2 *)(param_1 + 0xc) = 0xffff;
      uVar1 = *(uint *)(param_1 + 0x14);
      goto joined_r0x002b3b34;
    }
    *(short *)(param_1 + 0xc) = (short)uVar1;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + (short)(uVar3 - 1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
joined_r0x002b3b34:
  if (uVar1 != 0xffffffff) {
    if (CARRY4(uVar1,uVar3)) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + ~uVar1;
      *(short *)(param_1 + 10) = param_2;
      return 1;
    }
    *(uint *)(param_1 + 0x14) = uVar1 + uVar3;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uVar3 - 1);
  }
  *(short *)(param_1 + 10) = param_2;
  return 1;
}

