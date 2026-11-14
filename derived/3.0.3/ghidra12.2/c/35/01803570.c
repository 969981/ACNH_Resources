
/* WARNING: Removing unreachable block (ram,0x018038a0) */

void FUN_01803570(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  long local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_38;
  int local_34;
  
  iVar9 = *param_1;
  uVar7 = param_1[1];
  local_34 = iVar9;
  if (0x427decd < iVar9) {
    if (iVar9 < 0x4d702d55) {
      if (iVar9 < 0x16f2dadc) {
        if (iVar9 != 0x427dece) {
          iVar15 = 0xe716ff8;
          goto LAB_01803724;
        }
      }
      else if ((iVar9 != 0x16f2dadc) && (iVar9 != 0x1d096e7d)) {
        iVar15 = 0x28c45759;
        goto LAB_01803724;
      }
    }
    else if (iVar9 < 0x72a13146) {
      if (iVar9 != 0x4d702d55) {
        iVar15 = 0x60c2c4f0;
        goto LAB_01803724;
      }
    }
    else if ((iVar9 != 0x72a13146) && (iVar9 != 0x7c939885)) {
      iVar15 = 0x77870a84;
      goto LAB_01803724;
    }
    goto LAB_0180372c;
  }
  if (iVar9 < -0x196792d8) {
    if (iVar9 < -0x66cc4d79) {
      if (iVar9 != -0x7b521843) {
        iVar15 = -0x74337aab;
        goto LAB_01803724;
      }
    }
    else if ((iVar9 != -0x66cc4d79) && (iVar9 != -0x4772f804)) {
      iVar15 = -0x4701dc58;
LAB_01803724:
      if (iVar9 != iVar15) {
        uVar10 = FUN_017f37d0(iVar9);
        if ((uVar10 & 1) == 0) {
          if (iVar9 < 0x2922957e) {
            if (0x80e20d7 < iVar9) {
              if (((iVar9 != 0x80e20d8) && (iVar9 != 0xb6a5301)) && (iVar9 != 0x1490248c)) {
                return;
              }
LAB_01803d30:
              uVar6 = FUN_017f4660(&local_34);
              local_68 = CONCAT44(local_68._4_4_,uVar6);
              lVar16 = FUN_02643020();
              if (lVar16 == 0) {
                return;
              }
              lVar16 = lVar16 + 0xe0;
              uVar8 = (uint)local_68;
              goto LAB_01803d50;
            }
            if ((iVar9 != -0x11ea17dc) && (iVar9 != -0x917edf9)) {
              iVar15 = -0x8fb780d;
              goto LAB_01803cd4;
            }
          }
          else {
            if (iVar9 < 0x65b7732d) {
              if ((iVar9 == 0x2922957e) || (iVar9 == 0x51b9e069)) goto LAB_01803d30;
              iVar15 = 0x6168e44d;
            }
            else {
              if (iVar9 == 0x65b7732d) goto LAB_01803cdc;
              if (iVar9 == 0x7a616e2f) goto LAB_01803d30;
              iVar15 = 0x6c9ebc71;
            }
LAB_01803cd4:
            if (iVar9 != iVar15) {
              return;
            }
          }
LAB_01803cdc:
          if (*(long *)PTR_DAT_04bb46b0 == 0) {
            return;
          }
          lVar16 = FUN_026f480c();
          if (lVar16 == 0) {
            return;
          }
          uVar8 = FUN_017f4660(&local_34);
          if (4 < (int)uVar8) {
            uVar8 = 5;
          }
          lVar11 = lVar16 + 0x118 + (ulong)uVar8 * 0x2488;
          if (5 < uVar8) {
            lVar11 = lVar16 + 0x118;
          }
          lVar16 = *(long *)(lVar11 + 0x2248);
          if (lVar16 == 0) goto LAB_01803d28;
LAB_01803d64:
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar11 + 0x2248);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar16 == 0) goto LAB_01803e10;
          }
          plVar14 = *(long **)(lVar16 + 0x20);
          if (plVar14 != (long *)0x0) {
            local_68 = *(ulong *)(lVar11 + 0x2228);
            uStack_60 = *(undefined8 *)(lVar11 + 0x2230);
            local_58 = 0x14;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
          }
        }
        else {
          local_38 = 0;
          uVar10 = FUN_02b5f400(&local_38,iVar9);
          iVar9 = local_38;
          if ((uVar10 & 1) == 0) {
            return;
          }
          uVar6 = FUN_017f4660(&local_34);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
          local_68 = CONCAT44(local_68._4_4_,iVar9);
          lVar16 = *(long *)PTR_DAT_04bb46b0;
          if (lVar16 == 0) {
            return;
          }
          puVar17 = *(undefined8 **)(lVar16 + 0x10);
          if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
            lVar11 = (**(code **)(*(long *)*puVar17 + 0x38))();
            if (lVar11 == 0) {
              return;
            }
            lVar11 = lVar11 + 0x70;
          }
          else {
            if (puVar17 == (undefined8 *)0x0) {
              return;
            }
            if ((long *)puVar17[0x26] == (long *)0x0) {
              return;
            }
            lVar11 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
            if (lVar11 == 0) {
              return;
            }
          }
          if (7 < (uint)local_68) {
            return;
          }
          lVar16 = lVar11 + 0x119228 + (local_68 & 0xffffffff) * 0xfa08;
          if (7 < (uint)local_68) {
            lVar16 = lVar11 + 0x119228;
          }
          lVar16 = lVar16 + 0x1df8;
          uVar8 = (uint)local_80;
LAB_01803d50:
          lVar11 = lVar16 + (ulong)uVar8 * 0x2488;
          if (5 < uVar8) {
            lVar11 = lVar16;
          }
          lVar16 = *(long *)(lVar11 + 0x2248);
          if (lVar16 != 0) goto LAB_01803d64;
LAB_01803d28:
          uVar10 = 0;
        }
LAB_01803e10:
        lVar16 = *(long *)(lVar11 + 0x2230) + *(long *)(lVar11 + 0x2228);
        iVar3 = param_1[0xd];
        iVar9 = param_1[0xb];
        iVar15 = param_1[0xe];
        iVar2 = param_1[0xf];
        uVar4 = *(undefined1 *)((long)param_1 + 0x2e);
        iVar20 = param_1[0xc];
        *(short *)(lVar16 + 4) = (short)(uVar7 >> 0xb);
        *(short *)(lVar16 + 6) = (short)iVar9;
        *(undefined1 *)(lVar16 + 2) = uVar4;
        *(int *)(lVar16 + 8) = iVar20;
        iVar9 = iVar3;
        if (0xfffd < iVar3) {
          iVar9 = 0xfffe;
        }
        sVar1 = 0;
        if (-2 < iVar3) {
          sVar1 = (short)iVar9 + 1;
        }
        *(short *)(lVar16 + 0xc) = sVar1;
        iVar9 = iVar15;
        if (0xfffd < iVar15) {
          iVar9 = 0xfffe;
        }
        sVar1 = 0;
        if (-2 < iVar15) {
          sVar1 = (short)iVar9 + 1;
        }
        iVar9 = iVar2;
        if (0xfffd < iVar2) {
          iVar9 = 0xfffe;
        }
        *(short *)(lVar16 + 0xe) = sVar1;
        sVar1 = 0;
        if (-2 < iVar2) {
          sVar1 = (short)iVar9 + 1;
        }
        *(short *)(lVar16 + 0x10) = sVar1;
        if ((uVar10 & 1) == 0) {
          return;
        }
        lVar16 = *(long *)(lVar11 + 0x2248);
        goto joined_r0x01803c44;
      }
    }
  }
  else if (iVar9 < -0xbf1cc08) {
    if (iVar9 != -0x196792d8) {
      iVar15 = -0x11f68f68;
      goto LAB_01803724;
    }
  }
  else if ((iVar9 != -0xbf1cc08) && (iVar9 != 0x5f6c88)) {
    iVar15 = 0x1ac1236;
    goto LAB_01803724;
  }
LAB_0180372c:
  uVar6 = FUN_017e4f94(iVar9);
  puVar5 = PTR_DAT_04bb46b0;
  local_68 = CONCAT44(local_68._4_4_,uVar6);
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 == 0) {
    return;
  }
  puVar17 = *(undefined8 **)(lVar16 + 0x10);
  if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
    lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar16 == 0) {
      return;
    }
    lVar16 = lVar16 + 0x70;
  }
  else {
    if (puVar17 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar17[0x26] == (long *)0x0) {
      return;
    }
    lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
    if (lVar16 == 0) {
      return;
    }
  }
  if (9 < (uint)local_68) {
    return;
  }
  lVar11 = lVar16 + 0x1962d8 + (local_68 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_68) {
    lVar11 = lVar16 + 0x1962d8;
  }
  lVar16 = *(long *)(lVar11 + 0x28);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      lVar16 = *(long *)(lVar11 + 0x28);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar16 == 0) goto LAB_01803880;
    }
    plVar14 = *(long **)(lVar16 + 0x20);
    if (plVar14 != (long *)0x0) {
      local_68 = *(ulong *)(lVar11 + 8);
      uStack_60 = *(undefined8 *)(lVar11 + 0x10);
      local_58 = 0x12e8;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
    }
  }
LAB_01803880:
  local_68 = local_68 & 0xffffffff00000000;
  iVar9 = (int)*(char *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x1c4);
  local_38 = iVar9;
  uVar12 = FUN_02663fa0(&local_38);
  local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
  uVar13 = FUN_02b67a30(&local_80,iVar9);
  if ((uVar13 & 1) == 0) {
LAB_01803974:
    lVar19 = 0;
    if ((uVar12 & 1) != 0) goto LAB_0180397c;
LAB_01803ac0:
    if (lVar19 == 0) goto LAB_01803c3c;
    if ((*(long *)(lVar19 + 0x370) == 0) ||
       (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x370) + 0x10), puVar17 == (undefined8 *)0x0))
    {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar17)();
      uVar7 = uVar7 ^ 1;
    }
    puVar5 = PTR_DAT_04bb43c0;
    local_70 = 0;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_78 = param_1[4];
    iStack_74 = param_1[5];
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar5 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_1 + 4);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
           (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8), lVar16 != 0)) {
          local_70 = lVar16;
        }
      }
    }
    uVar18 = *(undefined8 *)PTR_DAT_04bb46d0;
    uVar6 = FUN_01b020f0(&local_80);
    iVar9 = FUN_017c0190(uVar18,uVar6);
    if ((*(long *)(lVar19 + 0x370) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar19 + 0x370) + 0x20), plVar14 != (long *)0x0)) {
      local_68 = *(ulong *)(lVar19 + 0x350);
      uStack_60 = *(undefined8 *)(lVar19 + 0x358);
      local_58 = 0x14;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
    }
    lVar16 = *(long *)(lVar19 + 0x358) + *(long *)(lVar19 + 0x350);
    iVar15 = 0;
    if (iVar9 != -1) {
      iVar15 = iVar9;
    }
    *(short *)(lVar16 + 6) = (short)iVar15;
    *(undefined2 *)(lVar16 + 4) = 1;
    *(undefined1 *)(lVar16 + 2) = 0;
    *(undefined2 *)(lVar16 + 0x10) = 0;
    *(undefined8 *)(lVar16 + 8) = 0x3f800000;
    if ((uVar7 & 1) != 0) goto LAB_01803c3c;
LAB_01803c20:
    if ((*(long *)(lVar19 + 0x370) != 0) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x370) + 0x18), puVar17 != (undefined8 *)0x0))
    {
      (**(code **)*puVar17)();
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,(uint)local_80);
    lVar16 = *(long *)puVar5;
    if (lVar16 == 0) goto LAB_01803974;
    puVar17 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) != 0) {
      if (((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) &&
         (lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar16 != 0)) goto LAB_01803968;
      goto LAB_01803974;
    }
    lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar16 == 0) goto LAB_01803974;
    lVar16 = lVar16 + 0x70;
LAB_01803968:
    if (9 < (uint)local_68) goto LAB_01803974;
    lVar19 = lVar16 + 0x1962d8 + (local_68 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_68) {
      lVar19 = lVar16 + 0x1962d8;
    }
    lVar19 = lVar19 + 0x850;
    if ((uVar12 & 1) == 0) goto LAB_01803ac0;
LAB_0180397c:
    if (lVar19 != 0) {
      lVar16 = *(long *)(lVar19 + 0x370);
      if (lVar16 == 0) {
        uVar12 = 0;
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar19 + 0x370);
          uVar12 = uVar12 & 0xffffffff;
          if (lVar16 == 0) goto LAB_01803a20;
        }
        plVar14 = *(long **)(lVar16 + 0x20);
        if (plVar14 != (long *)0x0) {
          local_68 = *(ulong *)(lVar19 + 0x350);
          uStack_60 = *(undefined8 *)(lVar19 + 0x358);
          local_58 = 0x14;
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
        }
      }
LAB_01803a20:
      lVar16 = *(long *)(lVar19 + 0x358) + *(long *)(lVar19 + 0x350);
      iVar3 = param_1[0xd];
      iVar9 = param_1[0xb];
      iVar15 = param_1[0xe];
      iVar2 = param_1[0xf];
      uVar4 = *(undefined1 *)((long)param_1 + 0x2e);
      iVar20 = param_1[0xc];
      *(short *)(lVar16 + 4) = (short)(uVar7 >> 0xb);
      *(short *)(lVar16 + 6) = (short)iVar9;
      *(undefined1 *)(lVar16 + 2) = uVar4;
      *(int *)(lVar16 + 8) = iVar20;
      iVar9 = iVar3;
      if (0xfffd < iVar3) {
        iVar9 = 0xfffe;
      }
      sVar1 = 0;
      if (-2 < iVar3) {
        sVar1 = (short)iVar9 + 1;
      }
      *(short *)(lVar16 + 0xc) = sVar1;
      iVar9 = iVar15;
      if (0xfffd < iVar15) {
        iVar9 = 0xfffe;
      }
      sVar1 = 0;
      if (-2 < iVar15) {
        sVar1 = (short)iVar9 + 1;
      }
      iVar9 = iVar2;
      if (0xfffd < iVar2) {
        iVar9 = 0xfffe;
      }
      *(short *)(lVar16 + 0xe) = sVar1;
      sVar1 = 0;
      if (-2 < iVar2) {
        sVar1 = (short)iVar9 + 1;
      }
      *(short *)(lVar16 + 0x10) = sVar1;
      if ((uVar12 & 1) != 0) goto LAB_01803c20;
    }
  }
LAB_01803c3c:
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)(lVar11 + 0x28);
joined_r0x01803c44:
  if ((lVar16 != 0) && (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar16 + 0x18))();
  }
  return;
}

