
ulong FUN_02d6cf20(short *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  short local_24 [2];
  
  if (*param_1 != DAT_04cb6038) {
    FUN_007ef010(local_24,&DAT_04cb6038);
    uVar2 = FUN_007ef180(param_1);
    if ((uVar2 & 1) == 0) {
      uVar1 = *param_2;
      if (0 < (int)uVar1) {
        uVar2 = 0;
        while (FUN_0344d0c0(local_24,**(undefined4 **)(*(long *)(param_2 + 2) + uVar2 * 8),0),
              local_24[0] != *param_1) {
          uVar2 = uVar2 + 1;
          if (uVar1 == uVar2) {
            return 0xffffffff;
          }
        }
        goto LAB_02d6d028;
      }
    }
    else {
      uVar1 = *param_3;
      if (0 < (int)uVar1) {
        uVar2 = 0;
        while (FUN_0344d0c0(local_24,**(undefined4 **)(*(long *)(param_3 + 2) + uVar2 * 8),1),
              local_24[0] != *param_1) {
          uVar2 = uVar2 + 1;
          if (uVar1 == uVar2) {
            return 0xffffffff;
          }
        }
LAB_02d6d028:
        return uVar2 & 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}

