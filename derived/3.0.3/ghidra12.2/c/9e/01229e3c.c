
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01229e3c(undefined4 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar5 = 0;
    lVar1 = _DAT_00000098;
  }
  else {
    lVar1 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar5 = 0;
    if (lVar1 != 0) {
      lVar5 = lVar1 + 0x276cb0;
    }
    lVar1 = *(long *)(lVar5 + 0x98);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar1 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar5 + 0x98) == 0) goto LAB_01229f00;
      plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar5 + 0x78);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      local_38 = 0x53c;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_01229f00:
  FUN_0275c9b0(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x10);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x20);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x30);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x40);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x50);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x60);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x70);
  if ((*(long *)(lVar5 + 0x98) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x98) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar5 + 0x78);
    uStack_40 = *(undefined8 *)(lVar5 + 0x80);
    local_38 = 0x53c;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_0275cd8c(*(long *)(lVar5 + 0x80) + *(long *)(lVar5 + 0x78),param_1,param_2 + 0x80);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x98) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x98) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

