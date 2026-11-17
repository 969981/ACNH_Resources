
/* WARNING: Removing unreachable block (ram,0x02aee630) */

void FUN_02aee3a0(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  undefined **local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04bc4648;
  puVar4 = PTR_DAT_04bb5008;
  lVar16 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar16 + 0xdf0);
  uVar1 = *(short *)(lVar16 + 0xdf2) + 1;
  if (*(ushort *)(lVar16 + 0xdf0) != uVar1) {
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar16 + 0xdf0);
      if (((uVar8 < *(uint *)(lVar16 + 0xdd0)) &&
          (puVar10 = *(uint **)(*(long *)(lVar16 + 0xdd8) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) ||
         (puVar10 = (uint *)PTR_DAT_04bc4818, (*PTR_DAT_04bc4820 & 1) != 0)) {
        if (*puVar10 != 0) goto LAB_02aee480;
LAB_02aee594:
        uVar8 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4820);
        if (iVar7 != 0) {
          *(undefined4 *)PTR_DAT_04bc4818 = 0;
          __cxa_guard_release(PTR_DAT_04bc4820);
        }
        puVar10 = (uint *)PTR_DAT_04bc4818;
        if (*(int *)PTR_DAT_04bc4818 == 0) goto LAB_02aee594;
LAB_02aee480:
        cVar12 = *PTR_DAT_04bc4640;
        do {
          puVar5 = PTR_DAT_04bc4640;
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar6 + 0x14);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar10) == (ushort *)0x0) goto LAB_02aee594;
              uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar10);
              goto LAB_02aee598;
            }
            if (uVar8 != 0xffffffff) goto LAB_02aee594;
          }
          puVar14 = (uint *)(ulong)*puVar10;
          uVar8 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_02aee598;
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + (lVar11 - (long)puVar14);
          if (lVar11 == 0) goto LAB_02aee594;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
          uVar8 = 0;
          if (uVar13 == 0) goto LAB_02aee598;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              uVar8 = 0;
              goto LAB_02aee598;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar6 + 0x14) = iVar7;
        } while (*puVar10 != 0);
        uVar8 = 0;
      }
LAB_02aee598:
      lVar11 = *(long *)puVar4;
      local_70 = &PTR_LAB_04aa0788;
      uVar8 = uVar8 - *(ushort *)(lVar11 + 0xdf0);
      if (uVar8 < *(uint *)(lVar11 + 0xdd0)) {
        local_68 = *(undefined8 *)(*(long *)(lVar11 + 0xdd8) + (long)(int)uVar8 * 8);
      }
      else {
        local_68 = 0;
      }
      (**(code **)*param_1)(param_1,&local_70);
      uVar9 = uVar2;
      if (uVar2 <= *(ushort *)(lVar16 + 0xdf2)) {
        uVar9 = (uint)*(ushort *)(lVar16 + 0xdf2);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_02aee434;
          }
          uVar3 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xdf0);
          if (uVar3 < *(uint *)(lVar16 + 0xdd0)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0xdd8) + (long)(int)uVar3 * 8) == 0);
LAB_02aee434:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

