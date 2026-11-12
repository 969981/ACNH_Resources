
void FUN_006d4ee8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR_DAT_04bb29d0;
  uVar1 = nn::os::ConvertToTimeSpan
                    ((long)(uVar3 << 5) / 1000 + ((long)(uVar3 << 5) >> 0x3f) +
                     ((uVar3 & 0x7ffffffffffffff) >> 0x3a));
  uVar2 = nn::os::TimedWaitLightEvent(param_1 + 0x128,uVar1);
  if ((uVar2 & 1) == 0) {
    nn::os::ConvertToTimeSpan((long)uVar3 / 0x7d);
    nn::os::SleepThread();
    return;
  }
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x1f0));
  *(undefined1 *)(param_1 + 0x200) = 1;
  thunk_FUN_00691840(param_1 + 0x178);
  *(undefined1 *)(param_1 + 0x200) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f0));
  return;
}

