
undefined8 FUN_00194a60(long param_1,ulong param_2,long param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar6 = (long *)(param_1 + 0x38);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  plVar4 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar4;
    do {
      plVar3 = plVar5;
      if ((ulong)plVar5[4] < param_2) {
        plVar3 = plVar2;
        plVar5 = plVar5 + 1;
      }
      plVar5 = (long *)*plVar5;
      plVar2 = plVar3;
    } while (plVar5 != (long *)0x0);
    if ((((plVar3 != plVar4) && ((ulong)plVar3[4] <= param_2)) &&
        (plVar3[8] == *(size_t *)(param_3 + 0x18))) &&
       (iVar1 = memcmp((void *)(*(long *)(param_3 + 0x10) + *(long *)(param_3 + 0x28)),
                       (void *)(plVar3[7] + plVar3[10]),plVar3[8]), iVar1 == 0)) {
      plVar4 = (long *)(param_1 + 0x28);
      plVar5 = (long *)*plVar4;
      if (plVar5 == (long *)0x0) {
LAB_00194b64:
        plVar3 = plVar4;
      }
      else {
        plVar2 = plVar4;
        do {
          plVar3 = plVar5;
          if ((ulong)plVar5[4] < param_2) {
            plVar3 = plVar2;
            plVar5 = plVar5 + 1;
          }
          plVar5 = (long *)*plVar5;
          plVar2 = plVar3;
        } while (plVar5 != (long *)0x0);
        if ((plVar3 == plVar4) || (param_2 < (ulong)plVar3[4])) goto LAB_00194b64;
      }
      if (plVar3 + 5 != param_4) {
        FUN_001a2ac0(param_4 + 2,plVar3[7],plVar3[8],plVar3[8] - plVar3[7]);
      }
      uVar7 = 1;
      goto LAB_00194b04;
    }
  }
  uVar7 = 0;
LAB_00194b04:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar7;
}

