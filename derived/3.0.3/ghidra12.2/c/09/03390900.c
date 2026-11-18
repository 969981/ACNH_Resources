
void FUN_03390900(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_2 != 0) {
    iVar6 = FUN_00b08880(param_2,0,0);
    iVar8 = 0;
    do {
      if ((&DAT_05739dc8)[(long)iVar8 * 0x4a] == iVar6) {
        if (DAT_05739db8 == 0) {
          return;
        }
        uVar7 = 0;
        plVar2 = DAT_05739da8;
        if (DAT_05739db8 < 1) {
          plVar2 = (long *)0x0;
        }
        do {
          uVar3 = uVar7 << 1;
          uVar4 = uVar7 >> 0x1f;
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
          *(undefined2 *)((long)plVar2 + (-uVar4 & 0xfffffffe00000000 | uVar3) + 0x68) = 0;
          plVar5 = DAT_05739da8;
        } while (uVar1 != 0x35);
        if (DAT_05739db8 == 0) {
          return;
        }
        if (0 < DAT_05739db8) {
          if (*DAT_05739da8 != 0) {
            *(long *)(*DAT_05739da8 + 8) = DAT_05739da8[1];
          }
          if ((long *)plVar5[1] != (long *)0x0) {
            *(long *)plVar5[1] = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          DAT_05739db8 = DAT_05739db8 + -1;
          plVar5[0x1b] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x033909e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((&DAT_05739dc0)[(long)iVar8 * 0x25] + 8))();
        return;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x4f);
  }
  return;
}

