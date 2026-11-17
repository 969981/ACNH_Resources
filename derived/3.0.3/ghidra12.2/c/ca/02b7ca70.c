
/* WARNING: Removing unreachable block (ram,0x02b7cce4) */

uint FUN_02b7ca70(undefined8 *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  long lVar18;
  undefined *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_04bb5c78;
  puVar5 = PTR_DAT_04bb5008;
  lVar18 = *(long *)PTR_DAT_04bb5008;
  uVar10 = (uint)*(ushort *)(lVar18 + 0x17f0);
  uVar1 = *(short *)(lVar18 + 0x17f2) + 1;
  if (*(ushort *)(lVar18 + 0x17f0) == uVar1) {
    uVar9 = 0;
  }
  else {
    puVar2 = PTR_DAT_04bc4bb0 + 0x10;
    do {
      uVar3 = uVar10 & 0xffff;
      uVar10 = uVar3 - *(ushort *)(lVar18 + 0x17f0);
      if (((uVar10 < *(uint *)(lVar18 + 0x17d0)) &&
          (puVar12 = *(uint **)(*(long *)(lVar18 + 0x17d8) + (long)(int)uVar10 * 8),
          puVar12 != (uint *)0x0)) ||
         (puVar12 = (uint *)PTR_DAT_04bc4b58, (*PTR_DAT_04bc4b60 & 1) != 0)) {
        if (*puVar12 != 0) goto LAB_02b7cb40;
LAB_02b7cc44:
        uVar10 = 0;
      }
      else {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4b60);
        if (iVar8 != 0) {
          *(undefined4 *)PTR_DAT_04bc4b58 = 0;
          __cxa_guard_release(PTR_DAT_04bc4b60);
        }
        puVar12 = (uint *)PTR_DAT_04bc4b58;
        if (*(int *)PTR_DAT_04bc4b58 == 0) goto LAB_02b7cc44;
LAB_02b7cb40:
        cVar14 = *PTR_DAT_04bb5c70;
        do {
          puVar6 = PTR_DAT_04bb5c70;
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *puVar6 = 1;
          }
          else {
            uVar10 = *(uint *)(puVar7 + 8);
            if (-1 < (int)uVar10) {
              if ((ushort *)((ulong)uVar10 + (long)puVar12) == (ushort *)0x0) goto LAB_02b7cc44;
              uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar12);
              goto LAB_02b7cc48;
            }
            if (uVar10 != 0xffffffff) goto LAB_02b7cc44;
          }
          puVar16 = (uint *)(ulong)*puVar12;
          uVar10 = 0;
          if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_02b7cc48;
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + (lVar13 - (long)puVar16);
          if (lVar13 == 0) goto LAB_02b7cc44;
          uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
          *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
          uVar10 = 0;
          if (uVar15 == 0) goto LAB_02b7cc48;
          piVar17 = (int *)(lVar13 + 4);
          while (piVar17[-1] != 0x54706054) {
            piVar17 = piVar17 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar10 = 0;
              goto LAB_02b7cc48;
            }
          }
          iVar8 = 0;
          if (*piVar17 != -1) {
            iVar8 = *piVar17;
          }
          *(int *)(puVar7 + 8) = iVar8;
        } while (*puVar12 != 0);
        uVar10 = 0;
      }
LAB_02b7cc48:
      lVar13 = *(long *)puVar5;
      uVar10 = uVar10 - *(ushort *)(lVar13 + 0x17f0);
      if (uVar10 < *(uint *)(lVar13 + 0x17d0)) {
        local_68 = *(undefined8 *)(*(long *)(lVar13 + 0x17d8) + (long)(int)uVar10 * 8);
      }
      else {
        local_68 = 0;
      }
      local_70 = puVar2;
      uVar9 = (**(code **)*param_1)(param_1,&local_70);
      if ((uVar9 & 1) != 0) {
        uVar9 = 1;
        break;
      }
      uVar11 = uVar3;
      if (uVar3 <= *(ushort *)(lVar18 + 0x17f2)) {
        uVar11 = (uint)*(ushort *)(lVar18 + 0x17f2);
      }
      uVar10 = uVar3;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar3 + 1;
            goto LAB_02b7caf4;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x17f0);
          if (uVar4 < *(uint *)(lVar18 + 0x17d0)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar18 + 0x17d8) + (long)(int)uVar4 * 8) == 0);
LAB_02b7caf4:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
  }
  return uVar9 & 1;
}

