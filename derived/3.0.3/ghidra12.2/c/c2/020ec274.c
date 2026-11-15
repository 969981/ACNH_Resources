
void FUN_020ec274(char *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ushort uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = FUN_0265d660((long)*param_1,param_1 + 1);
  if (lVar3 == 0) {
    return;
  }
  if (*(short *)(param_1 + 2) < 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x28);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_020ec310;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar3 + 8);
      uStack_40 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0x100;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_020ec310:
  uVar8 = *(ushort *)(param_1 + 4);
  puVar1 = (undefined1 *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
  if (0xfe < uVar8) {
    uVar8 = 0xff;
  }
  puVar2 = puVar1 + ((long)(short)*(ushort *)(param_1 + 2) & 0xffffffff);
  if (0xff < *(ushort *)(param_1 + 2)) {
    puVar2 = puVar1;
  }
  *puVar2 = (char)uVar8;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

