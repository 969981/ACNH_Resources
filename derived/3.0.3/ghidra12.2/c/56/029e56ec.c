
undefined8 FUN_029e56ec(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *local_60;
  char *local_58;
  undefined2 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x1734) = 8;
  puVar1 = PTR_DAT_04bb2020;
  local_4c = 0xbf800000;
  local_50 = 0x100;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x80);
  local_58 = (char *)*param_2;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  puStack_40 = &DAT_040635a9;
  local_38 = 0x3c23d70a;
  FUN_02a066f0(param_1 + 0x18,&local_60);
  if ((DAT_05aebb78 == 0) || (lVar4 = *(long *)(DAT_05aebb78 + 0x28), lVar4 == 0)) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x1738) = 0;
  }
  else {
    local_58 = "Totakeke_Field";
    local_60 = puVar1 + 0x10;
    lVar2 = FUN_03baddf0(lVar4,&local_60);
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    local_58 = "Totakeke_LiveDemo";
    *(long *)(param_1 + 0x1738) = lVar3;
    local_60 = puVar1 + 0x10;
    lVar3 = FUN_03baddf0(lVar4,&local_60);
    lVar4 = *(long *)(lVar4 + 0x88);
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
  }
  *(long *)(param_1 + 0x1740) = lVar4;
  return 1;
}

