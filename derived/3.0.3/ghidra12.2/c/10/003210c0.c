
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003210c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  
  *(undefined4 *)(param_1 + 0x17c) = **(undefined4 **)(param_1 + 0x248);
  puVar11 = (uint *)FUN_00331550();
  uVar2 = *puVar11 ^ *puVar11 << 0xb;
  uVar3 = puVar11[3];
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar11[2] = uVar3;
  puVar11[3] = uVar2;
  *(uint *)(param_1 + 0x3c) = uVar2;
  uVar10 = _UNK_04102888;
  uVar9 = _DAT_04102880;
  uVar8 = _UNK_041023d8;
  uVar7 = _DAT_041023d0;
  uVar6 = _UNK_04102208;
  uVar5 = _DAT_04102200;
  lVar15 = *(long *)(*(long *)(param_1 + 0x248) + 0x18);
  if (lVar15 != 0) {
    auVar18 = NEON_fmov(0x3f800000,4);
    do {
      lVar12 = FUN_003212d0(param_1,lVar15,*(undefined4 *)(param_1 + 0x4c),0,0xffffffff);
      if (lVar12 != 0) {
        *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
        *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
        if (*(char *)(*(long *)(lVar15 + 0x10) + 0x838) == '\0') {
          *(undefined1 *)(param_1 + 0x18) = 1;
          iVar17 = *(int *)(*(long *)(lVar12 + 0x240) + 0x88);
        }
        else {
          iVar17 = *(int *)(*(long *)(lVar12 + 0x240) + 0x88);
        }
        if (0 < iVar17) {
          uVar16 = 0;
          do {
            lVar13 = *(long *)(lVar12 + uVar16 * 8 + 0x248);
            if (((lVar13 != 0) && (*(char *)(*(long *)(lVar13 + 0x10) + 0x82c) == '\0')) &&
               (lVar13 = FUN_003212d0(param_1,lVar13,0,lVar12,uVar16 & 0xffffffff), lVar13 != 0)) {
              uVar4 = *(undefined4 *)(lVar12 + 0x14);
              *(undefined4 *)(lVar13 + 0x5ec) = 0xffffffff;
              *(undefined4 *)(lVar13 + 0x5e8) = uVar4;
              *(undefined8 *)(lVar13 + 0x428) = uVar10;
              *(undefined8 *)(lVar13 + 0x420) = uVar9;
              *(undefined8 *)(lVar13 + 0x448) = 0;
              *(undefined8 *)(lVar13 + 0x440) = 0;
              *(undefined8 *)(lVar13 + 0x418) = uVar6;
              *(undefined8 *)(lVar13 + 0x410) = uVar5;
              *(undefined8 *)(lVar13 + 0x438) = uVar8;
              *(undefined8 *)(lVar13 + 0x430) = uVar7;
              *(undefined8 *)(lVar13 + 0x3d8) = uVar6;
              *(undefined8 *)(lVar13 + 0x3d0) = uVar5;
              *(undefined8 *)(lVar13 + 1000) = uVar10;
              *(undefined8 *)(lVar13 + 0x3e0) = uVar9;
              *(undefined8 *)(lVar13 + 0x3f8) = uVar8;
              *(undefined8 *)(lVar13 + 0x3f0) = uVar7;
              *(undefined8 *)(lVar13 + 0x408) = 0;
              *(undefined8 *)(lVar13 + 0x400) = 0;
              iVar17 = *(int *)(*(long *)(lVar12 + 0x240) + 0x420);
              *(undefined4 *)(lVar13 + 0x5f8) = 0;
              *(undefined4 *)(lVar13 + 0x5f0) = 0xffffffff;
              *(undefined8 *)(lVar13 + 0x600) = 0;
              *(undefined8 *)(lVar13 + 0x608) = 0;
              *(undefined8 *)(lVar13 + 0x610) = 0;
              *(undefined8 *)(lVar13 + 0x618) = 0;
              *(undefined8 *)(lVar13 + 0x630) = 0;
              *(undefined8 *)(lVar13 + 0x640) = 0;
              *(undefined8 *)(lVar13 + 0x648) = 0;
              *(undefined8 *)(lVar13 + 0x638) = 0;
              *(float *)(lVar13 + 0x5f4) = (float)iVar17;
              *(long *)(lVar13 + 0x628) = auVar18._8_8_;
              *(long *)(lVar13 + 0x620) = auVar18._0_8_;
            }
            uVar16 = uVar16 + 1;
          } while ((long)uVar16 < (long)*(int *)(*(long *)(lVar12 + 0x240) + 0x88));
        }
      }
      lVar15 = *(long *)(lVar15 + 0x110);
    } while (lVar15 != 0);
  }
  lVar15 = *(long *)(param_1 + 0x160);
  if (lVar15 == 0) {
    iVar17 = 0;
  }
  else {
    iVar14 = 0;
    do {
      plVar1 = (long *)(lVar15 + 0x240);
      lVar15 = *(long *)(lVar15 + 0x80);
      iVar17 = *(int *)(*plVar1 + 0x420);
      if (iVar17 <= iVar14) {
        iVar17 = iVar14;
      }
      iVar14 = iVar17;
    } while (lVar15 != 0);
  }
  *(int *)(param_1 + 0x278) = iVar17;
  return;
}

