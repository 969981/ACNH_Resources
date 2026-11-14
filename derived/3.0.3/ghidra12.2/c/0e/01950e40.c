
undefined2 FUN_01950e40(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  undefined2 uVar11;
  code *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  uint *puVar20;
  uint local_178;
  uint local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_16c = 0;
  if ((*(long *)PTR_DAT_04bb30a0 != 0) &&
     (local_16c = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204), 1 < local_16c)) {
    local_16c = 0;
  }
  lVar10 = FUN_01950d30(param_1,&local_16c);
  local_178 = 0;
  local_70 = 0;
  uVar18 = 0;
  plVar1 = (long *)(param_1 + 0x170);
  local_168 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  iVar5 = *(int *)(*(long *)PTR_DAT_04bb4918 + 0x218);
  iVar6 = *(int *)(*(long *)PTR_DAT_04bb4918 + 0x21c);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  do {
    if ((int)*(uint *)(lVar10 + 0x1c0) < 1) {
      lVar14 = *(long *)(lVar10 + 0xb0);
      if (lVar14 == 0) break;
      uVar17 = 0;
      if (*(uint **)(lVar14 + 8) != (uint *)0x0) {
        uVar17 = (ulong)**(uint **)(lVar14 + 8);
      }
      if (uVar17 <= uVar18) break;
      if ((((lVar14 != 0) && (puVar20 = *(uint **)(lVar14 + 8), puVar20 != (uint *)0x0)) &&
          ((*(uint *)(lVar10 + 200) <= uVar18 ||
           (*(char *)(*(long *)(lVar10 + 0xd0) + uVar18) != '\0')))) &&
         (((uVar18 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * (uint)uVar18 + (uint)(ushort)puVar20[2] * 8 + iVar16
                                  ) + (long)puVar20);
        goto joined_r0x019511d0;
      }
    }
    else {
      if (*(uint *)(lVar10 + 0x1c0) <= uVar18) break;
      uVar17 = uVar18 & 0xffffffff;
      if (*(uint *)(lVar10 + 0x1b0) <= uVar18) {
        uVar17 = 0;
      }
      puVar20 = *(uint **)(*(long *)(lVar10 + 0x1b8) + uVar17 * 8);
joined_r0x019511d0:
      if (puVar20 != (uint *)0x0) {
        uVar9 = *puVar20;
        if (uVar9 != 0) {
          cVar19 = DAT_052cba40;
          do {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              DAT_052cba40 = '\x01';
              memset(&DAT_052cba44,0xff,300);
              uVar9 = *puVar20;
            }
            else if (DAT_052cba44 != 0xffffffff) break;
            if (((ulong)uVar9 == 0) || (lVar14 = (long)puVar20 - (ulong)uVar9, lVar14 == 0)) break;
            lVar2 = 0xc;
            if (*(char *)(lVar14 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar14 == 0) break;
            uVar17 = (ulong)*(ushort *)(lVar14 + 8);
            DAT_052cba44 = 0xfffffffe;
            if (uVar17 == 0) break;
            puVar13 = (uint *)(lVar2 + lVar14 + 4);
            while (puVar13[-1] != 0x20cb67bc) {
              puVar13 = puVar13 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01951030;
            }
            DAT_052cba44 = 0;
            if (*puVar13 != 0xffffffff) {
              DAT_052cba44 = *puVar13;
            }
            uVar9 = *puVar20;
            if (uVar9 == 0) break;
          } while( true );
        }
LAB_01951030:
        uVar9 = iVar6 + iVar5 * 6;
        plVar3 = plVar1 + (ulong)uVar9 * 2;
        if (0x47 < uVar9) {
          plVar3 = plVar1;
        }
        pcVar12 = (code *)*plVar3;
        if ((plVar3[1] & 1U) != 0) {
          pcVar12 = *(code **)(pcVar12 + *(long *)((long)puVar20 + (plVar3[1] >> 1)));
        }
        uVar8 = (*pcVar12)();
        uVar7 = DAT_0534dea8;
        if (uVar8 != 0) {
          if (*puVar20 != 0) {
            cVar19 = DAT_052cba40;
            do {
              if (cVar19 == '\0') {
                cVar19 = '\x01';
                DAT_052cba40 = '\x01';
                memset(&DAT_052cba44,0xff,300);
              }
              else {
                if (-1 < (int)DAT_052cbb68) {
                  if ((undefined2 *)((ulong)DAT_052cbb68 + (long)puVar20) != (undefined2 *)0x0) {
                    uVar11 = *(undefined2 *)((ulong)DAT_052cbb68 + (long)puVar20);
                    goto LAB_019511f4;
                  }
                  break;
                }
                if (DAT_052cbb68 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar20;
              uVar11 = 0;
              if ((*puVar20 == 0) || (puVar20 == puVar13)) goto LAB_019511f4;
              lVar14 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar20 + (lVar14 - (long)puVar13);
              if (lVar14 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
              DAT_052cbb68 = 0xfffffffe;
              if (uVar17 == 0) break;
              puVar13 = (uint *)(lVar14 + 4);
              while (puVar13[-1] != 0x54706054) {
                puVar13 = puVar13 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_019511f0;
              }
              DAT_052cbb68 = 0;
              if (*puVar13 != 0xffffffff) {
                DAT_052cbb68 = *puVar13;
              }
              if (*puVar20 == 0) break;
            } while( true );
          }
LAB_019511f0:
          uVar11 = 0;
LAB_019511f4:
          uVar17 = FUN_01c50890(uVar7,uVar11);
          if ((uVar17 & 1) != 0) {
            if (uVar18 < 0x800) {
              uVar17 = uVar18 >> 3 & 0x1ffffffffffffffc;
              *(uint *)((long)&local_168 + uVar17) =
                   *(uint *)((long)&local_168 + uVar17) | 1 << (ulong)((uint)uVar18 & 0x1f);
            }
            local_178 = local_178 + uVar8;
          }
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while( true );
  if (local_178 == 0) {
    return 0xfffe;
  }
  puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar18 = 0;
  uVar4 = puVar20[3];
  uVar9 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
  puVar20[2] = uVar4;
  puVar20[3] = uVar9;
  uVar17 = (ulong)uVar9 * (ulong)local_178 >> 0x20;
  do {
    uVar9 = *(uint *)(lVar10 + 0x1c0);
    uVar15 = (ulong)uVar9;
    if ((int)uVar9 < 1) {
      uVar15 = 0;
      if (*(long *)(lVar10 + 0xb0) != 0) {
        puVar20 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8);
        uVar15 = 0;
        if (puVar20 != (uint *)0x0) {
          uVar15 = (ulong)*puVar20;
        }
      }
    }
    if (uVar15 <= uVar18) {
      return 0xfffe;
    }
    if ((*(uint *)((long)&local_168 + (uVar18 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar18 & 0x1f)
        & 1) != 0) {
      if ((int)uVar9 < 1) {
        if (((*(long *)(lVar10 + 0xb0) == 0) ||
            (puVar20 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8), puVar20 == (uint *)0x0)) ||
           (((uVar18 < *(uint *)(lVar10 + 200) &&
             (*(char *)(*(long *)(lVar10 + 0xd0) + uVar18) == '\0')) ||
            (((*puVar20 <= uVar18 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))))
        goto LAB_01951290;
        iVar16 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * (uint)uVar18 + (uint)(ushort)puVar20[2] * 8 + iVar16
                                  ) + (long)puVar20);
LAB_019512fc:
        if (puVar20 == (uint *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = iVar6 + iVar5 * 6;
          plVar3 = plVar1 + (ulong)uVar9 * 2;
          if (0x47 < uVar9) {
            plVar3 = plVar1;
          }
          pcVar12 = (code *)*plVar3;
          if ((plVar3[1] & 1U) != 0) {
            pcVar12 = *(code **)(pcVar12 + *(long *)((long)puVar20 + (plVar3[1] >> 1)));
          }
          uVar9 = (*pcVar12)();
        }
      }
      else {
        if (uVar18 < uVar9) {
          uVar15 = uVar18;
          if (*(uint *)(lVar10 + 0x1b0) <= uVar18) {
            uVar15 = 0;
          }
          puVar20 = *(uint **)(*(long *)(lVar10 + 0x1b8) + uVar15 * 8);
          goto LAB_019512fc;
        }
LAB_01951290:
        puVar20 = (uint *)0x0;
        uVar9 = 0;
      }
      iVar16 = (int)uVar17;
      uVar17 = (ulong)(iVar16 - (uVar9 & 0xffff));
      if (iVar16 < (int)(uVar9 & 0xffff)) {
        uVar9 = *puVar20;
        if (uVar9 == 0) {
          return 0;
        }
        cVar19 = DAT_052cba40;
        while( true ) {
          if (cVar19 == '\0') {
            cVar19 = '\x01';
            DAT_052cba40 = '\x01';
            memset(&DAT_052cba44,0xff,300);
            uVar9 = *puVar20;
          }
          else {
            if (-1 < (int)DAT_052cba44) {
              if ((undefined2 *)((ulong)DAT_052cba44 + (long)puVar20) == (undefined2 *)0x0) {
                return 0;
              }
              return *(undefined2 *)((ulong)DAT_052cba44 + (long)puVar20);
            }
            if (DAT_052cba44 != 0xffffffff) {
              return 0;
            }
          }
          puVar13 = (uint *)(ulong)uVar9;
          if (puVar13 == (uint *)0x0) {
            return 0;
          }
          if (puVar20 == puVar13) break;
          lVar10 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar20 + (lVar10 - (long)puVar13);
          if (lVar10 == 0) {
            return 0;
          }
          uVar18 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
          if (uVar18 == 0) {
            DAT_052cba44 = 0xfffffffe;
            return 0;
          }
          puVar13 = (uint *)(lVar10 + 4);
          while (puVar13[-1] != 0x20cb67bc) {
            puVar13 = puVar13 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) {
              DAT_052cba44 = 0xfffffffe;
              return 0;
            }
          }
          DAT_052cba44 = 0;
          if (*puVar13 != 0xffffffff) {
            DAT_052cba44 = *puVar13;
          }
          uVar9 = *puVar20;
          if (uVar9 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
    uVar18 = uVar18 + 1;
  } while( true );
}

