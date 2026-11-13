
long * FUN_0141cd60(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*param_1 < param_1[1]) {
    plVar6 = *(long **)(param_1 + 4);
    if (plVar6 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar6;
    }
    plVar8 = (long *)*param_3;
    *plVar6 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[1] = lVar5;
    lVar5 = param_2[6];
    *plVar6 = (long)&DAT_04b7e798;
    *(int *)(plVar6 + 4) = (int)lVar5;
    plVar7 = plVar6 + 5;
    *plVar7 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x140))(plVar8,plVar6);
    }
    plVar6[9] = 0;
    *plVar6 = (long)&PTR_LAB_04998f38;
    puVar1 = PTR_DAT_04bb3380;
    plVar6[7] = (long)"mLocatorID";
    plVar6[8] = 0;
    *(undefined4 *)(plVar6 + 10) = 0;
    plVar6[0xb] = 0;
    plVar6[6] = (long)(puVar1 + 0x10);
    lVar5 = plVar6[5];
    if (plVar6[5] != 0) {
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 0x10);
      } while (lVar5 != 0);
      plVar7 = (long *)(lVar4 + 0x10);
    }
    *plVar7 = (long)(plVar6 + 6);
    plVar6[9] = (long)plVar6;
    puVar2 = (undefined4 *)(**(code **)(plVar6[6] + 0xf0))();
    *puVar2 = 0xffffffff;
    if ((*(uint *)(plVar6 + 10) >> 7 & 1) == 0) {
      plVar6[0xb] = 0;
      *(undefined4 *)(plVar6 + 0xb) = 0xffffffff;
    }
    *(uint *)(plVar6 + 10) = *(uint *)(plVar6 + 10) & 0xfeffffff;
    plVar6[0xd] = (long)"mUniqueID";
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    puVar1 = PTR_DAT_04bb6048 + 0x10;
    *(undefined4 *)(plVar6 + 0x10) = 0;
    plVar6[0x11] = 0;
    plVar7 = plVar6 + 0xc;
    *plVar7 = (long)puVar1;
    (**(code **)(*plVar6 + 0x140))(plVar6,plVar7);
    puVar3 = (undefined2 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    *puVar3 = 0xfffe;
    if ((*(uint *)(plVar6 + 0x10) >> 7 & 1) == 0) {
      plVar6[0x11] = 0;
      *(undefined2 *)(plVar6 + 0x11) = 0xfffe;
    }
    *(uint *)(plVar6 + 0x10) = *(uint *)(plVar6 + 0x10) & 0xfeffffff;
    *plVar6 = (long)&PTR_LAB_04998dd8;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar6;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}

