
void FUN_002e6a80(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined8 local_60;
  long *local_58;
  long local_50;
  undefined4 local_44;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar6 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      *(int **)(param_2 + 0x2c0) = param_3;
      local_50 = 0;
      local_60 = &local_60;
      local_58 = &local_60;
      lVar3 = FUN_0030c214(param_4);
      iVar1 = FUN_0030c21c(param_4);
      if (iVar1 != 0) {
        lVar7 = 0;
        do {
          plVar4 = (long *)FUN_00187df4(0x18);
          *plVar4 = 0;
          *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(lVar3 + lVar7 * 4);
          *plVar4 = (long)local_60;
          plVar4[1] = (long)&local_60;
          local_60[1] = (long)plVar4;
          local_50 = local_50 + 1;
          local_60 = plVar4;
          uVar2 = FUN_0030c21c(param_4);
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < uVar2);
      }
      uVar5 = FUN_003116c8(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,&local_60,
                           *(undefined8 *)(param_2 + 0x98));
      lVar3 = DAT_04c5fbb0;
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_70 = 0xac5a;
      }
      else {
        plVar4 = (long *)FUN_00228380();
        *(long *)(param_2 + 0x2d8) = *(long *)(lVar3 + 0x30) + *plVar4 * 10000;
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
        local_70 = 0;
      }
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_44);
      FUN_002296c4(param_1,&local_70);
      if (local_50 == 0) {
        return;
      }
      lVar3 = *local_58;
      *(long *)(lVar3 + 8) = local_60[1];
      *(long *)local_60[1] = lVar3;
      local_50 = 0;
      plVar4 = local_58;
      while (plVar4 != &local_60) {
        plVar4 = (long *)plVar4[1];
        FUN_00187e4c();
      }
      return;
    }
    uVar6 = 0x10c08;
  }
  local_60 = (long *)CONCAT44(local_60._4_4_,uVar6);
  local_70 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_70);
  FUN_002296c4(param_1,&local_60);
  return;
}

