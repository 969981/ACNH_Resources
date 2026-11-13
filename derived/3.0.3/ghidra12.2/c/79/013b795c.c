
void FUN_013b795c(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar14 = *(uint *)(param_1 + 0x464);
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar14 = 1;
      goto joined_r0x013b7a1c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013b7a1c;
    }
  }
  uVar14 = 0;
joined_r0x013b7a1c:
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbc7b0);
    puVar4 = PTR_DAT_04bb4798;
    uVar3 = 0;
    if ((int)lVar8 == 1) {
      uVar3 = uVar14;
    }
    if (((uVar7 & 1) != 0) && (uVar3 != 0)) {
      uVar3 = *(uint *)(plVar13 + 0x54);
      lVar8 = *(long *)PTR_DAT_04bb4798;
      uVar14 = uVar3;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
        uVar14 = 0;
      }
      lVar10 = *(long *)(lVar8 + 0x20) + (long)(int)uVar14 * 0x28;
      if (*(uint *)(lVar8 + 8) <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x10);
      uVar9 = *(undefined8 *)(lVar10 + 8);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar10 + 0x10);
      *puVar1 = uVar9;
      bVar12 = *(byte *)(lVar10 + 0x14);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      *(byte *)((long)puVar1 + 0xc) = bVar12;
      bVar12 = *(byte *)(lVar10 + 0x15);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      *(byte *)((long)puVar1 + 0xd) = bVar12;
      *(undefined2 *)((long)puVar1 + 0xe) = *(undefined2 *)(lVar10 + 0x16);
      lVar10 = *(long *)puVar4;
      lVar8 = (long)(int)*(uint *)(plVar13 + 0x54);
      lVar11 = *(long *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 8) <= *(uint *)(plVar13 + 0x54) || lVar11 == 0) {
        lVar8 = 0;
      }
      puVar2 = (undefined1 *)(lVar11 + lVar8 * 0x10);
      bVar12 = puVar2[8];
      if ((*(uint *)(param_1 + 0x280) != (bVar12 & 0xf)) &&
         ((10.0 <= *(float *)(param_1 + 0x330) || (10.0 <= *(float *)(param_1 + 0x338))))) {
        puVar2[8] = bVar12 & 0xf0 | (byte)*(uint *)(param_1 + 0x280) & 0xf;
        bVar12 = (byte)((uint)(int)*(float *)(param_1 + 0x330) >> 8);
        *puVar2 = (char)(int)*(float *)(param_1 + 0x330);
        puVar2[1] = puVar2[1] & 0xf0 | bVar12 & 0xf;
        fVar15 = *(float *)(param_1 + 0x338);
        puVar2[2] = (char)((uint)(int)fVar15 >> 4);
        puVar2[1] = bVar12 & 0xf | (byte)((int)fVar15 << 4);
        fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x39c));
        *(short *)(puVar2 + 6) = (short)(int)(fVar15 * 8.381903e-08);
        if ((*(byte *)((long)plVar13 + 0x274) & 4) == 0) {
          FUN_013d8724(*(undefined8 *)puVar4,(int)plVar13[0x54]);
          return;
        }
      }
    }
  }
  return;
}

