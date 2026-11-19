
void FUN_03a717f0(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
                 undefined8 *param_7)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float local_108;
  float fStack_104;
  undefined4 local_100 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float local_44;
  
  if (*(char *)(param_5 + 0x468) != '\0') {
    uStack_b8 = param_7[1];
    local_c0 = *param_7;
    uStack_a8 = param_7[3];
    uStack_b0 = param_7[2];
    if (*(uint *)(param_5 + 0x1d0) <= param_6) {
      param_6 = 0;
    }
    plVar15 = (long *)(*(long *)(param_5 + 0x1d8) + (long)(int)param_6 * 0x560);
    uStack_98 = param_7[5];
    local_a0 = param_7[4];
    uStack_88 = DAT_04102218;
    uStack_90 = DAT_04102210;
    FUN_038e6ab4(local_100,&local_c0);
    lVar16 = plVar15[2];
    local_108 = 1.0 / param_3;
    fStack_104 = 1.0 / param_4;
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar18 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 8) * 4];
    local_44 = param_1;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar16 + (ulong)*(ushort *)(lVar18 + 4)),&local_44,(ulong)bVar1 << 2);
    }
    lVar16 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar18 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x14) * 4];
    local_44 = param_2 - param_1;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar16 + (ulong)*(ushort *)(lVar18 + 0x10)),&local_44,(ulong)bVar1 << 2);
    }
    lVar16 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar18 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x20) * 4];
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar16 + (ulong)*(ushort *)(lVar18 + 0x1c)),&local_108,(ulong)bVar1 << 2);
    }
    lVar16 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar18 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x2c) * 4];
    uVar17 = (ulong)bVar1;
    uVar8 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if (bVar1 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x28);
      uVar9 = uVar17 & 3;
      if (bVar1 < 4) {
        lVar18 = 0;
        puVar11 = local_100;
      }
      else {
        lVar18 = 0;
        puVar10 = (undefined4 *)(uVar12 + lVar16 + 8);
        puVar11 = local_100;
        do {
          lVar18 = lVar18 + -4;
          puVar10[-2] = *puVar11;
          puVar10[-1] = puVar11[1];
          *puVar10 = puVar11[2];
          puVar13 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          puVar10[1] = *puVar13;
          puVar10 = puVar10 + 4;
        } while (-lVar18 != (uVar17 & 0xfc));
        lVar18 = -lVar18;
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = puVar11;
        puVar13 = (undefined4 *)(lVar16 + uVar12 + lVar18 * 4);
        uVar14 = uVar9;
        do {
          puVar11 = puVar10 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar10;
          puVar10 = puVar11;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      uVar8 = uVar8 & 0xff;
      if (bVar1 < 4) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        puVar10 = (undefined4 *)(uVar12 + uVar8 * 4 + lVar16 + 8);
        do {
          lVar18 = lVar18 + -4;
          puVar10[-2] = *puVar11;
          puVar10[-1] = puVar11[1];
          *puVar10 = puVar11[2];
          puVar13 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          puVar10[1] = *puVar13;
          puVar10 = puVar10 + 4;
        } while (-lVar18 != (uVar17 & 0xfc));
        lVar18 = -lVar18;
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = puVar11;
        puVar13 = (undefined4 *)(lVar16 + uVar12 + lVar18 * 4 + uVar8 * 4);
        uVar14 = uVar9;
        do {
          puVar11 = puVar10 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar10;
          puVar10 = puVar11;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        puVar10 = (undefined4 *)(uVar12 + uVar8 * 8 + lVar16 + 8);
        do {
          lVar18 = lVar18 + -4;
          puVar10[-2] = *puVar11;
          puVar10[-1] = puVar11[1];
          *puVar10 = puVar11[2];
          puVar13 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          puVar10[1] = *puVar13;
          puVar10 = puVar10 + 4;
        } while (-lVar18 != (uVar17 & 0xfc));
        lVar18 = -lVar18;
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = puVar11;
        puVar13 = (undefined4 *)(lVar16 + uVar12 + uVar8 * 8 + lVar18 * 4);
        uVar14 = uVar9;
        do {
          puVar11 = puVar10 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar10;
          puVar10 = puVar11;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        puVar10 = (undefined4 *)(uVar12 + uVar8 * 0xc + lVar16 + 8);
        do {
          lVar18 = lVar18 + -4;
          puVar10[-2] = *puVar11;
          puVar10[-1] = puVar11[1];
          *puVar10 = puVar11[2];
          puVar13 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          puVar10[1] = *puVar13;
          puVar10 = puVar10 + 4;
        } while (-lVar18 != (uVar17 & 0xfc));
        lVar18 = -lVar18;
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = (undefined4 *)(lVar16 + uVar12 + lVar18 * 4 + uVar8 * 0xc);
        do {
          uVar9 = uVar9 - 1;
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 != 0);
      }
    }
    bVar1 = *(byte *)((long)plVar15 + 0x39);
    uVar2 = *(ushort *)((long)plVar15 + 0x3a);
    lVar16 = plVar15[6];
    iVar5 = (**(code **)(*plVar15 + 0x20))(plVar15);
    iVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar18 = plVar15[4];
    if (lVar18 != 0) {
      lVar3 = plVar15[6];
      lVar4 = plVar15[3];
      uVar7 = (**(code **)PTR_DAT_04bcf030)(lVar18);
      if ((uVar7 >> 2 & 1) != 0) {
        (*DAT_04c61fd8)(lVar18,(int)lVar4 +
                               (uint)uVar2 * (uint)bVar1 * (((int)lVar16 + iVar5) - 1U & -iVar6),
                        (int)lVar3);
      }
    }
  }
  return;
}

