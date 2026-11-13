
long * FUN_0133ed00(int *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*param_1 < param_1[1]) {
    plVar6 = *(long **)(param_1 + 4);
    if (plVar6 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar6;
    }
    *plVar6 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar1 = PTR_DAT_04bb3380;
    lVar5 = param_2[1];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[1] = lVar5;
    lVar5 = param_2[6];
    plVar6[7] = (long)"mUnitX";
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[0xf] = 0;
    *(undefined4 *)(plVar6 + 0x10) = 0;
    plVar6[0x11] = 0;
    plVar4 = plVar6 + 6;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar6[0xc] = (long)(puVar1 + 0x10);
    *plVar6 = (long)&PTR_LAB_04990278;
    *(int *)(plVar6 + 4) = (int)lVar5;
    plVar6[5] = (long)plVar4;
    plVar6[9] = (long)plVar6;
    plVar6[10] = 0;
    plVar6[0xd] = (long)"mUnitZ";
    plVar6[0xe] = 0;
    do {
      plVar3 = plVar4;
      plVar4 = (long *)plVar3[2];
    } while (plVar4 != (long *)0x0);
    plVar3[2] = (long)(plVar6 + 0xc);
    plVar6[0xf] = (long)plVar6;
    puVar2 = (undefined4 *)(**(code **)(plVar6[0xc] + 0xf0))();
    *puVar2 = 0;
    if ((*(uint *)(plVar6 + 0x10) >> 7 & 1) == 0) {
      plVar6[0x11] = 0;
      *(undefined4 *)(plVar6 + 0x11) = 0;
    }
    *(uint *)(plVar6 + 0x10) = *(uint *)(plVar6 + 0x10) & 0xfeffffff;
    *plVar6 = (long)&PTR_LAB_04990848;
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

