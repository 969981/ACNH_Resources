
long FUN_015ff440(long param_1,uint param_2,long *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  
  if (((((int)param_2 < 1) || (uVar7 = (ulong)param_2, *(int *)(param_1 + 0x1d0) <= (int)param_2))
      || (*(uint *)(param_1 + 0x1b0) <= param_2)) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x1b8) + uVar7 * 8), lVar3 == 0)) {
    if (0 < *(int *)(param_1 + 0x1d0)) {
      uVar7 = 0;
      do {
        if (uVar7 < *(uint *)(param_1 + 0x1b0)) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x1b8) + uVar7 * 8);
        }
        else {
          lVar3 = 0;
        }
        plVar4 = (long *)(**(code **)(*(long *)(lVar3 + 0x158) + 0xf0))(lVar3 + 0x158);
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x18))(plVar4);
        lVar8 = plVar4[1];
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar3 = param_3[1];
        if (lVar8 == lVar3) {
LAB_015ff5bc:
          lVar3 = 0;
          if (((int)(uint)uVar7 < *(int *)(param_1 + 0x1d0)) &&
             ((uint)uVar7 < *(uint *)(param_1 + 0x1b0))) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x1b8) + (uVar7 & 0xffffffff) * 8);
          }
          goto LAB_015ff5e0;
        }
        uVar5 = 0;
        bVar2 = true;
        do {
          lVar8 = plVar4[1] + 2 + uVar5;
          cVar1 = *(char *)(lVar8 + -2);
          if (cVar1 != *(char *)(lVar3 + uVar5)) break;
          if (cVar1 == '\0') {
            if (bVar2) goto LAB_015ff5bc;
            break;
          }
          cVar1 = *(char *)(lVar8 + -1);
          if (cVar1 != *(char *)(lVar3 + uVar5 + 1)) break;
          if (cVar1 == '\0') goto LAB_015ff5bc;
          cVar1 = *(char *)(plVar4[1] + 2 + uVar5);
          if (cVar1 != *(char *)(lVar3 + uVar5 + 2)) break;
          if (cVar1 == '\0') goto LAB_015ff5bc;
          bVar2 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x1d0));
    }
    uVar6 = 0xffffffff;
    lVar3 = 0;
  }
  else {
LAB_015ff5e0:
    uVar6 = (undefined4)uVar7;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar6;
  }
  return lVar3;
}

