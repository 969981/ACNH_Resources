
void FUN_03c39f8c(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  VibrationPlayer *this;
  VibrationWriter *this_00;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar7 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = param_2;
  }
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x18);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x18,8);
  }
  puVar3 = PTR_DAT_04bd20d0;
  plVar6[1] = (long)&DAT_3f8000003f800000;
  plVar6[2] = 0x3f800000;
  *plVar6 = (long)(puVar3 + 0x10);
  *(long **)(param_1 + 0x68) = plVar6;
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    this = malloc(0xd8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    this = (VibrationPlayer *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0xd8,8);
  }
  nn::hid::VibrationPlayer::VibrationPlayer(this);
  *(undefined **)this = &DAT_04b7f0c8;
  *(undefined8 *)(this + 0xd0) = 0x3f800000;
  *(VibrationPlayer **)(param_1 + 0x250) = this;
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    this_00 = malloc(0x40);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    this_00 = (VibrationWriter *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x40,8);
  }
  nn::hid::VibrationWriter::VibrationWriter(this_00);
  *(VibrationWriter **)(param_1 + 600) = this_00;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 8) = 1;
  if (lVar7 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar7;
  }
  return;
}

