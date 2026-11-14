
void FUN_016ca938(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = param_2 - 8;
  if ((int)param_2 < 8) {
    uVar1 = param_2;
  }
  if (7 < uVar1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  plVar5 = *(long **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    plVar5 = (long *)*plVar5;
  }
  else {
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)plVar5[0x26];
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  lVar3 = (**(code **)(*plVar5 + 0x38))();
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
    if (DAT_05574040 == 0) {
      return;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    puVar7 = &LAB_002057b0 + lVar3 + (ulong)uVar1 * 0xc40;
    if (7 < (int)param_2) {
      puVar7 = (undefined1 *)(lVar3 + (ulong)uVar1 * 0xc40 + 0x20b9e8);
    }
  }
  else {
    iVar2 = FUN_0252d29c();
    if (DAT_05574040 == 0) {
      return;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    puVar7 = (undefined1 *)(lVar3 + (long)iVar2 * 0xcb0 + 0x211c58);
  }
  lVar3 = *(long *)(puVar7 + 0x680);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      lVar3 = *(long *)(puVar7 + 0x680);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar3 == 0) goto LAB_016cab0c;
    }
    plVar5 = *(long **)(lVar3 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(puVar7 + 0x660);
      uStack_40 = *(undefined8 *)(puVar7 + 0x668);
      local_38 = 4;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_016cab0c:
  *(byte *)(*(long *)(puVar7 + 0x668) + *(long *)(puVar7 + 0x660) + 3) =
       *(byte *)(*(long *)(puVar7 + 0x668) + *(long *)(puVar7 + 0x660) + 3) & 0xfe | *param_1;
  if ((*(long *)(puVar7 + 0x680) != 0) &&
     (plVar5 = *(long **)(*(long *)(puVar7 + 0x680) + 0x20), plVar5 != (long *)0x0)) {
    local_48 = *(undefined8 *)(puVar7 + 0x660);
    uStack_40 = *(undefined8 *)(puVar7 + 0x668);
    local_38 = 4;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
  *(undefined2 *)(*(long *)(puVar7 + 0x668) + *(long *)(puVar7 + 0x660)) =
       *(undefined2 *)(param_1 + 2);
  if ((*(long *)(puVar7 + 0x680) != 0) &&
     (plVar5 = *(long **)(*(long *)(puVar7 + 0x680) + 0x20), plVar5 != (long *)0x0)) {
    local_48 = *(undefined8 *)(puVar7 + 0x660);
    uStack_40 = *(undefined8 *)(puVar7 + 0x668);
    local_38 = 4;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
  *(char *)(*(long *)(puVar7 + 0x668) + *(long *)(puVar7 + 0x660) + 2) =
       (char)*(undefined4 *)(param_1 + 4);
  if ((((uVar4 & 1) != 0) && (*(long *)(puVar7 + 0x680) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(puVar7 + 0x680) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

