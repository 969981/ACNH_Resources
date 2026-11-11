
undefined8 * FUN_004664b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  long lStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulong local_38;
  
  if (param_1 != param_2) {
    local_50 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    lVar3 = param_2[2];
    uVar1 = *(undefined4 *)(param_1 + 1);
    local_3c = 0;
    local_38 = 0;
    lStack_48 = lVar3;
    if (lVar3 != 0) {
      local_3c = FUN_00426fc0(lVar3);
      uVar2 = FUN_00428370(lVar3);
      if ((uVar2 & 1) != 0) {
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      }
      local_38 = uVar2;
    }
    (**(code **)(DAT_04c70220 + 0x60))(&DAT_04c70220,param_1,PTR_DAT_04bd70c0,0,uVar1,&local_50);
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
  }
  return param_1;
}

