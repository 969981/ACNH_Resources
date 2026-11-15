
void FUN_0234cf54(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  undefined *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)(param_1 + 0x1498);
  if (lVar12 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xbde0);
    uVar6 = 0xffffffff;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_130 = 0;
        uStack_12c = 0;
        local_138 = *param_2;
        local_140 = PTR_DAT_04bc0510 + 0x10;
        uVar4 = FUN_0277d6c4(&local_138);
        if (*(long *)puVar3 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            __s = PTR_DAT_04bbfe90;
            puVar3 = PTR_DAT_04bbfe88;
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               ((puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
                puVar14 != (uint *)0x0 && (uVar4 = *puVar14, uVar4 != 0)))) {
              cVar10 = *PTR_DAT_04bbfe88;
              do {
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  *puVar3 = 1;
                  memset(__s,0xff,0x1ac);
                  uVar4 = *puVar14;
                }
                else {
                  uVar2 = *(uint *)(__s + 0x19c);
                  if (-1 < (int)uVar2) {
                    if (((char *)((ulong)uVar2 + (long)puVar14) != (char *)0x0) &&
                       (*(char *)((ulong)uVar2 + (long)puVar14) != '\0')) {
                      uVar6 = 0xffffffff;
                      if (*(char *)(lVar12 + 0x2f9) != '\0' || *(char *)(lVar12 + 0x2f8) != '\0') {
                        uVar6 = 1;
                      }
                      goto LAB_0234d1b4;
                    }
                    break;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar7 = (uint *)(ulong)uVar4;
                if ((puVar7 == (uint *)0x0) || (puVar14 == puVar7)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar7)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar14 + (lVar11 - (long)puVar7);
                if (lVar11 == 0) break;
                uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar7));
                *(undefined4 *)(__s + 0x19c) = 0xfffffffe;
                if (uVar8 == 0) break;
                piVar9 = (int *)(lVar11 + 4);
                while (piVar9[-1] != -0x4a988af7) {
                  piVar9 = piVar9 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) goto LAB_0234d1b0;
                }
                iVar1 = 0;
                if (*piVar9 != -1) {
                  iVar1 = *piVar9;
                }
                *(int *)(__s + 0x19c) = iVar1;
                uVar4 = *puVar14;
                if (uVar4 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
LAB_0234d1b0:
    uVar6 = 0xffffffff;
LAB_0234d1b4:
    uVar5 = *(undefined8 *)(param_1 + 0xbde0);
  }
  local_100 = 0x80;
  uStack_128 = 0;
  uStack_12c = 0x3f800000;
  local_130 = 0;
  local_138 = 0;
  local_140 = (undefined *)0xffffffff00000000;
  puStack_108 = local_fc;
  local_7d = 0;
  local_fc[0] = 0;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 0;
  local_74 = 0;
  local_124 = 0;
  local_11c = 0;
  local_78 = 7;
  FUN_017327f0(uVar5,param_2,param_3,&local_140,uVar6);
  return;
}

