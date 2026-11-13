
void FUN_01362e60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  
  *param_1 = &PTR_FUN_049933c0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x968] = puVar1;
  param_1[0x961] = puVar1;
  param_1[0x942] = puVar1;
  FUN_01363bc0(param_1 + 0x8fa);
  param_1[0x8f3] = PTR_DAT_04bbbfb0 + 0x10;
  pbVar4 = (byte *)(param_1 + 0x8f4);
  *pbVar4 = *pbVar4 & 0xfd;
  FUN_03f45838(param_1 + 0x8f6);
  if (param_1[0x8f5] != 0) {
    *pbVar4 = *pbVar4 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,param_1[0x8f5],0);
    param_1[0x8f5] = 0;
  }
  FUN_03f457c4(param_1 + 0x8f6);
  param_1[0x752] = PTR_DAT_04bbbda0 + 0x10;
  if (0 < *(int *)(param_1 + 0x753)) {
    lVar3 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x754] + lVar3 * 8))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x753));
  }
  puVar2 = PTR_DAT_04bbc320;
  puVar1 = PTR_DAT_04bbc2f0;
  param_1[0x2c9] = PTR_DAT_04bbbf98 + 0x10;
  param_1[0x26e] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bbc260;
  param_1[0x293] = puVar2 + 0x10;
  param_1[0x270] = puVar1 + 0x10;
  param_1[0x28a] = PTR_DAT_04bbc5d8 + 0x10;
  FUN_01274864(param_1 + 0x41);
  return;
}

