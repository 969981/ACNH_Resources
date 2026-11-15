
void FUN_0234c8a4(long param_1,undefined2 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  char cVar16;
  long lVar17;
  undefined *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = *param_2;
  local_6e = *(undefined1 *)(param_2 + 1);
  local_6d = *(undefined1 *)((long)param_2 + 3);
  local_6c = *(undefined4 *)(param_2 + 2);
  if (*(char *)(param_1 + 0xc209) != '\0') {
    local_70 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_6e = PTR_DAT_04bb37e0[2];
    local_6d = PTR_DAT_04bb37e0[3];
    local_6c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  uVar9 = local_6c;
  uVar6 = local_6d;
  uVar5 = local_6e;
  uVar4 = local_70;
  lVar13 = *(long *)(param_1 + 0x1498);
  if (lVar13 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0xbdd0);
    uVar9 = 0xffffffff;
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_70);
    lVar15 = *(long *)puVar3;
    if (lVar15 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_148 = PTR_DAT_04bc0510 + 0x10;
        local_140 = CONCAT44(uVar9,CONCAT13(uVar6,CONCAT12(uVar5,uVar4)));
        local_138 = 0;
        uStack_134 = 0;
        uVar7 = FUN_0277d6c4(&local_140);
        if (*(long *)puVar3 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_70);
            __s = PTR_DAT_04bbfe90;
            puVar3 = PTR_DAT_04bbfe88;
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
               ((puVar14 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
                puVar14 != (uint *)0x0 && (uVar7 = *puVar14, uVar7 != 0)))) {
              cVar16 = *PTR_DAT_04bbfe88;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *puVar3 = 1;
                  memset(__s,0xff,0x1ac);
                  uVar7 = *puVar14;
                }
                else {
                  uVar2 = *(uint *)(__s + 0x19c);
                  if (-1 < (int)uVar2) {
                    if (((char *)((ulong)uVar2 + (long)puVar14) != (char *)0x0) &&
                       (*(char *)((ulong)uVar2 + (long)puVar14) != '\0')) {
                      uVar9 = 0xffffffff;
                      if (*(char *)(lVar13 + 0x2f9) != '\0' || *(char *)(lVar13 + 0x2f8) != '\0') {
                        uVar9 = 1;
                      }
                      goto LAB_0234cb50;
                    }
                    break;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar10 = (uint *)(ulong)uVar7;
                if ((puVar10 == (uint *)0x0) || (puVar14 == puVar10)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar10)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + (lVar15 - (long)puVar10);
                if (lVar15 == 0) break;
                uVar11 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar10));
                *(undefined4 *)(__s + 0x19c) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar12 = (int *)(lVar15 + 4);
                while (piVar12[-1] != -0x4a988af7) {
                  piVar12 = piVar12 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_0234cb4c;
                }
                iVar1 = 0;
                if (*piVar12 != -1) {
                  iVar1 = *piVar12;
                }
                *(int *)(__s + 0x19c) = iVar1;
                uVar7 = *puVar14;
                if (uVar7 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
LAB_0234cb4c:
    uVar9 = 0xffffffff;
LAB_0234cb50:
    uVar8 = *(undefined8 *)(param_1 + 0xbdd0);
  }
  uStack_130 = 0;
  uStack_134 = 0x3f800000;
  local_138 = 0;
  local_140 = 0;
  local_148 = (undefined *)0xffffffff00000000;
  puStack_110 = local_104;
  local_108 = 0x80;
  local_85 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2d88 + 0x10;
  local_78 = 0;
  local_7c = 0;
  local_12c = 0;
  local_124 = 0;
  local_80 = 7;
  FUN_017327f0(uVar8,&local_70,param_3,&local_148,uVar9);
  return;
}

