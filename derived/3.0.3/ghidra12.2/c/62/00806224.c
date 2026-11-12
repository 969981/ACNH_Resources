
uint FUN_00806224(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_6a [2];
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  lVar1 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    local_68 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_66 = PTR_DAT_04bb37e0[2];
    local_65 = PTR_DAT_04bb37e0[3];
    local_64 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_60 = local_68;
    local_5e = local_66;
    local_5d = local_65;
    local_5c = local_64;
    local_58 = local_68;
    local_56 = local_66;
    local_55 = local_65;
    local_54 = local_64;
    local_50 = local_68;
    local_4e = local_66;
    local_4d = local_65;
    local_4c = local_64;
    local_48 = local_68;
    local_46 = local_66;
    local_45 = local_65;
    local_44 = local_64;
    local_40 = local_68;
    local_3e = local_66;
    local_3d = local_65;
    local_3c = local_64;
    local_38 = local_68;
    local_36 = local_66;
    local_35 = local_65;
    local_34 = local_64;
    local_30 = local_68;
    local_2e = local_66;
    local_2d = local_65;
    local_2c = local_64;
    local_28 = local_68;
    local_26 = local_66;
    local_25 = local_65;
    local_24 = local_64;
    uVar2 = FUN_03722560(DAT_05abbc58);
    uVar4 = FUN_037363fc(lVar1,&local_68,uVar2);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_6a,param_1);
      uVar3 = FUN_00805f80(auStack_6a,&local_68);
      goto LAB_0080632c;
    }
  }
  uVar3 = 0;
LAB_0080632c:
  return uVar3 & 1;
}

