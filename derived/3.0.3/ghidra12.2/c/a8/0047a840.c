
undefined8 FUN_0047a840(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  undefined8 local_48;
  
  if (*param_2 == param_2[1]) {
    return 0;
  }
  local_48 = FUN_004771b0(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
  plVar1 = (long *)(*(long *)(param_1 + 0x68) + 0x108);
  lVar5 = FUN_0047c500(plVar1,&local_48);
  puVar4 = PTR_DAT_048607b8;
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = *(int *)(*plVar1 + (long)*(int *)(lVar5 + 4) * 0x10 + 8);
  if (iVar2 < 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (0 < *(int *)(lVar5 + 0x50)) {
    lVar10 = 0;
    do {
      plVar1 = (long *)(*(long *)(lVar5 + 0x18) +
                       (long)*(int *)(*(long *)(lVar5 + 0x48) + lVar10 * 4) * 0x10);
      puVar11 = (uint *)(plVar1 + 1);
      uVar6 = *puVar11;
      if (uVar6 == (*(uint *)((long)plVar1 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar4,plVar1,4);
        uVar6 = *puVar11;
      }
      lVar10 = lVar10 + 1;
      *(int *)(*plVar1 + (long)(int)uVar6 * 4) = iVar2;
      *puVar11 = uVar6 + 1;
    } while (lVar10 < *(int *)(lVar5 + 0x50));
  }
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 <= *(int *)(param_1 + 0x28) * 2) {
    FUN_0047d170((long *)(param_1 + 0x18),iVar7 << 1);
    iVar7 = *(int *)(param_1 + 0x20);
  }
  uVar6 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
  uVar6 = iVar7 - 1U & (uVar6 >> 0x10 | uVar6 << 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  piVar9 = (int *)(lVar5 + (long)(int)uVar6 * 4);
  if (*piVar9 != -1) {
    if (*piVar9 != iVar2) {
      do {
        uVar6 = uVar6 + 1 & iVar7 - 1U;
        iVar3 = *(int *)(lVar5 + (long)(int)uVar6 * 4);
        if (iVar3 == -1) {
          piVar9 = (int *)(lVar5 + (long)(int)uVar6 * 4);
          goto LAB_0047a9b8;
        }
      } while (iVar3 != iVar2);
      piVar9 = (int *)(lVar5 + (long)(int)uVar6 * 4);
    }
    *piVar9 = iVar2;
    lVar5 = *(long *)(param_1 + 0x68);
    goto LAB_0047aa14;
  }
LAB_0047a9b8:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *piVar9 = iVar2;
  lVar5 = *(long *)(param_1 + 0x68);
  lVar10 = *(long *)(*(long *)(lVar5 + 0x98) + (long)iVar2 * 8);
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(byte *)(param_1 + 0x78) = *(byte *)(lVar10 + 0x34) ^ 1;
    if (*(char *)(param_1 + 0x79) == '\0') goto LAB_0047aa08;
LAB_0047a9ec:
    uVar8 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 1;
    if (*(char *)(param_1 + 0x79) != '\0') goto LAB_0047a9ec;
LAB_0047aa08:
    uVar8 = *(undefined1 *)(lVar10 + 0x34);
  }
  *(undefined1 *)(param_1 + 0x79) = uVar8;
  *(undefined4 *)(param_1 + 0x58) = 0;
LAB_0047aa14:
  return *(undefined8 *)(*(long *)(lVar5 + 0x98) + (long)iVar2 * 8);
}

