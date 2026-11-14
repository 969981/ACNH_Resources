
bool FUN_01ba2494(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_2 == (long *)0x0) {
    *(undefined1 *)(param_1 + 0x42) = 1;
    cVar3 = (char)param_1[0x42];
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_2 + 0x38))(param_2);
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined4 *)((long)param_1 + 0x244) = 0;
    param_1[0x44] = 0;
    param_1[0x45] = (long)param_2;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x46] = lVar5;
    param_1[0x47] = lVar5;
    uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
    param_1[0x47] = param_1[0x47] + (uVar6 & 0xffffffff) * 2 + -2;
    (**(code **)(*(long *)param_1[0x45] + 0x38))();
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined2 *)(param_1 + 0x49) = 0;
    *(undefined1 *)((long)param_1 + 0x24a) = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = (**(code **)(*param_3 + 0x18))(param_3);
    if (((lVar7 != 0) && (uVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar5 != 0)) &&
       ((int)param_1[0x3d] < 9)) {
      uVar1 = (int)param_1[0x3d] + 1;
      *(uint *)(param_1 + 0x3d) = uVar1;
      plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
      if (9 < uVar1) {
        plVar2 = param_1 + 1;
      }
      *plVar2 = lVar5;
      plVar2[1] = lVar7 + (uVar6 & 0xffffffff) * 2;
      plVar2[2] = (long)&PTR_FUN_048fc6e0;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_006f1490(param_1);
    if ((char)param_1[0x42] == '\0') {
      puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x40))(param_2);
      puVar9 = (undefined4 *)(**(code **)(*(long *)param_1[0x41] + 0x48))();
      if ((puVar8 != (undefined4 *)0x0) && (puVar9 != (undefined4 *)0x0)) {
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        puVar8[3] = puVar9[3];
      }
    }
    cVar3 = (char)param_1[0x42];
  }
  if (cVar3 == '\0') {
    bVar4 = true;
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2);
    bVar4 = (char)param_1[0x42] == '\0';
  }
  return bVar4;
}

