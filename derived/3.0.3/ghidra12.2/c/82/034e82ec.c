
undefined8 FUN_034e82ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1 + 8;
  uVar4 = FUN_01d77c78(lVar1);
  if ((uVar4 & 1) != 0) {
    *param_2 = 0;
    uVar4 = FUN_01d77c78(lVar1);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_01d77c78(lVar1);
      puVar2 = PTR_DAT_04bb7bc0;
      if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x14) == '\0')) {
        bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0x15,lVar1);
        *(byte *)(param_1 + 0x14) = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
          puVar5 = (undefined8 *)FUN_01dff648(*(undefined8 *)puVar2,lVar1);
          if (puVar5 == (undefined8 *)0x0) {
            return 4;
          }
          *param_2 = *puVar5;
          return 0;
        }
      }
      return 3;
    }
  }
  return 4;
}

