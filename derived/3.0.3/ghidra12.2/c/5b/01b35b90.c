
void FUN_01b35b90(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  lVar2 = DAT_0532d278;
  while (0 < *(int *)(lVar2 + 0x10)) {
    plVar5 = *(long **)(lVar2 + 8);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)((long)plVar5 - (long)*(int *)(lVar2 + 0x14)), plVar5 == (long *)0x0))
    break;
    (**(code **)(*plVar5 + 0x18))();
  }
  do {
    if (*(int *)(lVar2 + 0x28) < 1) {
LAB_01b35c94:
      puVar1 = PTR_DAT_04bb46b0;
      iVar6 = 0;
      do {
        lVar2 = *(long *)puVar1;
        if ((lVar2 != 0) && (lVar2 = FUN_026eec4c(lVar2,iVar6), lVar2 != 0)) {
          if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
             (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
            lVar7 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
            FUN_026d6170(lVar7 + 0x36910,iVar6,lVar7 + 0x3690a);
          }
          else {
            uVar4 = (**(code **)*puVar3)();
            lVar7 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
            FUN_026d6170(lVar7 + 0x36910,iVar6,lVar7 + 0x3690a);
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
               (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar3)();
            }
          }
          lVar7 = lVar2 + 0x194b0;
          if (*(long *)(lVar2 + 0x194b8) == 0) {
            lVar7 = *(long *)(*(long *)puVar1 + 0x20);
            plVar5 = *(long **)(lVar7 + 0x28);
          }
          else {
            plVar5 = *(long **)(lVar2 + 0x194d8);
          }
          if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
            FUN_0282ecb0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x13698,iVar6);
          }
          else {
            uVar4 = (*(code *)**(undefined8 **)*plVar5)();
            FUN_0282ecb0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x13698,iVar6);
            if (((uVar4 & 1) != 0) &&
               ((*(long *)(lVar7 + 0x28) != 0 &&
                (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar3 != (undefined8 *)0x0
                )))) {
              (**(code **)*puVar3)();
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 8);
      return;
    }
    plVar5 = *(long **)(lVar2 + 0x20);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)((long)plVar5 - (long)*(int *)(lVar2 + 0x2c)), plVar5 == (long *)0x0))
    goto LAB_01b35c94;
    (**(code **)(*plVar5 + 0x18))();
  } while( true );
}

