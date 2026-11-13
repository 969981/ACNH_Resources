
undefined8 FUN_010f62f0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined *local_60;
  long lStack_58;
  char local_34 [4];
  
  plVar1 = (long *)(param_1 + 0x18);
  if (plVar1 != param_3) {
    *(long *)(param_1 + 0x28) = param_3[2];
    *(int *)(param_1 + 0x30) = (int)param_3[3];
    *(long *)(param_1 + 0x38) = param_3[4];
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_3 + 0x1c);
    *(char *)(param_1 + 0x40) = (char)param_3[5];
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)((long)param_3 + 0x29);
    lVar4 = *param_3;
    *param_3 = *(long *)(param_1 + 0x18);
    *(long **)(lVar4 + 8) = plVar1;
    *(long **)(*(long *)(param_1 + 0x18) + 8) = param_3;
    *(long *)(param_1 + 0x18) = lVar4;
    plVar6 = (long *)param_3[1];
    lVar4 = *plVar6;
    *(long **)(*param_3 + 8) = plVar6;
    *plVar6 = *param_3;
    *(long **)(lVar4 + 8) = param_3;
    *param_3 = lVar4;
    param_3[4] = 0;
    param_3[2] = 0;
    param_3[3] = -1;
    *(undefined2 *)(param_3 + 5) = 0x100;
  }
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 0x288) + 0x26) != '\0') {
    plVar6 = (long *)(param_1 + 8);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = *(long *)(param_1 + 0x10);
    (**(code **)(DAT_050b4c28 + 0x18))(&DAT_050b4c28);
    if (lVar4 != DAT_050b4c30) {
      uVar5 = 0;
      bVar3 = true;
      do {
        cVar2 = *(char *)(*(long *)(param_1 + 0x10) + uVar5);
        if (cVar2 != *(char *)(DAT_050b4c30 + uVar5)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_010f6440;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      goto LAB_010f65cc;
    }
  }
LAB_010f6440:
  plVar6 = (long *)(param_1 + 8);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar4 = *(long *)(param_1 + 0x10);
  (**(code **)(DAT_050b4c08 + 0x18))(&DAT_050b4c08);
  if (lVar4 == DAT_050b4c10) {
LAB_010f64d0:
    *(undefined1 *)(param_1 + 0x50) = 1;
    return 1;
  }
  uVar5 = 0;
  bVar3 = true;
  do {
    cVar2 = *(char *)(*(long *)(param_1 + 0x10) + uVar5);
    if (cVar2 != *(char *)(DAT_050b4c10 + uVar5)) break;
    if (cVar2 == '\0') {
      if (bVar3) goto LAB_010f64d0;
      break;
    }
    bVar3 = uVar5 < 0x80000;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x80001);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(plVar6);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(plVar6);
  lVar4 = *(long *)(param_1 + 0x10);
  (**(code **)(DAT_050b4c18 + 0x18))(&DAT_050b4c18);
  if (lVar4 != DAT_050b4c20) {
    uVar5 = 0;
    bVar3 = true;
    do {
      cVar2 = *(char *)(*(long *)(param_1 + 0x10) + uVar5);
      if (cVar2 != *(char *)(DAT_050b4c20 + uVar5)) break;
      if (cVar2 == '\0') {
        if (bVar3) goto LAB_010f65cc;
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x48) + 0x288) + 0x18);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lStack_58 = plVar7[1];
    local_34[0] = '\0';
    local_60 = PTR_DAT_04bb2020 + 0x10;
    FUN_0070f4f0(*(undefined8 *)(param_1 + 0x48),plVar6,param_2,&local_60,local_34);
    lVar4 = *(long *)(param_1 + 0x48);
    if ((*(int *)(*(long *)(lVar4 + 0x288) + 0x20) != 0) &&
       (*(char *)(*(long *)(lVar4 + 0x288) + 0x24) == '\0')) {
      return 0;
    }
    if (local_34[0] == '\0') {
      if ((*(char *)(lVar4 + 0x2e8) != '\0') ||
         ((*(long *)(lVar4 + 0x280) != 0 && (*(int *)(*(long *)(lVar4 + 0x280) + 0xb0) - 1U < 2))))
      {
        FUN_010f6294(plVar1);
        return 1;
      }
      goto LAB_010f64d0;
    }
  }
LAB_010f65cc:
  if (*(char *)(param_1 + 0x41) == '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_0068a870(plVar1);
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_0068a838(plVar1);
  }
  return 0;
}

