
void FUN_004220c0(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  int *piStack_38;
  int local_28;
  int iStack_24;
  
  local_28 = param_4;
  iStack_24 = param_3;
  if ((param_3 < 0) || ((ulong)((long)param_4 * (long)param_3) >> 0x1f != 0)) {
    local_40 = &iStack_24;
    local_50 = 2;
    puStack_48 = &DAT_048534b8;
    piStack_38 = &local_28;
    FUN_004223c0(0x39ec3d88,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x65,"Memory allocation request overflow {}*{}",&local_50);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,(long)(int)((long)param_4 * (long)param_3));
  return;
}

