
uint FUN_03d73188(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined *local_370;
  undefined1 *puStack_368;
  undefined4 local_360;
  undefined1 local_35c [255];
  undefined1 local_25d;
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  puVar1 = PTR_DAT_04bb21f8;
  local_45 = 0;
  local_148 = 0x100;
  local_150 = local_144;
  local_144[0] = 0;
  local_158 = PTR_DAT_04bb21f8 + 0x10;
  uVar3 = (**(code **)(*(long *)param_1[5] + 0xf0))((long *)param_1[5],&local_158,1);
  if ((uVar3 & 1) != 0) {
    (**(code **)(local_158 + 0x18))(&local_158);
    FUN_0156b428(&local_370,"Param/%s",local_150);
    uVar3 = FUN_03eba3a0(&local_370);
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)param_1[5];
      puStack_368 = local_35c;
      local_360 = 0x100;
      local_370 = puVar1 + 0x10;
      local_25d = 0;
      local_35c[0] = 0;
      uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4,&local_370,1);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar4 + 0x108))(plVar4,&local_370);
      }
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      goto LAB_03d73288;
    }
  }
  uVar2 = 0;
LAB_03d73288:
  return uVar2 & 1;
}

