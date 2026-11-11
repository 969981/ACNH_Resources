
void FUN_005da8b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  bool bVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  
  lVar5 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar5 != 0) {
    FUN_00443a00(lVar5,"TtSolve");
  }
  lVar5 = *(long *)(param_4 + 0x270);
  lVar16 = *(long *)(param_4 + 0x18);
  if (0 < *(int *)(lVar5 + 0x90)) {
    lVar7 = 0;
    plVar14 = (long *)(*(long *)(lVar5 + 0x88) + 8);
    do {
      if ((int)plVar14[-1] == *(int *)(lVar5 + 0x134)) {
        lVar5 = *plVar14;
        goto LAB_005da950;
      }
      lVar7 = lVar7 + 1;
      plVar14 = plVar14 + 2;
    } while (lVar7 < *(int *)(lVar5 + 0x90));
  }
  lVar5 = 0;
LAB_005da950:
  if ((*(int *)(param_2 + 0x20) != 0x7fffffff) && (0 < *(int *)(lVar5 + 0x28))) {
    lVar7 = 0;
    puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x20) + 8);
    do {
      if (*(int *)(puVar10 + -1) == *(int *)(param_2 + 0x20)) {
        uVar12 = *puVar10;
        goto LAB_005da99c;
      }
      lVar7 = lVar7 + 1;
      puVar10 = puVar10 + 2;
    } while (lVar7 < *(int *)(lVar5 + 0x28));
  }
  uVar12 = 0;
LAB_005da99c:
  iVar3 = FUN_005d4670(uVar12);
  lVar5 = *(long *)(param_2 + 0x50);
  lVar7 = (long)iVar3;
  iVar4 = FUN_005d4680(uVar12);
  iVar3 = *(int *)(param_4 + 0x140);
  if (iVar3 == 1) {
    if (*(char *)(lVar5 + lVar7 * 0x30 + 0x2b) == '\0') {
      bVar13 = false;
      iVar3 = 1;
      goto LAB_005daa08;
    }
    iVar3 = 2;
  }
  bVar13 = (iVar4 != 1 || *(float *)(param_4 + 0x144) != 1.0) || *(float *)(param_4 + 0x148) != 1.0;
LAB_005daa08:
  pbVar8 = (byte *)(lVar5 + lVar7 * 0x30 + 0x29);
  bVar1 = *pbVar8;
  uVar6 = (uint)bVar1;
  if (bVar1 != 0) {
    lVar5 = lVar5 + lVar7 * 0x30;
    uVar15 = 0;
    puVar11 = (uint *)(lVar5 + 0x10);
    uVar9 = (ulong)*puVar11;
    do {
      if (0 < (int)uVar9) {
        lVar7 = 0;
        do {
          while (iVar2 = *(int *)(*(long *)(lVar5 + 8) + lVar7 * 4), iVar2 != -1) {
            plVar14 = *(long **)(*(long *)(lVar16 + 0x88) + (long)iVar2 * 8);
            FUN_0053d910(*(undefined8 *)(param_4 + 0x278),param_4,iVar3,plVar14,param_5,iVar4);
            (**(code **)(*plVar14 + 0x38))(plVar14,param_4,bVar13);
            uVar9 = (ulong)(int)*puVar11;
            lVar7 = lVar7 + 1;
            if ((long)uVar9 <= lVar7) goto LAB_005daabc;
          }
          FUN_005dc010(param_1,param_2,param_3,param_4);
          uVar9 = (ulong)(int)*puVar11;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (long)uVar9);
LAB_005daabc:
        uVar6 = (uint)*pbVar8;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar6);
  }
  if ((*(char *)(param_4 + 0x269) != '\0') &&
     (lVar5 = *(long *)(param_4 + 0x18), 0 < *(int *)(lVar5 + 0xa0))) {
    lVar16 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar5 + 0x98) + lVar16 * 8);
      if (*(int *)(lVar7 + 0x24) == 0x13) {
        if (0 < *(int *)(param_4 + 0x208)) {
          lVar5 = 0;
          puVar10 = (undefined8 *)(*(long *)(param_4 + 0x200) + 8);
          do {
            if (*(int *)(puVar10 + -1) == *(int *)(lVar7 + 0x20)) {
              uVar12 = *puVar10;
              goto LAB_005dab44;
            }
            lVar5 = lVar5 + 1;
            puVar10 = puVar10 + 2;
          } while (lVar5 < *(int *)(param_4 + 0x208));
        }
        uVar12 = 0;
LAB_005dab44:
        FUN_005dae10(param_1,uVar12);
        lVar5 = *(long *)(param_4 + 0x18);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(lVar5 + 0xa0));
  }
  lVar5 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar5 == 0) {
    return;
  }
  FUN_00443a70(lVar5,&DAT_04085310);
  return;
}

