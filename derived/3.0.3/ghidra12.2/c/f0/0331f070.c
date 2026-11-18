
/* WARNING: Removing unreachable block (ram,0x0331f0a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0331f070(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x2e0);
  lVar2 = (**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x7d8,8);
  FUN_03280d04(lVar2,puVar1);
  plVar3 = *(long **)(param_1 + 800);
  *(long *)(param_1 + 800) = lVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    lVar2 = *(long *)(param_1 + 800);
  }
  puStack_38 = PTR_DAT_04bb2120;
  *(undefined8 *)(lVar2 + 0x518) = *(undefined8 *)(param_1 + 0x398);
  uStack_48 = 0;
  local_40 = &DAT_04b177a8;
  local_50 = puVar1;
  FUN_03281c60(*(undefined8 *)(param_1 + 800),&local_50);
  lVar2 = *(long *)(param_1 + 800);
  local_70 = &PTR_LAB_04b1ea20;
  local_60 = &LAB_0331f240;
  uStack_58 = 0;
  plVar3 = *(long **)(lVar2 + 0x778);
  lStack_68 = param_1;
  if ((plVar3 == (long *)0x0) ||
     ((**(code **)(*plVar3 + 8))(plVar3), &local_70 != (undefined ***)0x0)) {
    uVar4 = (*(code *)local_70[3])(&local_70,lVar2 + 0x780);
    *(undefined8 *)(lVar2 + 0x778) = uVar4;
    if (&local_70 != (undefined ***)0x0) {
      (*(code *)local_70[1])();
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x778) = 0;
  }
  lVar2 = *(long *)(param_1 + 800);
  local_70 = &PTR_LAB_04b1eaa8;
  local_60 = &LAB_0331f410;
  uStack_58 = 0;
  plVar3 = *(long **)(lVar2 + 0x7a8);
  lStack_68 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_70 == (undefined ***)0x0) {
      *(undefined8 *)(lVar2 + 0x7a8) = 0;
      return;
    }
  }
  uVar4 = (*(code *)local_70[3])(&local_70,lVar2 + 0x7b0);
  *(undefined8 *)(lVar2 + 0x7a8) = uVar4;
  if (&local_70 != (undefined ***)0x0) {
    (*(code *)local_70[1])();
  }
  return;
}

