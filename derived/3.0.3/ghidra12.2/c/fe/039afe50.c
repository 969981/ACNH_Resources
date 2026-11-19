
void FUN_039afe50(undefined4 param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  short *psVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  
  lVar14 = *(long *)(param_2 + 0x50);
  uVar5 = param_3;
  if (*(uint *)(param_2 + 0x48) <= param_3) {
    uVar5 = 0;
  }
  if (*(int *)(lVar14 + (long)(int)uVar5 * 0x30) != param_4) {
    lVar3 = lVar14 + (long)(int)uVar5 * 0x30;
    *(ushort *)(lVar3 + 0x1a) = *(ushort *)(lVar3 + 0x1a) & 0xfffd;
    uVar1 = param_3;
    if (*(uint *)(param_2 + 0x48) <= param_3) {
      uVar1 = 0;
    }
    if ((*(ushort *)(*(long *)(param_2 + 0x50) + (long)(int)uVar1 * 0x30 + 0x1a) >> 1 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x50) + (long)(int)uVar1 * 0x30;
      piVar4 = (int *)(lVar3 + 0x20);
      iVar2 = *piVar4;
      uVar8 = (ulong)iVar2;
      if (iVar2 != 0) {
        puVar10 = *(undefined8 **)(lVar3 + 0x28);
        uVar11 = uVar8 & 3;
        puVar7 = puVar10;
        if (uVar11 != 0) {
          puVar6 = puVar10;
          do {
            puVar7 = puVar6 + 1;
            uVar11 = uVar11 - 1;
            *(undefined4 *)*puVar6 = 0xffffffff;
            puVar6 = puVar7;
          } while (uVar11 != 0);
        }
        if (2 < (uVar8 - 1 & 0x1fffffffffffffff)) {
          do {
            *(undefined4 *)*puVar7 = 0xffffffff;
            *(undefined4 *)puVar7[1] = 0xffffffff;
            *(undefined4 *)puVar7[2] = 0xffffffff;
            puVar6 = puVar7 + 3;
            puVar7 = puVar7 + 4;
            *(undefined4 *)*puVar6 = 0xffffffff;
          } while (puVar7 != puVar10 + uVar8);
        }
      }
      *piVar4 = 0;
    }
    iVar2 = FUN_039b0118(param_2,param_3,param_4,0);
    lVar14 = lVar14 + (long)(int)uVar5 * 0x30;
    piVar4 = (int *)(lVar14 + 0x20);
    if (*piVar4 < *(int *)(lVar14 + 0x24)) {
      uVar5 = param_3;
      if (*(uint *)(param_2 + 0x48) <= param_3) {
        uVar5 = 0;
      }
      *(long *)(*(long *)(lVar14 + 0x28) + (long)*piVar4 * 8) =
           *(long *)(param_2 + 0x50) + (long)(int)uVar5 * 0x30;
      *piVar4 = *piVar4 + 1;
    }
    while (iVar2 != -1) {
      if (*(int *)(param_2 + 0x48) == 0) {
LAB_039b0050:
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(int *)(param_2 + 0x48) - 1;
        psVar9 = (short *)(*(long *)(param_2 + 0x50) + (long)(int)uVar5 * 0x30);
        if (*psVar9 != -1 && psVar9[1] != -1) {
          do {
            uVar5 = uVar5 - 1;
            if (uVar5 == 0xffffffff) goto LAB_039b0050;
            psVar9 = (short *)(*(long *)(param_2 + 0x50) + (long)(int)uVar5 * 0x30);
          } while (*psVar9 != -1 && psVar9[1] != -1);
        }
      }
      iVar2 = FUN_039b0118(param_2,uVar5,param_4);
      lVar3 = *(long *)(param_2 + 0x50);
      if (*(uint *)(param_2 + 0x48) <= uVar5) {
        uVar5 = 0;
      }
      if (*piVar4 < *(int *)(lVar14 + 0x24)) {
        *(long *)(*(long *)(lVar14 + 0x28) + (long)*piVar4 * 8) = lVar3 + (long)(int)uVar5 * 0x30;
        *piVar4 = *piVar4 + 1;
      }
      lVar3 = lVar3 + (long)(int)uVar5 * 0x30;
      *(ushort *)(lVar3 + 0x1a) = *(ushort *)(lVar3 + 0x1a) | 2;
    }
  }
  if (*(uint *)(param_2 + 0x48) <= param_3) {
    param_3 = 0;
  }
  lVar14 = *(long *)(param_2 + 0x50) + (long)(int)param_3 * 0x30;
  iVar2 = *(int *)(lVar14 + 0x20);
  if (iVar2 != 0) {
    lVar3 = (long)iVar2 << 3;
    plVar12 = *(long **)(lVar14 + 0x28);
    do {
      puVar13 = *(undefined4 **)(*(long *)(*plVar12 + 0x10) + 8);
      uVar15 = (**(code **)(puVar13 + 4))
                         (param_1,puVar13[1],puVar13[2],*(undefined8 *)(puVar13 + 6));
      lVar3 = lVar3 + -8;
      *puVar13 = uVar15;
      plVar12 = plVar12 + 1;
    } while (lVar3 != 0);
  }
  return;
}

