
void FUN_00279e34(long param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb3);
  if (bVar1 == 0xfd) {
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined1 *)(param_1 + 0x85) = 1;
      if ((param_2 & 0xff) != 0xfd) goto LAB_00279ea4;
      goto LAB_00279e74;
    }
    FUN_00279da0(param_1,param_2);
    bVar1 = *(byte *)(param_1 + 0xb3);
  }
  if ((uint)bVar1 != (param_2 & 0xff)) {
LAB_00279ea4:
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined1 *)(param_1 + 0x85) = 1;
      return;
    }
    return;
  }
LAB_00279e74:
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  *(byte *)(param_1 + 0xc2) = param_3 & 1;
  return;
}

