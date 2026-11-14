
undefined8 FUN_01d7a28c(long param_1,void *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_01d77c78();
  if ((uVar3 & 1) == 0) {
LAB_01d7a334:
    uVar4 = 4;
  }
  else {
    uVar3 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0xfc0) == '\0') {
            return 1;
          }
          if (*(char *)(lVar5 + 0xfc1) == '\0') {
            return 2;
          }
          lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
          memcpy(param_2,*(void **)(lVar5 + 0xfb8),0x19400);
          return 0;
        }
        goto LAB_01d7a334;
      }
    }
    uVar4 = 3;
  }
  return uVar4;
}

