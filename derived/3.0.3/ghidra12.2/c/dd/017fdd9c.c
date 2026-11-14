
/* WARNING: Removing unreachable block (ram,0x017fe530) */

void FUN_017fdd9c(long param_1)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  short sVar16;
  undefined *local_68;
  char *local_60;
  undefined1 local_58;
  byte local_57;
  int local_38;
  uint local_34;
  
  puVar6 = PTR_DAT_04bc39f8;
  puVar5 = PTR_DAT_04bb46b0;
  if (*(char *)(param_1 + 0x144) == '\0' || *(char *)(param_1 + 0x1c0) == '\0') {
    return;
  }
  sVar16 = *(short *)(param_1 + 0x1ce);
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar11 = (ulong)(short)uVar4;
  if (uVar11 == 0xffffffffffffffff) {
LAB_017fe044:
    uVar11 = FUN_0180b3e0();
    if (((uVar11 & 1) == 0) && (uVar11 = FUN_0180b340(), (uVar11 & 1) == 0)) {
      uVar11 = FUN_0180b660();
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_0180b700();
        if (((uVar11 & 1) != 0) && (lVar12 = FUN_02643020(), lVar12 != 0)) {
          uVar7 = FUN_0180da90();
          local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar7);
          lVar14 = lVar12 + 0xe0 + (ulong)uVar7 * 0x2488;
          if (5 < uVar7) {
            lVar14 = lVar12 + 0xe0;
          }
LAB_017fe3a8:
          local_60 = (char *)(lVar14 + 0x2220);
          local_58 = 1;
          if (*(long **)(lVar14 + 0x2248) == (long *)0x0) {
            local_57 = 0;
          }
          else {
            puVar13 = (undefined8 *)**(long **)(lVar14 + 0x2248);
            local_57 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              local_57 = (**(code **)*puVar13)();
            }
          }
          local_57 = local_57 & 1;
          local_68 = PTR_DAT_04bbc500 + 0x10;
          lVar12 = *(long *)(lVar14 + 0x2230);
          lVar14 = *(long *)(lVar14 + 0x2228);
          goto LAB_017fe4b8;
        }
      }
      else {
        lVar14 = FUN_016c7c38();
        if (lVar14 != 0) {
          local_60 = (char *)(lVar14 + 0x380);
          local_58 = 1;
          if (*(long **)(lVar14 + 0x3a8) == (long *)0x0) {
            local_57 = 0;
          }
          else {
            puVar13 = (undefined8 *)**(long **)(lVar14 + 0x3a8);
            local_57 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              local_57 = (**(code **)*puVar13)();
            }
          }
          local_57 = local_57 & 1;
          local_68 = PTR_DAT_04bbc500 + 0x10;
          lVar12 = *(long *)(lVar14 + 0x390);
          lVar14 = *(long *)(lVar14 + 0x388);
LAB_017fe4b8:
          lVar12 = lVar12 + lVar14;
          uVar15 = (uint)*(ushort *)(lVar12 + 4);
          sVar16 = *(short *)(lVar12 + 6);
          *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar12 + 2);
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar12 + 8);
          *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar12 + 0xc) - 1;
          *(uint *)(param_1 + 0x208) = *(ushort *)(lVar12 + 0x10) - 1;
          *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar12 + 0xe) - 1;
          FUN_02640184(&local_68);
          goto LAB_017fe3dc;
        }
      }
LAB_017fe3d8:
      uVar15 = 0;
    }
    else {
LAB_017fe054:
      lVar12 = FUN_03776f00();
      if (lVar12 == 0) goto LAB_017fe3d8;
      if ((*(long **)(lVar12 + 0x3a8) == (long *)0x0) ||
         (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x3a8), puVar13 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar13)();
        uVar7 = uVar7 ^ 1;
      }
      lVar14 = *(long *)(lVar12 + 0x390) + *(long *)(lVar12 + 0x388);
      uVar4 = *(ushort *)(lVar14 + 4);
      uVar15 = (uint)uVar4;
      sVar16 = *(short *)(lVar14 + 6);
      *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar14 + 2);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar14 + 8);
      *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar14 + 0xc) - 1;
      *(uint *)(param_1 + 0x208) = *(ushort *)(lVar14 + 0x10) - 1;
      *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar14 + 0xe) - 1;
      if ((uVar7 & 1) == 0) {
        lVar12 = *(long *)(lVar12 + 0x3a8);
joined_r0x017fe718:
        uVar7 = (uint)uVar4;
        if (lVar12 != 0) goto LAB_017fe0dc;
      }
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
LAB_017fdea0:
      local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
        if (0xff < uVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x15 & 1) == 0) {
          local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
          if (0xff < uVar4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar1 >> 0x19 & 1) == 0) ||
             (local_68 = (undefined *)CONCAT44(local_68._4_4_,7), (*puVar1 >> 7 & 1) == 0))
          goto LAB_017fe044;
          goto LAB_017fe054;
        }
        uVar11 = FUN_01810f30();
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_026f480c();
        }
        if ((uVar11 & 1) == 0) {
          uVar7 = 0;
          if (DAT_05aed670 != 0) {
            if (*(long *)(DAT_05aed670 + 0x330) == 0) {
              uVar7 = 0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar8 = FUN_006bd550(*puVar13,0);
              uVar7 = 0;
              if ((iVar8 == 0x758f7eaf) && (uVar7 = 0, DAT_05aed670 != 0)) {
                uVar7 = 0;
                if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                  uVar7 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
                }
              }
            }
          }
          if (lVar12 != 0) {
            if (4 < (int)uVar7) {
              uVar7 = 5;
            }
            lVar14 = lVar12 + 0x118 + (ulong)uVar7 * 0x2488;
            if (5 < uVar7) {
              lVar14 = lVar12 + 0x118;
            }
            goto LAB_017fe3a8;
          }
        }
        else if (lVar12 != 0) {
          local_60 = (char *)(lVar12 + 0xfe68);
          local_58 = 1;
          if (*(long **)(lVar12 + 0xfe90) == (long *)0x0) {
            local_57 = 0;
          }
          else {
            puVar13 = (undefined8 *)**(long **)(lVar12 + 0xfe90);
            local_57 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              local_57 = (**(code **)*puVar13)();
            }
          }
          local_57 = local_57 & 1;
          local_68 = PTR_DAT_04bbc500 + 0x10;
          lVar14 = *(long *)(lVar12 + 0xfe70);
          lVar12 = *(long *)(lVar12 + 0xfe78);
          goto LAB_017fe4b8;
        }
      }
      else {
        local_38 = 0;
        if (DAT_05aed670 == 0) {
          puVar13 = &DAT_055c04a0;
        }
        else {
          puVar13 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar8 = FUN_006bd550(*puVar13,0);
            puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar13 = &DAT_055c04a0;
            }
          }
        }
        uVar11 = FUN_02b5f400(&local_38,*(undefined4 *)(puVar13 + 7));
        iVar8 = local_38;
        if ((uVar11 & 1) != 0) {
          local_34 = FUN_0180da90();
          local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar8);
          lVar12 = *(long *)PTR_DAT_04bb46b0;
          if (lVar12 != 0) {
            puVar13 = *(undefined8 **)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
              lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
              if (lVar12 != 0) {
                lVar12 = lVar12 + 0x70;
                goto LAB_017fe2c8;
              }
            }
            else if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
                    (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 != 0)) {
LAB_017fe2c8:
              if ((uint)local_68 < 8) {
                lVar14 = lVar12 + 0x119228 + ((ulong)local_68 & 0xffffffff) * 0xfa08;
                if (7 < (uint)local_68) {
                  lVar14 = lVar12 + 0x119228;
                }
                lVar12 = lVar14 + 0x1df8 + (ulong)local_34 * 0x2488;
                if (5 < local_34) {
                  lVar12 = lVar14 + 0x1df8;
                }
                if ((*(long **)(lVar12 + 0x2248) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x2248),
                   puVar13 == (undefined8 *)0x0)) {
                  uVar7 = 1;
                }
                else {
                  uVar7 = (**(code **)*puVar13)();
                  uVar7 = uVar7 ^ 1;
                }
                lVar14 = *(long *)(lVar12 + 0x2230) + *(long *)(lVar12 + 0x2228);
                uVar4 = *(ushort *)(lVar14 + 4);
                uVar15 = (uint)uVar4;
                sVar16 = *(short *)(lVar14 + 6);
                *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar14 + 2);
                *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar14 + 8);
                *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar14 + 0xc) - 1;
                *(uint *)(param_1 + 0x208) = *(ushort *)(lVar14 + 0x10) - 1;
                *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar14 + 0xe) - 1;
                if ((uVar7 & 1) == 0) {
                  lVar12 = *(long *)(lVar12 + 0x2248);
                  goto joined_r0x017fe718;
                }
                goto LAB_017fe3dc;
              }
            }
          }
        }
      }
      goto LAB_017fe3d8;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) == 0) goto LAB_017fdea0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x138));
    lVar12 = *(long *)PTR_DAT_04bb46b0;
    if (lVar12 == 0) goto LAB_017fe3d8;
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) != 0) {
      if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
         (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 != 0)) goto LAB_017fe1ec;
      goto LAB_017fe3d8;
    }
    lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar12 == 0) goto LAB_017fe3d8;
    lVar12 = lVar12 + 0x70;
LAB_017fe1ec:
    if (9 < (uint)local_68) goto LAB_017fe3d8;
    lVar14 = lVar12 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_68) {
      lVar14 = lVar12 + 0x1962d8;
    }
    if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)*puVar13)();
      uVar11 = uVar11 & 0xffffffff;
    }
    cVar3 = *(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x1c4);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "NpcInteriorCoordinate";
    local_38 = (int)cVar3;
    iVar8 = FUN_02743000(&local_68);
    lVar12 = DAT_053d2ea8;
    if (iVar8 == 0) {
      uVar9 = FUN_02663fa0(&local_38);
      if ((uVar9 & 1) != 0) {
        local_34 = 0;
        uVar9 = FUN_02b67a30(&local_34,(int)cVar3);
        if ((uVar9 & 1) != 0) {
          local_68 = (undefined *)CONCAT44(local_68._4_4_,local_34);
          lVar12 = *(long *)puVar5;
          if (lVar12 == 0) goto LAB_017fe798;
          puVar13 = *(undefined8 **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) != 0) {
            if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
               (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 != 0))
            goto LAB_017fe788;
            goto LAB_017fe798;
          }
          lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
          if (lVar12 == 0) goto LAB_017fe798;
          lVar12 = lVar12 + 0x70;
LAB_017fe788:
          if (9 < (uint)local_68) goto LAB_017fe798;
          lVar10 = lVar12 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_68) {
            lVar10 = lVar12 + 0x1962d8;
          }
          local_60 = (char *)(lVar10 + 0xb98);
          local_58 = 1;
          if (*(long **)(lVar10 + 0xbc0) == (long *)0x0) {
            local_57 = 0;
          }
          else {
            puVar13 = (undefined8 *)**(long **)(lVar10 + 0xbc0);
            local_57 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              local_57 = (**(code **)*puVar13)();
            }
          }
          local_57 = local_57 & 1;
          local_68 = PTR_DAT_04bbc500 + 0x10;
          lVar12 = *(long *)(lVar10 + 0xba8);
          lVar10 = *(long *)(lVar10 + 0xba0);
          goto LAB_017fe864;
        }
      }
      goto LAB_017fe798;
    }
    if ((long)(short)DAT_04c487d0 != 0xffffffffffffffff) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1d);
      puVar1 = (uint *)(puVar6 + ((long)(short)DAT_04c487d0 & 0xffffffffU) * 8);
      if (0xff < DAT_04c487d0) {
        puVar1 = (uint *)puVar6;
      }
      if ((*puVar1 >> 0x1d & 1) == 0) goto LAB_017fe5f8;
      if (DAT_053d2ea8 == 0) goto LAB_017fe798;
      uVar4 = *(ushort *)(DAT_053d2ea8 + 0x2644);
      uVar15 = (uint)uVar4;
      sVar16 = *(short *)(DAT_053d2ea8 + 0x2646);
      *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(DAT_053d2ea8 + 0x2642);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar12 + 0x2648);
      *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar12 + 0x264c) - 1;
      *(uint *)(param_1 + 0x208) = *(ushort *)(lVar12 + 0x2650) - 1;
      *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar12 + 0x264e) - 1;
      uVar7 = (uint)uVar4;
      if ((uVar11 & 1) != 0) goto LAB_017fe79c;
      goto LAB_017fe3dc;
    }
LAB_017fe5f8:
    uVar9 = FUN_02660600((int)cVar3);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_02663fa0(&local_38);
      if (((uVar9 & 1) != 0) && (lVar10 = FUN_02663ee0(&local_38), lVar10 != 0)) {
        local_60 = (char *)(lVar10 + 0x348);
        local_58 = 1;
        if (*(long **)(lVar10 + 0x370) == (long *)0x0) {
          local_57 = 0;
        }
        else {
          puVar13 = (undefined8 *)**(long **)(lVar10 + 0x370);
          local_57 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            local_57 = (**(code **)*puVar13)();
          }
        }
        local_57 = local_57 & 1;
        local_68 = PTR_DAT_04bbc500 + 0x10;
        lVar12 = *(long *)(lVar10 + 0x358);
        lVar10 = *(long *)(lVar10 + 0x350);
        goto LAB_017fe864;
      }
LAB_017fe798:
      uVar15 = 0;
    }
    else {
      if (((9 < (uint)(int)cVar3) || (lVar12 = *(long *)puVar5, lVar12 == 0)) ||
         (lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x38))(), lVar12 == 0))
      goto LAB_017fe798;
      lVar12 = lVar12 + (ulong)(uint)(int)cVar3 * 0x888;
      local_58 = 1;
      local_60 = (char *)(lVar12 + 0x27fbf8);
      if (*(long **)(lVar12 + 0x27fc20) == (long *)0x0) {
        local_57 = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar12 + 0x27fc20);
        local_57 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          local_57 = (**(code **)*puVar13)();
        }
      }
      local_57 = local_57 & 1;
      local_68 = PTR_DAT_04bbc500 + 0x10;
      lVar10 = *(long *)(lVar12 + 0x27fc00);
      lVar12 = *(long *)(lVar12 + 0x27fc08);
LAB_017fe864:
      lVar12 = lVar12 + lVar10;
      uVar15 = (uint)*(ushort *)(lVar12 + 4);
      sVar16 = *(short *)(lVar12 + 6);
      *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar12 + 2);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar12 + 8);
      *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar12 + 0xc) - 1;
      *(uint *)(param_1 + 0x208) = *(ushort *)(lVar12 + 0x10) - 1;
      *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar12 + 0xe) - 1;
      FUN_02640184(&local_68);
    }
    uVar7 = uVar15;
    if ((uVar11 & 1) == 0) goto LAB_017fe3dc;
LAB_017fe79c:
    uVar15 = uVar7;
    lVar12 = *(long *)(lVar14 + 0x28);
    uVar7 = uVar15;
    if (lVar12 == 0) goto LAB_017fe3dc;
LAB_017fe0dc:
    uVar15 = uVar7;
    if (*(undefined8 **)(lVar12 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar12 + 8))();
    }
  }
LAB_017fe3dc:
  sVar2 = *(short *)(param_1 + 0x1ce);
  if (sVar2 != sVar16) {
    *(short *)(param_1 + 0x1ce) = sVar16;
  }
  uVar4 = *(ushort *)(param_1 + 0x1cc);
  FUN_017fdbb0(param_1);
  if ((((uVar15 & 2) != 0) && (DAT_05292338 != 0)) &&
     ((*(ushort *)(DAT_05292338 + 0xf6c) >> 1 & 1) != 0)) {
    *(ushort *)(DAT_05292338 + 0xf6c) = *(ushort *)(DAT_05292338 + 0xf6c) & 0xfffd;
  }
  lVar12 = DAT_05292338;
  if (sVar2 == sVar16) {
    if ((uVar15 >> 1 & 1) == (uVar4 >> 1 & 1)) goto LAB_017fe474;
  }
  else if (DAT_05292338 != 0) {
    lVar14 = DAT_05292338 + 0xda0;
    *(short *)(DAT_05292338 + 0xf6e) = sVar16;
    FUN_017f3100(lVar14,1);
    FUN_017b6228(lVar12);
  }
  lVar12 = DAT_05292338;
  FUN_017f3100(DAT_05292338 + 0xda0,1);
  FUN_017b6228(lVar12);
LAB_017fe474:
  *(short *)(param_1 + 0x1cc) = (short)uVar15;
  return;
}

