
void FUN_014e2b30(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xfc8) != 0 && *(char *)(param_1 + 0xfcc) == '\0') {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x5d0) * 0x740;
    if (7 < *(byte *)(param_1 + 0x5d0)) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(int *)(param_1 + 0xfc8) == 1) {
      lVar2 = lVar1 + 0x658;
      *(undefined4 *)(lVar1 + 0x5b4) = 3;
    }
    else {
      if (*(int *)(param_1 + 0xfc8) != 2) goto LAB_014e2bac;
      lVar2 = lVar1 + 0xb0;
      *(undefined4 *)(lVar1 + 0xc) = 3;
    }
    FUN_01393458(lVar2);
  }
LAB_014e2bac:
  *(undefined4 *)(param_1 + 0xfc8) = 0;
  *(undefined1 *)(param_1 + 0xfcc) = 0;
  *(undefined4 *)(param_1 + 0xa24) = 0;
  return;
}

