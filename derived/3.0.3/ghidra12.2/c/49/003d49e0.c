
uint FUN_003d49e0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  undefined1 auStack_160 [40];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 auStack_98 [40];
  
  uVar3 = *(uint *)(param_1 + 0xdc);
  if ((int)uVar3 < 1) {
    uVar9 = 1;
  }
  else {
    lVar13 = 0;
    lVar15 = 0;
    uVar17 = 0;
    uVar9 = 1;
    do {
      piVar12 = (int *)(param_1 + uVar17 * 0xf4 + 0xe0);
      if (*piVar12 < 1) {
        uVar7 = 1;
      }
      else {
        lVar10 = 0;
        uVar7 = 1;
        lVar14 = lVar13;
        lVar16 = lVar15;
        do {
          lVar1 = param_1 + lVar14;
          lVar2 = param_1 + lVar16;
          if (*(char *)(lVar1 + 0x4c0) == '\0') {
            if ((uint)(*(int *)(lVar2 + 0xe8) * 1000) < *(uint *)(param_1 + 0x76c)) {
              FUN_003c8dd4(auStack_98,*(undefined8 *)(param_1 + 0x760),0);
              lVar11 = FUN_003c8fec(auStack_98,*(undefined4 *)(lVar2 + 0xe4));
              if (lVar11 != 0) {
                FUN_003d40cc(auStack_160,lVar11,0);
                uVar6 = FUN_003d41bc(auStack_160,&local_138,0);
                if ((uVar6 & 1) != 0) {
                  iVar8 = (int)local_130;
                  if (1 < (int)local_130) {
                    iVar8 = 2;
                  }
                  lVar11 = FUN_003bfac0(iVar8,0x80,0,param_1);
                  if (lVar11 != 0) {
                    FUN_003bf948(lVar11,*(undefined4 *)(param_1 + 0x768));
                    FUN_003bf958(lVar11,*(undefined8 *)(param_1 + 0x30));
                    auVar5 = SEXT816((long)((long)local_130._4_4_ * (ulong)*(uint *)(lVar2 + 0xf0)))
                             * SEXT816(0x20c49ba5e353f7cf);
                    FUN_003bf590(lVar11,&local_138,*(undefined4 *)(lVar2 + 0xec),
                                 (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f),0);
                    *(long *)(lVar1 + 0x4c8) = lVar11;
                    *(undefined1 *)(lVar1 + 0x4c0) = 1;
                  }
                }
              }
              uVar7 = 0;
              if (*(char *)(lVar1 + 0x4c0) != '\0') goto LAB_003d4ac8;
            }
            else {
              uVar7 = 0;
            }
          }
          else {
LAB_003d4ac8:
            lVar11 = *(long *)(lVar1 + 0x4c8);
            if (lVar11 != 0) {
              if (*(char *)(lVar11 + 0xc1) != '\0') {
                iVar8 = *(int *)(lVar11 + 0x164) + -5;
                if (0 < iVar8) {
                  *(int *)(lVar11 + 0x164) = iVar8;
                  fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + 0xf8));
                  *(float *)(lVar11 + 200) = *(float *)(param_1 + 0x40) * (fVar18 / 255.0);
                  *(float *)(lVar11 + 0xcc) = *(float *)(param_1 + 0x44) * *(float *)(lVar2 + 0xf4);
                  bVar4 = *(byte *)(lVar2 + 0xf9);
                  local_138 = *(undefined8 *)(param_1 + 0x9c);
                  local_130 = *(undefined8 *)(param_1 + 0xa4);
                  local_128 = *(undefined4 *)(param_1 + 0xac);
                  fVar18 = *(float *)(param_1 + 0x98);
                  memmove((void *)(lVar11 + 0xdc),(void *)(param_1 + 0x60),0x38);
                  *(float *)(lVar11 + 0x114) = fVar18 + (float)(int)(bVar4 - 0x40) * 0.015625;
                  uVar7 = 0;
                  *(undefined8 *)(lVar11 + 0x118) = local_138;
                  *(undefined8 *)(lVar11 + 0x120) = local_130;
                  *(undefined4 *)(lVar11 + 0x128) = local_128;
                  *(undefined4 *)(lVar11 + 0x168) = *(undefined4 *)(param_1 + 0x54);
                  *(undefined4 *)(lVar11 + 0x16c) = *(undefined4 *)(param_1 + 0x58);
                  goto LAB_003d4aa0;
                }
                FUN_003bf4f0(lVar11);
                uVar7 = 0;
              }
              *(undefined8 *)(lVar1 + 0x4c8) = 0;
            }
          }
LAB_003d4aa0:
          lVar10 = lVar10 + 1;
          lVar16 = lVar16 + 0x18;
          lVar14 = lVar14 + 0x10;
        } while (lVar10 < *piVar12);
      }
      uVar17 = uVar17 + 1;
      uVar9 = uVar7 & uVar9;
      lVar15 = lVar15 + 0xf4;
      lVar13 = lVar13 + 0xa8;
    } while (uVar17 != uVar3);
  }
  *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 5000;
  return uVar9;
}

