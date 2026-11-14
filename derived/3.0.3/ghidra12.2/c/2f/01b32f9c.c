
void FUN_01b32f9c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,uint param_6)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = 0xfffe;
  uStack_44 = 0;
  FUN_0277d4ac(&local_48);
  if ((param_6 & 1) != 0) {
    uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
    FUN_01b8d970(&local_80,param_3,param_4,*(undefined4 *)(param_1 + 0x14),param_2);
    local_48 = SUB84(local_80,0);
    uStack_44 = local_80._4_4_;
  }
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_80 = PTR_DAT_04bc05b0 + 0x10;
  local_58 = 0;
  local_78 = 0xffffffff;
  local_60 = 0xffffffff;
  local_54 = 0xfffe;
  FUN_0277d4ac(&local_54);
  local_58 = (undefined1)param_4;
  local_74 = CONCAT44(local_74._4_4_,*param_5);
  local_60 = CONCAT44(param_3,*(undefined4 *)(param_1 + 0x14));
  local_4c = 0;
  local_54 = CONCAT44(uStack_44,local_48);
  local_78 = param_2;
  lVar4 = (**(code **)(local_80 + 0x20))(&local_80,*(undefined8 *)PTR_DAT_04bc0580);
  plVar3 = DAT_0532d278;
  if (lVar4 != 0) {
    lVar5 = *DAT_0532d278;
    plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar4);
    *DAT_0532d278 = (long)plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)plVar3;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  }
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}

