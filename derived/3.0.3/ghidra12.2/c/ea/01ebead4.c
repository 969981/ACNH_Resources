
void FUN_01ebead4(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined4 local_60;
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
  
  FUN_01ea2da0();
  lVar1 = DAT_05abbc58;
  if ((DAT_05abbc58 != 0) && (*(int *)(*(long *)(param_1 + 8) + 0x500) != 2)) {
    local_78 = *(undefined2 *)PTR_DAT_04bb37e0;
    uStack_76 = PTR_DAT_04bb37e0[2];
    uStack_75 = PTR_DAT_04bb37e0[3];
    local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_6c = uStack_74;
    local_68 = local_78;
    local_66 = uStack_76;
    local_65 = uStack_75;
    local_64 = uStack_74;
    local_5c = uStack_74;
    local_58 = local_78;
    local_56 = uStack_76;
    local_55 = uStack_75;
    local_54 = uStack_74;
    local_50 = local_78;
    local_4e = uStack_76;
    local_4d = uStack_75;
    local_4c = uStack_74;
    local_48 = local_78;
    local_46 = uStack_76;
    local_45 = uStack_75;
    local_44 = uStack_74;
    local_40 = local_78;
    local_3e = uStack_76;
    local_3d = uStack_75;
    local_3c = uStack_74;
    local_38 = local_78;
    local_36 = uStack_76;
    local_35 = uStack_75;
    local_34 = uStack_74;
    uVar2 = FUN_03722560(DAT_05abbc58,*(long *)(param_1 + 8) + 0x3e0);
    uVar3 = FUN_037363fc(lVar1,&local_78,uVar2);
    if ((uVar3 & 1) != 0) {
      param_2[6] = local_70;
      param_2[7] = local_6c;
      *(ulong *)(param_2 + 4) = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)))
      ;
      *param_2 = local_60;
      param_2[1] = local_5c;
    }
  }
  return;
}

