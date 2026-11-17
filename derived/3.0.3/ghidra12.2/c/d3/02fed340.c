
void FUN_02fed340(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_38;
  undefined8 local_18;
  
  if (param_2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x48))();
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar3);
    if (0x11 < uVar3) {
      uVar3 = 0;
    }
    uVar3 = *(uint *)((long)&DAT_056d3610 + (long)(int)uVar3 * 4);
    puVar2 = (undefined8 *)(param_2 + 0x210) + uVar3;
    if (0x21 < uVar3) {
      puVar2 = (undefined8 *)(param_2 + 0x210);
    }
    plVar4 = (long *)*puVar2;
    if (plVar4 != (long *)0x0) {
      local_18 = (undefined *)0x0;
      local_68 = &DAT_3f8000003f800000;
      (**(code **)(*param_1 + 0x40))(param_1,&local_18,&local_68);
      local_60 = local_18;
      local_58 = (undefined4)local_68;
      uStack_54 = local_18._4_4_;
      local_50 = (undefined4)local_18;
      uStack_4c = local_68._4_4_;
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 0x50;
      local_40 = puVar1;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
      (**(code **)(plVar4[3] + 0x518))(plVar4[1],0,&local_60);
      local_58 = 0x1f;
      local_60 = puVar1;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
      (**(code **)(plVar4[3] + 0x208))(plVar4[1],0,0,param_3);
    }
  }
  return;
}

