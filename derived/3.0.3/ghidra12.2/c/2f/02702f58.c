
undefined8 FUN_02702f58(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = DAT_05ae7790;
  if ((*(long *)PTR_DAT_04bb2118 == 0) ||
     (((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
      (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4)))) {
    if (DAT_05ae7790 == 0) {
      if (*(int *)(param_1 + 0x508) == 0) goto LAB_02702fd0;
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      if (*(long *)(lVar1 + 0x60) == lVar2 && *(int *)(param_1 + 0x508) == 0) {
LAB_02702fd0:
        *(byte *)(param_1 + 0x50c) = *(byte *)(param_1 + 0x50c) & 0xfb;
        *(byte *)(param_1 + 0x50d) = *(byte *)(param_1 + 0x50d) & 0xfb;
        *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) & 0xfb;
        *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) & 0xfb;
        *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) & 0xfb;
        uVar3 = param_2 + 2;
        if (2 < param_2) {
          uVar3 = 4;
        }
        *(int *)(param_1 + 0x508) = 1 << (ulong)(uVar3 & 0x1f);
        return 1;
      }
    }
  }
  return 0;
}

