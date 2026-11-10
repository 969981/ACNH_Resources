
void FUN_001a06c0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_0018d2dc();
  puVar2 = PTR_DAT_04bcc228;
  plVar5 = param_1 + 3;
  param_1[3] = (long)plVar5;
  param_1[4] = (long)plVar5;
  plVar7 = (long *)param_2[1];
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  while (plVar7 != param_2) {
    plVar3 = (long *)FUN_00187df4(0x30);
    lVar6 = plVar7[3];
    *plVar3 = 0;
    plVar3[1] = (long)plVar5;
    plVar3[2] = (long)&DAT_0483a100;
    plVar3[3] = lVar6;
    uVar1 = *(undefined4 *)((long)plVar7 + 0x24);
    *(int *)(plVar3 + 4) = (int)plVar7[4];
    *(undefined4 *)((long)plVar3 + 0x24) = uVar1;
    *(short *)(plVar3 + 5) = (short)plVar7[5];
    lVar6 = param_1[3];
    *(long **)(lVar6 + 8) = plVar3;
    *plVar3 = lVar6;
    param_1[3] = (long)plVar3;
    plVar7 = (long *)plVar7[1];
    param_1[5] = param_1[5] + 1;
  }
  FUN_00186460(param_1 + 6,1,1);
  plVar7 = param_1 + 0x10;
  *plVar7 = 0;
  puVar2 = PTR_DAT_04bcbce8;
  param_1[0x11] = 0;
  param_1[0xf] = (long)plVar7;
  param_1[6] = (long)(puVar2 + 0x10);
  uVar4 = FUN_0018d4b4();
  plVar5 = (long *)*plVar7;
  if ((long *)*plVar7 == (long *)0x0) {
    plVar8 = plVar7;
  }
  else {
    do {
      while (plVar3 = plVar5, plVar7 = plVar3, (ulong)plVar3[4] <= uVar4) {
        if (uVar4 <= (ulong)plVar3[4]) goto LAB_001a0828;
        plVar5 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar8 = plVar3 + 1;
          goto LAB_001a07d4;
        }
      }
      plVar5 = (long *)*plVar3;
      plVar8 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_001a07d4:
  plVar3 = (long *)FUN_00187df4(0x40);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar7;
  plVar3[4] = uVar4;
  plVar3[5] = (long)(plVar3 + 5);
  plVar3[6] = (long)(plVar3 + 5);
  plVar3[7] = 0;
  *plVar8 = (long)plVar3;
  plVar5 = plVar3;
  if (*(long *)param_1[0xf] != 0) {
    param_1[0xf] = *(long *)param_1[0xf];
    plVar5 = (long *)*plVar8;
  }
  FUN_03876250(param_1[0x10],plVar5);
  param_1[0x11] = param_1[0x11] + 1;
LAB_001a0828:
  if (plVar3 + 5 == param_2) {
    return;
  }
  FUN_001a3750(plVar3 + 5,param_2[1],param_2);
  return;
}

