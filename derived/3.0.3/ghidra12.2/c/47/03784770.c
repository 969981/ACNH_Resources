
void FUN_03784770(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = FUN_03776f00();
  if (lVar4 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar4 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_037847fc;
      plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar4 + 8);
      uStack_40 = *(undefined8 *)(lVar4 + 0x10);
      local_38 = 0x155c;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_037847fc:
  lVar8 = *(long *)(lVar4 + 8);
  lVar1 = *(long *)(lVar4 + 0x10);
  if (((DAT_0523c4c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  uVar2 = *param_1;
  if (*(uint *)PTR_DAT_04bbddf8 <= uVar2) {
    uVar2 = 0;
  }
  *(char *)(lVar1 + lVar8 + 0x153e) =
       (char)*(undefined4 *)(*(long *)(PTR_DAT_04bbddf8 + 8) + (long)(int)uVar2 * 4);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

