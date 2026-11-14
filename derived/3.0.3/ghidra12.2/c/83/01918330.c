
void FUN_01918330(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined *local_78;
  long lStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_28;
  
  if (param_1[0xc] == 0) {
    FUN_0190d440(param_1,0);
    return;
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  if ((int)uVar9 <= *(int *)((long)param_1 + 0x5c)) {
    plVar4 = (long *)param_1[9];
    if (plVar4 != (long *)0x0) {
      do {
        (**(code **)(*plVar4 + 0x40))();
        plVar4 = (long *)param_1[9];
      } while (plVar4 != (long *)0x0);
      uVar9 = *(uint *)(param_1 + 0xf);
    }
    puVar1 = (uint *)(param_1 + 0xb);
    uVar5 = (**(code **)(*param_1 + 0x60))(param_1,0);
    puVar3 = PTR_PTR_04bb2238;
    uVar6 = *(uint *)(param_1 + 0xb);
    iVar7 = uVar9 - uVar6;
    if ((int)uVar9 < (int)uVar6) {
      if (uVar9 < uVar6 || iVar7 == 0) {
        lVar10 = (long)(int)uVar9;
        do {
          plVar4 = *(long **)(param_1[0xc] + lVar10 * 8);
          (**(code **)*plVar4)(plVar4);
          lVar10 = lVar10 + 1;
          *plVar4 = param_1[0xd];
          param_1[0xd] = (long)plVar4;
        } while (lVar10 < (int)param_1[0xb]);
        *puVar1 = uVar9;
        uVar6 = uVar9;
      }
    }
    else {
      local_28 = uVar5;
      if (iVar7 != 0 && (int)uVar6 <= (int)uVar9) {
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          lStack_70 = param_1[5];
          local_48 = (undefined4)param_1[8];
          uStack_60 = *(undefined8 *)(puVar3 + 8);
          local_78 = puVar2;
          local_68 = puVar2;
          local_58 = puVar2;
          uStack_50 = uStack_60;
          lVar10 = FUN_01917a90(puVar1,&local_78,&local_28);
          iVar7 = iVar7 + -1;
          *(uint *)(lVar10 + 0x20) = *(uint *)(lVar10 + 0x20) & 0xfffffffc;
        } while (iVar7 != 0);
        uVar6 = *puVar1;
      }
    }
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        plVar4 = *(long **)(param_1[0xc] + uVar8 * 8);
        (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 4);
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}

