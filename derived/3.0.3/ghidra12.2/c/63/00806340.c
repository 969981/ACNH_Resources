
uint FUN_00806340(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
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
  undefined1 auStack_12 [2];
  
  lVar1 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    local_78 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_76 = PTR_DAT_04bb37e0[2];
    local_75 = PTR_DAT_04bb37e0[3];
    local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_70 = local_78;
    local_6e = local_76;
    local_6d = local_75;
    local_6c = local_74;
    local_68 = local_78;
    local_66 = local_76;
    local_65 = local_75;
    local_64 = local_74;
    local_60 = local_78;
    local_5e = local_76;
    local_5d = local_75;
    local_5c = local_74;
    local_58 = local_78;
    local_56 = local_76;
    local_55 = local_75;
    local_54 = local_74;
    local_50 = local_78;
    local_4e = local_76;
    local_4d = local_75;
    local_4c = local_74;
    local_48 = local_78;
    local_46 = local_76;
    local_45 = local_75;
    local_44 = local_74;
    local_40 = local_78;
    local_3e = local_76;
    local_3d = local_75;
    local_3c = local_74;
    local_38 = local_78;
    local_36 = local_76;
    local_35 = local_75;
    local_34 = local_74;
    uVar2 = FUN_03722560(DAT_05abbc58);
    uVar4 = FUN_037363fc(lVar1,&local_78,uVar2);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_12,param_1);
      uVar3 = FUN_00805f80(auStack_12,&local_60);
      goto LAB_00806454;
    }
  }
  uVar3 = 0;
LAB_00806454:
  return uVar3 & 1;
}

