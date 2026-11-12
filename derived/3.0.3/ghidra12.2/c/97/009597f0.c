
void FUN_009597f0(long *param_1,char param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  lVar1 = param_1[1];
  uVar3 = 0;
  do {
    if (*(char *)(lVar1 + uVar3) == '\0') {
LAB_00959850:
      iVar2 = (int)uVar3;
joined_r0x00959854:
      if (iVar2 < 1) {
        return;
      }
      if (uVar3 == 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (*(char *)(lVar1 + uVar4) == param_2) {
            *(undefined1 *)(lVar1 + uVar4) = 0;
          }
          if (*(char *)(lVar1 + uVar4 + 1) == param_2) {
            *(undefined1 *)(lVar1 + uVar4 + 1) = 0;
          }
          uVar4 = uVar4 + 2;
        } while ((uVar3 & 0xfffffffffffffffe) != uVar4);
      }
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(char *)(lVar1 + uVar4) == param_2) {
        *(undefined1 *)(lVar1 + uVar4) = 0;
        return;
      }
      return;
    }
    if (*(char *)(lVar1 + uVar3 + 1) == '\0') {
      uVar3 = uVar3 + 1;
      goto LAB_00959850;
    }
    if (*(char *)(lVar1 + uVar3 + 2) == '\0') {
      uVar3 = uVar3 + 2;
      iVar2 = (int)uVar3;
      goto joined_r0x00959854;
    }
    uVar3 = uVar3 + 3;
    if (uVar3 == 0x80001) {
      return;
    }
  } while( true );
}

