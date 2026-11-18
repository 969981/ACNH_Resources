
void FUN_0324b934(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined4 local_40;
  undefined8 local_3c;
  byte local_34;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x1f8;
    local_58 = FUN_03257860(lVar1);
    local_4a = 0x1000001;
    local_3c = 0x60000000c;
    local_34 = *(byte *)(param_1 + 0x1f8);
    local_40 = 0;
    local_4c = 0;
    local_60 = &PTR_LAB_04b2b020;
    if (7 < local_34) {
      local_34 = 0xff;
    }
    local_54 = FUN_03257ad0(lVar1,*(undefined4 *)(param_1 + 0x228));
    local_50 = FUN_03257ad0(lVar1,*(undefined4 *)(param_1 + 0x228));
    FUN_03864290(lVar2,&local_60);
  }
  return;
}

