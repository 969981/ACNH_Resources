
void FUN_02ce2d28(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar1 = (uint *)(param_1 + 0x68a50);
  plVar3 = (long *)(param_1 + 0xf008);
  if (((int)*puVar1 < 0) || (*puVar1 != param_3)) {
    piVar8 = (int *)(param_1 + 0x68a64) + (ulong)param_2 * 4;
    if (9 < param_2) {
      piVar8 = (int *)(param_1 + 0x68a64);
    }
    if (*piVar8 == 3) {
      uVar11 = *(undefined4 *)(param_1 + 0xc);
      uVar10 = 0;
      if (param_2 != 0) {
        if (param_2 == 3) {
          uVar10 = 2;
        }
        else {
          if (param_2 != 4) goto LAB_02ce2e10;
          uVar10 = 1;
        }
      }
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | (byte)(1 << (ulong)uVar10);
      puVar4 = (undefined2 *)(param_1 + 0x58) + (ulong)uVar10 * 4;
      if (2 < uVar10) {
        puVar4 = (undefined2 *)(param_1 + 0x58);
      }
      *puVar4 = DAT_05586008;
      *(undefined1 *)(puVar4 + 1) = DAT_0558600a;
      *(undefined1 *)((long)puVar4 + 3) = DAT_0558600b;
      *(undefined4 *)(puVar4 + 2) = DAT_0558600c;
      FUN_02ce119c(param_1 + 0x10,uVar11);
    }
  }
LAB_02ce2e10:
  puVar2 = (undefined4 *)(param_1 + 0x68a64);
  puVar5 = puVar2 + (ulong)param_2 * 4;
  if (9 < param_2) {
    puVar5 = puVar2;
  }
  puVar5[2] = param_3;
  iVar6 = *(int *)(param_1 + 0x68a54);
  if (((iVar6 < 0) || ((int)param_3 < iVar6)) || (*(int *)(param_1 + 0x148) + iVar6 <= (int)param_3)
     ) {
    iVar6 = *(int *)(param_1 + 0x68a5c);
    if (((iVar6 < 0) || ((int)param_3 < iVar6)) ||
       (piVar8 = (int *)(**(code **)(*plVar3 + 0x18))(plVar3), *piVar8 + iVar6 <= (int)param_3)) {
      iVar6 = *(int *)(param_1 + 0x68a58);
      if (((iVar6 < 0) || ((int)param_3 < iVar6)) ||
         (piVar8 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(param_1 + 0x158),
         *piVar8 + iVar6 <= (int)param_3)) {
        uVar11 = 3;
        if (*puVar1 != param_3 || 0x7fffffff < *puVar1) {
          uVar11 = 6;
        }
      }
      else {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 2;
  }
  puVar5 = puVar2 + (ulong)param_2 * 4;
  if (9 < param_2) {
    puVar5 = puVar2;
  }
  *puVar5 = uVar11;
  iVar6 = *(int *)(param_1 + 0x68a54);
  if (((iVar6 < 0) || ((int)param_3 < iVar6)) || (*(int *)(param_1 + 0x148) + iVar6 <= (int)param_3)
     ) {
    iVar6 = *(int *)(param_1 + 0x68a5c);
    if (((-1 < iVar6) && (iVar6 <= (int)param_3)) &&
       (piVar8 = (int *)(**(code **)(*plVar3 + 0x18))(plVar3), (int)param_3 < *piVar8 + iVar6)) {
      param_3 = param_3 - *(int *)(param_1 + 0x68a5c);
      if ((int)param_3 < 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = 0xffffffff;
        if ((*(int *)(param_1 + 0x20dc0) != 0) && (param_3 <= *(int *)(param_1 + 0x20dc0) - 1U)) {
          uVar11 = **(undefined4 **)(*(long *)(param_1 + 0x20dc8) + (ulong)param_3 * 8);
        }
      }
      puVar5 = puVar2 + (ulong)param_2 * 4;
      if (9 < param_2) {
        puVar5 = puVar2;
      }
      puVar5[1] = uVar11;
      return;
    }
    iVar6 = *(int *)(param_1 + 0x68a58);
    if (((-1 < iVar6) && (iVar6 <= (int)param_3)) &&
       (piVar8 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(param_1 + 0x158),
       (int)param_3 < *piVar8 + iVar6)) {
      param_3 = param_3 - *(int *)(param_1 + 0x68a58);
      if ((int)param_3 < 0) {
        return;
      }
      plVar3 = (long *)(param_1 + 0x150);
      piVar8 = (int *)(**(code **)(*(long *)(param_1 + 0x150) + 0x40))(plVar3);
      if (*piVar8 == 0) {
        return;
      }
      piVar8 = (int *)(**(code **)(*plVar3 + 0x40))(plVar3);
      if (*piVar8 - 1U < param_3) {
        return;
      }
      lVar9 = (**(code **)(*plVar3 + 0x40))(plVar3);
      uVar11 = **(undefined4 **)(*(long *)(lVar9 + 8) + (ulong)param_3 * 8);
      lVar9 = (**(code **)(*plVar3 + 0x40))(plVar3);
      cVar7 = *(char *)(*(long *)(*(long *)(lVar9 + 8) + (ulong)param_3 * 8) + 0xc);
      puVar5 = puVar2 + (ulong)param_2 * 4;
      if (9 < param_2) {
        puVar5 = puVar2;
      }
      puVar5[1] = uVar11;
      puVar5 = puVar2 + (ulong)param_2 * 4;
      if (9 < param_2) {
        puVar5 = puVar2;
      }
      *(bool *)(puVar5 + 3) = cVar7 == '\x01';
      return;
    }
    if ((int)*puVar1 < 0) {
      return;
    }
    if (*puVar1 != param_3) {
      return;
    }
  }
  puVar5 = puVar2 + (ulong)param_2 * 4;
  if (9 < param_2) {
    puVar5 = puVar2;
  }
  puVar5[1] = 0;
  return;
}

