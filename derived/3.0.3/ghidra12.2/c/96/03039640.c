
int FUN_03039640(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  if (param_2 == (undefined8 *)0x0) {
    return -1;
  }
  uVar5 = *param_1;
  uVar6 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    puVar8 = *(undefined8 **)(param_1 + 2);
    do {
      if ((undefined8 *)*puVar8 == param_2) {
        uVar9 = 0;
        puVar13 = param_1;
        goto LAB_030396e4;
      }
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar5 = param_1[8];
  uVar6 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    return -1;
  }
  puVar8 = *(undefined8 **)(param_1 + 10);
  while ((undefined8 *)*puVar8 != param_2) {
    uVar6 = uVar6 - 1;
    puVar8 = puVar8 + 1;
    if (uVar6 == 0) {
      return -1;
    }
  }
  uVar9 = 1;
  puVar13 = param_1 + 8;
LAB_030396e4:
  uVar3 = param_1[0x4b];
  if (uVar9 == uVar3) {
    iVar7 = 0;
    goto LAB_030397b4;
  }
  puVar10 = *(uint **)(param_1 + 0x34);
  puVar11 = param_1 + (ulong)uVar3 * 8;
  if (1 < uVar3) {
    puVar11 = param_1;
  }
  puVar1 = param_1 + 0x32;
  if (puVar10 != puVar1) {
    puVar2 = param_1 + 0x30;
    puVar12 = puVar10;
    do {
      if (*(uint **)(puVar12 + -2) == puVar11) {
        if (puVar10 != puVar1) {
          iVar4 = 0;
          puVar11 = puVar10;
          goto LAB_03039760;
        }
        iVar4 = -1;
        goto LAB_03039784;
      }
      puVar12 = *(uint **)(puVar12 + 2);
    } while (puVar12 + -2 != puVar2);
    iVar4 = 0;
    goto LAB_03039784;
  }
  iVar4 = 0;
  goto LAB_030397ac;
  while( true ) {
    puVar10 = *(uint **)(puVar10 + 2);
    iVar7 = iVar7 + 1;
    if (puVar10 == puVar1) break;
LAB_03039860:
    if (puVar10 == puVar11) goto LAB_030397b0;
  }
  iVar7 = -1;
  goto LAB_030397b0;
  while( true ) {
    puVar11 = *(uint **)(puVar11 + 2);
    iVar4 = iVar4 + 1;
    if (puVar11 == puVar1) break;
LAB_03039760:
    if (puVar11 == puVar12) goto LAB_03039784;
  }
  iVar4 = -1;
LAB_03039784:
  if (puVar10 + -2 != puVar2) {
    puVar11 = puVar10;
    do {
      if (*(uint **)(puVar11 + -2) == puVar13) {
        if (puVar10 != puVar1) {
          iVar7 = 0;
          goto LAB_03039860;
        }
        iVar7 = -1;
        goto LAB_030397b0;
      }
      puVar11 = *(uint **)(puVar11 + 2);
    } while (puVar11 + -2 != puVar2);
  }
LAB_030397ac:
  iVar7 = 0;
LAB_030397b0:
  iVar7 = iVar7 - iVar4;
LAB_030397b4:
  uVar9 = param_1[0x4a];
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  uVar6 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4d90);
  if ((uVar6 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
  }
  if ((int)*puVar13 < 1) {
    iVar4 = -1;
  }
  else {
    uVar6 = 0;
    iVar4 = -1;
    do {
      if (*(undefined8 **)(*(long *)(puVar13 + 2) + uVar6 * 8) == param_2) {
        iVar4 = (int)uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (*puVar13 != uVar6);
  }
  return iVar4 + (uVar9 + iVar7) * uVar5;
}

