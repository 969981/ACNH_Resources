
undefined8
FUN_004bf4c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_70 [8];
  
  FUN_0043bd90(local_70,*param_3,param_3[1]);
  uVar1 = FUN_00427d40(param_2,local_70[0] & 0xfffffffffffffffe,0);
  FUN_0043be10(local_70);
  if (uVar1 < 2) {
    uVar5 = 0x80040200;
    if (DAT_04c716a0 != '\0') {
      FUN_00444bc0(local_70,&DAT_04c71650,1);
      lVar4 = FUN_004446b0(local_70,"Field {} not found applying patch {}",&DAT_04868548,param_3,
                           param_1);
      *(char **)(lVar4 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundle.cpp"
      ;
      *(undefined8 *)(lVar4 + 0x30) = 0x989;
      FUN_00444c00(local_70);
    }
  }
  else {
    uVar2 = FUN_004adce0(*param_4,*(int *)(param_4 + 1) - (int)*param_4);
    puVar3 = (undefined8 *)FUN_00426d40(uVar1,0x10000);
    uVar5 = 0;
    *puVar3 = uVar2;
  }
  return uVar5;
}

