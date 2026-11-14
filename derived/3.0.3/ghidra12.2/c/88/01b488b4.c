
uint FUN_01b488b4(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_05574040 == 0) ||
     (lVar2 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar2 == 0))
  {
    uVar1 = 0;
    goto LAB_01b489b0;
  }
  lVar6 = *(long *)(lVar2 + 0x276d80);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x276d80) == 0) goto LAB_01b48978;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x276d80) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0x276d60);
      local_40 = *(undefined8 *)(lVar2 + 0x276d68);
      uStack_38 = 0x1f2e0;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_01b48978:
  uVar1 = FUN_01b489c8(param_1,param_2 & 1,*(long *)(lVar2 + 0x276d68) + *(long *)(lVar2 + 0x276d60)
                      );
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x276d80) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x276d80) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_01b489b0:
  return uVar1 & 1;
}

