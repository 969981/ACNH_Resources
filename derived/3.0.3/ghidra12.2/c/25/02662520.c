
void FUN_02662520(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ushort *puVar14;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  long local_80;
  undefined1 local_78;
  byte local_77;
  undefined *local_70;
  char *local_68;
  undefined1 local_60;
  byte local_5f;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined2 local_48;
  undefined1 local_46;
  uint local_44;
  
  puVar7 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "NpcInteriorCoordinate";
  local_70 = puVar1;
  iVar8 = FUN_02743000(&local_70);
  if (iVar8 == 0) {
    return;
  }
  local_68 = "NpcInteriorCoordinate";
  local_70 = puVar1;
  iVar8 = FUN_02743000(&local_70);
  if (iVar8 == 0) {
LAB_02662594:
    uVar10 = 0xffffffff;
  }
  else {
    local_70 = puVar7 + 0x10;
    local_68 = "UISelectedNpcVillagerIndex";
    iVar8 = FUN_02743000(&local_70);
    uVar10 = iVar8 - 1;
    if (9 < uVar10) goto LAB_02662594;
  }
  local_44 = uVar10;
  lVar11 = FUN_0265c2a0(uVar10);
  if (lVar11 == 0) {
    puVar14 = (ushort *)&DAT_053e6f44;
  }
  else if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
          (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
    puVar14 = (ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
  }
  else {
    uVar13 = (**(code **)*puVar12)();
    puVar14 = (ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    if ((((uVar13 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  puVar1 = PTR_DAT_04bc27f0;
  local_46 = (undefined1)puVar14[1];
  uVar4 = *puVar14;
  uVar13 = (ulong)(uVar4 & 0xff);
  if (0x22 < uVar13) {
    return;
  }
  local_48._1_1_ = (byte)(uVar4 >> 8);
  if ((byte)PTR_DAT_04bc27f0[uVar13] < local_48._1_1_) {
    return;
  }
  if (((uint)(&DAT_053e6eb8)[uVar13] >> (ulong)(local_48._1_1_ & 0x1f) & 1) == 0) {
    return;
  }
  local_48 = uVar4;
  FUN_02202780(auStack_50,&local_48);
  FUN_0277dedc(auStack_50);
  lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar9 = FUN_0277d6c4(auStack_50);
  if ((uVar9 >> 3 & 0x1fff) < 0x753) {
    lVar5 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
    *(uint *)(lVar11 + lVar5) = *(uint *)(lVar11 + lVar5) | 1 << (ulong)(uVar9 & 0x1f);
  }
  uVar13 = FUN_02663fa0(&local_44);
  if ((uVar13 & 1) != 0) {
    local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
    uVar13 = FUN_02b67a30(&local_88,uVar10);
    if ((uVar13 & 1) == 0) {
      return;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,(undefined4)local_88);
    if (DAT_05574040 == 0) {
      return;
    }
    puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) {
        return;
      }
      lVar11 = lVar11 + 0x70;
    }
    else {
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar12[0x26] == (long *)0x0) {
        return;
      }
      lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      if (lVar11 == 0) {
        return;
      }
    }
    if (9 < (uint)local_70) {
      return;
    }
    lVar5 = lVar11 + 0x1962d8 + ((ulong)local_70 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_70) {
      lVar5 = lVar11 + 0x1962d8;
    }
    if ((*(long **)(lVar5 + 0x878) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar5 + 0x878), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 ^ 1;
    }
    FUN_027c9870(*(long *)(lVar5 + 0x860) + *(long *)(lVar5 + 0x858),param_1);
    puVar1 = PTR_DAT_04bb43c0;
    lVar11 = *(long *)(lVar5 + 0x860) + *(long *)(lVar5 + 0x858);
    local_70 = *(undefined **)(lVar11 + 0x10d4);
    local_88 = *(undefined **)(lVar11 + 0x10dc);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        FUN_0277dedc(&local_70);
        lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar6 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar11 + lVar6) = *(uint *)(lVar11 + lVar6) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
    }
    lVar11 = *(long *)puVar1;
    uVar9 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        FUN_0277dedc(&local_88);
        lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar9 = FUN_0277d6c4(&local_88);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar6 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar11 + lVar6) = *(uint *)(lVar11 + lVar6) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
    }
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar5 + 0x878) == 0) {
      return;
    }
    puVar12 = *(undefined8 **)(*(long *)(lVar5 + 0x878) + 8);
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar12)();
    return;
  }
  local_54 = 0;
  uVar13 = FUN_02b67a30(&local_54,uVar10);
  puVar7 = PTR_DAT_04bb46b0;
  if ((uVar13 & 1) == 0) {
    return;
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,local_54);
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 != 0) {
        lVar11 = lVar11 + 0x70;
LAB_026627e4:
        if ((uint)local_70 < 10) {
          lVar5 = lVar11 + 0x1962d8 + ((ulong)local_70 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_70) {
            lVar5 = lVar11 + 0x1962d8;
          }
          goto joined_r0x026627f8;
        }
      }
    }
    else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
            (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 != 0))
    goto LAB_026627e4;
  }
  lVar5 = 0;
joined_r0x026627f8:
  if ((uVar10 < 10) && (lVar11 = *(long *)puVar7, lVar11 != 0)) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) {
        return;
      }
      lVar11 = lVar11 + 0x70;
    }
    else {
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar12[0x26] == (long *)0x0) {
        return;
      }
      lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      if (lVar11 == 0) {
        return;
      }
    }
    lVar11 = lVar11 + (ulong)uVar10 * 0x10798;
    lVar6 = lVar11 + 0x118;
    if ((*(long **)(lVar11 + 0x140) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x140), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 ^ 1;
    }
    pbVar2 = (byte *)(*(long *)(lVar11 + 0x128) + *(long *)(lVar11 + 0x120));
    uVar13 = (ulong)*pbVar2;
    if ((uVar13 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)puVar1[uVar13])) {
      uVar9 = (uint)(&DAT_053e6eb8)[uVar13] >> (ulong)(bVar3 & 0x1f) & 1;
    }
    else {
      uVar9 = 0;
    }
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar11 + 0x140) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x140) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    uVar9 = uVar9 ^ 1;
    if (lVar5 == 0) {
      uVar9 = 1;
    }
    if (uVar9 == 0) {
      local_60 = 1;
      local_68 = (char *)lVar5;
      if (*(long **)(lVar5 + 0x28) == (long *)0x0) {
        local_5f = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar5 + 0x28);
        local_5f = 0;
        if (puVar12 != (undefined8 *)0x0) {
          local_5f = (**(code **)*puVar12)();
        }
      }
      local_5f = local_5f & 1;
      local_70 = PTR_DAT_04bb6ba8 + 0x10;
      local_78 = 1;
      local_80 = lVar6;
      if (*(long **)(lVar11 + 0x140) == (long *)0x0) {
        local_77 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar11 + 0x140);
        local_77 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          local_77 = (**(code **)*puVar12)();
        }
      }
      local_77 = local_77 & 1;
      local_88 = PTR_DAT_04bb67a0 + 0x10;
      FUN_027d0450(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1);
      lVar11 = *(long *)(lVar11 + 0x128) + *(long *)(lVar11 + 0x120);
      local_90 = *(undefined4 *)(lVar11 + 0x1320c);
      uStack_8c = *(undefined4 *)(lVar11 + 0x13210);
      uVar13 = FUN_0277d9a8(&local_90);
      if ((uVar13 & 1) != 0) {
        FUN_01a45058(param_1,&local_90);
      }
      FUN_02640184(&local_88);
      FUN_02640184(&local_70);
    }
  }
  return;
}

