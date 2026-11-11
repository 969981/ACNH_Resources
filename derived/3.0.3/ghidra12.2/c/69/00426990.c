
void FUN_00426990(long *param_1,undefined8 *param_2,uint param_3)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *__src;
  ulong uVar4;
  ulong local_68;
  undefined8 local_60;
  undefined *local_58;
  uint *local_50;
  uint *puStack_48;
  uint local_38;
  uint local_34;
  
  iVar1 = *(int *)(param_2 + 1);
  local_38 = iVar1 << 1;
  if (iVar1 == 0) {
    local_38 = 1;
  }
  local_34 = param_3;
  if ((0x3fffffff < (int)local_38) && (local_38 = 0x3fffffff, iVar1 == 0x3fffffff)) {
    local_60 = 1;
    local_50 = &local_38;
    local_58 = &DAT_04853780;
    FUN_004223c0(0x25c61715,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x8d,"Cannot reserve more than current size {}",&local_60);
  }
  local_68 = (long)(int)local_34 * (long)(int)local_38;
  if ((int)(local_34 | local_38) < 0) {
    local_50 = &local_38;
    local_60 = 2;
    local_58 = &DAT_048534b8;
    puStack_48 = &local_34;
    FUN_004223c0(0x55e93b75,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x94,"Array size overflow {}*{}",&local_60);
    uVar2 = *(uint *)((long)param_2 + 0xc);
  }
  else {
    uVar2 = *(uint *)((long)param_2 + 0xc);
  }
  if ((int)uVar2 < 0) {
    pvVar3 = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    memcpy(pvVar3,(void *)*param_2,(long)(int)local_34 * (long)*(int *)(param_2 + 1));
    *param_2 = pvVar3;
  }
  else {
    uVar4 = ((ulong)uVar2 & 0x3fffffff) * (long)(int)local_34;
    __src = (void *)*param_2;
    pvVar3 = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    __n = uVar4;
    if (local_68 <= uVar4) {
      __n = local_68;
    }
    memcpy(pvVar3,__src,__n);
    (**(code **)(*param_1 + 0x18))(param_1,__src,uVar4);
    *param_2 = pvVar3;
  }
  uVar4 = 0;
  if ((long)(int)local_34 != 0) {
    uVar4 = local_68 / (ulong)(long)(int)local_34;
  }
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  *(int *)((long)param_2 + 0xc) = (int)uVar4;
  return;
}

