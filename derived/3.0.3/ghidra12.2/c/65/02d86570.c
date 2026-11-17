
undefined8 FUN_02d86570(long param_1,uint param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar8 = (ulong)*(byte *)(param_1 + 0x390);
  uVar10 = (ulong)param_2;
  puVar1 = (uint *)(param_1 + 0x360);
  puVar2 = (undefined1 *)(param_1 + 0x680);
  if (*(byte *)(param_1 + 0x390) != 0) {
    if (((*(int *)(param_1 + 0x370) == 4) && (plVar9 = (long *)*DAT_053512e0, plVar9 != (long *)0x0)
        ) && (*plVar9 != 0)) {
      plVar3 = plVar9 + 1 + (ulong)*puVar1 * 0x2d;
      if (3 < *puVar1) {
        plVar3 = plVar9 + 1;
      }
      if (((char)plVar3[0xb] != '\0' && (char)plVar3[0x26] != '\0') && (char)plVar3[0x28] != '\0') {
        uVar8 = 1;
        if ((char)*plVar3 == '\0') {
          *puVar2 = 1;
        }
        goto LAB_02d865f8;
      }
    }
    uVar8 = 1;
  }
LAB_02d865f8:
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    if (((*(int *)(param_1 + 0x3a8) == 4) && (plVar9 = (long *)*DAT_053512e0, plVar9 != (long *)0x0)
        ) && (*plVar9 != 0)) {
      plVar3 = plVar9 + 1 + (ulong)*(uint *)(param_1 + 0x398) * 0x2d;
      if (3 < *(uint *)(param_1 + 0x398)) {
        plVar3 = plVar9 + 1;
      }
      if ((((char)plVar3[0xb] != '\0' && (char)plVar3[0x26] != '\0') && (char)plVar3[0x28] != '\0')
         && ((char)*plVar3 == '\0')) {
        puVar2[uVar8] = 1;
      }
    }
    uVar8 = (ulong)((int)uVar8 + 1);
  }
  if ((((*(char *)(param_1 + 0x400) != '\0') && (*(int *)(param_1 + 0x3e0) == 4)) &&
      (plVar9 = (long *)*DAT_053512e0, plVar9 != (long *)0x0)) && (*plVar9 != 0)) {
    plVar3 = plVar9 + 1 + (ulong)*(uint *)(param_1 + 0x3d0) * 0x2d;
    if (3 < *(uint *)(param_1 + 0x3d0)) {
      plVar3 = plVar9 + 1;
    }
    if ((((char)plVar3[0xb] != '\0' && (char)plVar3[0x26] != '\0') && (char)plVar3[0x28] != '\0') &&
       ((char)*plVar3 == '\0')) {
      puVar2[uVar8] = 1;
    }
  }
  puVar4 = puVar1 + (ulong)param_2 * 0xe;
  if (2 < param_2) {
    puVar4 = puVar1;
  }
  if ((char)puVar4[0xc] == '\0') goto LAB_02d867b0;
  if (puVar4[4] == 3) {
LAB_02d8678c:
    plVar9 = *(long **)(*(long *)(param_1 + 0x5f8) + (long)(int)param_2 * 8);
LAB_02d86794:
    FUN_03464670(*(undefined8 *)(*(long *)(*plVar9 + 0x210) + 0x250),0);
    uVar6 = 1;
  }
  else {
    if (puVar4[4] == 2) {
      if (*(int *)(param_1 + 0x410) != 0) {
        lVar5 = param_1 + 0x280 + uVar10 * 0x20;
        if (2 < param_2) {
          lVar5 = param_1 + 0x280;
        }
        FUN_03b137d0(lVar5,*(undefined8 *)(puVar4 + 6),0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        uVar10 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x418) + uVar10) + 0x18);
        *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 8);
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        plVar9 = *(long **)(*(long *)(param_1 + 0x5f8) + uVar10);
        goto LAB_02d86794;
      }
    }
    else {
      if (2 < param_2) {
        uVar10 = 0;
      }
      if (puVar2[uVar10] != '\0') goto LAB_02d8678c;
    }
LAB_02d867b0:
    FUN_03464520(*(undefined8 *)
                  (*(long *)(**(long **)(*(long *)(param_1 + 0x5f8) + (long)(int)param_2 * 8) +
                            0x210) + 0x250),0);
    uVar6 = 0;
  }
  return uVar6;
}

