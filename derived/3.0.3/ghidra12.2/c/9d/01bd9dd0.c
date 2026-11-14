
void FUN_01bd9dd0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined2 local_44 [2];
  
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  (**(code **)(*param_1 + 0x10))();
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar9 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar10 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar10 != 0) && (uVar11 = (**(code **)(*param_3 + 0x20))(param_3), lVar9 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar5 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar5 = param_1 + 1;
    }
    *plVar5 = lVar9;
    plVar5[1] = lVar10 + (uVar11 & 0xffffffff) * 2;
    plVar5[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  lVar9 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar9 == 0) {
    puVar12 = (undefined2 *)0x0;
    iVar6 = (int)param_1[0x44];
  }
  else {
    uVar11 = (**(code **)(*param_3 + 0x20))(param_3);
    puVar12 = (undefined2 *)(lVar9 + (uVar11 & 0xffffffff) * 2);
    iVar6 = (int)param_1[0x44];
  }
  if (iVar6 != 0) {
    iVar13 = 0;
    do {
      iVar2 = *(int *)((long)param_1 + 0x21c) + iVar13;
      iVar3 = 0;
      if ((int)param_1[0x43] <= iVar2) {
        iVar3 = (int)param_1[0x43];
      }
      puVar15 = *(undefined2 **)(param_1[0x42] + (long)(iVar2 - iVar3) * 8);
      iVar2 = (int)param_2[2];
      iVar3 = (int)param_2[1];
      if (iVar2 < iVar3) {
        *(int *)(param_2 + 2) = iVar2 + 1;
        iVar2 = *(int *)((long)param_2 + 0xc) + iVar2;
        iVar4 = 0;
        if (iVar3 <= iVar2) {
          iVar4 = iVar3;
        }
        puVar14 = (undefined8 *)(*param_2 + (long)(iVar2 - iVar4) * 8);
        *puVar14 = 0;
        iVar2 = (int)param_1[0x41];
      }
      else {
        puVar14 = (undefined8 *)0x0;
        iVar2 = (int)param_1[0x41];
      }
      if ((iVar2 != 0) && (puVar15 < puVar12)) {
        local_44[0] = *puVar15;
        FUN_006f10e0(local_44);
        *(undefined2 *)puVar14 = local_44[0];
        if ((1 < *(uint *)(param_1 + 0x41)) && (puVar15 + 1 < puVar12)) {
          local_44[0] = puVar15[1];
          FUN_006f10e0(local_44);
          *(undefined2 *)((long)puVar14 + 2) = local_44[0];
          if ((2 < *(uint *)(param_1 + 0x41)) && (puVar15 + 2 < puVar12)) {
            local_44[0] = puVar15[2];
            FUN_006f10e0(local_44);
            *(undefined2 *)((long)puVar14 + 4) = local_44[0];
            if ((3 < *(uint *)(param_1 + 0x41)) && (puVar15 + 3 < puVar12)) {
              local_44[0] = puVar15[3];
              FUN_006f10e0(local_44);
              *(undefined2 *)((long)puVar14 + 6) = local_44[0];
              if ((4 < *(uint *)(param_1 + 0x41)) && (puVar15 + 4 < puVar12)) {
                puVar15 = puVar15 + 5;
                uVar11 = 5;
                do {
                  local_44[0] = puVar15[-1];
                  FUN_006f10e0(local_44);
                  *(undefined2 *)puVar14 = local_44[0];
                  bVar7 = uVar11 < *(uint *)(param_1 + 0x41);
                  uVar11 = uVar11 + 1;
                  bVar8 = puVar15 < puVar12;
                  puVar15 = puVar15 + 1;
                } while (bVar7 && bVar8);
              }
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar6 != iVar13);
  }
  return;
}

