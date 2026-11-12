
uint FUN_00806938(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_7e [2];
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined1 auStack_32 [2];
  
  FUN_007ef010(auStack_32,param_1);
  uVar4 = FUN_00806340(auStack_32,param_2);
  lVar1 = DAT_05abbc58;
  if (((uVar4 & 1) != 0) && (DAT_05abbc58 != 0)) {
    local_7c = *(undefined2 *)PTR_DAT_04bb37e0;
    local_7a = PTR_DAT_04bb37e0[2];
    local_79 = PTR_DAT_04bb37e0[3];
    local_78 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_74 = local_7c;
    local_72 = local_7a;
    local_71 = local_79;
    local_70 = local_78;
    local_6c = local_7c;
    local_6a = local_7a;
    local_69 = local_79;
    local_68 = local_78;
    local_64 = local_7c;
    local_62 = local_7a;
    local_61 = local_79;
    local_60 = local_78;
    local_5c = local_7c;
    local_5a = local_7a;
    local_59 = local_79;
    local_58 = local_78;
    local_54 = local_7c;
    local_52 = local_7a;
    local_51 = local_79;
    local_50 = local_78;
    local_4c = local_7c;
    local_4a = local_7a;
    local_49 = local_79;
    local_48 = local_78;
    local_44 = local_7c;
    local_42 = local_7a;
    local_41 = local_79;
    local_40 = local_78;
    local_3c = local_7c;
    local_3a = local_7a;
    local_39 = local_79;
    local_38 = local_78;
    uVar2 = FUN_03722560(DAT_05abbc58,param_2);
    uVar4 = FUN_037363fc(lVar1,&local_7c,uVar2);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_7e,param_1);
      uVar3 = FUN_00806590(auStack_7e,&local_64);
      goto LAB_00806a70;
    }
  }
  uVar3 = 0;
LAB_00806a70:
  return uVar3 & 1;
}

