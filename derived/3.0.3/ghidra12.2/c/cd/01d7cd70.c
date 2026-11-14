
void FUN_01d7cd70(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined2 *__src;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined2 *__dest;
  ushort *__dest_00;
  ulong uVar8;
  long lVar9;
  undefined *local_1c0;
  ushort *puStack_1b8;
  undefined4 local_1b0;
  ushort local_1ac [14];
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined2 *local_d8;
  undefined4 local_d0;
  undefined2 local_cc [20];
  undefined2 local_a4;
  undefined4 local_a0 [2];
  long local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  lVar9 = *(long *)(DAT_05ae6a60 + 0x18);
  if (lVar9 != 0) {
    __dest_00 = *(ushort **)(lVar9 + 0x130);
    puStack_1b8 = local_1ac;
    local_1b0 = 0x15;
    local_1ac[0] = 0;
    plVar1 = (long *)(lVar9 + 0x128);
    local_1c0 = &DAT_04a5a568;
    puStack_188._0_6_ = (uint6)(uint)puStack_188;
    if (__dest_00 != puStack_1b8) {
      lVar7 = 0;
      do {
        if (local_1ac[lVar7] == 0) goto LAB_01d7ce2c;
        if (local_1ac[lVar7 + 1] == 0) {
          lVar7 = lVar7 + 1;
          goto LAB_01d7ce2c;
        }
        if (local_1ac[lVar7 + 2] == 0) {
          lVar7 = lVar7 + 2;
          goto LAB_01d7ce2c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01d7ce2c:
      uVar4 = (uint)lVar7;
      if (*(int *)(lVar9 + 0x138) <= (int)(uint)lVar7) {
        uVar4 = *(int *)(lVar9 + 0x138) - 1;
      }
      uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
      memcpy(__dest_00,puStack_1b8,uVar8);
      *(undefined2 *)((long)__dest_00 + uVar8) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar7 = DAT_05574040;
    local_1c0 = (undefined *)**(long **)(param_1 + 8);
    puStack_1b8 = (ushort *)(*(long **)(param_1 + 8))[1];
    if (local_1c0 != (undefined *)0x0 || puStack_1b8 != (ushort *)0x0) {
      if (*(long *)(DAT_05574040 + 8) != 0) {
        lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
        uVar8 = FUN_02818404(lVar5 + 0x1e34c0,&local_1c0);
        if ((uVar8 & 1) != 0) {
          uVar3 = FUN_028189c8(lVar5 + 0x1e34c0,&local_1c0);
          lVar7 = FUN_026eed64(lVar7,uVar3);
          if (lVar7 != 0) {
            if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
               (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
              uVar4 = 1;
            }
            else {
              uVar4 = (**(code **)*puVar6)();
              uVar4 = uVar4 ^ 1;
            }
            local_d0 = 0x15;
            local_cc[0] = 0;
            puStack_1b8 = local_cc;
            local_a4 = 0;
            local_e0 = &DAT_04a5a568;
            local_1c0 = PTR_DAT_04bb2df8 + 0x10;
            local_1b0 = 0x15;
            local_1ac[0] = local_1ac[0] & 0xff00;
            local_180 = 0x40;
            local_13d = 0;
            local_17c[0] = 0;
            local_1ac[10] = 0xffff;
            local_1ac[0xb] = 0xffff;
            local_1ac[2] = 0xffff;
            local_1ac[3] = 0xffff;
            local_1ac[4] = 0;
            local_1ac[5] = 0;
            local_1ac[6] = 0;
            local_1ac[7] = 0;
            local_1ac[8] = 0xffff;
            local_1ac[9] = 0xffff;
            puStack_188 = local_17c;
            puStack_130 = local_124;
            local_190 = PTR_DAT_04bb2bc0 + 0x10;
            local_128 = 0x40;
            local_e5 = 0;
            local_124[0] = 0;
            local_98 = *(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90) + 0x20;
            local_a0[0] = 10;
            local_138 = local_190;
            local_d8 = puStack_1b8;
            FUN_006f5e38(&local_1c0);
            local_78 = 0;
            uStack_70 = 0;
            local_80 = 0;
            local_68 = 1;
            local_64 = 0;
            local_90 = PTR_DAT_04bc0cd8 + 0x10;
            uStack_88 = 0;
            FUN_02906b00(&local_90,&local_1c0,local_a0);
            __dest = *(undefined2 **)(lVar9 + 0x130);
            (**(code **)(local_e0 + 0x18))(&local_e0);
            __src = local_d8;
            if (__dest != local_d8) {
              (**(code **)(local_e0 + 0x18))(&local_e0);
              lVar5 = 0;
              do {
                if (local_d8[lVar5] == 0) goto LAB_01d7d04c;
                if (local_d8[lVar5 + 1] == 0) {
                  lVar5 = lVar5 + 1;
                  goto LAB_01d7d04c;
                }
                if (local_d8[lVar5 + 2] == 0) {
                  lVar5 = lVar5 + 2;
                  goto LAB_01d7d04c;
                }
                lVar5 = lVar5 + 3;
              } while (lVar5 != 0x80001);
              lVar5 = 0;
LAB_01d7d04c:
              uVar2 = (uint)lVar5;
              if (*(int *)(lVar9 + 0x138) <= (int)(uint)lVar5) {
                uVar2 = *(int *)(lVar9 + 0x138) - 1;
              }
              uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              memcpy(__dest,__src,uVar8);
              *(undefined2 *)((long)__dest + uVar8) = 0;
            }
            (**(code **)(*plVar1 + 0x18))(plVar1);
            if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8),
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)();
            }
          }
        }
      }
    }
  }
  return;
}

