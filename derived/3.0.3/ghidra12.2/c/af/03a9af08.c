
void FUN_03a9af08(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_448 [1048];
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_04b70bb0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 9) = 0x20;
  FUN_03941294(param_1 + 10);
  lVar1 = DAT_05ae9300;
  if ((DAT_05ae9300 != 0) && (*(long *)(DAT_05ae92f0 + 0x58) != 0)) {
    (**(code **)(*(long *)(DAT_05ae9300 + 8) + 0x18))((long *)(DAT_05ae9300 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar1 + 0x10));
  }
  param_1[5] = 0x3f8000003dcccccd;
  param_1[6] = 0;
  param_1[7] = 0x3ecccccd;
  param_1[8] = 0;
  return;
}

