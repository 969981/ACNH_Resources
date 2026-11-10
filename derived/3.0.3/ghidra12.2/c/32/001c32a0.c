
void FUN_001c32a0(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  FUN_00186460(param_1 + 1,0x200000,1);
  puVar1 = PTR_DAT_04bcbce8;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[1] = (long)(puVar1 + 0x10);
  lVar9 = FUN_00185a6c(0x40);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 8) = 0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    if (param_2 != 0) {
      if (param_2 >> 0x3d != 0) {
        FUN_001df0b8();
                    /* WARNING: Does not return */
        pcVar7 = (code *)UndefinedInstructionException(0,0x1c3434);
        (*pcVar7)();
      }
      puVar10 = (undefined8 *)FUN_00187df4(param_2 * 8);
      puVar4 = puVar10 + param_2;
      *(undefined8 **)(lVar9 + 8) = puVar10;
      *(undefined8 **)(lVar9 + 0x18) = puVar4;
      for (uVar14 = param_2 & 7; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      if (6 < (param_2 - 1 & 0x1fffffffffffffff)) {
        do {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10 = puVar10 + 8;
        } while (puVar10 != puVar4);
      }
      *(undefined8 **)(lVar9 + 0x10) = puVar4;
    }
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(ulong *)(lVar9 + 0x38) = param_2;
  }
  *param_1 = lVar9;
  if (param_2 != 0) {
    puVar1 = PTR_DAT_04bcbc48 + 0x10;
    puVar2 = PTR_DAT_04bcc018 + 0x10;
    uVar14 = 1;
    do {
      plVar11 = (long *)FUN_00185a6c(0x38);
      if (plVar11 != (long *)0x0) {
        *plVar11 = (long)puVar1;
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined1 *)((long)plVar11 + 0xc) = 0;
        *plVar11 = (long)puVar2;
        FUN_00196a24(plVar11,param_3,0);
      }
      lVar12 = *param_1;
      lVar13 = *(long *)(lVar12 + 0x20);
      uVar3 = lVar13 + 1;
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar5 = *(ulong *)(lVar12 + 0x38);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar3 / uVar5;
      }
      *(ulong *)(lVar12 + 0x20) = uVar3 - uVar6 * uVar5;
      *(long **)(*(long *)(lVar12 + 8) + lVar13 * 8) = plVar11;
      *(long *)(lVar12 + 0x30) = lVar9 + 1;
      bVar8 = uVar14 < param_2;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar8);
  }
  return;
}

