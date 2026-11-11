
void FUN_00421ed0(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  long local_50;
  undefined *puStack_48;
  int *local_40;
  int *piStack_38;
  int local_24;
  
  iVar1 = *param_3;
  local_24 = param_2;
  if ((param_2 < 0) || ((ulong)((long)iVar1 * (long)param_2) >> 0x1f != 0)) {
    local_50 = 2;
    puStack_48 = &DAT_048534b8;
    local_40 = &local_24;
    piStack_38 = param_3;
    FUN_004223c0(0xc69ddef,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x32,"Memory allocation request overflow {}*{}",&local_50);
  }
  local_50 = (long)(int)((long)iVar1 * (long)param_2);
  (**(code **)(*param_1 + 0x10))(param_1,local_50,&local_50);
  iVar1 = 0;
  if (local_24 != 0) {
    iVar1 = (int)local_50 / local_24;
  }
  *param_3 = iVar1;
  return;
}

