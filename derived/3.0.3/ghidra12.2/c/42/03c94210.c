
undefined8 FUN_03c94210(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    plVar8 = (long *)**(undefined8 **)(param_1 + 8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = FUN_00367720(lVar6,plVar8[1]);
    if (lVar6 != 0) {
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 8))();
      if ((uVar2 & 1) == 0) {
        for (lVar7 = *(long *)(lVar6 + 0x20); lVar7 != lVar6 + 0x18; lVar7 = *(long *)(lVar7 + 8)) {
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar9 = lVar5;
          do {
            lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if (lVar9 == lVar4) {
              puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
              uVar2 = (**(code **)*puVar3)(puVar3,lVar5);
              if ((uVar2 & 1) != 0) {
                return 1;
              }
              break;
            }
            lVar9 = *(long *)(lVar9 + 0x18);
          } while (lVar9 != 0);
        }
      }
      else {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x10);
        uVar2 = (**(code **)*puVar3)(puVar3,lVar6,param_2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

