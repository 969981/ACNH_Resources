
void FUN_01811060(int param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bb5ce0;
  lVar5 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xe48);
    if (iVar1 == 0x14) {
      iVar4 = *(int *)(lVar5 + 0xf64);
    }
    else if (iVar1 == 1) {
      iVar4 = 0;
    }
    else if ((iVar1 < 2) || (5 < iVar1)) {
      if ((iVar1 < 6) || (0x10 < iVar1)) {
        if ((iVar1 < 0x11) || (0x12 < iVar1)) {
          iVar3 = 1;
          if (iVar1 != 0x14) {
            iVar3 = 2;
          }
          iVar4 = 3;
          if (iVar1 != 0x13) {
            iVar4 = iVar3;
          }
        }
        else {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 1;
    }
    if (param_1 != iVar4) {
      if ((iVar1 == 0x14) && (*(int *)(lVar5 + 0xf64) = param_1, (param_2 & 1) != 0)) {
        FUN_017eff3c(lVar5 + 0xda0,0,0);
        lVar5 = *(long *)puVar2;
      }
      FUN_017f3100(lVar5 + 0xda0,1);
      FUN_017b6228(lVar5);
      return;
    }
  }
  return;
}

