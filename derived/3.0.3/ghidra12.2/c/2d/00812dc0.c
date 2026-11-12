
long FUN_00812dc0(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  plVar1 = DAT_04ccc690;
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    lVar5 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      piVar6 = (int *)*puVar3;
      if (*piVar6 == param_2) {
        if ((char)DAT_04ccc690[1] == '\0') {
          lVar5 = nn::oe::GetProgramTotalActiveTime();
          *plVar1 = lVar5;
          *(undefined1 *)(plVar1 + 1) = 1;
        }
        else {
          lVar5 = *DAT_04ccc690;
        }
        return (lVar5 - *(long *)(piVar6 + 2)) / 1000000000 + *(long *)(piVar6 + 4);
      }
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((DAT_05574040 == 0) || (lVar5 = FUN_026eec4c(), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar4 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar4 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar4 + 0x2a728) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar4 + 0x2a728), puVar3 == (undefined8 *)0x0)) {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x2a710) + *(long *)(lVar4 + 0x2a708));
    }
    else {
      uVar2 = (**(code **)*puVar3)();
      lVar5 = *(long *)(*(long *)(lVar4 + 0x2a710) + *(long *)(lVar4 + 0x2a708));
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x2a728) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x2a728) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  return lVar5;
}

