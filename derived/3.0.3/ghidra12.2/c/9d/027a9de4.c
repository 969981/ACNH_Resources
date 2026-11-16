
bool FUN_027a9de4(undefined2 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  undefined **local_50;
  undefined2 local_48;
  byte local_46;
  undefined1 local_45;
  undefined4 local_44;
  uint *local_40;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
LAB_027a9fdc:
    lVar11 = DAT_05150358;
    if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
       (((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(&local_50,param_1);
        if (local_40 != (uint *)0x0) {
          local_34 = 4;
          lVar11 = FUN_01246470(local_40,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
          if (lVar11 != 0) {
            uVar6 = local_34 + 7;
            if (-1 < (int)local_34) {
              uVar6 = local_34;
            }
            if ((*(byte *)(lVar11 + (ulong)(uint)((int)uVar6 >> 3)) >> (ulong)(local_34 & 7) & 1) !=
                0) goto LAB_027aa140;
          }
        }
        iVar7 = FUN_0123db50(&local_48,local_40);
        if (((((6 < iVar7 - 0xbU) &&
              (iVar7 = FUN_0123db50(&local_48,local_40), (iVar7 - 2U & 0xfffffff9) != 0)) &&
             (iVar7 = FUN_0123db50(&local_48,local_40), 8 < iVar7 - 0x23U)) &&
            ((iVar7 = FUN_0123db50(&local_48,local_40), 6 < iVar7 - 0x18U &&
             (iVar7 = FUN_0123db50(&local_48,local_40), iVar7 != 0x1f)))) &&
           (iVar7 = FUN_0123db50(&local_48,local_40), 5 < iVar7 - 0x12U)) {
          iVar7 = FUN_0123db50(&local_48,local_40);
          bVar5 = iVar7 == 0x2e;
          goto LAB_027a9fc0;
        }
      }
    }
LAB_027aa140:
    bVar5 = false;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027a9fdc;
    local_48 = *param_1;
    local_40 = (uint *)0x0;
    local_45 = *(undefined1 *)((long)param_1 + 3);
    bVar3 = *(byte *)(param_1 + 1);
    local_50 = &PTR_FUN_04a36b50;
    local_44 = *(undefined4 *)(param_1 + 2);
    local_46 = bVar3;
    uVar6 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar4 == 0) {
LAB_027a9f88:
      uVar12 = 0xbc;
    }
    else {
      lVar11 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027a9f88;
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar9 == (uint *)0x0)) goto LAB_027a9f88;
      uVar12 = 0;
      uVar6 = *puVar9;
      local_40 = puVar9;
      if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
        if ((*puVar10 != 0) &&
           ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar12 < 0xbd))
            goto LAB_027a9f8c;
          }
        }
        uVar12 = 0;
      }
    }
LAB_027a9f8c:
    uVar8 = FUN_01ae59b0(&local_50);
    bVar1 = bVar3 >> 2 & 1;
    if ((uVar8 & 1) == 0) {
      bVar1 = bVar3 & 4;
    }
    if (bVar1 == 0) {
      uVar8 = FUN_0277e788(param_1);
      if ((uVar8 & 1) != 0) {
        return true;
      }
      goto LAB_027a9fdc;
    }
    if (uVar12 == 0x71) goto LAB_027aa140;
    iVar7 = FUN_0277d6c4(param_1);
    bVar5 = iVar7 == 0x3333;
LAB_027a9fc0:
    bVar5 = !bVar5;
  }
  return bVar5;
}

