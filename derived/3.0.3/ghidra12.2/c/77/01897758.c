
void FUN_01897758(long param_1)

{
  float *pfVar1;
  bool bVar2;
  long lVar3;
  
  FUN_0188a208();
  lVar3 = *(long *)(param_1 + 0x408);
  if (lVar3 == 0) {
    bVar2 = true;
  }
  else {
    pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x1b8) + 0xf0))(lVar3 + 0x1b8);
    bVar2 = *pfVar1 <= 0.0;
  }
  *(bool *)(param_1 + 0x422) = bVar2;
  *(undefined1 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0x96;
  *(undefined8 *)(param_1 + 0x448) = 0;
  return;
}

