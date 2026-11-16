
void FUN_026570b0(int param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  if (DAT_05574040 != 0) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 + 0x276cb0;
    }
    if ((*(long *)(lVar1 + 0x370) == 0) ||
       (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x370) + 0x10), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    lVar3 = 0;
    do {
      if ((*(long *)(lVar1 + 0x370) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x370) + 0x20), plVar5 != (long *)0x0)) {
        local_58 = *(long *)(lVar1 + 0x350);
        local_48 = 200;
        lStack_50 = *(long *)(lVar1 + 0x358);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
      }
      lVar6 = *(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350);
      if (*(char *)(lVar6 + lVar3) == param_1) {
        if ((*(long *)(lVar1 + 0x370) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar1 + 0x370) + 0x20), plVar5 != (long *)0x0)) {
          local_48 = 200;
          local_58 = *(long *)(lVar1 + 0x350);
          lStack_50 = *(long *)(lVar1 + 0x358);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
          lVar6 = *(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350);
        }
        *(undefined1 *)(lVar6 + lVar3) = 0xff;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 100);
    lVar3 = 100;
    do {
      if ((*(long *)(lVar1 + 0x370) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x370) + 0x20), plVar5 != (long *)0x0)) {
        local_58 = *(long *)(lVar1 + 0x350);
        local_48 = 200;
        lStack_50 = *(long *)(lVar1 + 0x358);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
      }
      lVar6 = *(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350);
      if (*(char *)(lVar6 + lVar3) == param_1) {
        if ((*(long *)(lVar1 + 0x370) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar1 + 0x370) + 0x20), plVar5 != (long *)0x0)) {
          local_48 = 200;
          local_58 = *(long *)(lVar1 + 0x350);
          lStack_50 = *(long *)(lVar1 + 0x358);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
          lVar6 = *(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350);
        }
        *(undefined1 *)(lVar6 + lVar3) = 0xff;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 200);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x370) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x370) + 0x18), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

