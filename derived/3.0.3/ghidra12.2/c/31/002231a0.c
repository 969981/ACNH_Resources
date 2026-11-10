
void FUN_002231a0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_002236b0();
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1[4] = 0;
  FUN_002236b0(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 10),(Result *)&local_24);
  FUN_002214b4(param_1 + 0xc,0xe);
  *(undefined4 *)((long)param_1 + 0x14) = 0x18;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x18;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x188,uVar1);
  if (lVar2 != 0) {
    FUN_002237e0(lVar2,param_2,param_1 + 0xc);
  }
  param_1[0x10] = lVar2;
  FUN_002219fc();
  return;
}

