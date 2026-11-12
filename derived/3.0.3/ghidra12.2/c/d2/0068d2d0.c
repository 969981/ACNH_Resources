
void FUN_0068d2d0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar4) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar1 = param_1[7] + lVar6;
      if (*(long *)(lVar1 + 8) != 0 && *(char *)(lVar1 + 0x1b) != '\0') {
        FUN_0068c2b0();
        (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(lVar1 + 8));
      }
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined1 *)(lVar1 + 0x1b) = 0;
      puVar2 = (undefined8 *)(param_1[7] + lVar6);
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined8 *)((long)puVar2 + 0x14) = 0xffffffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      if (uVar7 < uVar4 - 1) {
        *(short *)(param_1[7] + lVar6 + 0x16) = (short)uVar7 + 1;
        *(undefined1 *)(param_1[7] + lVar6 + 0x1a) = 1;
      }
      lVar6 = lVar6 + 0x20;
      uVar7 = uVar7 + 1;
    } while ((ulong)uVar4 * 0x20 != lVar6);
  }
  plVar5 = (long *)param_1[0xb];
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  while (plVar5 != param_1 + 10) {
    plVar5 = (long *)((long)plVar5 - (long)(int)param_1[0xc]);
    plVar3 = (long *)plVar5[1];
    lVar6 = *plVar3;
    *(long **)(*plVar5 + 8) = plVar3;
    *plVar3 = *plVar5;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar5 = lVar6;
    plVar5[4] = 0;
    plVar5[2] = 0;
    plVar5[3] = -1;
    *(undefined2 *)(plVar5 + 5) = 0x100;
    plVar5 = (long *)param_1[0xb];
  }
  return;
}

