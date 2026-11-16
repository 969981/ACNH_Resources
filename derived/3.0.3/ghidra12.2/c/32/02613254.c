
void FUN_02613254(undefined8 *param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  char cVar5;
  
  if (param_2 == 0) {
LAB_02613458:
    *(undefined8 *)((long)param_1 + 5) = 0;
    *param_1 = 0;
    return;
  }
  lVar4 = param_2 + 0x194b0;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar4 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar4 + 0x2d1d0) == (long *)0x0) ||
     (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x2d1d0), puVar1 == (undefined8 *)0x0)) {
    cVar5 = *(char *)(*(long *)(lVar4 + 0x2d1b8) + *(long *)(lVar4 + 0x2d1b0) + 4);
  }
  else {
    uVar2 = (**(code **)*puVar1)();
    cVar5 = *(char *)(*(long *)(lVar4 + 0x2d1b8) + *(long *)(lVar4 + 0x2d1b0) + 4);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x2d1d0) != 0)) &&
       (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x2d1d0) + 8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  if (cVar5 == param_3) {
    uVar3 = 0;
  }
  else {
    if ((*(long **)(lVar4 + 0x2d208) == (long *)0x0) ||
       (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x2d208), puVar1 == (undefined8 *)0x0)) {
      cVar5 = *(char *)(*(long *)(lVar4 + 0x2d1f0) + *(long *)(lVar4 + 0x2d1e8) + 4);
    }
    else {
      uVar2 = (**(code **)*puVar1)();
      cVar5 = *(char *)(*(long *)(lVar4 + 0x2d1f0) + *(long *)(lVar4 + 0x2d1e8) + 4);
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x2d208) != 0)) &&
         (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x2d208) + 8), puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)();
      }
    }
    if (cVar5 == param_3) {
      uVar3 = 1;
    }
    else {
      if ((*(long **)(lVar4 + 0x2d240) == (long *)0x0) ||
         (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x2d240), puVar1 == (undefined8 *)0x0)) {
        cVar5 = *(char *)(*(long *)(lVar4 + 0x2d228) + *(long *)(lVar4 + 0x2d220) + 4);
      }
      else {
        uVar2 = (**(code **)*puVar1)();
        cVar5 = *(char *)(*(long *)(lVar4 + 0x2d228) + *(long *)(lVar4 + 0x2d220) + 4);
        if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x2d240) != 0)) &&
           (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x2d240) + 8), puVar1 != (undefined8 *)0x0))
        {
          (**(code **)*puVar1)();
        }
      }
      if (cVar5 == param_3) {
        uVar3 = 2;
      }
      else {
        if ((*(long **)(lVar4 + 0x2d278) == (long *)0x0) ||
           (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x2d278), puVar1 == (undefined8 *)0x0)) {
          cVar5 = *(char *)(*(long *)(lVar4 + 0x2d260) + *(long *)(lVar4 + 0x2d258) + 4);
        }
        else {
          uVar2 = (**(code **)*puVar1)();
          cVar5 = *(char *)(*(long *)(lVar4 + 0x2d260) + *(long *)(lVar4 + 0x2d258) + 4);
          if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x2d278) != 0)) &&
             (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x2d278) + 8), puVar1 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar1)();
          }
        }
        if (cVar5 != param_3) goto LAB_02613458;
        uVar3 = 3;
      }
    }
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  return;
}

