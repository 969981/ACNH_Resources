
undefined8 FUN_026eed64(long param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) ||
     (lVar1 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x38))(), lVar1 == 0)) {
LAB_026eef20:
    uVar5 = 0;
  }
  else {
    if (*(long **)(lVar1 + 0x98) == (long *)0x0) {
      uVar3 = 0;
      if (param_2 < 8) goto LAB_026eedd0;
LAB_026eef0c:
      if (((uVar3 & 1) == 0) || (lVar1 = *(long *)(lVar1 + 0x98), lVar1 == 0)) goto LAB_026eef20;
      uVar5 = 0;
    }
    else {
      puVar2 = (undefined8 *)**(long **)(lVar1 + 0x98);
      uVar3 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar2)();
      }
      if (7 < param_2) goto LAB_026eef0c;
LAB_026eedd0:
      lVar4 = *(long *)(lVar1 + 0x80) + *(long *)(lVar1 + 0x78) + (ulong)param_2 * 0x48;
      if (*(long *)(lVar4 + 0x1e33b0) == 0 && *(long *)(lVar4 + 0x1e33b8) == 0) goto LAB_026eef0c;
      if ((*(int *)(param_1 + 0x94) == 1) && (*(uint *)(param_1 + 0x90) == param_2)) {
        lVar4 = 0;
      }
      else if ((*(int *)(param_1 + 0x9c) == 1) && (*(uint *)(param_1 + 0x98) == param_2)) {
        lVar4 = 1;
      }
      else if ((*(int *)(param_1 + 0xa4) == 1) && (*(uint *)(param_1 + 0xa0) == param_2)) {
        lVar4 = 2;
      }
      else if ((*(int *)(param_1 + 0xac) == 1) && (*(uint *)(param_1 + 0xa8) == param_2)) {
        lVar4 = 3;
      }
      else if ((*(int *)(param_1 + 0xb4) == 1) && (*(uint *)(param_1 + 0xb0) == param_2)) {
        lVar4 = 4;
      }
      else if ((*(int *)(param_1 + 0xbc) == 1) && (*(uint *)(param_1 + 0xb8) == param_2)) {
        lVar4 = 5;
      }
      else if ((*(int *)(param_1 + 0xc4) == 1) && (*(uint *)(param_1 + 0xc0) == param_2)) {
        lVar4 = 6;
      }
      else {
        if ((*(int *)(param_1 + 0xcc) != 1) || (*(uint *)(param_1 + 200) != param_2))
        goto LAB_026eef0c;
        lVar4 = 7;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar4 * 8 + 0x60);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
      }
      if ((uVar3 & 1) == 0) {
        return uVar5;
      }
      lVar1 = *(long *)(lVar1 + 0x98);
      if (lVar1 == 0) {
        return uVar5;
      }
    }
    if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar1 + 8))();
    }
  }
  return uVar5;
}

