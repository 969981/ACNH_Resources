
byte FUN_0167ef14(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  uint local_5c;
  undefined8 local_58;
  undefined **local_50;
  undefined4 local_48;
  uint local_44;
  long local_40;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_40 = 0;
      local_48 = *param_1;
      local_44 = param_1[1];
      local_50 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar2 == 0) {
LAB_0167f0a4:
        local_58 = CONCAT44(local_58._4_4_,0x76);
        local_34 = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0167f0a4;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar7 == (uint *)0x0)) goto LAB_0167f0a4;
        local_34 = 0;
        local_58 = CONCAT44(local_58._4_4_,0x76);
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          local_34 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_34 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_34 < 0xbd)) goto LAB_0167f0b0;
              }
            }
            local_34 = 0;
          }
        }
      }
LAB_0167f0b0:
      if (local_34 == (uint)local_58) {
        bVar3 = 0;
        goto LAB_0167f368;
      }
    }
  }
  uVar6 = FUN_027a991c(param_1);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_027a9de4(param_1), (uVar6 & 1) != 0)) {
    lVar11 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4(param_1);
    lVar9 = DAT_05150358;
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0167f1e0;
      local_40 = 0;
      local_48 = *param_1;
      local_44 = param_1[1];
      local_50 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), lVar9 != 0)) {
            local_40 = lVar9;
          }
        }
      }
      uVar6 = FUN_01ae5f4c(&local_50);
      if ((uVar6 & 1) != 0) {
        bVar3 = FUN_01694760(param_1,0);
        goto LAB_0167f368;
      }
      uVar6 = FUN_01ae59b0(&local_50);
      bVar3 = local_48._2_1_ >> 2 & 1;
      if ((uVar6 & 1) == 0) {
        bVar3 = local_48._2_1_ & 4;
      }
      if (bVar3 != 0) {
        FUN_01afa900(&local_50,0);
      }
      local_5d = local_48._3_1_;
      local_60 = (undefined2)local_48;
      local_5c = local_44;
      local_5e = local_48._2_1_;
      FUN_01b09000(&local_58,&local_60);
LAB_0167f2ec:
      bVar3 = FUN_01694760(&local_58,1);
      goto LAB_0167f368;
    }
LAB_0167f1e0:
    if (((DAT_05150358 != 0) &&
        ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
          (*(long *)(DAT_05150358 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
          (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(&local_50,param_1);
        iVar5 = FUN_0123db50(&local_48,local_40);
        if (iVar5 == 0x2d) {
          local_58 = 0xfffe;
          FUN_0277d4ac(&local_58);
          FUN_0124c70c(&local_50,&local_58);
          goto LAB_0167f2ec;
        }
        iVar5 = FUN_0123db50(&local_48,local_40);
        if (((iVar5 == 0x22) || (iVar5 = FUN_0123db50(&local_48,local_40), iVar5 == 0x21)) &&
           ((iVar5 = FUN_0123db50(&local_48,local_40), iVar5 == 0x21 ||
            (iVar5 = FUN_0123db50(&local_48,local_40), iVar5 == 0x22)))) {
          bVar3 = ((local_48 >> 0x12 & 7) - 1 & 0xfffffff9) != 0;
          goto LAB_0167f368;
        }
      }
    }
  }
  bVar3 = 1;
LAB_0167f368:
  return bVar3 & 1;
}

