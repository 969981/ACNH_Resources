
undefined8 FUN_00422160(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *local_30;
  long local_28;
  undefined *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_30 = &DAT_0407ebb1;
  if (param_2 != (undefined8 *)0x0) {
    local_30 = param_2;
  }
  local_28 = 1;
  local_20 = &DAT_048534d0;
  FUN_004223c0(0xdeadf00d,
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
               ,0x6c,"Out of memory {}",&local_28);
  return 0;
}

