
undefined8 FUN_016c9dd8(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = lVar2 + (long)(int)local_48 * 0x18b8;
  lVar6 = *(long *)(lVar2 + 0x271d00);
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
      if (*(long *)(lVar2 + 0x271d00) == 0) goto LAB_016c9ed0;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
      local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
      uStack_38 = 0x1190;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_016c9ed0:
  puVar1 = (undefined2 *)(*(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x8b0) = param_2[4];
  *(undefined1 *)(lVar6 + 0x8b2) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(lVar6 + 0x8b3) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(lVar6 + 0x8b4) = *(undefined4 *)(param_2 + 6);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x8b8) = param_2[8];
  *(undefined1 *)(lVar6 + 0x8ba) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(lVar6 + 0x8bb) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(lVar6 + 0x8bc) = *(undefined4 *)(param_2 + 10);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x8c0) = param_2[0xc];
  *(undefined1 *)(lVar6 + 0x8c2) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(lVar6 + 0x8c3) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined4 *)(lVar6 + 0x8c4) = *(undefined4 *)(param_2 + 0xe);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x1170) = param_2[0x10];
  *(undefined1 *)(lVar6 + 0x1172) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(lVar6 + 0x1173) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined4 *)(lVar6 + 0x1174) = *(undefined4 *)(param_2 + 0x12);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x1178) = param_2[0x14];
  *(undefined1 *)(lVar6 + 0x117a) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(lVar6 + 0x117b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(lVar6 + 0x117c) = *(undefined4 *)(param_2 + 0x16);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x1180) = param_2[0x18];
  *(undefined1 *)(lVar6 + 0x1182) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(lVar6 + 0x1183) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(lVar6 + 0x1184) = *(undefined4 *)(param_2 + 0x1a);
  if ((*(long *)(lVar2 + 0x271d00) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x271d00) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar2 + 0x271ce0);
    local_40 = *(undefined8 *)(lVar2 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar6 = *(long *)(lVar2 + 0x271ce8) + *(long *)(lVar2 + 0x271ce0);
  *(undefined2 *)(lVar6 + 0x1188) = param_2[0x1c];
  *(undefined1 *)(lVar6 + 0x118a) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(lVar6 + 0x118b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(lVar6 + 0x118c) = *(undefined4 *)(param_2 + 0x1e);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x271d00) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x271d00) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return 1;
}

