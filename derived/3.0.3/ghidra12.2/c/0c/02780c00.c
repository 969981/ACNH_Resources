
void FUN_02780c00(undefined4 *param_1,long param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  uint *puVar19;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_3);
  lVar18 = *(long *)puVar3;
  if (lVar18 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_70 = *param_3;
      uStack_6c = param_3[1];
      local_78 = PTR_DAT_04bc0510 + 0x10;
      puVar17 = &local_70;
      uVar6 = FUN_0277d6c4(puVar17);
      if (*(long *)puVar3 == 0) {
LAB_02780d54:
        puVar19 = (uint *)0x0;
      }
      else {
        lVar16 = *(long *)(lVar18 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02780d54;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_3);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (*(uint *)(lVar16 + 0x1d8) <= uVar6) goto LAB_02780d54;
        puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar19 != (uint *)0x0) {
          local_68 = puVar19;
        }
      }
      bVar5 = FUN_01ad7260(&local_78);
      __s = PTR_DAT_04bbfe90;
      puVar3 = PTR_DAT_04bbfe88;
      if (((bVar5 == 0) || (puVar19 == (uint *)0x0)) || (uVar6 = *puVar19, uVar6 == 0)) {
LAB_02780f8c:
        puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
      }
      else {
        cVar15 = *PTR_DAT_04bbfe88;
LAB_02780da0:
        if (cVar15 == '\0') {
          *puVar3 = 1;
          memset(__s,0xff,0x1ac);
          uVar6 = *puVar19;
          cVar15 = '\x01';
joined_r0x02780df8:
          if (((ulong)uVar6 != 0) && (lVar16 = (long)puVar19 - (ulong)uVar6, lVar16 != 0)) {
            lVar18 = 0xc;
            if (*(char *)(lVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            if (lVar18 + lVar16 != 0) {
              uVar10 = (ulong)*(ushort *)(lVar16 + 8);
              *(undefined4 *)(__s + 0x120) = 0xfffffffe;
              if (uVar10 != 0) goto code_r0x02780e20;
            }
          }
          goto LAB_02780f8c;
        }
        uVar1 = *(uint *)(__s + 0x120);
        if ((int)uVar1 < 0) {
          if (uVar1 == 0xffffffff) goto joined_r0x02780df8;
          goto LAB_02780f8c;
        }
        if (((short *)((ulong)uVar1 + (long)puVar19) == (short *)0x0) ||
           (iVar7 = (int)*(short *)((ulong)uVar1 + (long)puVar19), iVar7 == -1)) goto LAB_02780f8c;
        uVar1 = iVar7 * 8;
        bVar11 = 0;
        uVar13 = (uint)bVar5;
        uVar6 = uVar1;
        do {
          if (uVar6 >> 7 < 0x7d) {
            bVar4 = (*(uint *)(param_2 + (ulong)(uVar6 >> 5) * 4) & 1 << (ulong)(uVar6 & 0x1f)) == 0
            ;
          }
          else {
            bVar4 = true;
          }
          bVar11 = bVar4 + bVar11;
          uVar13 = uVar13 - 1;
          uVar6 = uVar6 + 1;
        } while (uVar13 != 0);
        if (bVar11 == 0) goto LAB_02780f8c;
        uVar2 = (param_4 & 0xff) * 0x6c078965 + 1;
        uVar13 = uVar2 ^ uVar2 * 0x800;
        uVar6 = 0;
        iVar7 = 0;
        uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
        uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
        uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
        while( true ) {
          uVar14 = uVar1 + uVar6;
          if (uVar14 >> 7 < 0x7d) {
            uVar14 = (uint)((*(uint *)(param_2 + (ulong)(uVar14 >> 5) * 4) &
                            1 << (ulong)(uVar14 & 0x1f)) == 0);
          }
          else {
            uVar14 = 1;
          }
          iVar7 = uVar14 + iVar7;
          if ((int)((ulong)bVar11 * (ulong)(uVar13 >> 8 ^ uVar2 >> 0x13 ^ uVar13 ^ uVar2) >> 0x20) +
              1 == iVar7) break;
          uVar6 = uVar6 + 1;
          if (bVar5 == uVar6) {
            puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
            goto LAB_02780f94;
          }
        }
        iVar7 = FUN_01ad7260(&local_78);
        if ((iVar7 != 0) &&
           (((uVar6 == 0 || (iVar7 = FUN_01ad7260(&local_78), (int)uVar6 < iVar7)) &&
            (puVar8 = (ushort *)FUN_01afd600(&local_78), puVar8 != (ushort *)0x0)))) {
          *puVar8 = *puVar8 & 0xfff8 | (ushort)uVar6 & 7;
        }
      }
LAB_02780f94:
      *param_1 = *puVar17;
      uVar9 = puVar17[1];
      goto LAB_02780d30;
    }
  }
  uVar9 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
LAB_02780d30:
  param_1[1] = uVar9;
  return;
code_r0x02780e20:
  piVar12 = (int *)(lVar18 + lVar16 + 4);
  while (piVar12[-1] != -0x34a14cc1) {
    piVar12 = piVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_02780f8c;
  }
  iVar7 = 0;
  if (*piVar12 != -1) {
    iVar7 = *piVar12;
  }
  *(int *)(__s + 0x120) = iVar7;
  uVar6 = *puVar19;
  if (uVar6 == 0) goto LAB_02780f8c;
  goto LAB_02780da0;
}

