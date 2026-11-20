
void FUN_03ffb480(long param_1)

{
  undefined8 *puVar1;
  MemoryPoolType *pMVar2;
  ulong uVar3;
  int local_44;
  
  if ((*(byte *)(param_1 + 0xb51c0) & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0xb51c0) = 0;
  puVar1 = (undefined8 *)(param_1 + 0xb1048);
  nn::os::WaitThread((ThreadType *)(param_1 + 0xb5000));
  nn::os::DestroyThread((ThreadType *)(param_1 + 0xb5000));
  *(undefined4 *)(param_1 + 0xb51cc) = 1;
  nn::audio::SetVoicePlayState((VoiceType *)(param_1 + 0xb10f0),1);
  pMVar2 = (MemoryPoolType *)(param_1 + 0xb10d8);
  nn::audio::RequestDetachMemoryPool(pMVar2);
  do {
    uVar3 = nn::audio::IsMemoryPoolAttached(pMVar2);
    if ((uVar3 & 1) == 0) {
      nn::audio::ReleaseMemoryPool((AudioRendererConfig *)(param_1 + 0xb1058),pMVar2);
      nn::audio::StopAudioRenderer(*puVar1,*(undefined8 *)(param_1 + 0xb1050));
      nn::audio::CloseAudioRenderer(*puVar1,*(undefined8 *)(param_1 + 0xb1050));
      nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0xb10f8));
      if (*(long *)(param_1 + 0xb10e0) != 0) {
        nn::mem::StandardAllocator::Free((void *)(param_1 + 0xb1000));
        *(undefined8 *)(param_1 + 0xb10e0) = 0;
      }
      if (*(long *)(param_1 + 0xb10e8) != 0) {
        nn::mem::StandardAllocator::Free((void *)(param_1 + 0xb1000));
        *(undefined8 *)(param_1 + 0xb10e8) = 0;
      }
      nn::mem::StandardAllocator::Finalize();
      nn::mem::StandardAllocator::Finalize();
      return;
    }
    nn::audio::GetReleasedWaveBuffer((VoiceType *)(param_1 + 0xb10f0));
    nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0xb10f8));
    local_44 = nn::audio::RequestUpdateAudioRenderer
                         (*puVar1,*(undefined8 *)(param_1 + 0xb1050),
                          (AudioRendererConfig *)(param_1 + 0xb1058));
  } while (local_44 == 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl((Result *)&local_44);
}

