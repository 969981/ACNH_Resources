
uint FUN_03680df8(undefined1 *param_1,float *param_2,short *param_3,byte param_4,byte param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  int local_54;
  
  *param_1 = 0xff;
  *param_2 = 0.0;
  puVar3 = PTR_DAT_04bb43c0;
  if (*param_3 == -2) {
    return 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_3);
  lVar11 = DAT_05150358;
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
LAB_03680f30:
    if (((DAT_05150358 != 0) &&
        (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
         (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
       (((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(param_3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(&local_70,param_3);
        uVar9 = FUN_0277e158(param_3);
        if ((uVar9 & 1) == 0) {
          if ((param_4 & 1) == 0) {
LAB_03681510:
            uVar6 = 0;
          }
          else {
            uVar9 = FUN_0123d890(local_60,4);
            if (((uVar9 & 1) == 0) || (uVar9 = FUN_0123d890(local_60,0), (uVar9 & 1) != 0)) {
              iVar8 = FUN_0123db50(&local_68,local_60);
              if (iVar8 - 0x23U < 9) {
                uVar7 = FUN_0124dff0(&local_70);
                uVar6 = 0x400 << (ulong)(uVar7 & 0x1f);
                if ((uVar7 & 0xfc) != 0) {
                  uVar6 = 0x800;
                }
              }
              else {
                iVar8 = FUN_0123db50(&local_68,local_60);
                if (iVar8 - 0x12U < 6) {
                  iVar8 = FUN_0124dff0(&local_70);
                  uVar6 = 0x8000 << (ulong)(iVar8 - 1U & 0x1f);
                  if (2 < (iVar8 - 1U & 0xff)) {
                    uVar6 = 0x4000;
                  }
                }
                else {
                  iVar8 = FUN_0123db50(&local_68,local_60);
                  if (iVar8 == 0x2d) {
                    uVar6 = 0x10;
                  }
                  else {
                    iVar8 = FUN_0123db50(&local_68,local_60);
                    if (iVar8 - 0x18U < 7) {
                      uVar6 = 0x40000;
                    }
                    else {
                      iVar8 = FUN_0123db50(&local_68,local_60);
                      if (6 < iVar8 - 0xbU) goto LAB_03681510;
                      bVar5 = FUN_0124dff0(&local_70);
                      uVar6 = (uint)(1 < bVar5) << 9;
                    }
                  }
                }
              }
            }
            else {
              uVar9 = FUN_0124e0f8(&local_70);
              uVar6 = 0x180;
              if ((uVar9 & 1) == 0) {
                uVar6 = 0x80;
              }
            }
          }
          if ((((param_5 & 1) != 0) && (uVar9 = FUN_0123d890(local_60,1), (uVar9 & 1) != 0)) &&
             (iVar8 = FUN_0123db50(&local_68,local_60), iVar8 != 0x2e)) {
            if (iVar8 != 0x2c) {
              uVar6 = uVar6 | 0x100000;
            }
          }
          bVar5 = 0;
        }
        else {
          uVar6 = 0;
          bVar5 = param_4;
        }
        goto LAB_036814a0;
      }
    }
    uVar7 = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_03680f30;
    local_60 = (uint *)0x0;
    local_68 = *(undefined4 *)param_3;
    uStack_64 = *(undefined4 *)(param_3 + 2);
    local_70 = &PTR_FUN_04a36b50;
    uVar6 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar3 == 0) {
LAB_03680fc4:
      if (local_60 != (uint *)0x0) goto LAB_03680fcc;
      uVar13 = 0xbc;
    }
    else {
      lVar11 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_03680fc4;
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
         (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar12 == (uint *)0x0)) goto LAB_03680fc4;
      local_60 = puVar12;
LAB_03680fcc:
      uVar6 = *local_60;
      uVar13 = 0;
      if ((uVar6 != 0) && (local_60 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)local_60 - (long)(ulong)uVar6);
        if ((*puVar12 != 0) &&
           ((uVar6 = puVar12[1], uVar6 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar11 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), uVar13 < 0xbd))
            goto LAB_03681060;
          }
        }
        uVar13 = 0;
      }
    }
LAB_03681060:
    uVar9 = FUN_01ae59b0(&local_70);
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if ((param_4 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar9 = FUN_01ae62b0(&local_70);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_01ae6580(&local_70);
          if ((((uVar9 & 1) == 0) || (uVar9 = FUN_01ad65f4(&local_70), (uVar9 & 1) != 0)) ||
             (uVar9 = FUN_01ad6698(&local_70), (uVar9 & 1) != 0)) {
            if (((local_60 == (uint *)0x0) || (uVar6 = *local_60, uVar6 == 0)) ||
               (local_60 == (uint *)(ulong)uVar6)) {
LAB_03681160:
              uVar9 = FUN_01ad6698(&local_70);
              if ((uVar9 & 1) == 0) {
                uVar6 = 0;
                goto LAB_03681184;
              }
            }
            else {
              puVar12 = (uint *)((long)local_60 - (long)(ulong)uVar6);
              if (((*puVar12 == 0) || (uVar6 = puVar12[1], uVar6 == 0)) ||
                 ((ulong)(ushort)puVar12[2] == 0)) goto LAB_03681160;
              lVar11 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar11 == 0) goto LAB_03681160;
              uVar7 = 0;
              if ((ulong)uVar6 != 0) {
                uVar7 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((DAT_05326ec0 <= uVar7) || (*(short *)(DAT_05326ec8 + (long)(int)uVar7 * 2) != 1))
              goto LAB_03681160;
            }
            uVar6 = 0x40;
          }
          else {
            local_54 = FUN_01aee3b4(&local_70);
            if (local_54 - 3U < 3) {
              uVar6 = 8;
            }
            else {
              *param_1 = 1;
              uVar6 = 2;
            }
          }
        }
        else {
          local_54 = FUN_01aee3b4(&local_70);
          if (local_54 - 3U < 3) {
            uVar6 = 4;
          }
          else {
            *param_1 = 0;
            uVar6 = 1;
          }
        }
LAB_03681184:
        uVar7 = uVar6;
        if (((local_60 != (uint *)0x0) && (uVar10 = *local_60, uVar10 != 0)) &&
           (local_60 != (uint *)(ulong)uVar10)) {
          puVar12 = (uint *)((long)local_60 - (long)(ulong)uVar10);
          if (((*puVar12 != 0) && (uVar10 = puVar12[1], uVar10 != 0)) &&
             ((ulong)(ushort)puVar12[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar10 != 0) {
                uVar1 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar10);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05327190) &&
                 (uVar2 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar10 = (uint)uVar2,
                 uVar2 < 0x13e)) {
                if (uVar10 - 0x11e < 2) {
LAB_0368122c:
                  bVar4 = uVar13 == 0;
                }
                else {
                  if (uVar10 != 0xc2) {
                    if (uVar10 != 0xbf) goto LAB_03681374;
                    goto LAB_0368122c;
                  }
                  bVar4 = uVar13 == 1;
                }
                uVar7 = uVar6 | 0x20;
                if (!bVar4) {
                  uVar7 = uVar6;
                }
              }
            }
          }
        }
LAB_03681374:
        iVar8 = FUN_01aed730(&local_70);
        if (iVar8 < 20000) {
          if (1999 < iVar8) {
            fVar16 = 1.0;
            goto LAB_0368139c;
          }
        }
        else {
          fVar16 = 2.0;
LAB_0368139c:
          *param_2 = fVar16 + *param_2;
        }
        puVar12 = (uint *)((long)local_60 - (ulong)*local_60);
        if ((((*local_60 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
           ((uVar6 = puVar12[1], uVar6 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar11 != 0) {
            uVar10 = 0;
            if ((ulong)uVar6 != 0) {
              uVar10 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < DAT_05326e40) && (*(short *)(DAT_05326e48 + (long)(int)uVar10 * 2) == 1))
            {
              *param_2 = *param_2 + 0.5;
            }
          }
        }
      }
      uVar6 = uVar7;
      if ((param_5 & 1) != 0) {
        uVar9 = FUN_01ae6020(&local_70);
        uVar6 = uVar7 | 0x100000;
        if ((uVar9 & 1) == 0) {
          uVar6 = uVar7;
        }
      }
    }
    uVar9 = FUN_0277e158(param_3);
    bVar5 = 0;
    if (((uVar9 & 1) != 0) && ((param_4 & 1) != 0)) {
      iVar8 = FUN_0277d6c4(param_3);
      if ((iVar8 == 0x9c6) ||
         (((iVar8 = FUN_0277d6c4(param_3), iVar8 == 0x9c4 || (uVar13 == 0x6c)) || (uVar13 == 0x68)))
         ) {
        bVar5 = 0;
      }
      else {
        bVar5 = uVar13 != 0x58;
      }
    }
LAB_036814a0:
    uVar7 = uVar6 | 0x80000;
    if ((bVar5 & param_5 & 1) == 0) {
      uVar7 = uVar6;
    }
  }
  return uVar7;
}

