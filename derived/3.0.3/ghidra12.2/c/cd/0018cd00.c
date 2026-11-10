
long FUN_0018cd00(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ThreadType *pTVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar8 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar1 = *param_2;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  uVar4 = nn::os::GetThreadId(pTVar3);
  puVar9 = (undefined8 *)(param_1 + 0x70);
  puVar5 = (undefined8 *)*puVar9;
  if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
    puVar10 = puVar9;
  }
  else {
    do {
      while( true ) {
        puVar9 = puVar5;
        if ((ulong)puVar9[4] <= uVar4) break;
        puVar5 = (undefined8 *)*puVar9;
        puVar10 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_0018cd80;
      }
      if (uVar4 <= (ulong)puVar9[4]) goto LAB_0018ce00;
      puVar5 = (undefined8 *)puVar9[1];
    } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
    puVar10 = puVar9 + 1;
  }
LAB_0018cd80:
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar5 = malloc(0x40);
  }
  else {
    puVar5 = (undefined8 *)(*DAT_04c57ea0)(0x40);
  }
  puVar11 = puVar5 + 2;
  *puVar11 = 0;
  puVar2 = PTR_DAT_04bcba28;
  puVar5[3] = 0;
  puVar5[4] = puVar9;
  puVar5[6] = uVar4;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined4 *)(puVar5 + 7) = 0;
  *puVar5 = uVar6;
  *puVar10 = puVar11;
  puVar5 = puVar11;
  if (**(long **)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
    puVar5 = (undefined8 *)*puVar10;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x70),puVar5);
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  puVar9 = puVar11;
LAB_0018ce00:
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(puVar9 + 5) = uVar1;
  (**(code **)(lVar7 + 0x20))(plVar8);
  return param_1;
}

