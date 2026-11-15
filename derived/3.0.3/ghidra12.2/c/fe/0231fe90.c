
undefined4 FUN_0231fe90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  char cVar13;
  int *piVar14;
  
  iVar6 = FUN_00a74b78(param_1 + 0x1ee8);
  puVar2 = PTR_DAT_04bb6298;
  if (iVar6 == 4) {
    uVar11 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      uVar11 = 0;
      if (uVar3 < 0x149) {
        uVar11 = uVar3;
      }
    }
    if ((uVar11 == 0x19) && (uVar8 = FUN_0244bc64(param_1), (uVar8 & 1) != 0)) {
      sVar5 = *(short *)puVar2;
      if (sVar5 == -1) {
LAB_02320044:
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          return 0x17;
        }
        *(undefined4 *)(*(long *)PTR_DAT_04bb4718 + 0xf00) = *(undefined4 *)(param_1 + 0x1810);
        return 0x17;
      }
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02320044;
    }
  }
  sVar5 = *(short *)puVar2;
  if (sVar5 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((((*(uint *)(puVar2 + 4) & 1) != 0) && (lVar12 = *(long *)(param_1 + 0x70), lVar12 != 0)) &&
       (*(int *)(lVar12 + 0x280) == 0x18)) {
      uVar11 = 0;
      if (*(uint *)(lVar12 + 0x288) < 0x149) {
        uVar11 = *(uint *)(lVar12 + 0x288);
      }
      if (((DAT_054f0b68 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_054f0b68), iVar6 != 0)) {
        DAT_054f0b60 = 0;
        __cxa_guard_release(&DAT_054f0b68);
      }
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        puVar9 = &DAT_054f0b60;
      }
      else {
        lVar12 = *(long *)PTR_DAT_04bb4718 + 0x20;
        puVar9 = (uint *)FUN_0250f090(lVar12,uVar11);
        if (puVar9 == (uint *)0x0) {
          puVar10 = (uint *)FUN_0250f090(lVar12,0);
          puVar9 = &DAT_054f0b60;
          if (puVar10 != (uint *)0x0) {
            puVar9 = puVar10;
          }
        }
      }
      puVar1 = PTR_DAT_04bc2fe8;
      puVar2 = PTR_DAT_04bc2fe0;
      if (*puVar9 == 0) {
LAB_02320180:
        uVar11 = 0;
      }
      else {
        cVar13 = *PTR_DAT_04bc2fe0;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar1 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(puVar1 + 0xa4);
            if (-1 < (int)uVar11) {
              if (((byte *)((ulong)uVar11 + (long)puVar9) == (byte *)0x0) ||
                 (bVar4 = *(byte *)((ulong)uVar11 + (long)puVar9), uVar11 = (uint)bVar4, 9 < bVar4))
              goto LAB_02320180;
              goto LAB_02320014;
            }
            if (uVar11 != 0xffffffff) goto LAB_02320180;
          }
          puVar10 = (uint *)(ulong)*puVar9;
          uVar11 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar10)) goto LAB_02320014;
          lVar12 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar9 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) goto LAB_02320180;
          uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          *(undefined4 *)(puVar1 + 0xa4) = 0xfffffffe;
          uVar11 = 0;
          if (uVar8 == 0) goto LAB_02320014;
          piVar14 = (int *)(lVar12 + 4);
          while (piVar14[-1] != -0x6f9844f2) {
            piVar14 = piVar14 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              uVar11 = 0;
              goto LAB_02320014;
            }
          }
          iVar6 = 0;
          if (*piVar14 != -1) {
            iVar6 = *piVar14;
          }
          *(int *)(puVar1 + 0xa4) = iVar6;
        } while (*puVar9 != 0);
        uVar11 = 0;
      }
      goto LAB_02320014;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x1f38);
LAB_02320014:
  if (uVar11 - 2 < 6) {
    uVar7 = *(undefined4 *)(&DAT_0417a6dc + (long)(int)(uVar11 - 2) * 4);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

