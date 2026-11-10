
void FUN_002e61b0(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined8 local_68;
  long *local_60;
  long local_58;
  undefined4 local_44;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar5 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      lVar6 = *(long *)(param_2 + 0x108);
      *(int **)(param_2 + 0x2c0) = param_3;
      *(undefined4 *)(lVar6 + 0x28) = 0;
      *(undefined4 *)(lVar6 + 0x3c) = 3;
      if (*(long *)(lVar6 + 0x20) != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        plVar9 = *(long **)(lVar6 + 0x18);
        lVar8 = *plVar9;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar7 + 8);
        **(long **)(lVar7 + 8) = lVar8;
        *(undefined8 *)(lVar6 + 0x20) = 0;
        while (plVar9 != (long *)(lVar6 + 0x10)) {
          plVar9 = (long *)plVar9[1];
          FUN_00187e4c();
        }
      }
      *(undefined4 *)(*(long *)(param_2 + 0x110) + 0xc) = 3;
      plVar9 = *(long **)(param_2 + 0x100);
      if (plVar9[2] != 0) {
        lVar6 = *plVar9;
        plVar1 = (long *)plVar9[1];
        lVar7 = *plVar1;
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
        **(long **)(lVar6 + 8) = lVar7;
        plVar9[2] = 0;
        while (plVar1 != plVar9) {
          plVar10 = (long *)plVar1[1];
          (**(code **)plVar1[2])();
          FUN_00187e4c(plVar1);
          plVar1 = plVar10;
        }
      }
      local_58 = 0;
      local_68 = &local_68;
      local_60 = &local_68;
      lVar6 = FUN_0030c1a8(param_4);
      iVar2 = FUN_0030c1b0(param_4);
      if (iVar2 != 0) {
        lVar7 = 0;
        do {
          lVar8 = *(long *)(lVar6 + lVar7 * 8);
          plVar9 = (long *)FUN_00187df4(0x18);
          *plVar9 = 0;
          *plVar9 = (long)local_68;
          plVar9[1] = (long)&local_68;
          plVar9[2] = lVar8;
          local_68[1] = (long)plVar9;
          local_58 = local_58 + 1;
          local_68 = plVar9;
          uVar3 = FUN_0030c1b0(param_4);
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < uVar3);
      }
      plVar9 = (long *)(*(long *)(param_2 + 0x108) + 0x10);
      if (plVar9 != &local_68) {
        FUN_002e7620(plVar9,local_60,&local_68);
      }
      lVar6 = *(long *)(param_2 + 0x110);
      uVar3 = FUN_0030c1b8(param_4);
      *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xfffffffe | uVar3 & 1;
      lVar6 = *(long *)(param_2 + 0x110);
      uVar4 = FUN_0030c1c0(param_4);
      uVar3 = 2;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xfffffffd | uVar3;
      FUN_00315694(*(long *)(param_2 + 0x108) + 0x30,*(undefined8 *)(param_2 + 0x110));
      uVar3 = FUN_0030c1c8(param_4);
      lVar6 = *(long *)(param_2 + 0x108);
      *(uint *)(lVar6 + 0x28) = uVar3 & 1;
      uVar4 = FUN_00311d20(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,lVar6,
                           *(undefined8 *)(param_2 + 0x100));
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_78 = 0xac5a;
      }
      else {
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
        local_78 = 0;
      }
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_44);
      FUN_002296c4(param_1,&local_78);
      if (local_58 == 0) {
        return;
      }
      lVar6 = *local_60;
      *(long *)(lVar6 + 8) = local_68[1];
      *(long *)local_68[1] = lVar6;
      local_58 = 0;
      plVar9 = local_60;
      while (plVar9 != &local_68) {
        plVar9 = (long *)plVar9[1];
        FUN_00187e4c();
      }
      return;
    }
    uVar5 = 0x10c08;
  }
  local_68 = (long *)CONCAT44(local_68._4_4_,uVar5);
  local_78 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_78);
  FUN_002296c4(param_1,&local_68);
  return;
}

