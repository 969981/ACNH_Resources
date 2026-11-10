
void FUN_002e5b50(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_34;
  
  uVar4 = FUN_0030bff0(param_4);
  uVar2 = FUN_002a38ac(param_4);
  uVar3 = FUN_002a38b4(param_4);
  puVar1 = PTR_DAT_04bc0fe8;
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar2 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      *(int **)(param_2 + 0x2c0) = param_3;
      local_50 = 0;
      local_58 = puVar1 + 0x10;
      local_4c = uVar2;
      uStack_48 = uVar3;
      uVar5 = FUN_00311ae8(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,uVar4,&local_58,
                           *(undefined8 *)(param_2 + 0x98));
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_68._0_4_ = 0xac5a;
      }
      else {
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
        local_68._0_4_ = 0;
      }
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_34);
      puVar6 = &local_68;
      goto LAB_002e5bec;
    }
    uVar2 = 0x10c08;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar2);
  local_68._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_68);
  puVar6 = &local_58;
LAB_002e5bec:
  FUN_002296c4(param_1,puVar6);
  return;
}

