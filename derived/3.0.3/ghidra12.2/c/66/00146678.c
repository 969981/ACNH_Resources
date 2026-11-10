
int FUN_00146678(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0xf98) = 0;
  iVar1 = FUN_001466d0();
  if (iVar1 == 0) {
    if (((*(byte *)(lVar2 + 0xfcc) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x111c) & 1) == 0)) {
      FUN_00146338(*(undefined8 *)(lVar2 + 0x668),&DAT_040c2970);
    }
    *(undefined4 *)(lVar2 + 0x1118) = 0;
  }
  return iVar1;
}

