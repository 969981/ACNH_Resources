
void FUN_00426b50(long *param_1,undefined8 *param_2,int param_3,void *param_4,uint param_5)

{
  size_t __n;
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  uint local_5c;
  ulong local_58;
  undefined *local_50;
  uint *puStack_48;
  
  local_5c = param_5;
  if (0x3fffffff < (int)param_5) {
    local_58 = 1;
    puStack_48 = &local_5c;
    local_50 = &DAT_04853780;
    FUN_004223c0(0x159079fc,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0xac,"Invalid requestedCapacity {}",&local_58);
  }
  if ((param_4 == (void *)0x0) || ((int)local_5c <= *(int *)(param_2 + 1))) {
    local_58 = (long)(int)local_5c * (long)param_3;
    uVar2 = (ulong)param_3;
    uVar1 = (long)*(int *)((long)param_2 + 0xc) * uVar2;
    __src = (void *)*param_2;
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
    __n = uVar1;
    if (local_58 <= uVar1) {
      __n = local_58;
    }
    memcpy(__dest,__src,__n);
    (**(code **)(*param_1 + 0x18))(param_1,__src,uVar1);
    *param_2 = __dest;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = local_58 / uVar2;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    *(int *)((long)param_2 + 0xc) = (int)uVar1;
  }
  else {
    memcpy(param_4,(void *)*param_2,(long)*(int *)(param_2 + 1) * (long)param_3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x3fffffff) * (long)param_3
              );
    *param_2 = param_4;
    *(uint *)((long)param_2 + 0xc) = local_5c | 0x80000000;
  }
  return;
}

