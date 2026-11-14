
void FUN_0160bd30(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = param_2 + 0x6e8;
  (**(code **)(*(long *)(param_2 + 0x6e8) + 0x18))(puVar1);
  (**(code **)(*(long *)(param_2 + 0x6e8) + 0x18))(puVar1);
  puVar4 = *(undefined **)(param_2 + 0x6ea);
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  if (puVar4 != PTR_DAT_04c4b988) {
    pcVar2 = *(char **)(param_2 + 0x6ea);
    if (*pcVar2 != *PTR_DAT_04c4b988) {
LAB_0160be98:
      lVar3 = FUN_015ff440(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d0),
                           param_2[0x6fe],puVar1,param_2 + 0x6fe);
      if (lVar3 == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x28);
      plVar6 = *(long **)(param_2 + 0x26);
      if (lVar3 != 0 && plVar6 != (long *)0x0) {
        do {
          (**(code **)(*plVar6 + 0x98))(plVar6,lVar3);
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) break;
          plVar6 = (long *)plVar6[2];
        } while (plVar6 != (long *)0x0);
      }
      param_2[0x24] = param_2[0x24] | 0x1000000;
                    /* WARNING: Could not recover jumptable at 0x0160bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x1c) + 0xa8))(param_2 + 0x1c);
      return;
    }
    if (*pcVar2 != '\0') {
      lVar3 = 0;
      do {
        if ((lVar3 == 0x80000) || (pcVar2[lVar3 + 1] != PTR_DAT_04c4b988[lVar3 + 1]))
        goto LAB_0160be98;
        if (pcVar2[lVar3 + 1] == '\0') break;
        lVar5 = lVar3 + 2;
        if (pcVar2[lVar5] != PTR_DAT_04c4b988[lVar3 + 2]) goto LAB_0160be98;
        lVar3 = lVar3 + 2;
      } while (pcVar2[lVar5] != '\0');
    }
  }
  param_2[0x728] = *param_2;
  FUN_016004b0(param_2 + 0x726);
  param_2[0xe32] = *param_2;
  FUN_016004b0(param_2 + 0xe30);
  lVar3 = *(long *)(param_2 + 0x764);
  if ((lVar3 != 0) && (lVar5 = *(long *)(param_2 + 0xe6e), lVar5 != 0)) {
    for (plVar6 = *(long **)(param_2 + 0x26); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
      (**(code **)(*plVar6 + 0xa0))(param_1,plVar6,lVar3,lVar5);
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((lVar3 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) break;
    }
  }
  param_2[0x24] = param_2[0x24] | 0x1000000;
  (**(code **)(*(long *)(param_2 + 0x1c) + 0xa8))(param_2 + 0x1c);
  param_2[0x6ff] = param_1;
  return;
}

