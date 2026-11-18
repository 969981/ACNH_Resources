
void FUN_03777800(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  
  if (((*(int *)(DAT_05ab5ea8 + 0xc) != 5) && (*(int *)(DAT_05ab5ea8 + 0xc) != 6)) &&
     (lVar5 = FUN_03776400(), lVar5 != 0)) {
    lVar1 = lVar5 + 0x70 + (ulong)param_2 * 0x658;
    if (2 < param_2) {
      lVar1 = lVar5 + 0x70;
    }
    if ((*(long **)(lVar1 + 0xd0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar1 + 0xd0), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar5 = *(long *)(lVar1 + 0xb0);
    lVar2 = *(long *)(lVar1 + 0xb8);
    uVar7 = (**(code **)(*param_1 + 8))(param_1);
    puVar3 = PTR_DAT_04bbc1c0;
    if ((uVar7 & 1) != 0) {
      iVar8 = 0;
      do {
        if (*(short *)(lVar2 + lVar5 + (long)iVar8 * 6) == *(short *)puVar3) break;
        (**(code **)*param_1)(param_1);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 300);
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar1 + 0xd0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0xd0) + 8), puVar6 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03777920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar6)();
      return;
    }
  }
  return;
}

