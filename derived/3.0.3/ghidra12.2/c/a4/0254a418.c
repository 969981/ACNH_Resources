
void FUN_0254a418(undefined4 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar1 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x1aa0);
  if (lVar5 == 0) {
    FUN_028166e0(*(long *)(lVar1 + 0x1a88) + *(long *)(lVar1 + 0x1a80),PTR_DAT_04bb37e0,0,0xffffffff
                );
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0x1aa0) == 0) goto LAB_0254a4a0;
    plVar3 = *(long **)(*(long *)(lVar1 + 0x1aa0) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_38 = *(undefined8 *)(lVar1 + 0x1a80);
    uStack_30 = *(undefined8 *)(lVar1 + 0x1a88);
    local_28 = 0x8b8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  }
LAB_0254a4a0:
  FUN_028166e0(*(long *)(lVar1 + 0x1a88) + *(long *)(lVar1 + 0x1a80),PTR_DAT_04bb37e0,0,0xffffffff);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x1aa0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x1aa0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

