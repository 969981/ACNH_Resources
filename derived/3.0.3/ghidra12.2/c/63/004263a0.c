
undefined4 FUN_004263a0(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined8 uStack_28;
  undefined4 local_18 [2];
  
  local_18[0] = 0x80040257;
  if (param_1 == param_2) {
    if (DAT_04c6f600 == '\0') {
      return 0x80040257;
    }
    FUN_00444bc0(auStack_58,&DAT_04c6f5b0,1);
    uStack_28 = 0x37;
    puVar3 = &DAT_04853550;
    pcVar4 = "s.isEmpty()";
  }
  else {
    uVar5 = 0;
    while( true ) {
      local_18[0] = 0x80040257;
      if (9 < *param_1 - 0x30) {
        if (DAT_04c6f600 == '\0') {
          return 0x80040257;
        }
        FUN_00444bc0(auStack_58,&DAT_04c6f5b0,1);
        uStack_28 = 0x3b;
        puVar3 = &DAT_04853630;
        pcVar4 = "isDigit(c) == false";
        goto LAB_00426504;
      }
      uVar1 = ((uint)*param_1 + uVar5 * 10) - 0x30;
      local_18[0] = 0x80040257;
      if (uVar1 < uVar5) break;
      param_1 = param_1 + 1;
      uVar5 = uVar1;
      if (param_2 == param_1) {
        *param_3 = uVar1;
        return 0;
      }
    }
    if (DAT_04c6f600 == '\0') {
      return 0x80040257;
    }
    FUN_00444bc0(auStack_58,&DAT_04c6f5b0,1);
    uStack_28 = 0x3f;
    puVar3 = &DAT_04853668;
    pcVar4 = "cur < prev";
  }
LAB_00426504:
  local_30 = 
  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
  ;
  uVar2 = FUN_004446b0(auStack_58,"HK_RETURN_RES_IF({}) returning {}. ",puVar3,pcVar4,local_18);
  FUN_004446b0(uVar2,&DAT_0407ebb1,&DAT_0413df78);
  FUN_00444c00(auStack_58);
  return local_18[0];
}

