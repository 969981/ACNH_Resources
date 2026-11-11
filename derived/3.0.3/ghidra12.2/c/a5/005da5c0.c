
void FUN_005da5c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  long *plVar11;
  byte *pbVar12;
  
  lVar4 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar4 != 0) {
    FUN_00443a00(lVar4,"TtSolve");
  }
  iVar2 = *(int *)(param_4 + 0x28);
  iVar6 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  if (7 < iVar2) {
    uVar1 = iVar6 >> 3;
    lVar4 = *(long *)(param_4 + 0x20);
    uVar8 = uVar1 & 3;
    if (2 < uVar1 - 1) {
      iVar6 = uVar8 - uVar1;
      do {
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        iVar6 = iVar6 + 4;
        Hint_Prefetch(lVar4 + 0x80,0,0,0);
        Hint_Prefetch(lVar4 + 0xc0,0,0,0);
        Hint_Prefetch(lVar4 + 0x100,0,0,0);
        Hint_Prefetch(lVar4 + 0x140,0,0,0);
        Hint_Prefetch(lVar4 + 0x180,0,0,0);
        Hint_Prefetch(lVar4 + 0x1c0,0,0,0);
        lVar4 = lVar4 + 0x200;
      } while (iVar6 != 0);
    }
    if (uVar8 != 0) {
      iVar6 = -uVar8;
      do {
        Hint_Prefetch(lVar4,0,0,0);
        iVar6 = iVar6 + 1;
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar4 + 0x80;
      } while (iVar6 != 0);
    }
  }
  lVar4 = *(long *)(param_4 + 0x270);
  if (0 < *(int *)(lVar4 + 0x90)) {
    lVar5 = 0;
    plVar11 = (long *)(*(long *)(lVar4 + 0x88) + 8);
    do {
      if ((int)plVar11[-1] == *(int *)(lVar4 + 0x134)) {
        lVar4 = *plVar11;
        goto LAB_005da6dc;
      }
      lVar5 = lVar5 + 1;
      plVar11 = plVar11 + 2;
    } while (lVar5 < *(int *)(lVar4 + 0x90));
  }
  lVar4 = 0;
LAB_005da6dc:
  if ((*(int *)(param_2 + 0x20) != 0x7fffffff) && (0 < *(int *)(lVar4 + 0x28))) {
    lVar5 = 0;
    puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x20) + 8);
    do {
      if (*(int *)(puVar7 + -1) == *(int *)(param_2 + 0x20)) {
        uVar9 = *puVar7;
        goto LAB_005da728;
      }
      lVar5 = lVar5 + 1;
      puVar7 = puVar7 + 2;
    } while (lVar5 < *(int *)(lVar4 + 0x28));
  }
  uVar9 = 0;
LAB_005da728:
  iVar2 = FUN_005d4670(uVar9);
  lVar4 = *(long *)(param_2 + 0x50);
  iVar3 = FUN_005d4680(uVar9);
  iVar6 = *(int *)(param_4 + 0x140);
  if (iVar6 == 1) {
    if (*(char *)(lVar4 + (long)iVar2 * 0x30 + 0x2b) == '\0') {
      bVar10 = false;
      iVar6 = 1;
      goto LAB_005da794;
    }
    iVar6 = 2;
  }
  bVar10 = (iVar3 != 1 || *(float *)(param_4 + 0x144) != 1.0) || *(float *)(param_4 + 0x148) != 1.0;
LAB_005da794:
  lVar5 = *(long *)(param_4 + 0x18);
  pbVar12 = (byte *)(lVar4 + (long)iVar2 * 0x30 + 0x29);
  if (*pbVar12 != 0) {
    uVar8 = 0;
    do {
      if (0 < *(int *)(lVar5 + 0x90)) {
        lVar4 = 0;
        do {
          plVar11 = *(long **)(*(long *)(lVar5 + 0x88) + lVar4 * 8);
          FUN_0053d910(*(undefined8 *)(param_4 + 0x278),param_4,iVar6,plVar11,param_5,iVar3);
          (**(code **)(*plVar11 + 0x38))(plVar11,param_4,bVar10);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar5 + 0x90));
      }
      FUN_005dc010(param_1,param_2,param_3,param_4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *pbVar12);
  }
  lVar4 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar4 == 0) {
    return;
  }
  FUN_00443a70(lVar4,&DAT_04085310);
  return;
}

