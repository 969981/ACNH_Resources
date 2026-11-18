
void FUN_03644f40(undefined8 param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *local_98;
  undefined4 local_90;
  byte local_8c;
  undefined4 local_88;
  undefined ***local_80;
  undefined **local_70;
  long lStack_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_44;
  undefined4 local_40;
  ulong local_38;
  
  local_48 = 2;
  local_38 = 0;
  local_50 = PTR_DAT_04bdf320 + 0x10;
  local_44 = param_3;
  local_40 = param_4;
  FUN_036445b0(&local_50,param_1);
  local_60 = local_38;
  if (local_38 != 0) {
    uVar1 = local_38;
    if (local_38 < 5) {
      uVar1 = 4;
    }
    lStack_68 = (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                          (*(long **)PTR_DAT_04bdf328,uVar1,1);
    if (lStack_68 != 0) goto LAB_03644fe4;
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    local_60 = 0;
  }
  lStack_68 = 0;
LAB_03644fe4:
  local_70 = &PTR_LAB_04b41f90;
  local_90 = 1;
  uStack_58 = 0;
  local_98 = PTR_DAT_04bdf310 + 0x10;
  local_80 = &local_70;
  local_8c = param_3 & 1;
  local_88 = param_4;
  FUN_036445b0(&local_98,param_1);
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x3645028);
  (*pcVar2)();
}

