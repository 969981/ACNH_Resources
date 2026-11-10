
undefined8 FUN_00321590(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    do {
      lVar3 = *(long *)(param_2 + 0x80);
      if ((*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x34)) && (*(long *)(param_2 + 0x98) != 0)
         ) {
        lVar4 = 0;
        do {
          lVar5 = *(long *)(param_2 + lVar4 * 8 + 0x4d8);
          while (lVar1 = lVar5, lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x80);
            if ((*(int *)(lVar1 + 0x18) == *(int *)(param_1 + 0x34)) &&
               (*(long *)(lVar1 + 0x98) != 0)) {
              (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x280) + 0x128))();
              FUN_0031df0c(lVar1,*(undefined8 *)(param_1 + 0x10),1);
              FUN_0031d9ac(lVar1);
              plVar2 = *(long **)(*(long *)(param_1 + 0x280) + 0x110);
              (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
              (**(code **)(**(long **)(*(long *)(param_1 + 0x280) + 0x128) + 8))();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x280) + 0x128))();
        FUN_0031df0c(param_2,*(undefined8 *)(param_1 + 0x10),1);
        FUN_0031d9ac(param_2);
        plVar2 = *(long **)(*(long *)(param_1 + 0x280) + 0x110);
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(**(long **)(*(long *)(param_1 + 0x280) + 0x128) + 8))();
      }
      param_2 = lVar3;
    } while (lVar3 != 0);
  }
  return 1;
}

