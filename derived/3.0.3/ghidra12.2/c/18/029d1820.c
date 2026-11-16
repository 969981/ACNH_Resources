
void FUN_029d1820(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined4 local_50 [2];
  undefined8 local_48;
  
  lVar12 = DAT_055eafb8;
  if (DAT_055eafb8 != 0) {
    if (((*(char *)(DAT_055eafb8 + 0x161) == '\0') &&
        (puVar8 = (uint *)param_2[1], puVar8 != (uint *)0x0)) && (uVar2 = *puVar8, (int)uVar2 < 5))
    {
      if (0 < (int)uVar2) {
        *(uint *)(param_1 + 0x20) = uVar2;
        *(long *)(param_1 + 0x28) = param_1 + 0x18;
        puVar8 = (uint *)param_2[1];
      }
      if ((uint *)(param_1 + 0x20) != puVar8) {
        uVar2 = *puVar8;
        if ((int)*(uint *)(param_1 + 0x20) <= (int)*puVar8) {
          uVar2 = *(uint *)(param_1 + 0x20);
        }
        if (0 < (int)uVar2) {
          lVar12 = *(long *)(puVar8 + 2);
          uVar7 = (ulong)uVar2 & 3;
          lVar10 = *(long *)(param_1 + 0x28);
          uVar4 = 0;
          if (3 < uVar2) {
            do {
              puVar9 = (undefined1 *)(lVar12 + 1 + uVar4);
              puVar11 = (undefined1 *)(lVar10 + 1 + uVar4);
              uVar4 = uVar4 + 4;
              puVar11[-1] = puVar9[-1];
              *puVar11 = *puVar9;
              puVar11[1] = puVar9[1];
              puVar11[2] = puVar9[2];
            } while (((ulong)uVar2 & 0xfffffffc) != uVar4);
          }
          if ((uVar2 & 3) != 0) {
            puVar9 = (undefined1 *)(lVar12 + uVar4);
            puVar11 = (undefined1 *)(lVar10 + uVar4);
            do {
              uVar7 = uVar7 - 1;
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar7 != 0);
          }
          lVar12 = DAT_055eafb8;
        }
      }
    }
    if (*(char *)(lVar12 + 0x160) != '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 0;
    }
  }
  iVar1 = *(int *)(param_2 + 2);
  cVar3 = *(char *)((long)param_2 + 0x16);
  if (*(int *)(param_1 + 0x34) == 1) {
    if (iVar1 != 0) {
      lVar12 = *(long *)(param_1 + 8);
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == *(int *)(param_1 + 0x10))) {
        *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x10;
        if ((*(long *)(lVar12 + 0x28) != 0) && (*(long *)(lVar12 + 0x58) != 0)) {
          plVar5 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x28) + 0x30) +
                                                   0x18) + 0x20))();
          plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
          (**(code **)(*plVar5 + 0x10))();
          (**(code **)(**(long **)(lVar12 + 0x58) + 0x30))();
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((iVar1 == 1) && (puVar6 = (undefined4 *)param_2[1], puVar6 != (undefined4 *)0x0)) {
        local_50[0] = *puVar6;
        local_48 = *(undefined8 *)(puVar6 + 2);
        uVar4 = FUN_029d1a80(param_1,*param_2,local_50,cVar3 != '\0');
        if ((uVar4 & 1) != 0) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  else if (((*(int *)(param_1 + 0x34) == 0) && (iVar1 == 1)) &&
          (puVar6 = (undefined4 *)param_2[1], puVar6 != (undefined4 *)0x0)) {
    local_50[0] = *puVar6;
    local_48 = *(undefined8 *)(puVar6 + 2);
    uVar4 = FUN_029d1a80(param_1,*param_2,local_50,cVar3 != '\0');
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
  }
  return;
}

