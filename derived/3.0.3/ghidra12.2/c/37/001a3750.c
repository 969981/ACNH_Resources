
void FUN_001a3750(long *param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  for (plVar8 = (long *)param_1[1]; (param_2 != param_3 && (plVar8 != param_1));
      plVar8 = (long *)plVar8[1]) {
    plVar8[3] = *(long *)(param_2 + 0x18);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((long)plVar8 + 0x24) = uVar2;
    puVar1 = (undefined2 *)(param_2 + 0x28);
    param_2 = *(long *)(param_2 + 8);
    *(undefined2 *)(plVar8 + 5) = *puVar1;
  }
  if (plVar8 == param_1) {
    if (param_2 != param_3) {
      plVar8 = (long *)FUN_00187df4(0x30);
      puVar4 = PTR_DAT_04bcc230;
      lVar9 = *(long *)(param_2 + 8);
      *plVar8 = 0;
      lVar6 = *(long *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x24);
      uVar3 = *(undefined2 *)(param_2 + 0x28);
      lVar5 = 1;
      *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)((long)plVar8 + 0x24) = uVar2;
      *(undefined2 *)(plVar8 + 5) = uVar3;
      plVar8[2] = (long)(puVar4 + 0x10);
      plVar8[3] = lVar6;
      if (lVar9 == param_3) {
        plVar7 = plVar8;
      }
      else {
        plVar10 = plVar8;
        do {
          plVar7 = (long *)FUN_00187df4(0x30);
          lVar6 = *(long *)(lVar9 + 0x18);
          plVar10[1] = (long)plVar7;
          lVar5 = lVar5 + 1;
          *plVar7 = (long)plVar10;
          plVar7[2] = (long)(puVar4 + 0x10);
          plVar7[3] = lVar6;
          uVar2 = *(undefined4 *)(lVar9 + 0x24);
          *(undefined4 *)(plVar7 + 4) = *(undefined4 *)(lVar9 + 0x20);
          *(undefined4 *)((long)plVar7 + 0x24) = uVar2;
          puVar1 = (undefined2 *)(lVar9 + 0x28);
          lVar9 = *(long *)(lVar9 + 8);
          *(undefined2 *)(plVar7 + 5) = *puVar1;
          plVar10 = plVar7;
        } while (lVar9 != param_3);
      }
      lVar6 = *param_1;
      *(long **)(lVar6 + 8) = plVar8;
      *plVar8 = lVar6;
      lVar6 = param_1[2];
      *param_1 = (long)plVar7;
      plVar7[1] = (long)param_1;
      param_1[2] = lVar6 + lVar5;
      return;
    }
  }
  else {
    lVar5 = *param_1;
    lVar6 = *plVar8;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar6;
    do {
      plVar7 = (long *)plVar8[1];
      param_1[2] = param_1[2] + -1;
      (**(code **)plVar8[2])();
      FUN_00187e4c(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != param_1);
  }
  return;
}

