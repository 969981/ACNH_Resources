
void FUN_03f83070(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x34e0c8) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x34e0cb) + ((param_2 & 0xffff) - (param_3 & 0xffff));
    uVar6 = iVar1 - 1;
    *(byte *)(param_1 + 0x34e0cb) = (byte)((uint)-iVar1 >> 0x1f);
  }
  else {
    iVar1 = ((param_2 & 0xf) - (param_3 & 0xf)) + (uint)*(byte *)(param_1 + 0x34e0cb);
    uVar3 = iVar1 - 1;
    uVar6 = uVar3 & 0xff;
    uVar2 = iVar1 + 9;
    if (uVar6 < 10) {
      uVar2 = uVar3;
    }
    uVar3 = ((param_2 >> 4 & 0xf) - (param_3 >> 4 & 0xf)) - (uint)(9 < uVar6);
    uVar6 = uVar3 + 10;
    if (uVar3 < 10) {
      uVar6 = uVar3;
    }
    uVar4 = ((param_2 >> 8 & 0xf) - (param_3 >> 8 & 0xf)) - (uint)(9 < uVar3);
    uVar3 = uVar4 + 10;
    if (uVar4 < 10) {
      uVar3 = uVar4;
    }
    uVar5 = ((param_2 >> 0xc & 0xf) - ((param_3 & 0xf000) >> 0xc)) - (uint)(9 < uVar4);
    uVar4 = uVar5;
    if (uVar5 >= 10) {
      uVar4 = uVar5 + 10;
    }
    *(bool *)(param_1 + 0x34e0cb) = uVar5 < 10;
    uVar6 = (uVar6 & 0xff) * 0x10 + (uVar2 & 0xff) + (uVar3 & 0xff) * 0x100 +
            (uVar4 & 0xff) * 0x1000;
  }
  *(short *)(param_1 + 0x34e0ea) = (short)uVar6;
  *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar6 >> 0xf) & 1;
  *(bool *)(param_1 + 0x34e0c9) = (uVar6 & 0xffff) == 0;
  *(byte *)(param_1 + 0x34e0ce) =
       (byte)(((param_3 ^ param_2) & (uVar6 ^ param_2 & 0xffff)) >> 0xf) & 1;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

