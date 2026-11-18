
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03361f8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined **local_40;
  long lStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  FUN_032873d0();
  lVar4 = *(long *)(param_1 + 0x420);
  local_40 = &PTR_LAB_04b204d8;
  lStack_38 = param_1;
  local_30 = FUN_033620d8;
  uStack_28 = 0;
  puVar1 = (undefined *)0x0;
  if (lVar4 != 0) {
    puVar1 = PTR_LAB_04bc8f00;
  }
  if (puVar1 == (undefined *)0x0) {
LAB_0336202c:
    (*(code *)local_40[1])();
  }
  else {
    plVar3 = *(long **)(lVar4 + 0xf0);
    if (plVar3 == (long *)0x0) {
LAB_0336200c:
      uVar2 = (*(code *)local_40[3])(&local_40,lVar4 + 0xf8);
      *(undefined8 *)(lVar4 + 0xf0) = uVar2;
      if (&local_40 != (undefined ***)0x0) goto LAB_0336202c;
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3);
      if (&local_40 != (undefined ***)0x0) goto LAB_0336200c;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
    }
  }
  local_40 = &PTR_LAB_04b20560;
  lStack_38 = param_1;
  local_30 = (code *)&LAB_03362128;
  uStack_28 = 0;
  plVar3 = *(long **)(param_1 + 0x350);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_40 == (undefined ***)0x0) {
      *(undefined8 *)(param_1 + 0x350) = 0;
      goto LAB_033620bc;
    }
  }
  uVar2 = (*(code *)local_40[3])(&local_40,param_1 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = uVar2;
  if (&local_40 != (undefined ***)0x0) {
    (*(code *)local_40[1])();
  }
LAB_033620bc:
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}

