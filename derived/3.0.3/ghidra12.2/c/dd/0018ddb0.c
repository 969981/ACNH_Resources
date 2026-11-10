
void FUN_0018ddb0(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  ThreadType *pTVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bcbe28;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar4 = DAT_04c58a60;
  if (*PTR_DAT_04bcbd48 != '\0') {
    plVar10 = (long *)(DAT_04c58a60 + 0x30);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if (*(long *)(lVar4 + 0x10) == *(long *)(lVar4 + 0x20)) {
      *(long **)(lVar4 + 0x10) = param_1;
    }
    else {
      *(long **)(*(long *)(lVar4 + 0x18) + 8) = param_1;
      param_1[2] = *(long *)(lVar4 + 0x18);
    }
    *(long **)(lVar4 + 0x18) = param_1;
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + 1;
    (**(code **)(*(long *)(lVar4 + 0x30) + 0x20))(plVar10);
  }
  puVar3 = PTR_DAT_04bcbc98;
  puVar1 = PTR_DAT_04bcbe40 + 0x10;
  *(undefined4 *)(param_1 + 3) = *param_2;
  *param_1 = (long)puVar1;
  param_1[4] = (long)(puVar3 + 0x10);
  FUN_00188844(param_1 + 5,1);
  FUN_00187b30(param_1 + 10,1);
  uVar2 = *param_2;
  param_1[4] = (long)(PTR_DAT_04bcbce8 + 0x10);
  plVar12 = param_1 + 0xe;
  *plVar12 = 0;
  param_1[0xf] = 0;
  param_1[0xd] = (long)plVar12;
  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
  uVar6 = nn::os::GetThreadId(pTVar5);
  plVar10 = (long *)*plVar12;
  if ((long *)*plVar12 == (long *)0x0) {
    plVar11 = plVar12;
  }
  else {
    do {
      while (plVar12 = plVar10, (ulong)plVar12[4] <= uVar6) {
        if (uVar6 <= (ulong)plVar12[4]) {
          *(undefined4 *)(plVar12 + 5) = uVar2;
          return;
        }
        plVar10 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar11 = plVar12 + 1;
          goto LAB_0018df00;
        }
      }
      plVar10 = (long *)*plVar12;
      plVar11 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_0018df00:
  if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
    puVar7 = malloc(0x40);
  }
  else {
    puVar7 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)(0x40);
  }
  puVar8 = puVar7 + 2;
  *puVar8 = 0;
  puVar1 = PTR_DAT_04bcba28;
  puVar7[3] = 0;
  puVar7[4] = plVar12;
  puVar7[6] = uVar6;
  uVar9 = *(undefined8 *)puVar1;
  *(undefined4 *)(puVar7 + 7) = 0;
  *puVar7 = uVar9;
  *plVar11 = (long)puVar8;
  if (*(long *)param_1[0xd] != 0) {
    param_1[0xd] = *(long *)param_1[0xd];
    puVar8 = (undefined8 *)*plVar11;
  }
  FUN_03876250(param_1[0xe],puVar8);
  param_1[0xf] = param_1[0xf] + 1;
  *(undefined4 *)(puVar7 + 7) = uVar2;
  return;
}

