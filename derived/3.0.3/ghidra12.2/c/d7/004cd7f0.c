
int FUN_004cd7f0(long param_1,int param_2,long *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *local_290;
  undefined8 *puStack_288;
  ulong local_270;
  undefined8 local_268;
  ulong local_260;
  int local_258;
  
  uVar7 = local_270;
  if (param_2 == 0) {
    local_270 = CONCAT71(local_270._1_7_,0xff);
    plVar14 = *(long **)(param_1 + 8);
    if (*plVar14 < plVar14[1]) {
      memcpy(&local_270,(void *)*plVar14,1);
      *plVar14 = *plVar14 + 1;
      uVar7 = (ulong)((byte)local_270 >> 1) & 0x3f;
      iVar4 = (int)uVar7;
      uVar15 = local_270;
    }
    else {
      FUN_0049e700(plVar14,&local_270,1);
      uVar7 = (ulong)((byte)local_270 >> 1) & 0x3f;
      iVar4 = (int)uVar7;
      uVar15 = local_270;
    }
    bVar1 = (char)(byte)local_270 < '\0';
    local_270 = uVar15;
    if (bVar1) {
      uVar17 = 6;
      do {
        local_270 = CONCAT71(local_270._1_7_,0xff);
        plVar14 = *(long **)(param_1 + 8);
        if (*plVar14 < plVar14[1]) {
          memcpy(&local_270,(void *)*plVar14,1);
          *plVar14 = *plVar14 + 1;
        }
        else {
          FUN_0049e700(plVar14,&local_270,1);
        }
        uVar7 = (local_270 & 0x7f) << (uVar17 & 0x3f) | uVar7;
        iVar4 = (int)uVar7;
        bVar1 = (char)(byte)local_270 < '\0';
        uVar17 = (ulong)((int)uVar17 + 7);
      } while (bVar1);
    }
    param_2 = -iVar4;
    uVar7 = local_270;
    if ((uVar15 & 1) == 0) {
      param_2 = iVar4;
    }
  }
  if (param_2 == 6) {
    return 0;
  }
  local_270._1_7_ = (undefined7)(uVar7 >> 8);
  if (param_2 != 5) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
      local_270 = CONCAT71(local_270._1_7_,0xff);
      plVar14 = *(long **)(param_1 + 8);
      if (*plVar14 < plVar14[1]) {
        memcpy(&local_270,(void *)*plVar14,1);
        *plVar14 = *plVar14 + 1;
        uVar7 = local_270;
      }
      else {
        FUN_0049e700(plVar14,&local_270,1);
        uVar7 = local_270;
      }
      bVar1 = (char)(byte)local_270 < '\0';
      uVar15 = (ulong)((byte)local_270 >> 1) & 0x3f;
      local_270 = uVar7;
      if (bVar1) {
        uVar17 = 6;
        do {
          local_270 = CONCAT71(local_270._1_7_,0xff);
          plVar14 = *(long **)(param_1 + 8);
          if (*plVar14 < plVar14[1]) {
            memcpy(&local_270,(void *)*plVar14,1);
            *plVar14 = *plVar14 + 1;
          }
          else {
            FUN_0049e700(plVar14,&local_270,1);
          }
          uVar15 = (local_270 & 0x7f) << (uVar17 & 0x3f) | uVar15;
          bVar1 = (char)(byte)local_270 < '\0';
          uVar17 = (ulong)((int)uVar17 + 7);
        } while (bVar1);
      }
      iVar4 = *(int *)(param_1 + 0x78) + 1;
      lVar10 = *(long *)(param_1 + 0x18);
      uVar17 = -uVar15;
      if ((uVar7 & 1) == 0) {
        uVar17 = uVar15;
      }
      if (iVar4 < *(int *)(param_1 + 0x20)) {
        lVar16 = (long)iVar4;
        do {
          FUN_00454fe0(*(undefined8 *)(lVar10 + lVar16 * 8));
          lVar10 = *(long *)(param_1 + 0x18);
          *(int *)(param_1 + 0x78) = (int)lVar16;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(param_1 + 0x20));
      }
      lVar10 = *(long *)(lVar10 + (-(uVar17 >> 0x1f & 1) & 0xfffffff800000000 |
                                  (uVar17 & 0xffffffff) << 3));
      *param_3 = lVar10;
      uVar7 = local_270;
    }
    local_270 = uVar7;
    uVar7 = FUN_00428440(lVar10);
    if ((uVar7 & 0x1f) != 7) {
      lVar10 = 0;
    }
    if (param_4 == 0) {
      plVar14 = *(long **)(param_1 + 0x70);
      iVar4 = FUN_00426fc0(lVar10);
      param_4 = (**(code **)(*plVar14 + 0x10))(plVar14,(long)iVar4,0);
      iVar4 = FUN_00426fc0(lVar10);
      FUN_0043a810(param_4,0,(long)iVar4);
      lVar16 = *(long *)(param_1 + 0xb8);
      iVar4 = *(int *)(lVar16 + 0x20);
      local_268 = *param_3;
      local_260 = 0;
      local_270 = param_4;
      if (local_268 != 0) {
        local_260 = FUN_00428370();
      }
      if ((local_260 & 1) != 0) {
        FUN_0043dd30(local_260 & 0xfffffffffffffffe);
      }
      FUN_004cbc00(lVar16,iVar4,&local_270);
      if ((local_260 & 1) != 0) {
        FUN_0043dd50(local_260 & 0xfffffffffffffffe);
      }
    }
    else {
      iVar4 = 0;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar3 = *(uint *)(param_1 + 0x60);
        if (uVar3 == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 0x58,4);
          uVar3 = *(uint *)(param_1 + 0x60);
        }
        *(int *)(*(long *)(param_1 + 0x58) + (long)(int)uVar3 * 4) = iVar4;
        iVar12 = *(int *)(param_1 + 0x88);
        iVar5 = uVar3 + 1;
        *(int *)(param_1 + 0x60) = iVar5;
        if (iVar12 == 0) {
          iVar5 = *(int *)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0x88) = 0;
        }
        else {
          puVar13 = *(undefined8 **)(param_1 + 0x80);
          iVar9 = 0;
          puVar11 = (undefined8 *)0x0;
          puVar18 = puVar13 + (long)iVar12 + -1;
          iVar12 = -iVar12;
          while( true ) {
            iVar12 = iVar12 + 1;
            if (*(int *)*puVar18 == iVar5 + -1) {
              iVar9 = iVar9 + 1;
              *(int *)*puVar18 = iVar4;
              if (puVar11 == (undefined8 *)0x0) {
                puVar2 = puVar18 + -1;
                puVar18 = puVar11;
              }
              else {
                puVar13 = puVar18 + 1;
                *puVar18 = *puVar11;
                puVar2 = puVar11 + -1;
                puVar18 = (undefined8 *)0x0;
              }
            }
            else {
              puVar2 = puVar13;
              if (puVar11 != (undefined8 *)0x0) {
                puVar2 = puVar18 + 1;
                puVar18 = puVar11;
              }
            }
            puVar11 = puVar18;
            puVar18 = puVar2;
            if (iVar12 == 0) break;
            iVar5 = *(int *)(param_1 + 0x60);
          }
          iVar5 = *(int *)(param_1 + 0x98);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - iVar9;
        }
        if (iVar5 == 0) {
          iVar5 = 0;
          iVar12 = 0;
        }
        else {
          puVar18 = *(undefined8 **)(param_1 + 0x90);
          iVar12 = 0;
          puVar11 = (undefined8 *)0x0;
          puVar13 = puVar18 + (long)iVar5 * 2 + -2;
LAB_004cdd24:
          do {
            if (*(int *)((long)puVar13 + 0xc) == iVar4) {
              lVar16 = *param_3;
              plVar14 = (long *)FUN_00426d40(*puVar13,2);
              iVar12 = iVar12 + 1;
              *plVar14 = lVar16;
              if (puVar11 != (undefined8 *)0x0) {
                *puVar13 = *puVar11;
                puVar13[1] = puVar11[1];
                puVar18 = puVar13 + 2;
                puVar13 = puVar11 + -2;
                puVar11 = (undefined8 *)0x0;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) break;
                goto LAB_004cdd24;
              }
              puVar2 = puVar13 + -2;
              puVar13 = puVar11;
            }
            else {
              puVar2 = puVar18;
              if (puVar11 != (undefined8 *)0x0) {
                puVar2 = puVar13 + 2;
                puVar13 = puVar11;
              }
            }
            puVar11 = puVar13;
            puVar13 = puVar2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = *(int *)(param_1 + 0x98);
        }
        *(int *)(param_1 + 0x98) = iVar5 - iVar12;
      }
      else {
        FUN_004426d0(&local_290,&local_270,0x200);
        FUN_0043ac90(&local_290,"corrupt file");
        iVar5 = FUN_00422320(0x484994d5,&local_270,
                             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                             ,0x3dc);
        if (iVar5 != 0) {
          CallSupervisor(0x26);
        }
        FUN_00442760(&local_290);
      }
    }
    local_270 = 0;
    local_268 = 0x8000000000000000;
    local_258 = 0x80;
    lVar8 = FUN_0043c4e0(DAT_04c6f050);
    lVar16 = DAT_04c6f058;
    if (lVar8 != 0) {
      lVar16 = lVar8;
    }
    if (0x7f < *(ulong *)(lVar16 + 0x10)) {
      uVar7 = *(ulong *)(lVar16 + 0x18);
      if (uVar7 + 0x80 <= *(ulong *)(lVar16 + 0x20)) {
        *(ulong *)(lVar16 + 0x18) = uVar7 + 0x80;
        goto LAB_004cde98;
      }
    }
    uVar7 = FUN_00439510(lVar16,0x80);
LAB_004cde98:
    local_268 = CONCAT44(0x80000080,(undefined4)local_268);
    local_270 = uVar7;
    local_260 = uVar7;
    uVar6 = FUN_004add00(lVar10);
    FUN_004ce4a0(param_1,uVar6,&local_270);
    FUN_00427c30(&local_290,lVar10,0);
    lVar10 = 0;
    do {
      if (local_290 + 1 < puStack_288) {
        local_290 = local_290 + 1;
        uVar3 = FUN_004290b0();
      }
      else {
        uVar15 = FUN_00427c40(&local_290);
        uVar7 = local_260;
        if ((uVar15 & 1) == 0) {
          if (local_260 == local_270) {
            local_268 = local_268 & 0xffffffff00000000;
          }
          lVar8 = (long)local_258;
          lVar16 = FUN_0043c4e0(DAT_04c6f050);
          lVar10 = DAT_04c6f058;
          if (lVar16 != 0) {
            lVar10 = lVar16;
          }
          uVar15 = lVar8 + 0x7fU & 0xffffffffffffff80;
          if (((*(ulong *)(lVar10 + 0x10) < uVar15) || (*(long *)(lVar10 + 0x18) != uVar15 + uVar7))
             || (*(ulong *)(lVar10 + 0x28) == uVar7)) {
            FUN_00439980(lVar10,uVar7);
            uVar3 = local_268._4_4_;
          }
          else {
            *(ulong *)(lVar10 + 0x18) = uVar7;
            uVar3 = local_268._4_4_;
          }
          if ((long)local_268 < 0) {
            return iVar4;
          }
          local_268 = (ulong)uVar3 << 0x20;
          if (local_270 == 0) {
            return iVar4;
          }
          FUN_00421f90(PTR_DAT_048607b8,local_270,1,uVar3 & 0x3fffffff);
          return iVar4;
        }
        uVar3 = FUN_004290b0(local_290);
      }
      if ((uVar3 >> 5 & 1) != 0) {
        if (*(char *)(local_270 + lVar10) != '\0') {
          FUN_004ce670(param_1,param_4,*local_290,iVar4);
        }
        lVar10 = lVar10 + 1;
      }
    } while( true );
  }
  local_270 = CONCAT71(local_270._1_7_,0xff);
  plVar14 = *(long **)(param_1 + 8);
  if (*plVar14 < plVar14[1]) {
    memcpy(&local_270,(void *)*plVar14,1);
    *plVar14 = *plVar14 + 1;
    uVar7 = local_270;
  }
  else {
    FUN_0049e700(plVar14,&local_270,1);
    uVar7 = local_270;
  }
  bVar1 = (char)(byte)local_270 < '\0';
  uVar15 = (ulong)((byte)local_270 >> 1) & 0x3f;
  local_270 = uVar7;
  if (bVar1) {
    uVar17 = 6;
    do {
      local_270 = CONCAT71(local_270._1_7_,0xff);
      plVar14 = *(long **)(param_1 + 8);
      if (*plVar14 < plVar14[1]) {
        memcpy(&local_270,(void *)*plVar14,1);
        *plVar14 = *plVar14 + 1;
      }
      else {
        FUN_0049e700(plVar14,&local_270,1);
      }
      uVar15 = (local_270 & 0x7f) << (uVar17 & 0x3f) | uVar15;
      bVar1 = (char)(byte)local_270 < '\0';
      uVar17 = (ulong)((int)uVar17 + 7);
    } while (bVar1);
  }
  lVar10 = *(long *)(param_1 + 0xb8);
  uVar17 = -uVar15;
  if ((uVar7 & 1) == 0) {
    uVar17 = uVar15;
  }
  iVar4 = *(int *)(*(long *)(lVar10 + 0x18) +
                   (long)*(int *)(*(long *)(param_1 + 0x58) +
                                 (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 |
                                 (uVar17 & 0xffffffff) << 2)) * 0x10 + 8);
  if (iVar4 < 0) {
    if (*(long *)(*(long *)(lVar10 + 8) + (long)-iVar4 * 8) != 0) {
      uVar3 = FUN_00428440();
      lVar10 = FUN_004283a0(uVar3 & 0x1f);
      goto joined_r0x004cda94;
    }
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 8) + (long)iVar4 * 8);
joined_r0x004cda94:
    if ((lVar10 != 0) && (uVar7 = FUN_00428370(lVar10), (uVar7 & 1) != 0)) {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      *param_3 = lVar10;
      FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
      goto LAB_004cde00;
    }
  }
  *param_3 = lVar10;
LAB_004cde00:
  return *(int *)(*(long *)(param_1 + 0x58) + (long)(int)uVar17 * 4);
}

