
void FUN_038f1480(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((0 < *(int *)(param_2 + 0xa8)) && (lVar5 = *(long *)(param_2 + 0xa0), lVar5 != param_2 + 0x98)
     ) {
    lVar3 = lVar5 + -0x30;
    do {
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),0x20);
      (**(code **)(*(long *)(lVar5 + -0x30) + 0x18))(lVar3);
      lVar2 = 0;
      do {
        if (*(char *)(*(long *)(lVar3 + 8) + lVar2) == '\0') goto LAB_038f1584;
        lVar1 = *(long *)(lVar3 + 8) + lVar2;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_038f1584;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_038f1584;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_038f1584:
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar3,lVar2);
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),0x3d);
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),0x22);
      plVar4 = (long *)(lVar3 + 0x18);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar2 = 0;
      do {
        if (*(char *)(*(long *)(lVar3 + 0x20) + lVar2) == '\0') goto LAB_038f14d8;
        lVar1 = *(long *)(lVar3 + 0x20) + lVar2;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_038f14d8;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_038f14d8;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_038f14d8:
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar4,lVar2);
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),0x22);
      lVar5 = *(long *)(lVar5 + 8);
      lVar3 = lVar5 + -0x30;
    } while (lVar3 != param_2 + 0x68);
  }
  return;
}

