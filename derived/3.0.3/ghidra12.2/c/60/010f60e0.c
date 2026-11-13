
bool FUN_010f60e0(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 8);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar5 = *(long *)(param_1 + 0x10);
  (**(code **)(DAT_050b4c08 + 0x18))(&DAT_050b4c08);
  if (lVar5 == DAT_050b4c10) {
LAB_010f6184:
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = *(char *)(*(long *)(param_1 + 0x10) + uVar3);
      if (cVar1 != *(char *)(DAT_050b4c10 + uVar3)) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_010f6184;
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    lVar5 = *(long *)(param_1 + 0x48);
    if ((*(char *)(lVar5 + 0x2e8) == '\0') &&
       ((*(long *)(lVar5 + 0x280) == 0 || (1 < *(int *)(*(long *)(lVar5 + 0x280) + 0xb0) - 1U)))) {
      bVar2 = false;
    }
    else {
      *(undefined1 *)(param_1 + 0x50) = 0;
      if (*(long *)(lVar5 + 0x280) == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(*(long *)(lVar5 + 0x280) + 0xb0) == 2;
      }
      if (*(char *)(param_1 + 0x41) == '\0') {
        if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
          *(undefined1 *)(param_1 + 0x40) = 1;
          FUN_0068a870(param_1 + 0x18);
        }
      }
      else if ((((*(long *)(param_1 + 0x28) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
               (*(long *)(param_1 + 0x38) != 0)) && (*(char *)(param_1 + 0x40) == '\0')) {
        *(undefined1 *)(param_1 + 0x40) = 1;
        FUN_0068a838();
      }
    }
    if (((*(char *)(*(long *)(param_1 + 0x48) + 0x2e8) == '\0') &&
        (plVar4 = *(long **)(*(long *)(param_1 + 0x48) + 0x280), plVar4 != (long *)0x0)) &&
       (1 < (int)plVar4[0x16] - 1U)) {
      (**(code **)(*plVar4 + 0x48))();
    }
  }
  return bVar2;
}

