
int FUN_001716a8(long param_1,uint param_2,undefined4 param_3,void *param_4,size_t param_5,
                undefined1 param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  
  if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
    lVar1 = param_1 + 0x890;
    if (param_5 == 0) {
      __dest = (void *)0x0;
LAB_00171740:
      lVar4 = FUN_001689e8(lVar1,0x98);
      if (lVar4 != 0) {
        FUN_0016bbec();
        uVar2 = *(uint *)(param_1 + 0x944);
        if ((int)param_2 <= (int)*(uint *)(param_1 + 0x944)) {
          uVar2 = param_2;
        }
        FUN_001676e8(lVar4,uVar2,param_3,__dest,param_5);
        *(undefined1 *)(lVar4 + 0x60) = param_6;
        iVar3 = FUN_0016ca1c(param_1,lVar4);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_00167710(lVar4,lVar1);
        FUN_001689f8(lVar1,lVar4);
        return iVar3;
      }
      FUN_001689f8(lVar1,__dest);
    }
    else {
      if (param_5 - 0x3ff9 < 0xffffffffffffbfff) goto LAB_00171710;
      __dest = (void *)FUN_001689e8(lVar1,param_5);
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,param_5);
        goto LAB_00171740;
      }
    }
    iVar3 = -0x385;
  }
  else {
LAB_00171710:
    iVar3 = -0x1f5;
  }
  return iVar3;
}

