
undefined8 FUN_0016286c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00161cc8();
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_0014d5f8(*param_1,
                 "Unrecognized content encoding type. libcurl understands %s content encodings.",
                 lVar1);
    FUN_00143300(lVar1);
    uVar2 = 0x3d;
  }
  return uVar2;
}

