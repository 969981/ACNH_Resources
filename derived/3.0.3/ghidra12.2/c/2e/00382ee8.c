
void FUN_00382ee8(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short *psVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(param_5 + 0x30);
  lVar1 = *(long *)(param_5 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
    lVar5 = lVar1;
  }
  psVar3 = (short *)FUN_003649c0(lVar5,param_6);
  if (*psVar3 == 2) {
    puVar4 = (undefined8 *)FUN_00367b30(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 2);
    puVar4 = (undefined8 *)FUN_00367b30(0x48);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_003b4aa0(puVar4,5,3,uVar2);
      *puVar4 = &PTR_FUN_0484d528;
    }
    *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18) = puVar4;
    psVar10 = *(short **)(param_1 + 0xf8);
  }
  else {
    if (*psVar3 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    fVar12 = *(float *)(param_4 + 0x4c);
    fVar14 = *(float *)(param_4 + 0x50);
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(psVar3 + 2));
    if (fVar12 <= fVar14) {
      fVar13 = fVar15 / fVar12;
      fVar15 = fVar13 / (fVar14 / fVar12);
      puVar4 = (undefined8 *)FUN_00367b30(0x20);
    }
    else {
      fVar15 = fVar15 / fVar14;
      fVar13 = fVar15 / (fVar12 / fVar14);
      puVar4 = (undefined8 *)FUN_00367b30(0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar4;
    uVar2 = *(undefined4 *)(psVar3 + 4);
    lVar5 = FUN_00367b30(0x50);
    if (lVar5 != 0) {
      FUN_0038db20(ABS(fVar13),ABS(fVar15),lVar5,5,3,uVar2);
    }
    *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar5;
    psVar10 = *(short **)(param_1 + 0xf8);
  }
  if (psVar10 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar10 = *psVar3;
    uVar6 = FUN_003b49e4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar7 = FUN_003b49ec(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18);
    uVar8 = FUN_00367b30(uVar6);
    uVar9 = FUN_00367b30(uVar7);
    FUN_003b4a14(uVar11,uVar8,uVar6,uVar9,uVar7);
    if (param_2 != (long *)0x0) {
      lVar5 = FUN_0038cb40(param_3,4,uVar6);
      *param_2 = *param_2 + lVar5;
      lVar5 = FUN_0038cb40(param_3,8,uVar7);
      *param_2 = *param_2 + lVar5;
      return;
    }
  }
  return;
}

