
void FUN_00a9ff80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_3 + 2) == '\t') {
    if (DAT_05574040 == 0) {
LAB_00aa00a4:
      lVar3 = 0;
    }
    else {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
        lVar3 = 0;
        if (lVar2 != 0) {
          lVar3 = lVar2 + 0x70;
        }
      }
      else {
        if (puVar6 == (undefined8 *)0x0) goto LAB_00aa00a4;
        lVar3 = 0;
        if ((long *)puVar6[0x26] != (long *)0x0) {
          lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        }
      }
    }
    plVar1 = (long *)(lVar3 + 0x205208);
    lVar2 = *(long *)(lVar3 + 0x205228);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar2 + 0x20);
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar3 + 0x205228) == 0) goto LAB_00aa0178;
        plVar5 = *(long **)(*(long *)(lVar3 + 0x205228) + 0x20);
      }
      if (plVar5 != (long *)0x0) {
        local_48 = *plVar1;
        local_40 = *(undefined8 *)(lVar3 + 0x205210);
        uStack_38 = 0x100;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
    }
LAB_00aa0178:
    local_18 = *param_3;
    FUN_02744fe0(*(long *)(lVar3 + 0x205210) + *plVar1,&local_18,param_3[1],
                 *(char *)((long)param_3 + 9) == '\0');
    goto joined_r0x00aa019c;
  }
  if (*(char *)(param_3 + 2) != '\x04') {
    return;
  }
  if (DAT_05574040 == 0) {
LAB_00aa0040:
    lVar3 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_00aa0040;
      lVar3 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar3 + 0xe75f0);
  lVar2 = *(long *)(lVar3 + 0xe7610);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0xe7610) == 0) goto LAB_00aa011c;
      plVar5 = *(long **)(*(long *)(lVar3 + 0xe7610) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = *(undefined8 *)(lVar3 + 0xe75f8);
      uStack_38 = 0x800;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_00aa011c:
  local_14 = *param_3;
  FUN_027406f0(*(long *)(lVar3 + 0xe75f8) + *plVar1,&local_14,param_3[1],
               *(char *)((long)param_3 + 9) == '\0');
joined_r0x00aa019c:
  if ((((uVar4 & 1) != 0) && (plVar1[4] != 0)) &&
     (puVar6 = *(undefined8 **)(plVar1[4] + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

