
void FUN_03ea75d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(long *)(lVar2 + 0x18) == lVar2 + 0x10) {
    lVar1 = 0;
  }
  else {
    lVar4 = (long)*(int *)(lVar2 + 0x24);
    lVar5 = *(long *)(lVar2 + 0x18) - lVar4;
    do {
      lVar6 = *(long *)(lVar5 + 0x30);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)**(undefined8 **)(param_1 + 0x40))(param_1 + 0x40);
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar1 + 0x78) != '\0') {
        lVar1 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar6 + 0x30) + 0x18),uVar3);
        *(long *)(param_1 + 0x48) = lVar1;
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar5 + 0x30), lVar1 != 0)) goto LAB_03ea76a8;
      }
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (lVar2 + 0x10) - lVar4);
    lVar1 = 0;
LAB_03ea76a8:
    lVar2 = *(long *)(param_1 + 0x38);
  }
  *(long *)(param_1 + 0x70) = lVar1;
  if (*(long *)(lVar2 + 0x18) != lVar2 + 0x10) {
    lVar5 = (long)*(int *)(lVar2 + 0x24);
    lVar1 = *(long *)(lVar2 + 0x18) - lVar5;
    do {
      lVar6 = *(long *)(lVar1 + 0x38);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)**(undefined8 **)(param_1 + 0x58))(param_1 + 0x58);
      lVar4 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar4 + 0x78) != '\0') {
        lVar4 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar6 + 0x30) + 0x18),uVar3);
        *(long *)(param_1 + 0x60) = lVar4;
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar1 + 0x38), lVar4 != 0)) goto LAB_03ea7760;
      }
      lVar1 = *(long *)(lVar1 + lVar5 + 8) - lVar5;
    } while (lVar1 != (lVar2 + 0x10) - lVar5);
  }
  lVar4 = 0;
LAB_03ea7760:
  *(long *)(param_1 + 0x78) = lVar4;
  return;
}

