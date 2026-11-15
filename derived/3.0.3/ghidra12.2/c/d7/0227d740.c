
/* WARNING: Removing unreachable block (ram,0x0227da54) */

void FUN_0227d740(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  uint local_68 [2];
  
  if ((*(byte *)(param_1 + 0x29c) >> 2 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0xa0);
  if (lVar9 == 0) {
    return;
  }
  fVar11 = *(float *)(param_1 + 0x2cc);
  puVar1 = (undefined8 *)(param_1 + 0x2dc);
  fVar13 = 5.0;
  if (fVar11 < 5.0) {
    fVar13 = fVar11;
  }
  if (*(int *)(param_1 + 0x2a4) != 0) {
    fVar11 = fVar13;
  }
  *(float *)(lVar9 + 0x2ac) = fVar11;
  fVar15 = *(float *)(param_1 + 0x324);
  fVar16 = *(float *)(param_1 + 0x328);
  fVar17 = *(float *)(param_1 + 0x32c);
  fVar18 = *(float *)(param_1 + 0x2e0);
  fVar11 = -fVar15;
  fVar14 = -fVar16;
  lVar2 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  *(float *)(param_1 + 0x6c8) = *(float *)(param_1 + 0x6cc) * *(float *)(param_1 + 0x6cc);
  local_78 = -fVar17;
  fVar13 = *(float *)(param_1 + 0x2e4);
  fVar15 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17);
  if (0.0 < fVar15) {
    fVar15 = (*(float *)(param_1 + 0x2cc) * 1.2) / fVar15;
    fVar11 = fVar15 * fVar11;
    fVar14 = fVar15 * fVar14;
    local_78 = fVar15 * local_78;
  }
  local_80 = (float)*puVar1;
  fStack_7c = (float)((ulong)*puVar1 >> 0x20);
  fVar14 = fVar14 + fStack_7c;
  _local_80 = CONCAT44(fVar14,fVar11 + local_80);
  local_78 = local_78 + fVar13;
  uVar12 = FUN_0093a950(lVar2,&local_80,0);
  _local_80 = CONCAT44(uVar12,local_80);
  *(undefined2 *)(lVar9 + 0x4f18) = 0x100;
  *(undefined1 *)(lVar9 + 0x4f1a) = 0;
  local_68[0] = 0;
  fVar11 = (float)FUN_0093a950(lVar2,puVar1,local_68);
  *(float *)(param_1 + 0x2e0) = fVar11;
  if (local_68[0] < 0x2f) {
    if ((1L << ((ulong)local_68[0] & 0x3f) & 0x80000001022U) == 0) {
      if ((ulong)local_68[0] == 0x2e) {
        uVar12 = FUN_022806a8(param_1);
        *(undefined4 *)(param_1 + 0x2dc) = uVar12;
        *(float *)(param_1 + 0x2e0) = fVar13;
        *(float *)(param_1 + 0x2e4) = fVar14;
        local_68[1] = 0x19;
        *(byte *)(param_1 + 0x29f) = *(byte *)(param_1 + 0x29f) | 2;
        goto LAB_0227de4c;
      }
      goto code_r0x0227db28;
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x5092) = 1;
    }
    local_84 = 0;
    FUN_0093a950(lVar2,&local_80,&local_84);
    if ((local_68[0] == 5) && (local_84 != 5)) {
      uVar12 = FUN_022806a8(param_1);
      *(undefined4 *)(param_1 + 0x2dc) = uVar12;
      *(float *)(param_1 + 0x2e0) = fVar13;
      *(float *)(param_1 + 0x2e4) = fVar14;
    }
    local_68[1] = 0xf;
    if (*(char *)(param_1 + 0x29d) < '\0') {
      if (local_68[0] != 5) {
        *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) * 0.93;
        *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x32c) * 0.93;
      }
      bVar4 = true;
      *(undefined4 *)(param_1 + 0x328) = 0;
      fVar18 = fVar18 + 0.0;
    }
    else {
      *(undefined4 *)(param_1 + 0x6cc) = 0x3d4ccccd;
      *(undefined4 *)(param_1 + 0x328) = 0;
      *(undefined4 *)(param_1 + 0x6c0) = 0;
      *(float *)(param_1 + 0x6bc) = *(float *)(param_1 + 0x324) * 1.2;
      *(float *)(param_1 + 0x6c4) = *(float *)(param_1 + 0x32c) * 1.2;
      *(byte *)(param_1 + 0x29d) = *(byte *)(param_1 + 0x29d) | 0x80;
      local_68[1] = 0x10;
      *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 1;
      bVar4 = false;
    }
    fVar13 = 0.0;
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar9 != 0)) {
      local_68[1] = 0;
      lVar9 = *(long *)(lVar9 + 0x118);
      if (lVar9 != 0) {
        fVar13 = (float)FUN_015bc77c(lVar9,puVar1,0,0);
      }
    }
    fVar13 = fVar13 + *(float *)(param_1 + 0x2e0);
    *(float *)(param_1 + 0x2e0) = fVar13;
    if (local_68[0] != 0x2e) {
      fVar13 = fVar13 - *(float *)(param_1 + 0x2cc);
      *(float *)(param_1 + 0x2e0) = fVar13;
    }
    if (fVar18 - fVar13 <= *(float *)(param_1 + 0x6c8)) {
      local_68[1] = 7;
      FUN_0227ca5c(param_1,local_68 + 1,0);
      if (bVar4) goto LAB_0227de20;
      goto LAB_0227de4c;
    }
    *(float *)(param_1 + 0x2e0) = fVar18 - *(float *)(param_1 + 0x6c8);
    if (!bVar4) goto LAB_0227de4c;
LAB_0227de20:
    fVar13 = *(float *)(param_1 + 0x6cc);
    if (fVar13 * fVar13 < 6.0) {
      *(float *)(param_1 + 0x6cc) = fVar13 + 0.2;
    }
  }
  else {
code_r0x0227db28:
    if ((fVar11 < fVar18) && (6.0 < fVar18 - fVar11)) {
      *(byte *)(param_1 + 0x29f) = *(byte *)(param_1 + 0x29f) | 2;
      if (*(long *)(param_1 + 0xa0) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x5092) = 1;
      }
      local_68[1] = 0xf;
      if (-1 < *(char *)(param_1 + 0x29d)) {
        *(undefined4 *)(param_1 + 0x6cc) = 0x3d4ccccd;
        fVar13 = *(float *)(param_1 + 0x324) * 1.3;
        fVar14 = *(float *)(param_1 + 0x328) * 1.3;
        fVar11 = *(float *)(param_1 + 0x32c) * 1.3;
        *(float *)(param_1 + 0x324) = fVar13;
        *(float *)(param_1 + 0x328) = fVar14;
        *(float *)(param_1 + 0x32c) = fVar11;
        *(float *)(param_1 + 0x6bc) = fVar13 * 1.2;
        *(float *)(param_1 + 0x6c0) = fVar14 * 1.2;
        *(float *)(param_1 + 0x6c4) = fVar11 * 1.2;
        *(byte *)(param_1 + 0x29d) = *(byte *)(param_1 + 0x29d) | 0x80;
        local_68[1] = 0x10;
        *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 1;
      }
      fVar13 = (float)FUN_0093a950(lVar2,&local_80,local_68);
      fVar11 = *(float *)(param_1 + 0x2e0);
      _local_80 = CONCAT44(fVar13,local_80);
      if (fVar11 == fVar13) {
        fVar15 = *(float *)(param_1 + 0x324);
        if (((-0.2 <= fVar15) && (fVar15 <= 0.2)) &&
           ((-0.2 <= *(float *)(param_1 + 0x328) &&
            (((*(float *)(param_1 + 0x328) <= 0.2 &&
              (fVar14 = *(float *)(param_1 + 0x32c), -0.2 <= fVar14)) && (fVar14 <= 0.2)))))) {
          *(float *)(param_1 + 0x324) = fVar15 * 0.93;
          fVar14 = fVar14 * 0.93;
LAB_0227dde4:
          *(float *)(param_1 + 0x32c) = fVar14;
        }
      }
      else {
        fVar15 = *(float *)(param_1 + 0x6bc) * 0.98;
        fVar14 = *(float *)(param_1 + 0x6c4) * 0.98;
        *(float *)(param_1 + 0x6c0) = *(float *)(param_1 + 0x6c0) * 0.98;
        *(float *)(param_1 + 0x6bc) = fVar15;
        *(float *)(param_1 + 0x6c4) = fVar14;
        if (((((-0.2 <= *(float *)(param_1 + 0x324)) && (*(float *)(param_1 + 0x324) <= 0.2)) &&
             (-0.2 <= *(float *)(param_1 + 0x328))) &&
            ((*(float *)(param_1 + 0x328) <= 0.2 && (-0.2 <= *(float *)(param_1 + 0x32c))))) &&
           (*(float *)(param_1 + 0x32c) <= 0.2)) {
          *(float *)(param_1 + 0x324) = fVar15;
          goto LAB_0227dde4;
        }
      }
      *(undefined4 *)(param_1 + 0x328) = 0;
      local_68[1] = 8;
      *(float *)(param_1 + 0x2e0) = (fVar18 + 0.0) - *(float *)(param_1 + 0x6c8);
      FUN_0227ca5c(param_1,local_68 + 1,0);
      if (fVar11 == fVar13) goto LAB_0227de20;
    }
LAB_0227de4c:
    if (*(float *)(param_1 + 0x6cc) != 0.0) {
      *(float *)(param_1 + 0x2e0) = fStack_7c;
    }
  }
  puVar6 = PTR_DAT_04bc2e38;
  puVar5 = PTR_DAT_04bc2e30;
  lVar9 = (long)*(int *)(param_1 + 0xbc);
  plVar10 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
  puVar3 = PTR_DAT_04bb2e20 + 0x10;
  while( true ) {
    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
      *(undefined **)puVar5 = puVar3;
      __cxa_guard_release(puVar6);
    }
    if ((plVar10 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar5), (uVar8 & 1) != 0)) break;
    plVar10 = (long *)(*(long *)((long)plVar10 + lVar9 + 8) - lVar9);
  }
  *(undefined1 *)(plVar10 + 100) = 1;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),puVar1);
  return;
}

