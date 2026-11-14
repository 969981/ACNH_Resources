
undefined8 FUN_01dbdedc(long *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte local_34 [4];
  long local_30;
  long lStack_28;
  
  if ((((*param_1 != 0) && (param_1[2] != 0)) && (local_34[0] = *param_2, local_34[0] < 8)) &&
     ((uVar1 = FUN_007b36c8(&local_30,local_34), (uVar1 & 1) != 0 &&
      (**(long **)(DAT_053719b8 + 8) == local_30 && (*(long **)(DAT_053719b8 + 8))[1] == lStack_28))
     )) {
    lVar2 = param_1[2];
    if (*(int *)(*param_1 + 0x508) == 4) {
      if (*(int *)(lVar2 + 0x3e4) != 1) goto LAB_01dbdf48;
      uVar1 = FUN_01d4d788(lVar2,param_3);
    }
    else {
      uVar1 = FUN_01d4c158(lVar2,*(undefined4 *)(lVar2 + 0xaa8),param_3);
    }
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
LAB_01dbdf48:
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 8) = 0x32ffffffff;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return 0;
}

