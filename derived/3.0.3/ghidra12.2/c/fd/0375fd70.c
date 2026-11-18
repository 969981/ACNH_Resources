
void FUN_0375fd70(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  
  if ((*(int *)(param_2 + 8) != 5) && (lVar4 = FUN_03776680(), lVar4 != 0)) {
    lVar1 = lVar4 + 0x70 + (ulong)param_3 * 0x658;
    if (2 < param_3) {
      lVar1 = lVar4 + 0x70;
    }
    if ((*(long **)(lVar1 + 0x60) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar4 = *(long *)(lVar1 + 0x40);
    lVar2 = *(long *)(lVar1 + 0x48);
    uVar6 = (**(code **)(*param_1 + 8))(param_1);
    if ((uVar6 & 1) != 0) {
      iVar7 = 0;
      do {
        if (*(short *)(lVar2 + lVar4 + (long)iVar7 * 0xc) == -2) break;
        (**(code **)*param_1)(param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 300);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar1 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0375fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

