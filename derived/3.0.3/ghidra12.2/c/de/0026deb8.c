
bool FUN_0026deb8(long param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int local_5c;
  undefined **local_58;
  undefined1 auStack_50 [32];
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined1 local_24;
  
  local_24 = *(undefined1 *)(param_4 + 1);
  uStack_26 = (undefined2)((uint)*param_4 >> 0x10);
  local_28 = (undefined1)*param_4;
  _local_28 = CONCAT11(1,local_28);
  lVar1 = FUN_002ba788(DAT_04c61168);
  FUN_0022726c(&local_58,lVar1 + 0x108);
  memset(&local_5c,0,4);
  lVar1 = FUN_002aa2a0(param_1,&local_58,0,&local_28);
  if ((lVar1 == 0) || (local_5c == 0)) {
    local_58 = (undefined **)(PTR_DAT_04bcba18 + 0x10);
    FUN_0021f584(auStack_50);
    if (lVar1 == 0) goto LAB_0026dfb8;
  }
  else {
    FUN_0022b904(lVar1,&local_5c);
    local_58 = &PTR_LAB_04840580;
    FUN_0021f584(auStack_50);
  }
  uVar2 = FUN_002aa480(param_1,lVar1,param_2);
  FUN_002ac58c(param_1 + 0x30,lVar1,uVar2,0,local_28,1,0,0);
LAB_0026dfb8:
  return lVar1 != 0;
}

