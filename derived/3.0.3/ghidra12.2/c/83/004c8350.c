
undefined4 FUN_004c8350(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  if (*param_2 != param_2[1]) {
    lVar1 = FUN_004ca6b0();
    if (lVar1 != 0) {
      lVar1 = (long)*(int *)(lVar1 + 4);
      lVar2 = *param_1;
      if (lVar2 + lVar1 * 0x10 != 0) goto LAB_004c83d0;
    }
    lStack_58 = FUN_00429910(param_2,0x3c,0);
    if (lStack_58 == 0) {
      local_60 = *param_2;
      lStack_58 = param_2[1];
      local_50 = 0;
      lStack_48 = 0;
    }
    else {
      local_60 = *param_2;
      lStack_48 = param_2[1];
      local_50 = lStack_58 + 1;
      lVar1 = FUN_004ca6b0(param_1,&local_60);
      if (lVar1 != 0) {
        lVar1 = (long)*(int *)(lVar1 + 4);
        lVar2 = *param_1;
        if (lVar2 + lVar1 * 0x10 != 0) {
LAB_004c83d0:
          return *(undefined4 *)(lVar2 + lVar1 * 0x10 + 8);
        }
      }
    }
    if (DAT_04c717f8 != '\0') {
      FUN_00444bc0(&local_60,&DAT_04c717a8,1);
      lVar1 = FUN_004446b0(&local_60,"Patch {} is missing a DEPENDS component for {}",DAT_04bd5b38,
                           param_1[4],param_2);
      *(char **)(lVar1 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
      ;
      *(undefined8 *)(lVar1 + 0x30) = 0x810;
      FUN_00444c00(&local_60);
    }
  }
  return 0xffffffff;
}

