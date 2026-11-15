
/* WARNING: Removing unreachable block (ram,0x0209c270) */
/* WARNING: Removing unreachable block (ram,0x0209c260) */
/* WARNING: Removing unreachable block (ram,0x0209c27c) */
/* WARNING: Removing unreachable block (ram,0x0209c2a0) */

void FUN_0209bf8c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  long lVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  if (*(int *)(param_1 + 0xe4) != 3) {
    if (*(int *)(param_1 + 0xe4) == 1) {
      iVar9 = *(int *)(param_1 + 0xcc);
      if (*(int *)(param_1 + 0xd0) != -1) {
        iVar9 = *(int *)(param_1 + 0xd0) + 10;
      }
      FUN_0209c5b0(param_1,param_1 + 0x8c,iVar9);
      FUN_0209ce98(param_1,param_1 + 0x8c);
    }
    if (*(int *)(param_1 + 0x28) == 2) {
      if (*(int *)(param_1 + 0x38) == 3) {
        fVar25 = -50.0;
      }
      else {
        if (*(int *)(param_1 + 0x38) != 4) goto LAB_0209c03c;
        fVar25 = -5.0;
      }
      fVar25 = fVar25 + *(float *)(param_1 + 0x2c);
      fVar28 = 100.0;
      if (fVar25 <= 100.0) {
        fVar28 = fVar25;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar25) {
        fVar26 = fVar28;
      }
      *(float *)(param_1 + 0x2c) = fVar26;
    }
LAB_0209c03c:
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
    if (*(int *)(param_1 + 0x48) == 2) {
      if (*(int *)(param_1 + 0x58) == 3) {
        fVar25 = -50.0;
      }
      else {
        if (*(int *)(param_1 + 0x58) != 4) goto LAB_0209c0a4;
        fVar25 = -5.0;
      }
      fVar25 = fVar25 + *(float *)(param_1 + 0x4c);
      fVar28 = 100.0;
      if (fVar25 <= 100.0) {
        fVar28 = fVar25;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar25) {
        fVar26 = fVar28;
      }
      *(float *)(param_1 + 0x4c) = fVar26;
    }
LAB_0209c0a4:
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
    if (*(int *)(param_1 + 0x68) == 2) {
      if (*(int *)(param_1 + 0x78) == 3) {
        fVar25 = -50.0;
      }
      else {
        if (*(int *)(param_1 + 0x78) != 4) goto LAB_0209c108;
        fVar25 = -5.0;
      }
      fVar25 = fVar25 + *(float *)(param_1 + 0x6c);
      fVar28 = 100.0;
      if (fVar25 <= 100.0) {
        fVar28 = fVar25;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar25) {
        fVar26 = fVar28;
      }
      *(float *)(param_1 + 0x6c) = fVar26;
    }
LAB_0209c108:
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0xbf800000;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar27 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x94) = uVar27;
  uVar30 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x98) = uVar30;
  uVar31 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x9c) = uVar31;
  uVar21 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xb0) = uVar21;
  uVar23 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0xb4) = uVar23;
  uVar24 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xc0) = uVar24;
  uVar14 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xc4) = uVar14;
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 200) = uVar5;
  uVar16 = *(undefined1 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0xd4) = uVar16;
  uVar15 = *(undefined2 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0xd8) = uVar15;
  uVar16 = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0xda) = uVar16;
  uVar17 = *(undefined1 *)(param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0xdb) = uVar17;
  uVar18 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xdc) = uVar18;
  uVar29 = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe0) = uVar29;
  uVar6 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  uVar13 = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0xe8) = uVar13;
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xec) = uVar7;
  if (*(int *)(param_2 + 100) == 0) {
    if (0x1b < *(int *)(param_2 + 8)) {
      lVar20 = *(long *)(*(long *)(param_1 + 8) + 8);
      if ((lVar20 != 0) && (uVar8 = *(uint *)(lVar20 + 0x508), uVar8 != 0xffffffff)) {
        puVar22 = &DAT_053fe348 + (ulong)uVar8 * 0xba0;
        if (9 < uVar8) {
          puVar22 = &DAT_053fe348;
        }
        uVar27 = *(undefined4 *)(puVar22 + 0x7cc);
        *(undefined4 *)(param_1 + 0x94) = uVar27;
        uVar30 = *(undefined4 *)(puVar22 + 2000);
        *(undefined4 *)(param_1 + 0x98) = uVar30;
        uVar31 = *(undefined4 *)(puVar22 + 0x7d4);
        *(undefined4 *)(param_1 + 0x9c) = uVar31;
        uVar21 = *(undefined4 *)(puVar22 + 0x7f8);
        *(undefined4 *)(param_1 + 0xb0) = uVar21;
        uVar23 = *(undefined4 *)(puVar22 + 0x7fc);
        *(undefined4 *)(param_1 + 0xb4) = uVar23;
        uVar24 = *(undefined4 *)(puVar22 + 0x808);
        *(undefined4 *)(param_1 + 0xc0) = uVar24;
        uVar14 = *(undefined4 *)(puVar22 + 0x80c);
        *(undefined4 *)(param_1 + 0xc4) = uVar14;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
          lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
          if (lVar20 == 0) {
            puVar19 = &DAT_05586008;
          }
          else {
            lVar1 = lVar20 + 0x130 + (ulong)*(uint *)(lVar20 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar20 + 0x198)) {
              lVar1 = lVar20 + 0x130;
            }
            iVar9 = *(int *)(puVar22 + 0x7f8);
            iVar10 = *(int *)(lVar1 + 0x28);
            puVar19 = (undefined2 *)PTR_DAT_04bb37e0;
            if ((iVar10 <= iVar9) && (iVar9 <= *(int *)(lVar1 + 8) + iVar10 + -1)) {
              iVar11 = *(int *)(lVar1 + 0x2c);
              iVar12 = *(int *)(puVar22 + 0x7fc);
              if ((iVar11 <= iVar12) &&
                 ((iVar12 <= *(int *)(lVar1 + 0xc) + iVar11 + -1 &&
                  (uVar8 = (iVar12 - iVar11) + (iVar9 - iVar10) * *(int *)(lVar1 + 0xc),
                  uVar8 < *(uint *)(lVar1 + 0x10))))) {
                puVar19 = (undefined2 *)(*(long *)(lVar1 + 0x18) + (long)(int)uVar8 * 8);
              }
            }
          }
          uVar15 = *puVar19;
          *(undefined2 *)(param_1 + 0xd8) = uVar15;
          uVar16 = *(undefined1 *)(puVar19 + 1);
          *(undefined1 *)(param_1 + 0xda) = uVar16;
          uVar17 = *(undefined1 *)((long)puVar19 + 3);
          *(undefined1 *)(param_1 + 0xdb) = uVar17;
          uVar18 = *(undefined4 *)(puVar19 + 2);
          *(undefined4 *)(param_1 + 0xdc) = uVar18;
        }
      }
      if (*(int *)(param_2 + 100) != 0) goto LAB_0209c1c8;
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
    *(undefined4 *)(param_1 + 0xfc) = uVar3;
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    *(undefined4 *)(param_1 + 0x104) = uVar27;
    *(undefined4 *)(param_1 + 0x108) = uVar30;
    *(undefined4 *)(param_1 + 0x10c) = uVar31;
    *(undefined4 *)(param_1 + 0x120) = uVar21;
    *(undefined4 *)(param_1 + 0x124) = uVar23;
    *(undefined4 *)(param_1 + 0x130) = uVar24;
    *(undefined4 *)(param_1 + 0x134) = uVar14;
    *(undefined4 *)(param_1 + 0x138) = uVar5;
    *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 0xcc);
    *(undefined2 *)(param_1 + 0x148) = uVar15;
    *(undefined1 *)(param_1 + 0x14a) = uVar16;
    *(undefined1 *)(param_1 + 0x14b) = uVar17;
    *(undefined4 *)(param_1 + 0x14c) = uVar18;
    *(undefined4 *)(param_1 + 0x150) = uVar29;
    *(undefined4 *)(param_1 + 0x154) = uVar6;
    *(undefined1 *)(param_1 + 0x158) = uVar13;
    *(undefined4 *)(param_1 + 0x15c) = uVar7;
    *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_1 + 0xd4);
  }
  else {
LAB_0209c1c8:
    if (*(int *)(param_2 + 0x6c) == 0) goto LAB_0209c3c4;
  }
  *(undefined4 *)(param_1 + 0x18) = 100;
LAB_0209c3c4:
  lVar20 = param_1 + 0x80;
  FUN_020e9020(param_1 + 0x20,lVar20);
  FUN_020e9020(param_1 + 0x40,lVar20);
  FUN_020e9020(param_1 + 0x60,lVar20);
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0x708;
  return;
}

