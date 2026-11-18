
void FUN_032c14c0(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 2);
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    if ((int)*(uint *)(param_1 + 1) <= (int)uVar3) {
      uVar3 = *(uint *)(param_1 + 1);
    }
    if (0 < (int)uVar3) {
      lVar4 = 0;
      lVar6 = 0;
      do {
        iVar2 = 0;
        if ((int)param_2[1] <= (int)lVar6 + *(int *)((long)param_2 + 0xc)) {
          iVar2 = (int)param_2[1];
        }
        lVar8 = lVar6 - iVar2;
        lVar6 = lVar6 + 1;
        puVar7 = (undefined2 *)(*param_2 + (lVar8 + *(int *)((long)param_2 + 0xc)) * 0x38);
        puVar1 = (undefined2 *)(*param_1 + lVar4);
        lVar4 = lVar4 + 0x38;
        *puVar1 = *puVar7;
        *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
        *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar7 + 0x14);
        *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(puVar7 + 0x18);
      } while ((ulong)uVar3 * 0x38 != lVar4);
    }
    *(uint *)(param_1 + 2) = uVar3;
  }
  if (((param_1[3] != 0) && (param_1 != param_2)) && (param_2[3] != 0)) {
    uVar3 = *(uint *)(param_2 + 5);
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    if ((int)*(uint *)(param_1 + 4) <= (int)uVar3) {
      uVar3 = *(uint *)(param_1 + 4);
    }
    if (0 < (int)uVar3) {
      uVar5 = 0;
      lVar6 = 8;
      do {
        iVar2 = 0;
        if ((int)param_2[4] <= (int)uVar5 + *(int *)((long)param_2 + 0x24)) {
          iVar2 = (int)param_2[4];
        }
        lVar4 = uVar5 - (long)iVar2;
        uVar5 = uVar5 + 1;
        *(undefined8 *)(param_1[3] + lVar6) =
             *(undefined8 *)(param_2[3] + (lVar4 + *(int *)((long)param_2 + 0x24)) * 0x10 + 8);
        lVar6 = lVar6 + 0x10;
      } while (uVar3 != uVar5);
    }
    *(uint *)(param_1 + 5) = uVar3;
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  return;
}

