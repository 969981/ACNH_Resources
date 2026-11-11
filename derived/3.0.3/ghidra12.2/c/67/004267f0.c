
void * FUN_004267f0(long *param_1,uint param_2,uint param_3,void *param_4,int param_5,uint *param_6)

{
  size_t __n;
  void *__dest;
  uint uVar1;
  ulong uVar2;
  ulong local_68 [2];
  undefined *local_58;
  uint *local_50;
  uint *puStack_48;
  uint local_38;
  uint local_34;
  
  local_68[0] = (long)(int)param_3 * (long)(int)param_2;
  local_38 = param_3;
  local_34 = param_2;
  if ((int)(param_3 | param_2) < 0) {
    local_50 = &local_34;
    local_68[1] = 2;
    local_58 = &DAT_048534b8;
    puStack_48 = &local_38;
    FUN_004223c0(0x1bd2a77e,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,100,"Array size overflow {}*{}",local_68 + 1);
  }
  uVar1 = *param_6;
  uVar2 = (ulong)uVar1;
  if ((int)local_34 < (int)(uVar2 & 0x3fffffff) || 0x3fffffff < (int)local_34) {
    local_68[1] = 1;
    local_50 = &local_34;
    local_58 = &DAT_04853780;
    FUN_004223c0(0x65816502,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x6b,"Invalid requestedCapacity {}",local_68 + 1);
    uVar1 = *param_6;
  }
  if ((int)uVar1 < 0) {
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_68[0],local_68);
    memcpy(__dest,param_4,(long)(int)local_38 * (long)param_5);
  }
  else {
    uVar2 = (long)(int)local_38 * (uVar2 & 0x3fffffff);
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_68[0],local_68);
    __n = uVar2;
    if (local_68[0] <= uVar2) {
      __n = local_68[0];
    }
    memcpy(__dest,param_4,__n);
    (**(code **)(*param_1 + 0x18))(param_1,param_4,uVar2);
  }
  uVar2 = 0;
  if ((long)(int)local_38 != 0) {
    uVar2 = local_68[0] / (ulong)(long)(int)local_38;
  }
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  *param_6 = (uint)uVar2;
  return __dest;
}

