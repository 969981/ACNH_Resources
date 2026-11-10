
void FUN_00317950(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined **local_138 [13];
  undefined *local_d0 [5];
  long local_a8;
  long local_a0;
  long local_90;
  long local_88;
  
  if (param_2[2] != 0) {
    lVar5 = *param_2;
    plVar4 = (long *)param_2[1];
    lVar6 = *plVar4;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar6;
    param_2[2] = 0;
    while (plVar4 != param_2) {
      plVar7 = (long *)plVar4[1];
      (**(code **)plVar4[2])();
      FUN_00187e4c(plVar4);
      plVar4 = plVar7;
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar5 + 0x18) - lVar6) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar2 = *(int *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar6);
    *(long *)(param_1 + 0x18) = lVar6 + 4;
    if (iVar2 != 0) {
      iVar8 = 0;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      while (*(char *)(param_1 + 8) == '\0') {
        FUN_0031430c(local_138);
        FUN_003160cc(param_1,local_138);
        cVar3 = *(char *)(param_1 + 8);
        if (cVar3 == '\0') {
          plVar4 = (long *)FUN_00187df4(0xe8);
          *plVar4 = 0;
          FUN_00317b60(plVar4 + 2,local_138);
          plVar4[1] = (long)param_2;
          plVar4[2] = (long)&PTR_LAB_0484ac20;
          lVar5 = *param_2;
          *plVar4 = lVar5;
          *(long **)(lVar5 + 8) = plVar4;
          *param_2 = (long)plVar4;
          param_2[2] = param_2[2] + 1;
        }
        else if (param_2[2] != 0) {
          lVar5 = *param_2;
          plVar4 = (long *)param_2[1];
          lVar6 = *plVar4;
          *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
          **(long **)(lVar5 + 8) = lVar6;
          param_2[2] = 0;
          while (plVar4 != param_2) {
            plVar7 = (long *)plVar4[1];
            (**(code **)plVar4[2])();
            FUN_00187e4c(plVar4);
            plVar4 = plVar7;
          }
        }
        local_138[0] = &PTR_LAB_0484adb8;
        if (local_90 != 0) {
          local_88 = local_90;
          FUN_00187e4c();
        }
        if (local_a8 != 0) {
          local_a0 = local_a8;
          FUN_00187e4c();
        }
        local_d0[0] = puVar1;
        FUN_0018b1a0(local_d0);
        FUN_0031b520(local_138);
        if (cVar3 != '\0') {
          return;
        }
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar2) {
          return;
        }
      }
    }
  }
  return;
}

