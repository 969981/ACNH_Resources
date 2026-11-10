
long FUN_00188bc0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ThreadType *pTVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar6 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar7 = *param_2;
  pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
  uVar3 = nn::os::GetThreadId(pTVar2);
  puVar8 = (undefined8 *)(param_1 + 0x70);
  puVar4 = (undefined8 *)*puVar8;
  if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  else {
    do {
      while( true ) {
        puVar8 = puVar4;
        if ((ulong)puVar8[4] <= uVar3) break;
        puVar4 = (undefined8 *)*puVar8;
        puVar9 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_00188c40;
      }
      if (uVar3 <= (ulong)puVar8[4]) goto LAB_00188cbc;
      puVar4 = (undefined8 *)puVar8[1];
    } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
    puVar9 = puVar8 + 1;
  }
LAB_00188c40:
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar4 = malloc(0x40);
  }
  else {
    puVar4 = (undefined8 *)(*DAT_04c57ea0)(0x40);
  }
  puVar10 = puVar4 + 2;
  *puVar10 = 0;
  puVar1 = PTR_DAT_04bcba28;
  puVar4[6] = uVar3;
  puVar4[7] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar8;
  *puVar4 = *(undefined8 *)puVar1;
  *puVar9 = puVar10;
  puVar4 = puVar10;
  if (**(long **)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
    puVar4 = (undefined8 *)*puVar9;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x70),puVar4);
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  puVar8 = puVar10;
LAB_00188cbc:
  lVar5 = *(long *)(param_1 + 0x20);
  puVar8[5] = uVar7;
  (**(code **)(lVar5 + 0x20))(plVar6);
  return param_1;
}

