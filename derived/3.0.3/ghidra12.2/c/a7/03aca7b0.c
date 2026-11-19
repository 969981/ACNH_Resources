
void FUN_03aca7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = *(uint *)(param_1 + 0x238);
  uVar5 = *(uint *)(param_1 + 0x370);
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  *(uint *)(param_1 + 0x238) = uVar4;
  if (0 < (int)uVar5) {
    uVar7 = uVar4 - 1;
    uVar5 = uVar4;
    if (uVar7 == 0 || (int)uVar4 < 1) {
      uVar5 = 1;
    }
    if (uVar7 == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = **(float **)(param_1 + 0x360);
    }
    FUN_03acc290(**(undefined4 **)(param_1 + 0x318),
                 (float)(*(undefined4 **)(param_1 + 0x318))[1] + fVar11,
                 *(undefined4 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x378),param_1 + 0xf24,
                 param_2,param_3);
    if (1 < (int)uVar4) {
      uVar8 = 0;
      do {
        uVar1 = uVar8 + 1;
        lVar3 = 0;
        if (uVar1 < *(uint *)(param_1 + 0x370)) {
          lVar3 = uVar8 + 1;
        }
        lVar2 = *(long *)(param_1 + 0x318) + uVar8 * 4;
        fVar10 = *(float *)(*(long *)(param_1 + 0x360) + uVar8 * 4 + 4);
        fVar11 = 0.0;
        if ((ulong)uVar7 - 1 != uVar8) {
          fVar11 = fVar10;
        }
        FUN_03acc290(*(float *)(lVar2 + 4) - fVar10,*(float *)(lVar2 + 8) + fVar11,
                     *(undefined4 *)(param_1 + 0x340),*(long *)(param_1 + 0x378) + lVar3 * 0x5d0,
                     param_1 + 0xf24,param_2,param_3);
        uVar8 = uVar1;
      } while ((ulong)uVar5 - 1 != uVar1);
    }
  }
  iVar6 = *(int *)(param_1 + 0x298);
  if (iVar6 == 0) {
    *(undefined1 **)(param_1 + 0x1d0) = &LAB_03acae00;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    puVar9 = &LAB_03acafa0;
  }
  else if (iVar6 == 1) {
    if (*(char *)(param_1 + 0xf20) == '\0') {
      *(undefined1 **)(param_1 + 0x1d0) = &LAB_03aca980;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      puVar9 = &LAB_03acabc0;
    }
    else {
      *(undefined1 **)(param_1 + 0x1d0) = &LAB_03ac9780;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      puVar9 = &LAB_03ac99c0;
    }
  }
  else if (iVar6 == 2) {
    *(undefined1 **)(param_1 + 0x1d0) = &LAB_03acb170;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    puVar9 = &LAB_03acb270;
  }
  else {
    *(undefined1 **)(param_1 + 0x1d0) = &LAB_03acb370;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    puVar9 = &LAB_03acb400;
  }
  *(undefined1 **)(param_1 + 0x1e0) = puVar9;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  return;
}

