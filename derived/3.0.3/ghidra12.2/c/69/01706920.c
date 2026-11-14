
ulong FUN_01706920(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  lVar3 = param_1[1];
  uVar2 = 0;
  do {
    if (*(char *)(lVar3 + uVar2) == '\0') {
LAB_01706980:
      iVar1 = (int)uVar2;
joined_r0x01706984:
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      uVar4 = 0;
      do {
        if (*(char *)(lVar3 + uVar4) == '_') {
          return uVar4 & 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      return 0xffffffff;
    }
    if (*(char *)(lVar3 + uVar2 + 1) == '\0') {
      uVar2 = uVar2 + 1;
      goto LAB_01706980;
    }
    if (*(char *)(lVar3 + uVar2 + 2) == '\0') {
      uVar2 = uVar2 + 2;
      iVar1 = (int)uVar2;
      goto joined_r0x01706984;
    }
    uVar2 = uVar2 + 3;
    if (uVar2 == 0x80001) {
      return 0xffffffff;
    }
  } while( true );
}

