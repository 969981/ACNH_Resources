
void FUN_030af4a0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar2 = (int)param_1[2];
  if (iVar2 == 0) {
    iVar7 = (int)param_1[1];
    if (0 < iVar7) goto LAB_030af504;
  }
  else {
    iVar7 = (int)param_1[1];
    iVar8 = *(int *)((long)param_1 + 0xc);
    iVar11 = iVar2;
    do {
      iVar1 = 0;
      if (iVar7 <= iVar8) {
        iVar1 = iVar7;
      }
      iVar5 = *(int *)(*param_1 + (long)(iVar8 - iVar1) * 0x60 + 0x54);
      if (iVar5 != -1 && iVar5 == *(int *)((long)param_2 + 0x54)) {
        puVar6 = (undefined8 *)(*param_1 + (long)(iVar8 - iVar1) * 0x60);
        uVar3 = param_2[1];
        uVar10 = param_2[2];
        *puVar6 = *param_2;
        puVar6[1] = uVar3;
        puVar6[2] = uVar10;
        uVar3 = param_2[3];
        uVar10 = param_2[4];
        uVar4 = param_2[6];
        puVar6[5] = param_2[5];
        puVar6[6] = uVar4;
        puVar6[3] = uVar3;
        puVar6[4] = uVar10;
        uVar3 = param_2[7];
        uVar10 = param_2[8];
        uVar4 = param_2[10];
        puVar6[9] = param_2[9];
        puVar6[10] = uVar4;
        puVar6[7] = uVar3;
        puVar6[8] = uVar10;
        goto LAB_030af5d8;
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (iVar2 < iVar7) {
LAB_030af504:
      if (*(int *)(param_2 + 0xb) == 0) {
        lVar9 = *param_1;
        iVar8 = iVar7;
        if (0 < *(int *)((long)param_1 + 0xc)) {
          iVar8 = *(int *)((long)param_1 + 0xc);
        }
        iVar11 = iVar8 + -1;
        *(int *)((long)param_1 + 0xc) = iVar11;
        *(int *)(param_1 + 2) = iVar2 + 1;
        if (iVar8 <= iVar7) {
          iVar7 = 0;
        }
      }
      else {
        iVar11 = *(int *)((long)param_1 + 0xc) + iVar2;
        lVar9 = *param_1;
        *(int *)(param_1 + 2) = iVar2 + 1;
        iVar2 = 0;
        if (iVar7 <= iVar11) {
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
      }
      puVar6 = (undefined8 *)(lVar9 + (long)(iVar11 - iVar7) * 0x60);
      uVar10 = param_2[8];
      uVar3 = param_2[9];
      uVar4 = param_2[10];
      puVar6[7] = param_2[7];
      puVar6[8] = uVar10;
      puVar6[9] = uVar3;
      puVar6[10] = uVar4;
      uVar3 = param_2[3];
      uVar10 = param_2[4];
      uVar4 = param_2[6];
      puVar6[5] = param_2[5];
      puVar6[6] = uVar4;
      puVar6[3] = uVar3;
      puVar6[4] = uVar10;
      uVar10 = param_2[2];
      uVar3 = *param_2;
      puVar6[1] = param_2[1];
      puVar6[2] = uVar10;
      *puVar6 = uVar3;
LAB_030af5d8:
      *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      return;
    }
  }
  return;
}

