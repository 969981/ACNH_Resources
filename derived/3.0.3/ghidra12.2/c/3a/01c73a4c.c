
uint FUN_01c73a4c(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_78 [16];
  uint local_38;
  undefined1 uStack_11;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else if (((((*(char *)(lVar4 + 0x1b8) == '\0') ||
             (*(char *)(lVar4 + 0x50) == '\0' || *(char *)(lVar4 + 0x5c) != '\0')) &&
            ((*(char *)(lVar4 + 0x370) == '\0' ||
             ((*(char *)(lVar4 + 0x208) == '\0' || (*(char *)(lVar4 + 0x214) != '\0')))))) &&
           ((*(char *)(lVar4 + 0x528) == '\0' ||
            ((*(char *)(lVar4 + 0x3c0) == '\0' || (*(char *)(lVar4 + 0x3cc) != '\0')))))) &&
          ((*(char *)(lVar4 + 0x608) == '\0' || ((*(byte *)(lVar4 + 0x604) & 1) != 0)))) {
    puVar1 = (undefined8 *)(lVar4 + 0x378);
    local_38 = 5;
    uVar3 = *(undefined8 *)PTR_DAT_04bc1000;
    local_78[0] = param_2;
    if (((*(char *)(lVar4 + 0x528) != '\0') && (*(char *)(lVar4 + 0x3c0) != '\0')) &&
       (*(uint *)(lVar4 + 0x3b8) != 0xffffffff)) {
      (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(lVar4 + 0x3b8)])(&uStack_11,puVar1);
    }
    *(undefined1 *)(lVar4 + 0x3c0) = 0;
    *(undefined8 *)(lVar4 + 0x3b0) = 0;
    *(undefined8 *)(lVar4 + 0x3b8) = 0;
    *puVar1 = 0;
    *(undefined4 *)(lVar4 + 0x3c8) = 0;
    *(undefined1 *)(lVar4 + 0x3cc) = 0;
    *(undefined8 *)(lVar4 + 0x3a0) = 0;
    *(undefined8 *)(lVar4 + 0x3a8) = 0;
    *(undefined8 *)(lVar4 + 0x390) = 0;
    *(undefined8 *)(lVar4 + 0x398) = 0;
    *(undefined8 *)(lVar4 + 0x380) = 0;
    *(undefined8 *)(lVar4 + 0x388) = 0;
    memset((void *)(lVar4 + 0x3d0),0,0x131);
    *(undefined4 *)(lVar4 + 0x508) = 0;
    *(undefined1 *)(lVar4 + 0x50c) = 0;
    *(undefined4 *)(lVar4 + 0x510) = 0;
    *(undefined1 *)(lVar4 + 0x514) = 0;
    *(undefined8 *)(lVar4 + 0x518) = 0;
    *(undefined8 *)(lVar4 + 0x520) = 0;
    *(undefined1 *)(lVar4 + 0x528) = 1;
    uVar2 = FUN_01c7cf1c(uVar3,puVar1,local_78);
    if (local_38 != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a434e0)[local_38])(&uStack_11,local_78);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

