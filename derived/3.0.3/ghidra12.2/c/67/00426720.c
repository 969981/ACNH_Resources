
void FUN_00426720(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_58;
  undefined *local_50;
  uint *puStack_48;
  uint local_34;
  
  local_34 = param_2;
  if (0x3fffffff < (int)param_2) {
    local_58 = 1;
    puStack_48 = &local_34;
    local_50 = &DAT_04853780;
    FUN_004223c0(0x4648a379,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x4c,"Invalid requestedCapacity {}",&local_58);
  }
  uVar2 = (*param_6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  uVar1 = local_34;
  if ((int)local_34 <= (int)uVar2) {
    uVar1 = uVar2;
  }
  FUN_004267f0(param_1,uVar1,param_3,param_4,param_5,param_6);
  return;
}

