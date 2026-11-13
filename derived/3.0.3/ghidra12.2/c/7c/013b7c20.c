
void FUN_013b7c20(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x464);
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar6;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_013b7cd8;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013b7cd8:
    uVar15 = 0;
  }
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbc7b0);
    puVar6 = PTR_DAT_04bb4798;
    uVar4 = 0;
    if ((int)lVar10 == 1) {
      uVar4 = uVar15;
    }
    if (((uVar9 & 1) != 0) && (uVar4 != 0)) {
      uVar4 = *(uint *)(plVar14 + 0x54);
      lVar10 = *(long *)PTR_DAT_04bb4798;
      uVar15 = uVar4;
      if (*(uint *)(lVar10 + 0x18) <= uVar4) {
        uVar15 = 0;
      }
      lVar11 = *(long *)(lVar10 + 0x20) + (long)(int)uVar15 * 0x28;
      uVar13 = *(undefined8 *)(lVar11 + 8);
      if (*(uint *)(lVar10 + 8) <= uVar4) {
        uVar4 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar4 * 0x10);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar11 + 0x10);
      *puVar1 = uVar13;
      bVar12 = *(byte *)(lVar11 + 0x14);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      *(byte *)((long)puVar1 + 0xc) = bVar12;
      bVar12 = *(byte *)(lVar11 + 0x15);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      *(byte *)((long)puVar1 + 0xd) = bVar12;
      *(undefined2 *)((long)puVar1 + 0xe) = *(undefined2 *)(lVar11 + 0x16);
      lVar10 = (long)(int)*(uint *)(plVar14 + 0x54);
      lVar11 = *(long *)(*(long *)puVar6 + 0x10);
      if (*(uint *)(*(long *)puVar6 + 8) <= *(uint *)(plVar14 + 0x54) || lVar11 == 0) {
        lVar10 = 0;
      }
      pbVar2 = (byte *)(lVar11 + lVar10 * 0x10);
      bVar12 = pbVar2[1];
      uVar15 = (uint)*pbVar2 | (bVar12 & 0xf) << 8;
      uVar4 = (uint)(bVar12 >> 4) | (uint)pbVar2[2] << 4;
      if ((bVar12 & 8) != 0) {
        uVar15 = uVar15 | 0xfffff000;
      }
      uVar3 = uVar4 | 0xfffff000;
      if (-1 < (char)pbVar2[2]) {
        uVar3 = uVar4;
      }
      uVar4 = pbVar2[8] & 0xf;
      uVar5 = *(uint *)(param_1 + 0x280);
      if (uVar5 == uVar4) {
        if (((uVar4 == 7) && (7 < pbVar2[0xc])) && (uVar5 != 5)) {
LAB_013b7ecc:
          FUN_03ebb160(param_1 + 0x278);
          return;
        }
      }
      else if (uVar4 < 0xc) {
        if ((1 << (ulong)uVar4 & 4000U) == 0) {
          fVar16 = (float)(int)uVar15;
          fVar17 = (float)(int)uVar3;
          if ((1 << (ulong)uVar4 & 0x5cU) == 0) {
            if ((pbVar2[8] & 0xf) != 0) {
              return;
            }
            *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3c8);
            *(float *)(param_1 + 0x330) = fVar16;
            fVar16 = fVar16 - *(float *)(param_1 + 0x38c);
            *(float *)(param_1 + 0x338) = fVar17;
            fVar17 = fVar17 - *(float *)(param_1 + 0x394);
            if (2.5 <= SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
              return;
            }
            if (uVar5 == 0) {
              return;
            }
            goto LAB_013b7ecc;
          }
          *(float *)(param_1 + 0x330) = fVar16;
          *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3c8);
          *(float *)(param_1 + 0x338) = fVar17;
        }
        if (uVar5 != uVar4) goto LAB_013b7ecc;
      }
    }
  }
  return;
}

