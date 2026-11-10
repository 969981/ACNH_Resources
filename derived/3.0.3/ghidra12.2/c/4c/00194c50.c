
void FUN_00194c50(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong local_50;
  undefined1 uStack_41;
  undefined1 *local_38;
  
  plVar3 = (long *)(param_1 + 0x38);
  local_50 = param_2;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  local_38 = (undefined1 *)&local_50;
  lVar1 = FUN_001a2d70(param_1 + 8,&local_50,PTR_piecewise_construct_04bcbf80,&local_38,&uStack_41);
  FUN_00193c08(lVar1 + 0x28,param_3);
  puVar4 = (undefined8 *)(param_1 + 0x28);
  puVar2 = (undefined8 *)*puVar4;
  if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  else {
    do {
      while (puVar4 = puVar2, local_50 < (ulong)puVar4[4]) {
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00194d08;
      }
      puVar2 = puVar4;
      if (local_50 <= (ulong)puVar4[4]) goto LAB_00194d60;
      puVar2 = (undefined8 *)puVar4[1];
    } while ((undefined8 *)puVar4[1] != (undefined8 *)0x0);
    puVar5 = puVar4 + 1;
  }
LAB_00194d08:
  puVar2 = (undefined8 *)FUN_00187df4(0x50);
  puVar2[4] = local_50;
  FUN_0019c934(puVar2 + 5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar4;
  *puVar5 = puVar2;
  puVar4 = puVar2;
  if (**(long **)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x28),puVar4);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
LAB_00194d60:
  if (puVar2 + 5 != param_4) {
    FUN_001a2ac0(puVar2 + 7,param_4[2],param_4[3],param_4[3] - param_4[2]);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return;
}

