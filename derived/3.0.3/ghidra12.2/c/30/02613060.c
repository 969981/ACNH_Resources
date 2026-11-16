
void FUN_02613060(undefined8 *param_1,long param_2,short param_3)

{
  short sVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  
  if (param_2 == 0) {
LAB_0261323c:
    *(undefined8 *)((long)param_1 + 5) = 0;
    *param_1 = 0;
  }
  else {
    lVar6 = param_2 + 0x194b0;
    if (*(long *)(param_2 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar6 + 0x2d1d0) == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)**(long **)(lVar6 + 0x2d1d0);
      uVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)();
      }
    }
    sVar1 = *(short *)(*(long *)(lVar6 + 0x2d1b8) + *(long *)(lVar6 + 0x2d1b0));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x2d1d0) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x2d1d0) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
    if (sVar1 == param_3) {
      uVar5 = 0;
    }
    else {
      if ((*(long **)(lVar6 + 0x2d208) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x2d208), puVar3 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar3)();
        uVar2 = uVar2 ^ 1;
      }
      sVar1 = *(short *)(*(long *)(lVar6 + 0x2d1f0) + *(long *)(lVar6 + 0x2d1e8));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x2d208) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x2d208) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
      if (sVar1 == param_3) {
        uVar5 = 1;
      }
      else {
        if ((*(long **)(lVar6 + 0x2d240) == (long *)0x0) ||
           (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x2d240), puVar3 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar3)();
          uVar2 = uVar2 ^ 1;
        }
        sVar1 = *(short *)(*(long *)(lVar6 + 0x2d228) + *(long *)(lVar6 + 0x2d220));
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x2d240) != 0)) &&
           (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x2d240) + 8), puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)();
        }
        if (sVar1 == param_3) {
          uVar5 = 2;
        }
        else {
          if ((*(long **)(lVar6 + 0x2d278) == (long *)0x0) ||
             (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x2d278), puVar3 == (undefined8 *)0x0)) {
            uVar2 = 1;
          }
          else {
            uVar2 = (**(code **)*puVar3)();
            uVar2 = uVar2 ^ 1;
          }
          sVar1 = *(short *)(*(long *)(lVar6 + 0x2d260) + *(long *)(lVar6 + 0x2d258));
          if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x2d278) != 0)) &&
             (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x2d278) + 8), puVar3 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar3)();
          }
          if (sVar1 != param_3) goto LAB_0261323c;
          uVar5 = 3;
        }
      }
    }
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 4) = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
  }
  return;
}

