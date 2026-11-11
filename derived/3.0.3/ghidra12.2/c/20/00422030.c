
void FUN_00422030(long *param_1,int param_2,int param_3)

{
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined *puStack_38;
  int *local_30;
  int *piStack_28;
  
  local_48 = param_3;
  iStack_44 = param_2;
  if ((param_2 < 0) || ((ulong)((long)param_3 * (long)param_2) >> 0x1f != 0)) {
    local_30 = &iStack_44;
    local_40 = 2;
    puStack_38 = &DAT_048534b8;
    piStack_28 = &local_48;
    FUN_004223c0(0x2f29d85e,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x5b,"Memory allocation request overflow {}*{}",&local_40);
  }
  (**(code **)(*param_1 + 0x10))(param_1,(long)(int)((long)param_3 * (long)param_2),0);
  return;
}

