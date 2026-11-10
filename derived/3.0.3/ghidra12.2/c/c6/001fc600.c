
void FUN_001fc600(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_001a4fdc();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB_001fc700;
  if ((char)plVar2[4] != '\0') {
    (**(code **)(*plVar2 + 0x30))();
    plVar2 = *(long **)(param_1 + 0x10);
  }
  puVar4 = PTR_DAT_04bcbb78;
  if (*(short *)(param_1 + 0x4c) != 0) {
    plVar5 = *(long **)(param_1 + 0x40);
    uVar1 = *(uint *)(plVar2 + 1);
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001fc6b0:
      puVar4 = puVar4 + (ulong)uVar1 * 0x2a8 + 0x18;
    }
    else {
      puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar3 == 0) goto LAB_001fc6b0;
      puVar4 = (undefined *)
               (*(long *)(puVar4 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar3 * 0x148);
    }
    (**(code **)(*plVar5 + 0x40))
              (plVar5,*(undefined4 *)(puVar4 + 0x140),*(undefined2 *)(param_1 + 0x4c));
    plVar2 = *(long **)(param_1 + 0x10);
  }
  (**(code **)(*plVar2 + 0xa0))(auStack_48);
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_001fc700:
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[4] != '\0') {
      (**(code **)(*plVar2 + 0x30))();
    }
    if ((*(short *)(param_1 + 0x4e) != 0) &&
       (puVar6 = *(undefined4 **)(param_1 + 0x50),
       *(undefined4 **)(param_1 + 0x50) != *(undefined4 **)(param_1 + 0x58))) {
      do {
        puVar7 = puVar6 + 1;
        (**(code **)(**(long **)(param_1 + 0x40) + 0x40))
                  (*(long **)(param_1 + 0x40),*puVar6,*(undefined2 *)(param_1 + 0x4e));
        puVar6 = puVar7;
      } while (puVar7 != *(undefined4 **)(param_1 + 0x58));
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0xa0))(auStack_60);
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

