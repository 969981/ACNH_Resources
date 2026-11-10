
undefined8
FUN_002aa1e0(long param_1,long param_2,byte param_3,uint param_4,byte param_5,int param_6)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x629) != '\0') {
    return 0;
  }
  if ((((*(int *)(param_1 + 0xc) != 0) &&
       (((*(char *)(param_2 + 0x62a) != '\0' ^ param_3) & 1) != 0)) ||
      (param_4 < *(uint *)(param_2 + 0x5f8))) ||
     (((*(char *)(param_2 + 0x62b) != '\0' ^ param_5) & 1) != 0)) {
    return 0;
  }
  if (param_6 == 0) {
    if (((*(int *)(param_2 + 0x14) != 0) &&
        (lVar1 = FUN_002ba790(DAT_04c61168), *(long *)(lVar1 + 0x98) != 0)) &&
       (lVar1 = FUN_002ba790(DAT_04c61168),
       *(int *)(param_2 + 0x14) != *(int *)(*(long *)(lVar1 + 0x98) + 0x48))) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 0x14) != param_6) {
    return 0;
  }
  return 1;
}

