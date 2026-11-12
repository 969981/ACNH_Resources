
void nninitStartup(void)

{
  ulong uVar1;
  long local_58;
  long lStack_50;
  ulong local_8;
  
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_58);
  uVar1 = local_58 - lStack_50 & 0xffffffffffe00000;
  nn::os::SetMemoryHeapSize(uVar1);
  *PTR_DAT_04bd2dc0 = 0x100000000 < uVar1;
  nn::os::AllocateMemoryBlock(&local_8,0x2000000);
  FUN_00347860(local_8,0x2000000);
  return;
}

