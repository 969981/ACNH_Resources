
void FUN_039aedc0(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong local_150;
  uint uStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = PTR_DAT_04bb3490;
  if (((param_3 & 0xffff) != 0xffff) && ((param_3 & 0xffff0000) != 0xffff0000)) {
    uVar11 = (int)param_3 >> 0x10;
    if (param_3 << 0x10 != 0) {
      uVar11 = uVar11 + *(ushort *)(param_1 + (long)((int)(param_3 << 0x10) >> 0x10) * 2 + 0x9e);
    }
    if (*(uint *)(param_1 + 0x90) <= uVar11) {
      uVar11 = 0;
    }
    puVar16 = (undefined8 *)(*(long *)(param_1 + 0x98) + (long)(int)uVar11 * 0x18);
    iVar5 = *(int *)(puVar16 + 1);
    if (iVar5 != 0) {
      lVar12 = puVar16[2];
      if ((param_3 & 0xffff) == 4) {
        uVar13 = 0;
        puVar1 = PTR_DAT_04bb3498 + 0x10;
        puVar2 = PTR_DAT_04bd09b8 + 0x10;
        do {
          puVar14 = (undefined8 *)
                    **(undefined8 **)
                      (*(long *)(param_2 + 0x38) +
                      (long)*(short *)(lVar12 + (-(uVar13 >> 0x1f) & 0xfffffffe00000000 |
                                                uVar13 << 1)) * 8);
          if (((*PTR_DAT_04bb3490 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3488 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3490);
          }
          if ((puVar14 != (undefined8 *)0x0) &&
             (uVar9 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb3488), (uVar9 & 1) == 0)) {
            puVar14 = (undefined8 *)0x0;
          }
          plVar4 = (long *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0xe0));
          plVar4[3] = 0x3f80000000000000;
          plVar4[2] = 0;
          puVar3 = PTR_FUN_04bd09a0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 8) = 0;
          plVar4[9] = 0;
          plVar4[10] = 0;
          plVar4[0xb] = 0;
          plVar4[0xc] = 0;
          plVar4[0xd] = 0;
          *(undefined2 *)(plVar4 + 0xe) = 0;
          *(undefined4 *)((long)plVar4 + 0x74) = 0;
          plVar4[0xf] = 0;
          *plVar4 = (long)puVar2;
          plVar4[1] = (long)(plVar4 + 2);
          plVar4[4] = (long)puVar3;
          plVar4[5] = 0;
          lVar15 = *(long *)*puVar16;
          local_d8 = 0xffffffffffffffff;
          local_130 = 0;
          local_f8 = 0xffffffffffffffff;
          local_f0 = 0;
          local_e8 = 8;
          local_e0 = 0;
          uStack_148 = (uint)*(ushort *)(lVar15 + 0x5a);
          local_150 = (ulong)CONCAT24(*(undefined2 *)(lVar15 + 0x58),
                                      (uint)*(ushort *)(param_1 + 0xe4));
          local_140 = 0;
          local_138 = 0;
          local_128 = 8;
          local_120 = 0;
          local_118 = 0xffffffffffffffff;
          local_110 = 0;
          local_108 = 8;
          local_100 = 0;
          local_144._0_2_ = CONCAT11((*(ushort *)(lVar15 + 4) & 1) == 0,1);
          FUN_003aa384(&local_150);
          FUN_003aa444(plVar4,&local_150,*(undefined8 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0xe0));
          FUN_003aa550(plVar4,lVar15);
          (**(code **)(*plVar4 + 0x20))(plVar4,puVar14[0x1b]);
          FUN_003aab90(plVar4,puVar14 + 0x1b);
          plVar10 = *(long **)(param_1 + 0xc0);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x30))(plVar10,param_1,param_3,0,plVar4,puVar14);
          }
          uVar9 = uVar13 + 1;
          uVar13 = uVar9 & 0xffffffff;
        } while (iVar5 != (int)uVar9);
      }
      else {
        uVar13 = 0;
        puVar2 = PTR_DAT_04bb3498 + 0x10;
        puVar3 = PTR_DAT_04bd09c0 + 0x10;
        do {
          puVar14 = (undefined8 *)
                    **(undefined8 **)
                      (*(long *)(param_2 + 0x38) +
                      (long)*(short *)(lVar12 + (-(uVar13 >> 0x1f) & 0xfffffffe00000000 |
                                                uVar13 << 1)) * 8);
          if (((*puVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar1), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3488 = puVar2;
            __cxa_guard_release(puVar1);
          }
          if ((puVar14 != (undefined8 *)0x0) &&
             (uVar9 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb3488), (uVar9 & 1) == 0)) {
            puVar14 = (undefined8 *)0x0;
          }
          plVar4 = (long *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0xe0));
          plVar4[3] = 0x3f80000000000000;
          plVar4[2] = 0;
          puVar6 = PTR_FUN_04bd09a0;
          plVar4[1] = (long)(plVar4 + 2);
          plVar4[6] = 0;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 8) = 0;
          plVar4[9] = 0;
          plVar4[10] = 0;
          plVar4[0x13] = 0;
          *plVar4 = (long)puVar3;
          plVar4[4] = (long)puVar6;
          plVar4[5] = 0;
          plVar4[0xb] = 0;
          plVar4[0xc] = 0;
          plVar4[0xd] = 0;
          plVar4[0xe] = 0;
          plVar4[0xf] = 0;
          plVar4[0x10] = 0;
          plVar4[0x11] = 0;
          plVar4[0x12] = 0;
          lVar15 = *(long *)*puVar16;
          local_70 = 0xffffffffffffffff;
          local_128 = 0;
          uVar7 = local_140._6_2_;
          local_140 = CONCAT26(local_140._6_2_,0x100000000);
          local_f0 = 0xffffffffffffffff;
          local_e8 = 0;
          local_e0 = 8;
          local_d8 = 0;
          local_d0 = 0xffffffffffffffff;
          uStack_c8 = 0;
          local_c0 = 8;
          uStack_b8 = 0;
          local_b0 = 0xffffffffffffffff;
          uStack_a8 = 0;
          local_a0 = 8;
          uStack_98 = 0;
          local_90 = 0xffffffffffffffff;
          uStack_88 = 0;
          local_80 = 8;
          uStack_78 = 0;
          uStack_148 = (uint)*(ushort *)(lVar15 + 0x68) + (uint)*(ushort *)(lVar15 + 0x66);
          local_144 = (uint)*(ushort *)(lVar15 + 0x6c);
          local_140 = CONCAT44(local_140._4_4_,(uint)*(ushort *)(lVar15 + 100));
          local_150 = (ulong)CONCAT24(*(undefined2 *)(lVar15 + 0x62),
                                      (uint)*(ushort *)(param_1 + 0xe6));
          local_138 = 0;
          local_130 = 0;
          local_120 = 8;
          local_118 = 0;
          local_110 = 0xffffffffffffffff;
          local_108 = 0;
          local_100 = 8;
          local_f8 = 0;
          local_140 = CONCAT26(uVar7,CONCAT15((*(ushort *)(lVar15 + 4) & 1) == 0,
                                              (undefined5)local_140));
          FUN_003aac60(&local_150);
          FUN_003aad84(plVar4,&local_150,*(undefined8 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0xe0));
          FUN_003aaf10(plVar4,lVar15);
          (**(code **)(*plVar4 + 0x20))(plVar4,puVar14[0x1b]);
          FUN_003abf60(plVar4,puVar14 + 0x1b);
          plVar10 = *(long **)(param_1 + 0xc0);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10,param_1,param_3,0,plVar4,puVar14);
          }
          uVar9 = uVar13 + 1;
          uVar13 = uVar9 & 0xffffffff;
        } while (iVar5 != (int)uVar9);
      }
    }
  }
  return;
}

