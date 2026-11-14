
uint FUN_01c12e3c(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  FUN_0277d6c4(param_2);
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      puVar3 = PTR_DAT_04bc0510;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      lVar9 = *(long *)puVar2;
      local_48 = (uint *)0x0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_50);
      puVar7 = (uint *)0x0;
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
          puVar7 = (uint *)0x0;
          if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (*(uint *)(lVar9 + 0x1d8) <= uVar4) goto LAB_01c12f88;
            puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
            if (puVar7 != (uint *)0x0) {
              local_48 = puVar7;
            }
          }
        }
        else {
LAB_01c12f88:
          puVar7 = (uint *)0x0;
        }
      }
      local_5d = 0;
      local_a0 = 0x40;
      puStack_a8 = local_9c;
      local_9c[0] = 0;
      local_b0 = PTR_DAT_04bb2bc0 + 0x10;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x74);
      if (puVar7 == (uint *)0x0) {
        uVar4 = 0xbc;
      }
      else {
        uVar1 = *puVar7;
        uVar4 = 0;
        if ((uVar1 != 0) && (puVar7 != (uint *)(ulong)uVar1)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar1);
          uVar4 = 0;
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
                   (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 < 0xbd))
                goto LAB_01c13054;
              }
            }
            uVar4 = 0;
          }
        }
      }
LAB_01c13054:
      local_d0 = CONCAT44(local_d0._4_4_,uVar4);
      if (uVar4 == 0x74) {
        local_d0 = 0x191a;
        FUN_0277d4ac(&local_d0);
        lVar9 = *(long *)puVar2;
        local_c8 = puVar3 + 0x10;
        local_b8 = 0;
        local_c0 = local_d0;
        uVar4 = FUN_0277d6c4(&local_c0);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_d0);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
               (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), lVar9 != 0)) {
              local_b8 = lVar9;
            }
          }
        }
        ppuVar6 = &local_c8;
      }
      else {
        ppuVar6 = &local_58;
      }
      FUN_01b0b530(ppuVar6,&local_b0);
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      local_c0 = uVar5;
      uVar4 = FUN_006f50a0(param_1 + 1,&local_c8,&local_b0,0);
      goto LAB_01c12f6c;
    }
  }
  uVar4 = 0;
LAB_01c12f6c:
  return uVar4 & 1;
}

