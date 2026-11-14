
bool FUN_01b48d90(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_05574040 == 0) ||
     (lVar1 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar1 == 0))
  {
    return false;
  }
  lVar5 = *(long *)(lVar1 + 0x276d80);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x276d80) == 0) goto LAB_01b48e54;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x276d80) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar1 + 0x276d60);
      local_40 = *(undefined8 *)(lVar1 + 0x276d68);
      uStack_38 = 0x1f2e0;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_01b48e54:
  lVar5 = FUN_01b48c40(param_1,param_2 & 1,*(long *)(lVar1 + 0x276d68) + *(long *)(lVar1 + 0x276d60)
                      );
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x276d80) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x276d80) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return lVar5 != 0;
}

