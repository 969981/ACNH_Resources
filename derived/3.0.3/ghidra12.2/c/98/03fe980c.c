
void FUN_03fe980c(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = param_2 & 0xff;
  if ((param_2 & 0xff) != 0) {
    cVar2 = *(char *)(param_1 + 0x34e0f5);
    if (((param_2 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(param_1 + 0x38a1c0,0);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 1 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(param_1 + 0x38a210,1);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 2 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(param_1 + 0x38a260,2);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 3 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(param_1 + 0x38a2b0,3);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 4 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(&LAB_0038a300 + param_1,4);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 5 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(&LAB_0038a350 + param_1,5);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((uVar1 >> 6 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(&LAB_0038a3a0 + param_1,6);
      FUN_03fe9e70(param_1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    if (((param_2 >> 7 & 1) != 0) && (cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x34e0f5) = 1;
      FUN_03f4d578(&LAB_0038a3f0 + param_1,7);
      FUN_03fe9e70(param_1);
      *(undefined1 *)(param_1 + 0x34e0f5) = 0;
    }
    *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + 0x1200;
  }
  return;
}

