
void FUN_018a20b0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  undefined1 uVar16;
  float fVar17;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  
  local_6a = 0;
  local_68 = 0;
  local_6c = (undefined2)*(undefined4 *)(param_1 + 0x2cc);
  FUN_0277d4ac(&local_6c);
  local_64 = FUN_0277d6c4(&local_6c);
  uVar7 = FUN_018bba44(&local_64);
  if (uVar7 < 3) {
    FUN_011e24dc(param_1 + 0x2a4,1);
  }
  puVar5 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x798) == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x2a0);
  uVar2 = *(uint *)(param_1 + 0x29c);
  if (*(uint *)(param_1 + 0x288) <= uVar7) {
    uVar7 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x290) + (long)(int)uVar7 * 0x30;
  uVar7 = uVar2;
  if (*(uint *)(lVar12 + 0x10) <= uVar2) {
    uVar7 = 0;
  }
  uVar7 = *(uint *)(*(long *)(lVar12 + 0x18) + (long)(int)uVar7 * 4);
  if ((uVar7 == 0) || (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 == 0)) goto LAB_018a22f8;
  plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar7 >> 0x11) & 0x7ff8))
  ;
  if ((plVar15 == (long *)0x0) ||
     (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar7)))) {
    plVar15 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar10 + 0x60))();
    if (iVar8 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_018a21f4;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_018a21f4:
    uVar7 = 0;
  }
  if (plVar15 != (long *)0x0) {
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3fe8);
    puVar6 = PTR_DAT_04bbe5c0;
    puVar5 = PTR_DAT_04bbe5b8;
    if ((uVar7 & uVar9) == 1) {
      if (*(long *)(param_1 + 0x798) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined1 *)(*(long *)(param_1 + 0x798) + 0x90);
      }
      if ((long *)plVar15[0x16] != plVar15 + 0x15) {
        lVar12 = (long)*(int *)((long)plVar15 + 0xbc);
        plVar10 = (long *)(plVar15[0x16] - lVar12);
        puVar1 = PTR_DAT_04bbe5c8 + 0x10;
        do {
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          if ((plVar10 != (long *)0x0) &&
             (uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar5), (uVar11 & 1) != 0)) {
            *(uint *)((long)plVar10 + 0x374) = uVar2;
            *(undefined1 *)(plVar10 + 0x6e) = uVar16;
            *(undefined1 *)(plVar10 + 0x6f) = 0;
            break;
          }
          plVar10 = (long *)(*(long *)((long)plVar10 + lVar12 + 8) - lVar12);
        } while (plVar10 != (long *)((long)(plVar15 + 0x15) - lVar12));
      }
    }
  }
LAB_018a22f8:
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    lVar12 = (long)(int)uVar2;
    lVar13 = *(long *)(*(long *)(param_1 + 0x798) + 0x10);
    if (*(uint *)(*(long *)(param_1 + 0x798) + 8) <= uVar2 || lVar13 == 0) {
      lVar12 = 0;
    }
    pbVar14 = (byte *)(lVar13 + lVar12 * 10);
    uVar7 = (int)*(float *)(param_1 + 0x2a4) >> 2;
    pbVar14[1] = (byte)(uVar7 << 3) | pbVar14[1] & 7;
    pbVar14[2] = pbVar14[2] & 0xe0 | (byte)(uVar7 >> 5) & 0x1f;
    uVar9 = (int)*(float *)(param_1 + 0x2ac) >> 2;
    pbVar14[2] = (byte)(uVar9 << 5) | (byte)(uVar7 >> 5) & 0x1f;
    pbVar14[3] = pbVar14[3] & 0x80 | (byte)(uVar9 >> 3) & 0x7f;
    bVar3 = *(byte *)(param_1 + 0x2c8);
    *pbVar14 = *pbVar14 & 0x80 | bVar3 & 0x7f;
    uVar9 = *(uint *)(param_1 + 0x2cc);
    *pbVar14 = bVar3 | 0x80;
    pbVar14[1] = (byte)(uVar7 << 3) | 7;
    pbVar14[4] = pbVar14[4] & 3 | (byte)(uVar9 << 2);
    pbVar14[5] = (byte)(uVar9 >> 6);
    bVar3 = pbVar14[6];
    bVar4 = (byte)(uVar9 >> 0xe) & 3;
    pbVar14[6] = bVar3 & 0xfc | bVar4;
    uVar7 = 0;
    if (*(long *)(param_1 + 0x798) != 0) {
      uVar7 = (uint)*(byte *)(*(long *)(param_1 + 0x798) + 0x90);
    }
    lVar13 = lVar13 + lVar12 * 10;
    pbVar14[6] = bVar3 & 0x1c | bVar4 | (byte)(uVar7 << 5);
    pbVar14[7] = pbVar14[7] & 0xe0 | (byte)(uVar7 >> 3);
    fVar17 = *(float *)(param_1 + 0x2ac);
    *(char *)(lVar13 + 8) =
         (char)(int)((float)(int)*(float *)(param_1 + 0x2a4) / 10.0) -
         (*(float *)(param_1 + 0x2a4) < 0.0);
    *(char *)(lVar13 + 9) = (char)(int)((float)(int)fVar17 / 10.0) - (fVar17 < 0.0);
    plVar15 = *(long **)(param_1 + 0x798);
    uVar11 = (**(code **)(*plVar15 + 0x58))(plVar15);
    if ((uVar11 & 1) != 0) {
      uVar7 = uVar2;
      if (*(uint *)(plVar15 + 3) <= uVar2) {
        uVar7 = 0;
      }
      if (*(uint *)(plVar15 + 1) <= uVar2) {
        uVar2 = 0;
      }
      lVar12 = plVar15[4] + (long)(int)uVar7 * 0x20;
      plVar15 = (long *)(plVar15[2] + (long)(int)uVar2 * 10);
      if (*(long *)(lVar12 + 8) != *plVar15 || *(short *)(lVar12 + 0x10) != (short)plVar15[1]) {
        lVar13 = *plVar15;
        *(short *)(lVar12 + 0x10) = (short)plVar15[1];
        *(long *)(lVar12 + 8) = lVar13;
        *(undefined1 *)(lVar12 + 0x12) = 1;
      }
    }
  }
  return;
}

