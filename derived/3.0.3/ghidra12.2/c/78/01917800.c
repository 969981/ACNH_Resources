
long * FUN_01917800(int *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  if (*param_1 < param_1[1]) {
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar5;
    }
    plVar6 = (long *)*param_3;
    *plVar5 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar2 = PTR_DAT_04bb60a0;
    lVar4 = param_2[1];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[1] = lVar4;
    lVar4 = param_2[6];
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[5] = 0;
    *(int *)(plVar5 + 4) = (int)lVar4;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x140))(plVar6,plVar5);
    }
    local_78 = PTR_DAT_04bb2020;
    *plVar5 = (long)(PTR_DAT_04bbf710 + 0x10);
    local_78 = local_78 + 0x10;
    local_48 = 0;
    pcStack_70 = "mOffset";
    puStack_60 = &DAT_040bb383;
    pcStack_50 = "Min=-100.f, Max=100.f";
    local_68 = local_78;
    local_58 = local_78;
    FUN_006fdfc0(plVar5 + 6,&local_78,PTR_DAT_04bb2150,plVar5);
    plVar5[0x10] = 0;
    plVar5[0xe] = (long)"mRadius";
    plVar5[0xf] = 0;
    puVar2 = PTR_DAT_04bb31d0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    plVar5[0x12] = 0;
    plVar6 = plVar5 + 0xd;
    *plVar6 = (long)(puVar2 + 0x10);
    (**(code **)(*plVar5 + 0x140))(plVar5,plVar6);
    uVar7 = 0x40a00000;
    if ((*(uint *)(plVar5 + 0x11) & 0x800) != 0) {
      uVar7 = 0x3db2b8c2;
    }
    puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    *puVar3 = uVar7;
    uVar1 = *(uint *)(plVar5 + 0x11);
    if ((uVar1 >> 7 & 1) == 0) {
      plVar5[0x12] = 0;
      uVar7 = 0x40a00000;
      if ((uVar1 & 0x800) != 0) {
        uVar7 = 0x3db2b8c2;
      }
      *(undefined4 *)(plVar5 + 0x12) = uVar7;
    }
    puVar2 = PTR_DAT_04bbf708;
    *(uint *)(plVar5 + 0x11) = uVar1 & 0xfeffffff;
    *plVar5 = (long)(puVar2 + 0x10);
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar5;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  return plVar5;
}

