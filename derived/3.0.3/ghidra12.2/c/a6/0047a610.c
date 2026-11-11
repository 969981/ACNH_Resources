
undefined8 FUN_0047a610(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined1 local_60 [16];
  
  if (*param_2 == param_2[1]) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x68);
  local_60 = FUN_004771b0(*(undefined8 *)(lVar8 + 0x90));
  plVar1 = (long *)(lVar8 + 0xa8);
  lVar8 = FUN_0047c500(plVar1,local_60);
  if ((lVar8 == 0) || (iVar9 = *(int *)(*plVar1 + (long)*(int *)(lVar8 + 4) * 0x10 + 8), iVar9 < 0))
  {
    lVar8 = FUN_0047c500(plVar1,local_60 + 8);
    if (lVar8 == 0) {
      return 0;
    }
    iVar9 = *(int *)(*plVar1 + (long)*(int *)(lVar8 + 4) * 0x10 + 8);
    if (iVar9 < 0) {
      return 0;
    }
  }
  puVar3 = PTR_DAT_048607b8;
  lVar8 = *(long *)(param_1 + 0x60);
  if (0 < *(int *)(lVar8 + 0x50)) {
    lVar10 = 0;
    do {
      plVar1 = (long *)(*(long *)(lVar8 + 0x18) +
                       (long)*(int *)(*(long *)(lVar8 + 0x48) + lVar10 * 4) * 0x10);
      puVar11 = (uint *)(plVar1 + 1);
      uVar4 = *puVar11;
      if (uVar4 == (*(uint *)((long)plVar1 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar3,plVar1,4);
        uVar4 = *puVar11;
      }
      lVar10 = lVar10 + 1;
      *(int *)(*plVar1 + (long)(int)uVar4 * 4) = iVar9;
      *puVar11 = uVar4 + 1;
    } while (lVar10 < *(int *)(lVar8 + 0x50));
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 <= *(int *)(param_1 + 0x28) * 2) {
    FUN_0047d170((long *)(param_1 + 0x18),iVar5 << 1);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  uVar4 = (iVar9 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar9 * -0x61c8864f & 0xff00ffU) << 8;
  uVar4 = iVar5 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  piVar7 = (int *)(lVar8 + (long)(int)uVar4 * 4);
  if (*piVar7 != -1) {
    if (*piVar7 != iVar9) {
      do {
        uVar4 = uVar4 + 1 & iVar5 - 1U;
        iVar2 = *(int *)(lVar8 + (long)(int)uVar4 * 4);
        if (iVar2 == -1) {
          piVar7 = (int *)(lVar8 + (long)(int)uVar4 * 4);
          goto LAB_0047a7b0;
        }
      } while (iVar2 != iVar9);
      piVar7 = (int *)(lVar8 + (long)(int)uVar4 * 4);
    }
    *piVar7 = iVar9;
    lVar8 = *(long *)(param_1 + 0x68);
    goto LAB_0047a814;
  }
LAB_0047a7b0:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *piVar7 = iVar9;
  lVar8 = *(long *)(param_1 + 0x68);
  lVar10 = *(long *)(*(long *)(lVar8 + 0x98) + (long)iVar9 * 8);
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(byte *)(param_1 + 0x78) = *(byte *)(lVar10 + 0x34) ^ 1;
    if (*(char *)(param_1 + 0x79) == '\0') goto LAB_0047a808;
LAB_0047a7e8:
    uVar6 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 1;
    if (*(char *)(param_1 + 0x79) != '\0') goto LAB_0047a7e8;
LAB_0047a808:
    uVar6 = *(undefined1 *)(lVar10 + 0x34);
  }
  *(undefined1 *)(param_1 + 0x79) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = 0;
LAB_0047a814:
  return *(undefined8 *)(*(long *)(lVar8 + 0x98) + (long)iVar9 * 8);
}

