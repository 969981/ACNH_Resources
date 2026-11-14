
void FUN_01b05630(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *__s;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  char cVar14;
  long lVar15;
  uint *puVar16;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  __s = PTR_DAT_04bbfe90;
  puVar7 = PTR_DAT_04bbfe88;
  puVar16 = *(uint **)(param_2 + 0x10);
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if ((puVar16 == (uint *)0x0) || (*puVar16 == 0)) {
LAB_01b05898:
    *(undefined2 *)param_1 = uVar5;
    *(undefined1 *)((long)param_1 + 2) = uVar3;
    *(undefined1 *)((long)param_1 + 3) = uVar4;
    param_1[1] = uVar2;
    return;
  }
  cVar14 = *PTR_DAT_04bbfe88;
  do {
    if (cVar14 == '\0') {
      *puVar7 = 1;
      memset(__s,0xff,0x1ac);
      cVar14 = '\x01';
      uVar9 = *puVar16;
    }
    else {
      uVar9 = *(uint *)(__s + 0x10c);
      if (-1 < (int)uVar9) {
        if ((((ushort *)((ulong)uVar9 + (long)puVar16) != (ushort *)0x0) &&
            (uVar6 = *(ushort *)((ulong)uVar9 + (long)puVar16), uVar6 < 0x800)) &&
           ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar6 >> 3) + 0xe98e0) >>
             (ulong)(uVar6 & 7) & 1) != 0)) {
          local_80 = (undefined **)0x16a2;
          FUN_0277d4ac(&local_80);
          uVar8 = local_80;
          puVar7 = PTR_DAT_04bb43c0;
          local_68 = (undefined2)local_80;
          local_74 = local_80._4_4_;
          local_66 = local_80._2_1_;
          local_65 = local_80._3_1_;
          local_64 = local_80._4_4_;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = (undefined4)uVar8;
          lVar15 = *(long *)PTR_DAT_04bb43c0;
          local_70 = 0;
          uVar9 = FUN_0277d6c4(&local_78);
          lVar12 = DAT_0532a768;
          if (*(long *)puVar7 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              uVar9 = FUN_0277d6c4(&local_68);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
                 (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8), lVar12 != 0)
                 ) {
                local_70 = lVar12;
              }
            }
          }
          FUN_01b058c8(&local_80,(uint)uVar6);
          *param_1 = local_78;
          param_1[1] = local_74;
          return;
        }
        goto LAB_01b05898;
      }
      if (uVar9 != 0xffffffff) goto LAB_01b05898;
      uVar9 = *puVar16;
    }
    if ((uVar9 == 0) || (puVar10 = (uint *)(ulong)uVar9, puVar16 == puVar10)) goto LAB_01b05898;
    lVar12 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar16 + (lVar12 - (long)puVar10);
    if (lVar12 == 0) goto LAB_01b05898;
    uVar11 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
    *(undefined4 *)(__s + 0x10c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01b05898;
    piVar13 = (int *)(lVar12 + 4);
    while (piVar13[-1] != -0x430a2e86) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01b05898;
    }
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(__s + 0x10c) = iVar1;
    if (*puVar16 == 0) goto LAB_01b05898;
  } while( true );
}

