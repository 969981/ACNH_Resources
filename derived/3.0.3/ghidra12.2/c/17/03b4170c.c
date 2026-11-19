
void FUN_03b4170c(int *param_1,undefined8 param_2,int *param_3,undefined1 *param_4,long *param_5)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  AudioDeviceName *pAVar13;
  long lVar14;
  float fVar15;
  undefined4 local_70 [2];
  undefined *local_68;
  int local_60 [2];
  undefined *local_58;
  
  puVar5 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar9 = malloc(0x38);
  }
  else {
    plVar9 = param_5;
    if (param_5 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar14 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_03b417a0;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x38,8);
  }
LAB_03b417a0:
  plVar9[2] = 0;
  plVar9[3] = 0;
  puVar6 = PTR_DAT_04bd2270;
  *(undefined4 *)(plVar9 + 4) = 0x3f800000;
  plVar9[5] = 0;
  plVar9[6] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  FUN_03bac434(plVar9,0,param_5);
  local_60[0] = 1;
  local_58 = &DAT_04c4bdb8;
  local_68 = &DAT_04c4bdbc;
  piVar2 = local_60;
  if (param_3 != (int *)0x0) {
    piVar2 = param_3;
  }
  *(long **)(param_1 + 2) = plVar9;
  puVar3 = local_70;
  if (param_4 != (undefined1 *)0x0) {
    puVar3 = (undefined4 *)param_4;
  }
  local_70[0] = 2;
  FUN_03babf74(plVar9,piVar2,puVar3,param_5);
  iVar4 = *param_1;
  lVar14 = *(long *)(param_1 + 2);
  if (iVar4 == 0) {
    uVar12 = 0;
  }
  else {
    if (iVar4 == 2) {
      puVar11 = (undefined8 *)(lVar14 + 0x10);
    }
    else {
      if (iVar4 != 1) goto LAB_03b41864;
      puVar11 = (undefined8 *)(lVar14 + 0x18);
    }
    uVar12 = *puVar11;
  }
  *(undefined8 *)(lVar14 + 8) = uVar12;
  lVar14 = *(long *)(param_1 + 2);
LAB_03b41864:
  plVar9 = *(long **)(*(long *)PTR_DAT_04bc3ee8 + 0x108);
  if (plVar9 != (long *)0x0) {
    if (*(long *)puVar5 == 0) {
      puVar10 = malloc(0x28);
    }
    else {
      puVar10 = (undefined1 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x28,8);
    }
    *puVar10 = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0;
    *(undefined8 *)(puVar10 + 0x20) = 0;
    *(undefined1 **)(lVar14 + 0x30) = puVar10;
    FUN_03bac540(puVar10,plVar9);
  }
  puVar5 = PTR_DAT_04bd1e70;
  fVar15 = (float)param_1[0xf];
  if (DAT_05aebc00 == '\0') {
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb720,fVar15);
    }
  }
  else {
    local_60[0] = 0;
    pAVar13 = *(AudioDeviceName **)(*(long *)PTR_DAT_04bd1e70 + 0x160);
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume(pAVar13,fVar15);
      *(float *)(pAVar13 + (long)local_60[0] * 4 + 0x300) = fVar15;
    }
  }
  param_1[0xf] = (int)fVar15;
  fVar15 = (float)param_1[0x10];
  if (DAT_05aebc00 == '\0') {
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb920,fVar15);
    }
  }
  else {
    lVar14 = *(long *)(*(long *)puVar5 + 0x160);
    local_60[0] = 1;
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar14 + 0x100),fVar15);
      *(float *)(lVar14 + (long)local_60[0] * 4 + 0x300) = fVar15;
    }
  }
  param_1[0x10] = (int)fVar15;
  fVar15 = (float)param_1[0x11];
  if (DAT_05aebc00 == '\0') {
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb820,fVar15);
    }
  }
  else {
    lVar14 = *(long *)(*(long *)puVar5 + 0x160);
    local_60[0] = 2;
    if ((0.0 <= fVar15) && (fVar15 <= 128.0)) {
      nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar14 + 0x200),fVar15);
      *(float *)(lVar14 + (long)local_60[0] * 4 + 0x300) = fVar15;
    }
  }
  param_1[0x11] = (int)fVar15;
  nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)(param_1 + 0x14));
  iVar7 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(param_1 + 0x24));
  FUN_03b41b00(param_1);
  iVar4 = param_1[0x20];
  if (iVar4 != iVar7) {
    param_1[0x20] = iVar7;
    uVar1 = 2;
    if (iVar7 != 6) {
      uVar1 = iVar7 != 1;
    }
    FUN_03b41cfc(param_1,uVar1,0);
    puVar11 = *(undefined8 **)(param_1 + 0x22);
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,iVar4,param_1[0x20]);
    }
  }
  return;
}

