
void FUN_03c56320(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_04bb2f78;
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    if (*param_2 == 0) {
      *(undefined1 *)(plVar5 + 9) = 0;
      plVar5[8] = (long)&DAT_0419b4e4;
    }
    else {
      lVar4 = *param_2;
      *(char *)(plVar5 + 9) = (char)param_2[1];
      plVar5[8] = lVar4;
    }
    plVar5[10] = param_2[2];
    puVar1 = puVar2;
    if ((undefined *)param_2[3] != (undefined *)0x0) {
      puVar1 = (undefined *)param_2[3];
    }
    plVar5[0xb] = (long)puVar1;
    if (plVar5[4] != 0) {
      lVar4 = (**(code **)(**(long **)(plVar5[6] + 0x18) + 0x20))();
      (**(code **)(*plVar5 + 0x58))(plVar5,0,*(long *)(lVar4 + 8) + 0x530,0);
    }
    if (plVar5[5] != 0) {
      lVar4 = (**(code **)(**(long **)(plVar5[6] + 0x18) + 0x20))();
      if (*(long *)(lVar4 + 200) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(lVar4 + 200) + 0xd8);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,1,uVar3,0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    if (*param_2 == 0) {
      *(undefined1 *)(plVar5 + 9) = 0;
      plVar5[8] = (long)&DAT_0419b4e4;
    }
    else {
      lVar4 = *param_2;
      *(char *)(plVar5 + 9) = (char)param_2[1];
      plVar5[8] = lVar4;
    }
    plVar5[10] = param_2[2];
    if ((undefined *)param_2[3] != (undefined *)0x0) {
      puVar2 = (undefined *)param_2[3];
    }
    plVar5[0xb] = (long)puVar2;
    if (plVar5[4] != 0) {
      lVar4 = (**(code **)(**(long **)(plVar5[6] + 0x18) + 0x20))();
      (**(code **)(*plVar5 + 0x58))(plVar5,0,*(long *)(lVar4 + 8) + 0x530,0);
    }
    if (plVar5[5] != 0) {
      lVar4 = (**(code **)(**(long **)(plVar5[6] + 0x18) + 0x20))();
      if (*(long *)(lVar4 + 200) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(lVar4 + 200) + 0xd8);
      }
                    /* WARNING: Could not recover jumptable at 0x03c56500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,1,uVar3,0);
      return;
    }
  }
  return;
}

