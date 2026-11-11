
undefined8 FUN_004bf0f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_70 [2];
  ulong local_60;
  
  FUN_0043bd90(local_70,*param_3,param_3[1]);
  uVar1 = FUN_00427d40(param_2,local_70[0] & 0xfffffffffffffffe,0);
  FUN_0043be10(local_70);
  if (uVar1 < 2) {
    uVar4 = 0x80040200;
    if (DAT_04c716a0 != '\0') {
      FUN_00444bc0(local_70,&DAT_04c71650,1);
      lVar3 = FUN_004446b0(local_70,"Field {} not found applying patch {}",&DAT_04868548,param_3,
                           param_1);
      *(char **)(lVar3 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundle.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x30) = 0x953;
      *(undefined4 *)(lVar3 + 0xc) = 0xa71bbc07;
      FUN_00444c00(local_70);
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_00426d40(uVar1,0x10000);
    *puVar2 = 0;
    FUN_00427bc0(local_70,uVar1,&DAT_04c172e8);
    if ((local_60 & 1) != 0) {
      FUN_0043dd50(local_60 & 0xfffffffffffffffe);
    }
    if (local_70[0] != 0) {
      FUN_0043bf00(local_70[0],*param_3,param_3[1]);
    }
    uVar4 = 0;
  }
  return uVar4;
}

