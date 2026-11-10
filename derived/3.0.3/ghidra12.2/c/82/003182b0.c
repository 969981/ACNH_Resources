
void FUN_003182b0(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined **local_1c8;
  undefined1 local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [336];
  
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
    iVar8 = *(int *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar6);
    *(long *)(param_1 + 0x18) = lVar6 + 4;
    puVar3 = PTR_DAT_04bcecd8;
    if (iVar8 != 0) {
      ppuVar1 = (undefined **)(PTR_DAT_04bcecd8 + 0x10);
      do {
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
        local_1c8 = &PTR_LAB_0484af18;
        local_1c0 = 0;
        FUN_003137a4(auStack_1b0);
        local_1c8 = ppuVar1;
        FUN_00316fcc(param_1,&local_1c8);
        if (*(char *)(param_1 + 8) != '\0') {
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
          local_1c8 = (undefined **)(PTR_DAT_04bcecd0 + 0x10);
          FUN_002e73b4(auStack_1b0);
          return;
        }
        plVar4 = (long *)FUN_00187df4(0x178);
        puVar2 = PTR_DAT_04bcecd0;
        *plVar4 = 0;
        plVar4[2] = (long)(puVar2 + 0x10);
        *(undefined1 *)(plVar4 + 3) = local_1c0;
        plVar4[4] = local_1b8;
        FUN_00317f30(plVar4 + 5,auStack_1b0);
        plVar4[5] = (long)&PTR_FUN_0484abc8;
        plVar4[1] = (long)param_2;
        plVar4[2] = (long)(puVar3 + 0x10);
        lVar5 = *param_2;
        *plVar4 = lVar5;
        *(long **)(lVar5 + 8) = plVar4;
        *param_2 = (long)plVar4;
        param_2[2] = param_2[2] + 1;
        local_1c8 = (undefined **)(puVar2 + 0x10);
        FUN_002e73b4(auStack_1b0);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

