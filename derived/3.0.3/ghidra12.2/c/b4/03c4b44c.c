
void FUN_03c4b44c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  undefined4 *puVar5;
  long lVar6;
  AudioDeviceName *pAVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10), lVar6 != 0)) {
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x30) + 0xf0))();
    if (0.0 <= *pfVar4) {
      *(float *)(lVar6 + 0x10) = *pfVar4;
    }
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x60) + 0xf0))();
    puVar1 = PTR_DAT_04bd1e70;
    fVar10 = *pfVar4;
    if (DAT_05aebc00 == '\0') {
      bVar2 = false;
      bVar3 = true;
      if (0.0 <= fVar10) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar10)) {
          bVar2 = fVar10 == 128.0;
          bVar3 = 128.0 <= fVar10;
        }
      }
      if (!bVar3 || bVar2) {
        nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb720,fVar10);
      }
    }
    else {
      bVar2 = false;
      bVar3 = true;
      if (0.0 <= fVar10) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar10)) {
          bVar2 = fVar10 == 128.0;
          bVar3 = 128.0 <= fVar10;
        }
      }
      pAVar7 = *(AudioDeviceName **)(*(long *)PTR_DAT_04bd1e70 + 0x160);
      if (!bVar3 || bVar2) {
        nn::audio::SetAudioDeviceOutputVolume(pAVar7,fVar10);
        *(float *)(pAVar7 + 0x300) = fVar10;
      }
    }
    *(float *)(lVar6 + 0x3c) = fVar10;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x90) + 0xf0))();
    fVar10 = *pfVar4;
    if (DAT_05aebc00 == '\0') {
      if ((0.0 <= fVar10) && (fVar10 <= 128.0)) {
        nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb920,fVar10);
      }
    }
    else {
      lVar8 = *(long *)(*(long *)puVar1 + 0x160);
      if ((0.0 <= fVar10) && (fVar10 <= 128.0)) {
        nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar8 + 0x100),fVar10);
        *(float *)(lVar8 + 0x304) = fVar10;
      }
    }
    *(float *)(lVar6 + 0x40) = fVar10;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
    fVar10 = *pfVar4;
    if (DAT_05aebc00 == '\0') {
      if ((0.0 <= fVar10) && (fVar10 <= 128.0)) {
        nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb820,fVar10);
      }
    }
    else {
      lVar8 = *(long *)(*(long *)puVar1 + 0x160);
      if ((0.0 <= fVar10) && (fVar10 <= 128.0)) {
        nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar8 + 0x200),fVar10);
        *(float *)(lVar8 + 0x308) = fVar10;
      }
    }
    *(float *)(lVar6 + 0x44) = fVar10;
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0xf0) + 0xf0))((long *)(param_1 + 0xf0))
    ;
    *(undefined4 *)(lVar6 + 0x38) = *puVar5;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x120) + 0xf0))(param_1 + 0x120);
    fVar10 = *pfVar4;
    lVar8 = (**(code **)(*(long *)(param_1 + 0x120) + 0xf0))(param_1 + 0x120);
    if ((0.0 < fVar10) && (fVar9 = *(float *)(lVar8 + 4), fVar10 <= fVar9)) {
      *(float *)(lVar6 + 0x30) = fVar10;
      *(float *)(lVar6 + 0x34) = fVar9;
    }
    FUN_03c4b1a0(0,param_1 + 400,*(undefined8 *)(lVar6 + 8));
  }
  lVar6 = *(long *)PTR_DAT_04bd1eb8;
  if (lVar6 != 0) {
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x158) + 0xf0))(param_1 + 0x158);
    fVar10 = *pfVar4;
    lVar8 = (**(code **)(*(long *)(param_1 + 0x158) + 0xf0))(param_1 + 0x158);
    fVar9 = *(float *)(lVar8 + 4);
    *(float *)(lVar6 + 0x30) = fVar10;
    *(float *)(lVar6 + 0x28) = fVar10;
    *(float *)(lVar6 + 0x2c) = fVar10;
    *(undefined4 *)(lVar6 + 0x34) = 0;
    *(float *)(lVar6 + 0x50) = fVar10;
    *(undefined4 *)(lVar6 + 0x4c) = 0;
    if (0.0 <= fVar9) {
      fVar10 = fVar9;
    }
    *(float *)(lVar6 + 0x48) = fVar10;
    *(float *)(lVar6 + 0x40) = fVar10;
    *(float *)(lVar6 + 0x44) = fVar10;
    *(float *)(lVar6 + 0x54) = fVar10;
  }
  return;
}

