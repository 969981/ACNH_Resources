
ulong FUN_03087f70(long param_1,short *param_2)

{
  uint uVar1;
  ulong uVar2;
  short local_24 [2];
  
  if (*param_2 != *(short *)PTR_DAT_04bb3170) {
    FUN_007ef010(local_24,&DAT_04cb6038);
    uVar2 = FUN_007ef180(param_2);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0x1738);
      if (0 < (int)uVar1) {
        uVar2 = 0;
        while (FUN_0344cd00(local_24,**(undefined4 **)(*(long *)(param_1 + 0x1740) + uVar2 * 8),0),
              local_24[0] != *param_2) {
          uVar2 = uVar2 + 1;
          if (uVar1 == uVar2) {
            return 0xffffffff;
          }
        }
        goto LAB_03088078;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x1d98);
      if (0 < (int)uVar1) {
        uVar2 = 0;
        while (FUN_0344cd00(local_24,**(undefined4 **)(*(long *)(param_1 + 0x1da0) + uVar2 * 8),1),
              local_24[0] != *param_2) {
          uVar2 = uVar2 + 1;
          if (uVar1 == uVar2) {
            return 0xffffffff;
          }
        }
LAB_03088078:
        return uVar2 & 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}

