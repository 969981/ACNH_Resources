
int FUN_0016cb78(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001726f0();
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar2 + 0xdc) != 3))
  {
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) &&
       ((lVar2 = *(long *)(param_1 + 0x138), lVar2 != 0 &&
        ((*(int *)(lVar2 + 8) <= (int)param_2 && (param_2 < *(uint *)(param_1 + 0x930))))))) {
      do {
        if ((int)param_2 <= *(int *)(lVar2 + 8)) {
          if ((*(int *)(lVar2 + 8) <= (int)param_2) && (*(char *)(lVar2 + 0x7c) == '\0')) {
            *(undefined4 *)(lVar2 + 0x78) = param_3;
            *(undefined1 *)(lVar2 + 0x7c) = 1;
            return 0;
          }
          break;
        }
        lVar2 = *(long *)(lVar2 + 0x88);
      } while (lVar2 != 0);
    }
    lVar2 = FUN_001689e8(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_0016bbec();
      FUN_00167644(lVar2,param_2,param_3);
      iVar1 = FUN_0016ca1c(param_1,lVar2);
      if (iVar1 != 0) {
        FUN_00167664(lVar2);
        FUN_001689f8(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

