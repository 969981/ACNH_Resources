
void FUN_00813330(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    lVar6 = (long)iVar1 << 3;
    do {
      if (*(int *)*puVar5 == param_2) {
        return;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (iVar1 < *(int *)(param_1 + 0x3c)) {
    piVar7 = *(int **)(param_1 + 0x48);
    if (piVar7 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)piVar7;
    }
    piVar7[0] = 0;
    puVar5 = DAT_04ccc690;
    piVar7[1] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    if (*(char *)(puVar5 + 1) == '\0') {
      uVar2 = nn::oe::GetProgramTotalActiveTime();
      *puVar5 = uVar2;
      *(undefined1 *)(puVar5 + 1) = 1;
    }
    else {
      uVar2 = *puVar5;
    }
    *(undefined8 *)(piVar7 + 2) = uVar2;
    if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = piVar7;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    *piVar7 = param_2;
    puVar5 = DAT_04ccc690;
    if (*(char *)(DAT_04ccc690 + 1) == '\0') {
      uVar2 = nn::oe::GetProgramTotalActiveTime();
      *puVar5 = uVar2;
      *(undefined1 *)(puVar5 + 1) = 1;
      param_2 = *piVar7;
    }
    else {
      uVar2 = *DAT_04ccc690;
    }
    *(undefined8 *)(piVar7 + 2) = uVar2;
    piVar7[4] = 0;
    piVar7[5] = 0;
    if ((DAT_05574040 != 0) && (lVar6 = FUN_026eec4c(DAT_05574040,param_2), lVar6 != 0)) {
      lVar4 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar4 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar4 + 0x2a728) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x2a728), puVar5 == (undefined8 *)0x0)) {
        *(undefined8 *)(piVar7 + 4) =
             *(undefined8 *)(*(long *)(lVar4 + 0x2a710) + *(long *)(lVar4 + 0x2a708));
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        *(undefined8 *)(piVar7 + 4) =
             *(undefined8 *)(*(long *)(lVar4 + 0x2a710) + *(long *)(lVar4 + 0x2a708));
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar4 + 0x2a728) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x2a728) + 8), puVar5 != (undefined8 *)0x0))
        {
                    /* WARNING: Could not recover jumptable at 0x008134b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar5)();
          return;
        }
      }
    }
  }
  return;
}

