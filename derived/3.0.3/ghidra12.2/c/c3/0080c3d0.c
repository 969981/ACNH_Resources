
void FUN_0080c3d0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined1 auStack_178e [2];
  undefined1 auStack_178c [2];
  undefined1 auStack_178a [2];
  ulong local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  int local_176c;
  long local_1768;
  long lStack_1760;
  int local_1758;
  undefined1 auStack_174e [2];
  undefined1 auStack_174c [2];
  undefined1 auStack_174a [2];
  short local_1748 [4];
  long local_1740;
  long lStack_1738;
  ushort local_a4 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  int iStack_70;
  uint local_6c;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar9 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_2), lVar9 != 0)) {
    if (*(long **)(lVar9 + 0x28) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28);
      uVar11 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar10)();
      }
    }
    lVar1 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    local_a0 = *(undefined8 *)(lVar1 + 0xc138);
    uStack_98 = *(undefined8 *)(lVar1 + 0xc140);
    local_90 = *(undefined8 *)(lVar1 + 0xc148);
    local_88 = *(undefined4 *)(lVar1 + 0xc150);
    local_84 = (int)*(undefined8 *)(lVar1 + 0xc154);
    uStack_80 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0xc154) >> 0x20);
    local_7c = (undefined4)*(undefined8 *)(lVar1 + 0xc15c);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0xc15c) >> 0x20);
    local_6c = *(uint *)(lVar1 + 0xc16c);
    local_74 = (undefined4)*(undefined8 *)(lVar1 + 0xc164);
    iStack_70 = (int)((ulong)*(undefined8 *)(lVar1 + 0xc164) >> 0x20);
    if (1 < local_6c) {
      local_6c = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    puVar6 = PTR_DAT_04bb3170;
    puVar5 = PTR_DAT_04bb3128;
    puVar4 = PTR_DAT_04bb3120;
    lVar9 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 0) goto LAB_0080c54c;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080c54c:
      local_a4[0] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_a4[0] = (ushort)lVar9 |
                    (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb);
      FUN_007ef010(auStack_174a,local_a4);
      FUN_007e4920(local_1748,auStack_174a);
      lVar1 = local_1740;
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        if (local_1740 != 0) {
          lVar19 = param_1 + 0x28b38 + lVar9 * 0x2a8;
          lVar13 = *(long *)(local_1740 + 0x28);
          if (lVar13 == 0) {
            FUN_027c1640(*(long *)(local_1740 + 0x10) + *(long *)(local_1740 + 8),lVar19);
          }
          else {
            if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
              plVar12 = *(long **)(lVar13 + 0x20);
joined_r0x0080c640:
              if (plVar12 != (long *)0x0) {
                local_1788 = *(ulong *)(lVar1 + 8);
                uStack_1780 = *(undefined8 *)(lVar1 + 0x10);
                local_1778 = 0x2a8;
                (**(code **)(*plVar12 + 0x20))(plVar12,&local_1788);
              }
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
              uVar11 = uVar11 & 0xffffffff;
              if (*(long *)(lVar1 + 0x28) != 0) {
                plVar12 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
                goto joined_r0x0080c640;
              }
            }
            FUN_027c1640(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),lVar19);
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
          }
        }
        local_1788 = CONCAT44(local_1788._4_4_,(int)*(char *)(param_1 + 0x73ee0 + lVar9));
        FUN_007e5260(local_1748,&local_1788);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 100);
    lVar9 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 1) goto LAB_0080c6fc;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080c6fc:
      local_a4[0] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_a4[0] = (ushort)lVar9 |
                    (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb);
      FUN_007ef010(auStack_174c,local_a4);
      FUN_007e4920(local_1748,auStack_174c);
      lVar1 = lStack_1738;
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        if (lStack_1738 != 0) {
          lVar13 = *(long *)(lStack_1738 + 0x28);
          if (lVar13 == 0) {
            uVar11 = 0;
          }
          else {
            if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
              plVar12 = *(long **)(lVar13 + 0x20);
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
              uVar11 = uVar11 & 0xffffffff;
              if (*(long *)(lVar1 + 0x28) == 0) goto LAB_0080c7c4;
              plVar12 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
            }
            if (plVar12 != (long *)0x0) {
              local_1788 = *(ulong *)(lVar1 + 8);
              uStack_1780 = *(undefined8 *)(lVar1 + 0x10);
              local_1778 = 0x8a8;
              (**(code **)(*plVar12 + 0x20))(plVar12,&local_1788);
            }
          }
LAB_0080c7c4:
          puVar18 = (undefined4 *)(param_1 + 0x394d8 + lVar9 * 0x8a8);
          puVar2 = (undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
          *puVar2 = *puVar18;
          puVar2[1] = puVar18[1];
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar18 + 4);
          uVar14 = *(undefined8 *)(puVar18 + 6);
          uVar15 = *(undefined8 *)(puVar18 + 8);
          uVar16 = *(undefined8 *)(puVar18 + 0xc);
          *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar18 + 10);
          *(undefined8 *)(puVar2 + 0xc) = uVar16;
          *(undefined8 *)(puVar2 + 6) = uVar14;
          *(undefined8 *)(puVar2 + 8) = uVar15;
          uVar16 = *(undefined8 *)(puVar18 + 0x12);
          uVar14 = *(undefined8 *)(puVar18 + 0xe);
          uVar15 = *(undefined8 *)(puVar18 + 0x10);
          *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar18 + 0x14);
          *(undefined8 *)(puVar2 + 0x10) = uVar15;
          *(undefined8 *)(puVar2 + 0x12) = uVar16;
          *(undefined8 *)(puVar2 + 0xe) = uVar14;
          uVar14 = *(undefined8 *)(puVar18 + 0x15);
          uVar15 = *(undefined8 *)(puVar18 + 0x17);
          *(undefined8 *)(puVar2 + 0x19) = *(undefined8 *)(puVar18 + 0x19);
          *(undefined8 *)(puVar2 + 0x17) = uVar15;
          *(undefined8 *)(puVar2 + 0x15) = uVar14;
          uVar17 = puVar18[0x1b];
          if (1 < uVar17) {
            uVar17 = 0;
          }
          puVar2[0x1b] = uVar17;
          *(undefined1 *)(puVar2 + 0x1c) = *(undefined1 *)(puVar18 + 0x1c);
          *(undefined1 *)((long)puVar2 + 0x71) = *(undefined1 *)((long)puVar18 + 0x71);
          *(undefined2 *)((long)puVar2 + 0x72) = *(undefined2 *)((long)puVar18 + 0x72);
          uVar14 = *(undefined8 *)(puVar18 + 0x20);
          *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(puVar18 + 0x1e);
          *(undefined8 *)(puVar2 + 0x20) = uVar14;
          uVar16 = *(undefined8 *)(puVar18 + 0x26);
          uVar14 = *(undefined8 *)(puVar18 + 0x22);
          uVar15 = *(undefined8 *)(puVar18 + 0x24);
          *(undefined8 *)((long)puVar2 + 0x9d) = *(undefined8 *)((long)puVar18 + 0x9d);
          *(undefined8 *)(puVar2 + 0x24) = uVar15;
          *(undefined8 *)(puVar2 + 0x26) = uVar16;
          *(undefined8 *)(puVar2 + 0x22) = uVar14;
          memcpy((void *)((long)puVar2 + 0xa5),(void *)((long)puVar18 + 0xa5),0x800);
          uVar3 = *(undefined1 *)((long)puVar18 + 0x8a5);
          *(undefined2 *)((long)puVar2 + 0x8a6) = 0;
          *(undefined1 *)((long)puVar2 + 0x8a5) = uVar3;
          FUN_027c1b80(puVar2);
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
        }
        local_1788 = CONCAT44(local_1788._4_4_,(int)*(char *)(param_1 + 0x73f44 + lVar9));
        FUN_007e5260(local_1748,&local_1788);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 100);
    iVar7 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 0) goto LAB_0080c978;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080c978:
      local_a4[0] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_a4[0] = (ushort)iVar7 |
                    (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb);
      FUN_007ef010(auStack_174e,local_a4);
      FUN_007e4920(local_1748,auStack_174e);
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        uVar11 = FUN_007e87a0(local_1748);
        if ((uVar11 & 1) == 0) {
          FUN_007e6230(&local_1788,local_1748);
          if ((local_84 == local_176c) &&
             ((local_1768 == CONCAT44(local_7c,uStack_80) &&
              lStack_1760 == CONCAT44(local_74,uStack_78)) && local_1758 == iStack_70)) {
            FUN_007e64e0(local_1748,&local_a0);
          }
        }
        else {
          iVar8 = FUN_007e4d10(local_1748);
          if (iVar8 == -1) {
            uVar11 = FUN_007e87a0(local_1748);
            if (((uVar11 & 1) != 0) && (iVar8 = FUN_007e4d10(local_1748), iVar8 == -1)) {
              FUN_007e64e0(local_1748,&DAT_04ccaca0);
            }
            goto LAB_0080c938;
          }
        }
        FUN_007e5260(local_1748,param_2);
      }
LAB_0080c938:
      iVar7 = iVar7 + 1;
    } while (iVar7 != 100);
    iVar7 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 1) goto LAB_0080cb0c;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080cb0c:
      local_a4[0] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_a4[0] = (ushort)iVar7 |
                    (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb);
      FUN_007ef010(auStack_178a,local_a4);
      FUN_007e4920(local_1748,auStack_178a);
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        uVar11 = FUN_007e87a0(local_1748);
        if ((uVar11 & 1) == 0) {
          FUN_007e6230(&local_1788,local_1748);
          if ((local_84 == local_176c) &&
             ((local_1768 == CONCAT44(local_7c,uStack_80) &&
              lStack_1760 == CONCAT44(local_74,uStack_78)) && local_1758 == iStack_70)) {
            FUN_007e64e0(local_1748,&local_a0);
          }
        }
        else {
          iVar8 = FUN_007e4d10(local_1748);
          if (iVar8 == -1) {
            uVar11 = FUN_007e87a0(local_1748);
            if (((uVar11 & 1) != 0) && (iVar8 = FUN_007e4d10(local_1748), iVar8 == -1)) {
              FUN_007e64e0(local_1748,&DAT_04ccaca0);
            }
            goto LAB_0080cac4;
          }
        }
        FUN_007e5260(local_1748,param_2);
      }
LAB_0080cac4:
      iVar7 = iVar7 + 1;
    } while (iVar7 != 100);
    iVar7 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 0) goto LAB_0080cc78;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080cc78:
      local_1788 = local_1788 & 0xffffffffffff0000;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_1788 = CONCAT62(local_1788._2_6_,
                            (ushort)iVar7 |
                            (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb)
                           );
      FUN_007ef010(auStack_178c,&local_1788);
      FUN_007e4920(local_1748,auStack_178c);
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        FUN_007e7b10(local_1748);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 100);
    iVar7 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar11 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar11 * 4) == 1) goto LAB_0080cd7c;
          uVar11 = uVar11 + 1;
        } while (*(uint *)puVar4 != uVar11);
      }
      uVar11 = 0;
LAB_0080cd7c:
      local_1788 = local_1788 & 0xffffffffffff0000;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00706e58(puVar4);
        __cxa_guard_release(puVar5);
      }
      uVar17 = (uint)uVar11;
      if (*(uint *)puVar4 <= uVar17) {
        uVar17 = 0;
      }
      local_1788 = CONCAT62(local_1788._2_6_,
                            (ushort)iVar7 |
                            (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar17 * 4) << 0xb)
                           );
      FUN_007ef010(auStack_178e,&local_1788);
      FUN_007e4920(local_1748,auStack_178e);
      if ((local_1748[0] != *(short *)puVar6) && (lStack_1738 != 0 || local_1740 != 0)) {
        FUN_007e7b10(local_1748);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 100);
  }
  return;
}

