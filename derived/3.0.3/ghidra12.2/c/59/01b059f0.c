
void FUN_01b059f0(undefined2 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined *__s;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  char cVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  uint local_7c;
  uint *local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  uint local_68;
  uint local_64;
  
  __s = PTR_DAT_04bbfe90;
  puVar9 = PTR_DAT_04bbfe88;
  puVar16 = *(uint **)(param_2 + 0x10);
  uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar5 = PTR_DAT_04bb37e0[2];
  uVar6 = PTR_DAT_04bb37e0[3];
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if ((puVar16 == (uint *)0x0) || (*puVar16 == 0)) {
LAB_01b05cf0:
    *param_1 = uVar7;
    *(undefined1 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((long)param_1 + 3) = uVar6;
    *(undefined4 *)(param_1 + 2) = uVar3;
    return;
  }
  cVar15 = *PTR_DAT_04bbfe88;
  do {
    if (cVar15 == '\0') {
      *puVar9 = 1;
      memset(__s,0xff,0x1ac);
      cVar15 = '\x01';
      uVar4 = *puVar16;
    }
    else {
      uVar4 = *(uint *)(__s + 0x10c);
      if (-1 < (int)uVar4) {
        if (((ushort *)((ulong)uVar4 + (long)puVar16) != (ushort *)0x0) &&
           (uVar8 = *(ushort *)((ulong)uVar4 + (long)puVar16), uVar8 < 0x800)) {
          uVar4 = 1 << (ulong)(uVar8 & 7);
          if ((uVar4 & *(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar8 >> 3) + 0xe99e0)) != 0) {
            local_88 = (undefined **)0x16a2;
            FUN_0277d4ac(&local_88);
            puVar9 = PTR_DAT_04bb43c0;
            uVar7 = (undefined2)local_88;
            uVar5 = local_88._2_1_;
            uVar6 = local_88._3_1_;
            local_6c = (undefined2)local_88;
            uVar18 = local_88._4_4_;
            local_6a = local_88._2_1_;
            local_69 = local_88._3_1_;
            local_68 = local_88._4_4_;
            local_88 = &PTR_FUN_04a36b50;
            local_80 = uVar7;
            local_7e = uVar5;
            local_7d = uVar6;
            lVar17 = *(long *)PTR_DAT_04bb43c0;
            local_7c = uVar18;
            local_78 = (uint *)0x0;
            uVar10 = FUN_0277d6c4();
            lVar1 = DAT_0532a768;
            if (*(long *)puVar9 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                uVar10 = FUN_0277d6c4(&local_6c);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar1 + 0x1d8)) &&
                   (puVar16 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar16 != (uint *)0x0)) {
                  local_64 = 0;
                  uVar10 = *puVar16;
                  local_78 = puVar16;
                  if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
                    puVar12 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
                    local_64 = 0;
                    if (*puVar12 != 0) {
                      uVar10 = puVar12[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar1 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar16 - lVar1) / (ulong)uVar10);
                          }
                          if (*puVar12 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_64 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar2 * 2), local_64 < 0xbd))
                          goto LAB_01b05d24;
                        }
                      }
                      local_64 = 0;
                    }
                  }
                  goto LAB_01b05d24;
                }
              }
            }
            local_64 = 0xbc;
LAB_01b05d24:
            if (((local_64 == 0xb1) && (iVar11 = FUN_0277d6c4(&local_80), iVar11 == 0x16a2)) &&
               ((uVar4 & *(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar8 >> 3) + 0xe99e0)) != 0)
               ) {
              uVar18 = uVar18 & 0xffff0000 | (uint)uVar8;
            }
            *param_1 = uVar7;
            *(undefined1 *)(param_1 + 1) = uVar5;
            *(undefined1 *)((long)param_1 + 3) = uVar6;
            *(uint *)(param_1 + 2) = uVar18;
            return;
          }
        }
        goto LAB_01b05cf0;
      }
      if (uVar4 != 0xffffffff) goto LAB_01b05cf0;
      uVar4 = *puVar16;
    }
    if ((uVar4 == 0) || (puVar12 = (uint *)(ulong)uVar4, puVar16 == puVar12)) goto LAB_01b05cf0;
    lVar1 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar16 + (lVar1 - (long)puVar12);
    if (lVar1 == 0) goto LAB_01b05cf0;
    uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
    *(undefined4 *)(__s + 0x10c) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_01b05cf0;
    piVar14 = (int *)(lVar1 + 4);
    while (piVar14[-1] != -0x430a2e86) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_01b05cf0;
    }
    iVar11 = 0;
    if (*piVar14 != -1) {
      iVar11 = *piVar14;
    }
    *(int *)(__s + 0x10c) = iVar11;
    if (*puVar16 == 0) goto LAB_01b05cf0;
  } while( true );
}

