
void FUN_0018dfb0(long *param_1,long *param_2)

{
  undefined *puVar1;
  ThreadType *pTVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bcbe28;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar7 = DAT_04c58a60;
  if (*PTR_DAT_04bcbd48 != '\0') {
    plVar6 = (long *)(DAT_04c58a60 + 0x30);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(long *)(lVar7 + 0x10) == *(long *)(lVar7 + 0x20)) {
      *(long **)(lVar7 + 0x10) = param_1;
    }
    else {
      *(long **)(*(long *)(lVar7 + 0x18) + 8) = param_1;
      param_1[2] = *(long *)(lVar7 + 0x18);
    }
    *(long **)(lVar7 + 0x18) = param_1;
    *(long *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + 1;
    (**(code **)(*(long *)(lVar7 + 0x30) + 0x20))(plVar6);
  }
  puVar1 = PTR_DAT_04bcbc98 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcbe48 + 0x10);
  param_1[3] = *param_2;
  param_1[4] = (long)puVar1;
  FUN_00188844(param_1 + 5,1);
  FUN_00187b30(param_1 + 10,1);
  puVar1 = PTR_DAT_04bcbce8;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  param_1[0xf] = 0;
  param_1[0xd] = (long)plVar9;
  lVar7 = *param_2;
  param_1[4] = (long)(puVar1 + 0x10);
  pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
  uVar3 = nn::os::GetThreadId(pTVar2);
  plVar6 = (long *)*plVar9;
  if ((long *)*plVar9 == (long *)0x0) {
    plVar8 = plVar9;
  }
  else {
    do {
      while (plVar9 = plVar6, (ulong)plVar9[4] <= uVar3) {
        if (uVar3 <= (ulong)plVar9[4]) {
          plVar9[5] = lVar7;
          return;
        }
        plVar6 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar8 = plVar9 + 1;
          goto LAB_0018e100;
        }
      }
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_0018e100:
  if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
    puVar4 = malloc(0x40);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)(0x40);
  }
  puVar5 = puVar4 + 2;
  *puVar5 = 0;
  puVar1 = PTR_DAT_04bcba28;
  puVar4[6] = uVar3;
  puVar4[7] = 0;
  puVar4[3] = 0;
  puVar4[4] = plVar9;
  *puVar4 = *(undefined8 *)puVar1;
  *plVar8 = (long)puVar5;
  if (*(long *)param_1[0xd] != 0) {
    param_1[0xd] = *(long *)param_1[0xd];
    puVar5 = (undefined8 *)*plVar8;
  }
  FUN_03876250(param_1[0xe],puVar5);
  param_1[0xf] = param_1[0xf] + 1;
  puVar4[7] = lVar7;
  return;
}

