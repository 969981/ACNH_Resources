
/* WARNING: Removing unreachable block (ram,0x02da4568) */
/* WARNING: Removing unreachable block (ram,0x02da4580) */
/* WARNING: Removing unreachable block (ram,0x02da4584) */

undefined8 FUN_02da4058(undefined2 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ushort uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  uint *local_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4();
  lVar13 = *(long *)puVar6;
  if (lVar13 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  uVar5 = *param_1;
  local_68 = (uint *)0x0;
  uVar3 = *(undefined1 *)(param_1 + 1);
  uVar4 = *(undefined1 *)((long)param_1 + 3);
  uVar2 = *(undefined4 *)(param_1 + 2);
  local_78 = &PTR_FUN_04a36b50;
  local_70 = uVar5;
  local_6e = uVar3;
  local_6d = uVar4;
  local_6c = uVar2;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar6 == 0) {
LAB_02da417c:
    puVar14 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02da417c;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_1);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_02da417c;
    puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar14 != (uint *)0x0) {
      local_68 = puVar14;
    }
  }
  uVar9 = FUN_01af7f70(&local_78);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if (puVar14 != (uint *)0x0) {
    uVar7 = *puVar14;
    uVar10 = 0;
    if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar10 < 0xbd))
            goto LAB_02da4224;
          }
        }
        uVar10 = 0;
      }
    }
LAB_02da4224:
    if (uVar10 == 0x15) {
      return 0;
    }
    uVar10 = 0;
    uVar7 = *puVar14;
    if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar10 < 0xbd))
            goto LAB_02da42cc;
          }
        }
        uVar10 = 0;
      }
    }
LAB_02da42cc:
    if (uVar10 == 0x16) {
      return 0;
    }
    if (puVar14 != (uint *)0x0) {
      uVar7 = *puVar14;
      uVar10 = 0;
      if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
        puVar11 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar7 = puVar11[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar7 != 0) {
                uVar1 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
              }
              if (*puVar11 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar10 < 0xbd))
              goto LAB_02da4378;
            }
          }
          uVar10 = 0;
        }
      }
LAB_02da4378:
      if (uVar10 == 0x17) {
        return 0;
      }
      uVar7 = 0;
      uVar1 = *puVar14;
      if ((uVar1 != 0) && (puVar14 != (uint *)(ulong)uVar1)) {
        puVar11 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
        uVar7 = 0;
        if (*puVar11 != 0) {
          uVar7 = puVar11[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar7 != 0) {
                uVar1 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
              }
              if (*puVar11 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar7 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
              goto LAB_02da4484;
            }
          }
          uVar7 = 0;
        }
      }
      goto LAB_02da4484;
    }
  }
  uVar7 = 0xbc;
LAB_02da4484:
  local_a0[0] = 0x78;
  local_a8 = CONCAT44(local_a8._4_4_,uVar7);
  if (uVar7 == 0x78) {
    return 0;
  }
  uVar9 = FUN_01af530c(&local_78,0x4b);
  if ((((uVar9 & 1) == 0) && (uVar9 = FUN_01af530c(&local_78,0x98), (uVar9 & 1) == 0)) &&
     (uVar9 = FUN_01af530c(&local_78,0x9c), (uVar9 & 1) == 0)) {
    if (DAT_05688140 != 0) {
      lVar12 = (long)DAT_05688140 << 3;
      puVar15 = DAT_05688148;
      do {
        local_a8 = CONCAT44(local_a8._4_4_,1);
        local_90 = *(undefined4 *)*puVar15;
        local_98 = &PTR_FUN_04ac3700;
        local_a0[0] = 2;
        uVar9 = (*(code *)PTR_FUN_04ac3700)(&local_98,param_1);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        puVar15 = puVar15 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    local_a8 = 0xfffe;
    FUN_0277d4ac(&local_a8);
    FUN_0124f260(param_1,&local_a8,0,0);
    uVar9 = FUN_0277db54(&local_a8);
    if ((uVar9 & 1) != 0) {
      local_c0 = &PTR_FUN_04a36b50;
      local_b8 = uVar5;
      local_b6 = uVar3;
      local_b5 = uVar4;
      local_b4 = uVar2;
      local_b0 = puVar14;
      uVar9 = FUN_02da4670(&local_c0);
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_02da48e0(&local_a8);
        if (((uVar9 & 1) == 0) || (uVar9 = FUN_01253320(&local_a8), (uVar9 & 1) != 0)) {
          FUN_0124c030(local_a0,&local_a8);
          iVar8 = FUN_0123db50(&local_98,CONCAT44(uStack_8c,local_90));
          if ((iVar8 - 2U & 0xfffffff9) != 0) {
            uVar9 = FUN_0123d890(CONCAT44(uStack_8c,local_90),4);
            if ((((uVar9 & 1) == 0) && (uVar9 = FUN_0124dcb0(local_a0), (uVar9 & 1) == 0)) &&
               (iVar8 = FUN_0123db50(&local_98,CONCAT44(uStack_8c,local_90)), iVar8 != 7)) {
              return 1;
            }
            uVar9 = FUN_0124e1c8(local_a0);
            if ((uVar9 & 1) != 0) {
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 1;
}

