
undefined8 FUN_01a49be4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  
  puVar1 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,**(undefined4 **)(param_1 + 8)), lVar2 == 0)) {
    return 0;
  }
  lVar5 = *(long *)puVar1;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar2 = *(long *)(lVar5 + 0x20) + 0x10d8;
LAB_01a49c60:
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 != 0) {
        lVar5 = lVar5 + 0x70;
LAB_01a49ca4:
        if ((*(long **)(lVar5 + 0x1c2520) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c2520), puVar6 == (undefined8 *)0x0)) {
          uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
        }
        else {
          uVar3 = (**(code **)*puVar6)();
          uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
          if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x1c2520) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c2520) + 8),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
        goto LAB_01a49d0c;
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0)) goto LAB_01a49ca4;
  }
  else {
    lVar2 = lVar2 + 0x1a588;
    if (lVar5 != 0) goto LAB_01a49c60;
  }
  uVar7 = 0;
LAB_01a49d0c:
  uVar4 = FUN_01a4b340(lVar2,param_2,uVar7);
  return uVar4;
}

