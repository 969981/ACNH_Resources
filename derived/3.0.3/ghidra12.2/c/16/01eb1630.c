
undefined8 FUN_01eb1630(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((*(int *)(lVar1 + 0x360) != 0x21) ||
      ((*(int *)(lVar1 + 0x4b8) != 0 && (*(int *)(lVar1 + 0x378) == 0x23)))) &&
     ((*(int *)(lVar1 + 0x360) != 0x22 ||
      ((*(int *)(lVar1 + 0x4b8) != 0 && (*(int *)(lVar1 + 0x378) == 0x23)))))) {
    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
      if ((((*(int *)(lVar1 + 0x360) != 0x14) ||
           ((*(int *)(lVar1 + 0x4b8) != 0 && (*(int *)(lVar1 + 0x378) == 0x23)))) &&
          ((*(int *)(lVar1 + 0x360) != 0x16 ||
           ((*(int *)(lVar1 + 0x4b8) != 0 && (*(int *)(lVar1 + 0x378) == 0x23)))))) &&
         ((((*(int *)(lVar1 + 0x360) != 0x18 ||
            ((*(int *)(lVar1 + 0x4b8) != 0 && (*(int *)(lVar1 + 0x378) == 0x23)))) &&
           ((*(byte *)(param_1 + 0xad5a) >> 2 & 1) == 0)) &&
          ((*(int *)(param_1 + 0x77f4) != 0x43 && (*(int *)(param_1 + 0x77b0) != 0x43)))))) {
        return 1;
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x690);
      if ((lVar1 == 0) ||
         (((ushort)(byte)*PTR_DAT_04bb5018 == (*(ushort *)(lVar1 + 6) >> 2 & 0xff) &&
          ((*(byte *)(lVar1 + 7) >> 4 & 3) == 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

