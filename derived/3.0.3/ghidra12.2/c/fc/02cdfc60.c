
void FUN_02cdfc60(undefined8 param_1,int param_2,ulong param_3)

{
  ulong uVar1;
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
  
  FUN_02cded9c();
  if (-1 < param_2) {
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
    if ((param_3 & 1) == 0) {
      uVar1 = FUN_033c160c(*(undefined8 *)(DAT_05739190 + 0x30),&local_78,param_2);
    }
    else {
      uVar1 = FUN_033c147c();
    }
    if ((uVar1 & 1) != 0) {
      FUN_02cdfaec(param_1,&local_78);
      FUN_02cdef08(param_1);
      FUN_02cdf164(param_1);
    }
  }
  return;
}

