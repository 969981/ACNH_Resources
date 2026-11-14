
undefined8 FUN_01669be4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0x16:
    uVar1 = FUN_0166b710();
    return uVar1;
  default:
    return 0;
  case 0x22:
    uVar1 = FUN_0166aefc();
    return uVar1;
  case 0x2e:
    uVar1 = FUN_0166b1b0();
    return uVar1;
  case 0x30:
    uVar1 = FUN_0166b460();
    return uVar1;
  }
}

