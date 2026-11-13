
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0126a570(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  char cVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_140;
  undefined *puStack_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined *local_50;
  long lStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  puVar8 = PTR_DAT_04bc4628;
  puVar7 = PTR_DAT_04bc4620;
  if (param_2 != (float *)0x0) {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    lVar13 = 4 - (ulong)*(ushort *)(lVar12 + 0x7f0);
    if ((((uint)lVar13 < *(uint *)(lVar12 + 2000)) &&
        (puVar14 = *(uint **)(*(long *)(lVar12 + 0x7d8) + lVar13 * 8), puVar14 != (uint *)0x0)) &&
       (uVar11 = *puVar14, uVar11 != 0)) {
      cVar16 = *PTR_DAT_04bc4620;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          uVar11 = *puVar14;
        }
        else {
          uVar15 = *(uint *)(puVar8 + 0x10);
          if (-1 < (int)uVar15) {
            if ((ushort *)((ulong)uVar15 + (long)puVar14) == (ushort *)0x0) break;
            uVar15 = (uint)*(ushort *)((ulong)uVar15 + (long)puVar14);
            goto LAB_0126a6b4;
          }
          if (uVar15 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)uVar11;
        uVar15 = 0;
        if ((puVar6 == (uint *)0x0) || (uVar15 = 0, puVar14 == puVar6)) goto LAB_0126a6b4;
        lVar13 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar6)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar14 + (lVar13 - (long)puVar6);
        uVar15 = 0;
        if (lVar13 == 0) goto LAB_0126a6b4;
        uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar6));
        *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar10 = (int *)(lVar13 + 4);
        while (piVar10[-1] != -0x278d8283) {
          piVar10 = piVar10 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0126a6b0;
        }
        uVar15 = 0;
        iVar4 = 0;
        if (*piVar10 != -1) {
          iVar4 = *piVar10;
        }
        *(int *)(puVar8 + 0x10) = iVar4;
        uVar11 = *puVar14;
        if (uVar11 == 0) goto LAB_0126a6b4;
      } while( true );
    }
LAB_0126a6b0:
    uVar15 = 0;
LAB_0126a6b4:
    puVar8 = PTR_DAT_04bb5be8;
    puVar7 = PTR_DAT_04bb5be0;
    uVar15 = uVar15 - *(ushort *)(lVar12 + 0x9f0);
    if ((uVar15 < *(uint *)(lVar12 + 0x9d0)) &&
       (puVar14 = *(uint **)(*(long *)(lVar12 + 0x9d8) + (long)(int)uVar15 * 8),
       puVar14 != (uint *)0x0)) {
      uVar11 = *puVar14;
      if (uVar11 != 0) {
        cVar16 = *PTR_DAT_04bb5be0;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            uVar11 = *puVar14;
          }
          else {
            uVar15 = *(uint *)(puVar8 + 0x18);
            if (-1 < (int)uVar15) {
              lVar12 = (ulong)uVar15 + (long)puVar14;
              goto LAB_0126a7b8;
            }
            if (uVar15 != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)uVar11;
          lVar12 = 0;
          if ((puVar6 == (uint *)0x0) || (lVar12 = 0, puVar14 == puVar6)) goto LAB_0126a7b8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar6)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar13 = (long)puVar14 + (lVar12 - (long)puVar6);
          lVar12 = 0;
          if (lVar13 == 0) goto LAB_0126a7b8;
          uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar6));
          *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar10 = (int *)(lVar13 + 4);
          while (piVar10[-1] != 0x39b5a93d) {
            piVar10 = piVar10 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_0126a7b4;
          }
          iVar4 = 0;
          if (*piVar10 != -1) {
            iVar4 = *piVar10;
          }
          *(int *)(puVar8 + 0x18) = iVar4;
          uVar11 = *puVar14;
          if (uVar11 == 0) break;
        } while( true );
      }
LAB_0126a7b4:
      lVar12 = 0;
LAB_0126a7b8:
      lStack_48 = *(long *)PTR_PTR_04bb5bd8;
      if (lVar12 != 0) {
        lStack_48 = lVar12;
      }
    }
    else {
      lStack_48 = *(long *)PTR_PTR_04bc48e0;
    }
    local_a5 = 0;
    local_124[0] = 0;
    local_130 = local_124;
    local_128 = 0x80;
    local_a0 = 0;
    puStack_138 = PTR_DAT_04bb2d88 + 0x10;
    local_9c = 0;
    puStack_80 = PTR_DAT_04bbc1a0 + 0x10;
    local_88 = 0;
    local_58 = 0;
    local_98 = PTR_DAT_04bb2010 + 0x10;
    uStack_90 = 0;
    local_70 = 0;
    local_60 = 0;
    local_54 = 0;
    local_140 = PTR_DAT_04bc49b8 + 0x10;
    local_3c = 0;
    local_38 = 0;
    local_40 = 0;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_78 = local_98;
    local_68 = local_98;
    FUN_009893c0(&local_140,&local_50);
    fVar19 = (float)local_70._4_4_ * 0.5;
    fVar18 = (float)(int)local_70 * 0.5;
    fVar21 = (float)(int)local_60 * 0.5;
    fVar20 = (float)local_60._4_4_ * 0.5;
    uVar11 = 0;
    if (fVar18 != (float)(int)fVar18) {
      uVar11 = (uint)(fVar18 < 0.0);
    }
    iVar4 = (int)fVar18 - uVar11;
    uVar11 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar11 = (uint)(fVar19 < 0.0);
    }
    uVar15 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar15 = (uint)(fVar21 < 0.0);
    }
    iVar5 = (int)fVar21 - uVar15;
    uVar15 = 0;
    if (fVar20 != (float)(int)fVar20) {
      uVar15 = (uint)(fVar20 < 0.0);
    }
    iVar1 = iVar4;
    if (iVar5 <= iVar4) {
      iVar1 = iVar5;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar5 = (int)fVar19 - uVar11;
    if ((int)((int)fVar19 - uVar11) <= (int)((int)fVar20 - uVar15)) {
      iVar5 = (int)fVar20 - uVar15;
    }
    if (((DAT_0515b168 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0515b168), iVar9 != 0)) {
      DAT_0515b158 = PTR_DAT_04bb2018 + 0x10;
      _DAT_0515b160 = 0x100000002;
      __cxa_guard_release(&DAT_0515b168);
    }
    iVar1 = iVar1 + iVar2 + DAT_0515b160;
    iVar2 = (iVar2 + iVar4 + DAT_0515b160) - iVar1;
    iVar4 = iVar2 + 2;
    if (-1 < iVar2 + 1) {
      iVar4 = iVar2 + 1;
    }
    param_2[2] = (float)(iVar3 + iVar5 + DAT_0515b164 + 1) * 10.0 + 5.0;
    *param_2 = (float)(iVar1 + (iVar4 >> 1)) * 10.0 + 5.0;
  }
  return;
}

