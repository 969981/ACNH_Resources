
void FUN_03b41c5c(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar4 = nn::os::TryWaitSystemEvent((SystemEventType *)(param_1 + 0x50));
  if ((uVar4 & 1) != 0) {
    nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(param_1 + 0x90));
    iVar3 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
    FUN_03b41b00(param_1);
    iVar2 = *(int *)(param_1 + 0x80);
    if (iVar2 != iVar3) {
      *(int *)(param_1 + 0x80) = iVar3;
      uVar1 = 2;
      if (iVar3 != 6) {
        uVar1 = iVar3 != 1;
      }
      FUN_03b41cfc(param_1,uVar1,0);
      puVar5 = *(undefined8 **)(param_1 + 0x88);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,iVar2,*(undefined4 *)(param_1 + 0x80));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03b41cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}

