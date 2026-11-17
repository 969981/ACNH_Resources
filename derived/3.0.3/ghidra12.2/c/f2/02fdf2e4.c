
void FUN_02fdf2e4(undefined8 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined8 local_2c;
  undefined2 local_24;
  
  if (*(int *)(param_1 + 2) != 0) {
    local_2c = 0xfffe;
    FUN_0277d4ac(&local_2c);
    local_24 = DAT_04cb6038;
    puVar6 = (undefined8 *)*param_1;
    if (0 < *(int *)(param_1 + 2)) {
      iVar5 = 0;
      if (*(int *)(param_1 + 1) <= *(int *)((long)param_1 + 0xc)) {
        iVar5 = *(int *)(param_1 + 1);
      }
      puVar6 = puVar6 + (*(int *)((long)param_1 + 0xc) - iVar5);
    }
    local_2c = *puVar6;
    FUN_033ba168(*(undefined8 *)(DAT_05739190 + 0x30),&local_2c);
    iVar5 = *(int *)(param_1 + 2);
    if (iVar5 != 0) {
      puVar7 = (undefined2 *)*param_1;
      if (iVar5 < 1) {
        uVar8 = *puVar7;
        uVar9 = *(undefined1 *)(puVar7 + 1);
        uVar11 = *(undefined1 *)((long)puVar7 + 3);
        uVar12 = *(undefined4 *)(puVar7 + 2);
        iVar10 = *(int *)(param_1 + 1);
        if (iVar10 <= iVar5) {
          return;
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 1);
        iVar4 = *(int *)((long)param_1 + 0xc);
        iVar5 = iVar5 + -1;
        iVar2 = 0;
        if (iVar10 <= iVar4) {
          iVar2 = iVar10;
        }
        iVar3 = 0;
        if (iVar4 + 1 < iVar10) {
          iVar3 = iVar4 + 1;
        }
        puVar1 = puVar7 + (long)(iVar4 - iVar2) * 4;
        uVar8 = *puVar1;
        uVar9 = *(undefined1 *)(puVar1 + 1);
        uVar11 = *(undefined1 *)((long)puVar1 + 3);
        uVar12 = *(undefined4 *)(puVar1 + 2);
        *(int *)((long)param_1 + 0xc) = iVar3;
        *(int *)(param_1 + 2) = iVar5;
        if (iVar10 <= iVar5) {
          return;
        }
      }
      iVar2 = *(int *)((long)param_1 + 0xc) + iVar5;
      *(int *)(param_1 + 2) = iVar5 + 1;
      iVar5 = 0;
      if (iVar10 <= iVar2) {
        iVar5 = iVar10;
      }
      puVar7 = puVar7 + (long)(iVar2 - iVar5) * 4;
      *puVar7 = uVar8;
      *(undefined1 *)(puVar7 + 1) = uVar9;
      *(undefined1 *)((long)puVar7 + 3) = uVar11;
      *(undefined4 *)(puVar7 + 2) = uVar12;
    }
  }
  return;
}

