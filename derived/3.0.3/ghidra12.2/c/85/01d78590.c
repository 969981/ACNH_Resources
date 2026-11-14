
undefined8 FUN_01d78590(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  *param_2 = 0;
  uVar3 = FUN_01d77c78();
  if ((uVar3 & 1) == 0) {
LAB_01d78618:
    uVar4 = 4;
  }
  else {
    uVar3 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        puVar5 = (undefined8 *)FUN_01dff648(*(undefined8 *)puVar1,param_1);
        if (puVar5 != (undefined8 *)0x0) {
          *param_2 = *puVar5;
          return 0;
        }
        goto LAB_01d78618;
      }
    }
    uVar4 = 3;
  }
  return uVar4;
}

