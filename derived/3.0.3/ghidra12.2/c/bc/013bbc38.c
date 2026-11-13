
void FUN_013bbc38(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  fVar6 = *(float *)(param_1 + 0x32c);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  fVar7 = *(float *)(lVar5 + 0x278);
  fVar9 = *(float *)(lVar5 + 0x27c);
  fVar11 = *(float *)(lVar5 + 0x280);
  *(float *)(param_1 + 800) = fVar7;
  *(float *)(param_1 + 0x32c) = fVar7;
  fVar8 = *(float *)(param_1 + 0x330);
  *(float *)(param_1 + 0x324) = fVar9;
  *(float *)(param_1 + 0x330) = fVar9;
  *(float *)(param_1 + 0x328) = fVar11;
  fVar10 = *(float *)(param_1 + 0x334);
  *(float *)(param_1 + 0x338) = fVar7 - fVar6;
  *(float *)(param_1 + 0x334) = fVar11;
  *(float *)(param_1 + 0x33c) = fVar9 - fVar8;
  *(float *)(param_1 + 0x340) = fVar11 - fVar10;
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  uVar12 = *(undefined4 *)(lVar5 + 0x2b0);
  uVar1 = *(undefined4 *)(lVar5 + 0x2b4);
  uVar2 = *(undefined4 *)(lVar5 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x388) = uVar12;
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  *(undefined4 *)(param_1 + 0x394) = uVar12;
  *(undefined4 *)(param_1 + 0x398) = uVar1;
  *(undefined4 *)(param_1 + 0x39c) = uVar2;
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x310);
  FUN_013bb7b8();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
    FUN_03850760(*(undefined4 *)(param_1 + 0x348));
  }
  if ((*(char *)(param_1 + 0x504) == '\0') && (uVar3 = FUN_013bbd88(param_1), uVar3 != 0xfffe)) {
    uVar12 = 0;
    lVar5 = *(long *)PTR_DAT_04bb3d80;
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x348);
    if ((uVar3 < *(uint *)(lVar5 + 0x328)) &&
       ((lVar5 = *(long *)(*(long *)(lVar5 + 0x330) + (long)(int)uVar3 * 8), lVar5 != 0 &&
        (puVar4 = (undefined4 *)FUN_014073c0(lVar5,5,0x4108715d,*(undefined8 *)PTR_DAT_04bbcb08),
        puVar4 != (undefined4 *)0x0)))) {
      uVar12 = *puVar4;
    }
    *(undefined4 *)(param_1 + 0x500) = uVar12;
    *(undefined1 *)(param_1 + 0x504) = 1;
  }
  return;
}

