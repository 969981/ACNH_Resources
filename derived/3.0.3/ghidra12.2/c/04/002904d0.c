
void FUN_002904d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::ConvertToTimeSpan(param_2);
  nn::os::TimedWaitEvent(param_1 + 0x20,uVar1);
  return;
}

