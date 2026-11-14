
undefined8 FUN_01d6aba0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  lVar2 = *DAT_0537d558;
  if ((((uVar1 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\0')) &&
     (((*(uint *)(lVar2 + 0x48) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 1 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x01')) &&
     (((*(uint *)(lVar2 + 200) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 2 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x02')) &&
     (((*(uint *)(lVar2 + 0x148) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 3 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x03')) &&
     (((*(uint *)(lVar2 + 0x1c8) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 4 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x04')) &&
     (((*(uint *)(lVar2 + 0x248) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 5 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x05')) &&
     (((*(uint *)(lVar2 + 0x2c8) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 6 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\x06')) &&
     (((*(uint *)(lVar2 + 0x348) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  if ((((uVar1 >> 7 & 1) == 0) && (*(char *)(lVar2 + 0x473) != '\a')) &&
     (((*(uint *)(lVar2 + 0x3c8) ^ 0xffffffff) & 10) == 0)) {
    return 0;
  }
  return 1;
}

