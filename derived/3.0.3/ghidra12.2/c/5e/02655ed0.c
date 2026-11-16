
void FUN_02655ed0(undefined8 param_1,byte *param_2,undefined8 param_3,short *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_16e2 [2];
  undefined1 auStack_16e0 [5792];
  undefined1 auStack_28 [2];
  undefined1 auStack_26 [2];
  byte local_24 [2];
  undefined1 auStack_22 [2];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  FUN_02654ea0(param_1,local_24);
  FUN_007ef010(auStack_22,param_3);
  FUN_007ef010(auStack_26,param_1);
  FUN_02652f70(auStack_22,auStack_26);
  FUN_007ef010(auStack_28,param_1);
  FUN_007e4920(auStack_16e0,auStack_28);
  if (*param_4 != DAT_04cb6038) {
    FUN_007ef010(auStack_16e2,param_3);
    FUN_007e90a0(auStack_16e0,auStack_16e2);
    FUN_007e7b10(auStack_16e0);
  }
  if (1 < *(uint *)(DAT_0537d558 + 0x80)) {
    uVar2 = *(undefined8 *)PTR_DAT_04bb3708;
    uVar1 = FUN_02582a24(param_2,1);
    FUN_007f11c4(uVar2,uVar1,param_1,1);
  }
  return;
}

