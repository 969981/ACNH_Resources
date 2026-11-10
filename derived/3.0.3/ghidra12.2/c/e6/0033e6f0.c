
void FUN_0033e6f0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x16f8);
  if (lVar2 == 0 || *(char *)(param_1 + 0x89) == '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x1d0) + (ulong)param_2 * 0x30;
  if ((int)param_2 < 0) {
    lVar1 = 0;
  }
  do {
    if (((*(long *)(lVar2 + 0x78) != 0) && ((*(uint *)(lVar2 + 0x674) & param_5) != 0)) &&
       (*(char *)(*(long *)(lVar2 + 0xa0) + 0x792) == '\x02')) {
      FUN_0031f2e4(*(undefined8 *)(lVar2 + 0x98),param_3,lVar2,
                   *(undefined8 *)(*(long *)(lVar2 + 0x240) + 0x368),
                   *(undefined4 *)(*(long *)(lVar2 + 0x78) + 0x290),1,param_4,0,lVar1);
    }
    lVar2 = *(long *)(lVar2 + 0x90);
  } while (lVar2 != 0);
  FUN_00348a0c(param_3,0x40);
  return;
}

