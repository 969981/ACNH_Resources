
void FUN_00421f90(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 local_50;
  undefined *puStack_48;
  uint *local_40;
  uint *puStack_38;
  uint local_28;
  uint uStack_24;
  
  local_28 = param_4;
  uStack_24 = param_3;
  if ((int)(param_4 | param_3) < 0) {
    local_40 = &uStack_24;
    local_50 = 2;
    puStack_48 = &DAT_048534b8;
    puStack_38 = &local_28;
    FUN_004223c0(0x60b62fbd,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x3e,"Memory allocation request overflow {}*{}",&local_50);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,(long)(int)param_4 * (long)(int)param_3);
  return;
}

