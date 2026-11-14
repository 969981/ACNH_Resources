
void FUN_015db180(long param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  DataMemoryBarrier(2,3);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa08));
  if (*(char *)(param_1 + 0x11) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0x40));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    nn::audio::StopAudioOut((AudioOut *)(param_1 + 0x200));
    nn::audio::CloseAudioOut((AudioOut *)(param_1 + 0x200));
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x998);
  if (0 < iVar2) {
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x990) <= *(int *)(param_1 + 0x994)) {
        iVar1 = *(int *)(param_1 + 0x990);
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x78))
                (*(long **)(param_1 + 8),
                 *(undefined4 *)
                  (*(long *)(param_1 + 0x988) + (long)(*(int *)(param_1 + 0x994) - iVar1) * 0x18));
      if (0 < *(int *)(param_1 + 0x998)) {
        *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x998) + -1;
        iVar1 = 0;
        if (*(int *)(param_1 + 0x994) + 1 < *(int *)(param_1 + 0x990)) {
          iVar1 = *(int *)(param_1 + 0x994) + 1;
        }
        *(int *)(param_1 + 0x994) = iVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

