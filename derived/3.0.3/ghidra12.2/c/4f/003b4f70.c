
void FUN_003b4f70(undefined1 *param_1)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  FUN_003b76a0(param_1 + 0x530);
  FUN_003c4648(param_1 + 0x558);
  *(undefined **)(param_1 + 0x558) = PTR_DAT_04bd0590 + 0x10;
  FUN_003c301c(param_1 + 0x5a8);
  FUN_003c301c(param_1 + 0x6a0);
  FUN_003c301c(param_1 + 0x798);
  *(undefined2 *)(param_1 + 0x8a0) = 0;
  *(undefined1 **)(param_1 + 0x890) = param_1 + 0x890;
  *(undefined1 **)(param_1 + 0x898) = param_1 + 0x890;
  *(undefined8 *)(param_1 + 0x8a4) = 0;
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8a0),true,0);
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x950) = 0x10000000100;
  *(undefined2 *)(param_1 + 0x960) = 0;
  *(undefined8 *)(param_1 + 0x964) = 0;
  *(undefined8 *)(param_1 + 0x970) = 0;
  *(undefined4 *)(param_1 + 0x978) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x960),true,0);
  *(undefined2 *)(param_1 + 0x980) = 0;
  *(undefined8 *)(param_1 + 0x984) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x998) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x980),true,0);
  *(undefined2 *)(param_1 + 0x9a0) = 0;
  *(undefined8 *)(param_1 + 0x9a4) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x9a0),true,0);
  *(undefined2 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0x9c4) = 0;
  *(undefined8 *)(param_1 + 0x9d0) = 0;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x9c0),true,0);
  *(undefined2 *)(param_1 + 0x9e0) = 0;
  *(undefined8 *)(param_1 + 0x9e4) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x9e0),true,0);
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf8) = 0x3f80000000000000;
  param_1[0xa20] = 0;
  *(undefined8 *)(param_1 + 0xa38) = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  param_1[0xa66] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0x400000004;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f80000000000002;
  nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)(param_1 + 0x8c0));
  param_1[0x8e0] = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0xf00000bb80;
  *(undefined8 *)(param_1 + 0x8d0) = 0x100000060;
  *(undefined8 *)(param_1 + 0x8c8) = 0x10000001e;
  *(undefined8 *)(param_1 + 0x8d8) = 0xe;
  uVar1 = nn::audio::IsValidAudioRendererParameter((AudioRendererParameter *)(param_1 + 0x8c0));
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return;
}

