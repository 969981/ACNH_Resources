
void FUN_020eda40(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_0265c3e0((long)*param_1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x28);
  if (param_1[2] == '\0') {
    if (lVar5 == 0) {
      FUN_026b3b80(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),(long)param_1[1],0);
      return;
    }
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
joined_r0x020edbd8:
      if (plVar3 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar1 + 8);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10);
        local_38 = 0x13230;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x28) != 0) {
        plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
        goto joined_r0x020edbd8;
      }
    }
    FUN_026b3b80(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),(long)param_1[1],0);
    goto joined_r0x020edb44;
  }
  if (lVar5 == 0) {
    FUN_026b3d30(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),(long)param_1[1],0);
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
joined_r0x020edba4:
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 8);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0x28) != 0) {
      plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
      goto joined_r0x020edba4;
    }
  }
  FUN_026b3d30(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),(long)param_1[1],0);
joined_r0x020edb44:
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

