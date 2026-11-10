
void FUN_0018d380(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_04838c68;
  lVar2 = DAT_04c58a60;
  if (DAT_04c58a00 == '\0') {
    return;
  }
  plVar7 = (long *)(DAT_04c58a60 + 0x30);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  puVar4 = *(undefined8 **)(lVar2 + 0x10);
  puVar6 = *(undefined8 **)(lVar2 + 0x20);
  if (puVar4 != puVar6) {
    lVar3 = *(long *)(lVar2 + 0x28);
    do {
      puVar5 = param_1;
      if (puVar4 != param_1) {
        puVar5 = puVar4;
        do {
          puVar5 = (undefined8 *)puVar5[1];
        } while (puVar5 != puVar6 && puVar5 != param_1);
      }
      if (puVar5 == puVar6) break;
      puVar4 = (undefined8 *)puVar5[1];
      lVar1 = puVar5[2];
      if (lVar1 != 0) {
        *(undefined8 **)(lVar1 + 8) = puVar4;
      }
      puVar5[2] = 0;
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[2] = lVar1;
      }
      puVar5[1] = 0;
      if (*(undefined8 **)(lVar2 + 0x10) == puVar5) {
        *(undefined8 **)(lVar2 + 0x10) = puVar4;
        puVar6 = *(undefined8 **)(lVar2 + 0x18);
      }
      else {
        puVar6 = *(undefined8 **)(lVar2 + 0x18);
      }
      if (puVar6 == puVar5) {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      puVar6 = *(undefined8 **)(lVar2 + 0x20);
      lVar3 = lVar3 + -1;
      *(long *)(lVar2 + 0x28) = lVar3;
    } while (puVar4 != puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0018d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
}

