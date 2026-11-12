
long * FUN_00995510(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar5 = malloc(0xf0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        param_2 = (long *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_00995590;
      }
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xf0,8);
  }
LAB_00995590:
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Actor";
  uStack_48 = param_1;
  local_40 = local_50;
  FUN_00751ec0(plVar5,&local_40,&local_50,0);
  puVar3 = PTR_DAT_04bb60b0;
  plVar5[0x1b] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(plVar5 + 0x1c) = 0;
  plVar5[0x1d] = 0;
  plVar5[0x19] = (long)"mScale";
  plVar5[0x1a] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[0x18] = (long)(puVar2 + 0x10);
  plVar7 = plVar5 + 5;
  lVar8 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar4 = lVar8;
      lVar8 = *(long *)(lVar4 + 0x10);
    } while (lVar8 != 0);
    plVar7 = (long *)(lVar4 + 0x10);
  }
  *plVar7 = (long)(plVar5 + 0x18);
  plVar5[0x1b] = (long)plVar5;
  uVar9 = 0x3f000000;
  if ((*(uint *)(plVar5 + 0x1c) & 0x800) != 0) {
    uVar9 = 0x3c0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(plVar5[0x18] + 0xf0))();
  *puVar6 = uVar9;
  uVar1 = *(uint *)(plVar5 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    plVar5[0x1d] = 0;
    uVar9 = 0x3f000000;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3c0efa35;
    }
    *(undefined4 *)(plVar5 + 0x1d) = uVar9;
  }
  *(uint *)(plVar5 + 0x1c) = uVar1 & 0xfeffffff;
  return plVar5;
}

