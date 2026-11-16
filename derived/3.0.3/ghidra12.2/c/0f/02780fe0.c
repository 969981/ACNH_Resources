
void FUN_02780fe0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *__s;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 *puVar12;
  char cVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar16 = *(long *)puVar3;
  if (lVar16 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_68 = (uint *)0x0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 == 0) {
LAB_02781128:
        puVar18 = (uint *)0x0;
      }
      else {
        lVar14 = *(long *)(lVar16 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02781128;
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_02781128;
        puVar18 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
        if (puVar18 != (uint *)0x0) {
          local_68 = puVar18;
        }
      }
      bVar4 = FUN_01ad7260(&local_78);
      __s = PTR_DAT_04bbfe90;
      puVar3 = PTR_DAT_04bbfe88;
      if (((bVar4 != 0) && (puVar18 != (uint *)0x0)) && (uVar5 = *puVar18, uVar5 != 0)) {
        puVar12 = (undefined1 *)((long)&local_70 + 3);
        puVar15 = (undefined1 *)((long)&local_70 + 2);
        puVar17 = &uStack_6c;
        cVar13 = *PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            *puVar3 = 1;
            memset(__s,0xff,0x1ac);
            uVar5 = *puVar18;
            cVar13 = '\x01';
          }
          else {
            uVar1 = *(uint *)(__s + 0x120);
            if (-1 < (int)uVar1) {
              if (((short *)((ulong)uVar1 + (long)puVar18) != (short *)0x0) &&
                 (*(short *)((ulong)uVar1 + (long)puVar18) != -1)) {
                iVar6 = FUN_01ad7260(&local_78);
                if (iVar6 != 0) {
                  uVar1 = (param_3 & 0xff) * 0x6c078965 + 1;
                  uVar5 = uVar1 ^ uVar1 * 0x800;
                  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
                  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
                  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
                  lVar14 = (ulong)bVar4 * (ulong)(uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1);
                  iVar6 = (int)((ulong)lVar14 >> 0x20);
                  if (((iVar6 == 0) || (iVar7 = FUN_01ad7260(&local_78), iVar6 < iVar7)) &&
                     (puVar8 = (ushort *)FUN_01afd600(&local_78), puVar8 != (ushort *)0x0)) {
                    *puVar8 = *puVar8 & 0xfff8 | (ushort)((ulong)lVar14 >> 0x20) & 7;
                  }
                }
                goto LAB_02781310;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
          }
          if (((ulong)uVar5 == 0) || (lVar14 = (long)puVar18 - (ulong)uVar5, lVar14 == 0)) break;
          lVar16 = 0xc;
          if (*(char *)(lVar14 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          if (lVar16 + lVar14 == 0) break;
          uVar10 = (ulong)*(ushort *)(lVar14 + 8);
          *(undefined4 *)(__s + 0x120) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar16 + lVar14 + 4);
          while (piVar11[-1] != -0x34a14cc1) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_027812fc;
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(__s + 0x120) = iVar6;
          uVar5 = *puVar18;
          if (uVar5 == 0) break;
        } while( true );
      }
LAB_027812fc:
      puVar17 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
      puVar12 = PTR_DAT_04bb37e0 + 3;
      puVar15 = PTR_DAT_04bb37e0 + 2;
      local_70._0_2_ = *(undefined2 *)PTR_DAT_04bb37e0;
LAB_02781310:
      *(undefined2 *)param_1 = (undefined2)local_70;
      uVar2 = *puVar12;
      *(undefined1 *)((long)param_1 + 2) = *puVar15;
      uVar9 = *puVar17;
      *(undefined1 *)((long)param_1 + 3) = uVar2;
      goto LAB_02781104;
    }
  }
  uVar9 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
LAB_02781104:
  param_1[1] = uVar9;
  return;
}

