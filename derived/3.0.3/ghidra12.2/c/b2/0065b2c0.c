
ulong FUN_0065b2c0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  ushort *puVar3;
  uint uVar4;
  
  if ((((param_3 == 0xff) && (param_2 == 0xff)) && (param_1 == 0xff)) && (param_5 == 8)) {
    return 0x70;
  }
  if (((param_4 == 0xff) && ((param_2 == 0 && param_1 == 0) && param_3 == 0)) && (param_5 == 8)) {
    return 0x70;
  }
  uVar2 = 0;
  puVar3 = &DAT_04c7a330;
  do {
    if (((*(int *)(puVar3 + 6) == param_1) && (*(int *)(puVar3 + 8) == param_2)) &&
       ((*(int *)(puVar3 + 10) == param_3 && (*(int *)(puVar3 + 0xc) == param_4)))) {
      if ((char)puVar3[0x12] == '\0') {
        uVar4 = (uint)*puVar3;
      }
      else {
        iVar1 = (uint)*(byte *)((long)puVar3 + 3) * (uint)(byte)puVar3[1] * (uint)(byte)puVar3[2];
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = (int)((uint)*puVar3 + iVar1 + -1) / iVar1;
        }
      }
      if (((uVar4 == param_5) && ((char)puVar3[0x12] == '\0')) && (*(int *)(puVar3 + 0x14) == 3))
      goto LAB_0065b3b8;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x1c;
  } while (uVar2 < 0x116);
  uVar2 = 0;
LAB_0065b3b8:
  return uVar2 & 0xffffffff;
}

