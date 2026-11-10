
undefined8 FUN_001797a0(long *param_1,undefined1 *param_2)

{
  char *__filename;
  undefined8 uVar1;
  FILE *pFVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong local_48;
  char *local_28;
  
  lVar4 = *param_1;
  local_28 = (char *)0x0;
  local_48 = 0;
  puVar5 = *(undefined8 **)(lVar4 + 0x1e8);
  uVar1 = FUN_00144cf8(lVar4,*(undefined8 *)(lVar4 + 0x15a0),0,&local_28,&local_48,0);
  if ((int)uVar1 == 0) {
    __filename = local_28;
    if (((*local_28 == '/') && (local_28[1] != '\0')) &&
       ((local_28[2] == '|' || (local_28[2] == ':')))) {
      local_28[2] = ':';
      local_48 = local_48 - 1;
      __filename = local_28 + 1;
    }
    if (local_48 != 0) {
      uVar3 = 0;
      do {
        if (__filename[uVar3] == '/') {
          __filename[uVar3] = '\\';
        }
        else if (__filename[uVar3] == '\0') {
          FUN_00143300(local_28);
          return 3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_48);
    }
    pFVar2 = fopen(__filename,"rb");
    *puVar5 = __filename;
    puVar5[1] = local_28;
    puVar5[2] = pFVar2;
    if (((*(byte *)(lVar4 + 0xf63) >> 1 & 1) == 0) && (pFVar2 == (FILE *)0x0)) {
      FUN_0014d5f8(lVar4,"Couldn\'t open file %s",*(undefined8 *)(lVar4 + 0x15a0));
      FUN_0017975c(param_1,extraout_x1,0);
      uVar1 = 0x25;
    }
    else {
      uVar1 = 0;
      *param_2 = 1;
    }
  }
  return uVar1;
}

