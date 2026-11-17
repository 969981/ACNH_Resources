
undefined4 FUN_02a55160(void)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 local_248;
  char *local_240;
  undefined *local_148;
  char *local_140;
  int local_138;
  char local_134 [255];
  undefined1 local_35;
  
  local_35 = 0;
  local_138 = 0x100;
  local_140 = local_134;
  local_134[0] = '\0';
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)&local_248);
  pcVar3 = local_140;
  if (local_140 != (char *)&local_248) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_248 + lVar5) == '\0') goto LAB_02a551fc;
      if (*(char *)((long)&local_248 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02a551fc;
      }
      if (*(char *)((long)&local_248 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02a551fc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02a551fc:
    iVar1 = (int)lVar5;
    if (local_138 <= (int)lVar5) {
      iVar1 = local_138 + -1;
    }
    memcpy(local_140,&local_248,(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  puVar2 = PTR_DAT_04bb2020;
  local_248 = PTR_DAT_04bb2020 + 0x10;
  local_240 = "AudioTvOutput";
  (**(code **)(local_148 + 0x18))(&local_148);
  (**(code **)(local_148 + 0x18))(&local_148);
  pcVar3 = local_140;
  (**(code **)(local_248 + 0x18))(&local_248);
  if (pcVar3 == local_240) {
LAB_02a552c0:
    uVar7 = 0x3f800000;
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      if (local_140[uVar6] != local_240[uVar6]) break;
      if (local_140[uVar6] == '\0') {
        if (bVar4) goto LAB_02a552c0;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    local_248 = puVar2 + 0x10;
    local_240 = "AudioStereoJackOutput";
    (**(code **)(local_148 + 0x18))(&local_148);
    (**(code **)(local_148 + 0x18))(&local_148);
    pcVar3 = local_140;
    (**(code **)(local_248 + 0x18))(&local_248);
    if (pcVar3 != local_240) {
      uVar6 = 0;
      bVar4 = true;
      do {
        if (local_140[uVar6] != local_240[uVar6]) break;
        if (local_140[uVar6] == '\0') {
          if (bVar4) goto LAB_02a554a0;
          break;
        }
        bVar4 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      (**(code **)(local_148 + 0x18))(&local_148);
      (**(code **)(local_148 + 0x18))(&local_148);
      if (local_140 != "AudioBuiltInSpeakerOutput") {
        uVar6 = 0;
        bVar4 = true;
        do {
          if (local_140[uVar6] != "AudioBuiltInSpeakerOutput"[uVar6]) break;
          if (local_140[uVar6] == '\0') {
            if (bVar4) goto LAB_02a554a0;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        (**(code **)(local_148 + 0x18))(&local_148);
        (**(code **)(local_148 + 0x18))(&local_148);
        if (local_140 != "AudioUsbDeviceOutput") {
          uVar6 = 0;
          bVar4 = true;
          do {
            if (local_140[uVar6] != "AudioUsbDeviceOutput"[uVar6]) break;
            if (local_140[uVar6] == '\0') {
              if (bVar4) goto LAB_02a554a0;
              break;
            }
            bVar4 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          (**(code **)(local_148 + 0x18))(&local_148);
          (**(code **)(local_148 + 0x18))(&local_148);
          if (local_140 != "AudioExternalOutput") {
            uVar6 = 0;
            bVar4 = true;
            while( true ) {
              if (local_140[uVar6] != "AudioExternalOutput"[uVar6]) {
                return 0x3f800000;
              }
              if (local_140[uVar6] == '\0') break;
              bVar4 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
              if (uVar6 == 0x80001) {
                return 0x3f800000;
              }
            }
            if (!bVar4) {
              return 0x3f800000;
            }
          }
        }
      }
    }
LAB_02a554a0:
    uVar7 = DAT_055f74e0;
  }
  return uVar7;
}

