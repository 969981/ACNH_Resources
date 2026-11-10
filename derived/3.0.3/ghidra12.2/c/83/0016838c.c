
undefined8 FUN_0016838c(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 4);
    do {
      switch(puVar2[-1]) {
      case 2:
        uVar1 = *puVar2;
        goto joined_r0x001683f8;
      case 4:
        if ((int)*puVar2 < 0) {
          return 0;
        }
        break;
      case 5:
        if (*puVar2 - 0x1000000 < 0xff004000) {
          return 0;
        }
        break;
      case 8:
        uVar1 = *puVar2;
joined_r0x001683f8:
        if (1 < uVar1) {
          return 0;
        }
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}

