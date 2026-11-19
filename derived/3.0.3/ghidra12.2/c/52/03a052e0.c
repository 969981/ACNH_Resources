
void FUN_03a052e0(long param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *local_c8;
  char *pcStack_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  lVar19 = *(long *)(param_1 + 0x110);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    uVar2 = 0;
  }
  lVar17 = lVar19 + (long)(int)uVar2 * 0x430;
  if ((*(byte *)(lVar17 + 0x3c8) & 1) == 0) {
    return;
  }
  lVar16 = param_1 + 0x31d8;
  FUN_03a392b0(lVar16,param_2,lVar17,*(undefined8 *)(param_1 + 0x4ee8));
  lVar14 = *(long *)(param_1 + 0x3420);
  plVar9 = *(long **)(lVar17 + 0x318);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
    FUN_038e77e4(*(undefined8 *)(lVar17 + 800),param_2,*(undefined8 *)(lVar17 + 0x318));
  }
  puVar8 = PTR_DAT_04bbd8f8;
  lVar10 = *(long *)PTR_DAT_04bbd8f8;
  if ((((*(char *)(*(long *)(lVar10 + 0x18) + 0x59) != '\0') && (*(char *)(lVar10 + 0x39c) < '\0'))
      && ((*(byte *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3c9) >> 1 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3d0) + 0xd19) & 1) != 0)) {
    FUN_03b09e00(lVar10,param_2,lVar17,lVar14,1);
  }
  if (((*(char *)(*(long *)(param_1 + 0x31e0) + 0x6d0) == '\0') || (*(int *)(param_1 + 0x46a0) < 1))
     || ((lVar10 = *(long *)(lVar17 + 1000), lVar10 == 0 ||
         (*(int *)(lVar10 + 0x7c) < 1 || (*(uint *)(lVar10 + 0x5c) & 0x800) == 0)))) {
    FUN_03ab2cf0(param_1 + 0x15f8,param_2,lVar17);
  }
  if (((*(long *)(param_1 + 0x4ad0) != 0) &&
      (*(char *)(*(long *)(param_1 + 0x46b8) + 0x550) != '\0')) &&
     ((*(byte *)(lVar17 + 0x401) >> 5 & 1) != 0)) {
    FUN_03a8d580(*(long *)(param_1 + 0x4ad0),param_2,*(undefined1 *)(lVar17 + 8),
                 *(undefined8 *)(lVar17 + 0x318));
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x4ad0) + 0x1d0) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    *(ulong *)(lVar17 + 0x88) =
         *(long *)(*(long *)(param_1 + 0x4ad0) + 0x1d8) + (ulong)uVar13 * 0x3b0 + 0x238;
  }
  plVar9 = *(long **)(param_1 + 0x5590);
  lVar10 = param_1 + 0x46b0;
  if (plVar9 != (long *)0x0) {
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    (**(code **)(*plVar9 + 0x40))
              (plVar9,param_2,0,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
  }
  uVar11 = FUN_03a37c10(lVar16,param_2,lVar17);
  uVar12 = FUN_03a37d38(lVar16,param_2,lVar17);
  if ((uVar11 & 1) == 0) {
    if ((uVar12 & 1) != 0) goto LAB_03a057fc;
    bVar6 = false;
    bVar7 = false;
    plVar9 = *(long **)(param_1 + 0x5590);
  }
  else {
    FUN_03a37eb8(lVar16,param_2,lVar17);
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,2,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    if (*(char *)(*(long *)(param_1 + 0x118) + 0x770) != '\0') {
      FUN_03a37fd4(lVar16,param_2,lVar17);
    }
    FUN_03a3814c(lVar16,param_2,lVar17);
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,3,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    if ((((*(char *)(*(long *)(param_1 + 0x31e0) + 0x6d0) == '\0') ||
         (*(int *)(param_1 + 0x46a0) < 1)) || (lVar15 = *(long *)(lVar17 + 1000), lVar15 == 0)) ||
       ((*(int *)(lVar15 + 0x7c) < 1 || ((*(uint *)(lVar15 + 0x5c) >> 0xb & 1) == 0)))) {
      plVar9 = *(long **)(param_1 + 0x5590);
      if (plVar9 != (long *)0x0) {
        uVar13 = (uint)*(byte *)(lVar17 + 8);
        if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
          uVar13 = 0;
        }
        (**(code **)(*plVar9 + 0x40))
                  (plVar9,param_2,1,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
      }
      if (*(char *)(*(long *)(param_1 + 0x118) + 2000) != '\0') {
        FUN_03a38bb4(lVar16,param_2,lVar17,0);
      }
LAB_03a057fc:
      plVar9 = *(long **)(param_1 + 0x5590);
      if (plVar9 != (long *)0x0) {
        uVar13 = (uint)*(byte *)(lVar17 + 8);
        if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
          uVar13 = 0;
        }
        (**(code **)(*plVar9 + 0x40))
                  (plVar9,param_2,7,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
      }
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      uVar18 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar13 * 0x23c0 + 0x1fa8);
      FUN_039d2a00(uVar18,param_2);
      if ((*(byte *)(param_1 + 0x469a) >> 2 & 1) != 0) {
        FUN_039d36dc(uVar18,param_2,*(undefined1 *)(lVar17 + 8),param_1 + 0x31e8);
      }
      FUN_03a38d50(lVar16,param_2,lVar17);
      bVar6 = false;
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x118) + 2000) != '\0') {
        FUN_03a38490(lVar16,param_2,lVar17);
      }
      FUN_03a38674(lVar16,param_2,lVar17,lVar10);
      plVar9 = *(long **)(param_1 + 0x5590);
      if (plVar9 != (long *)0x0) {
        uVar13 = (uint)*(byte *)(lVar17 + 8);
        if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
          uVar13 = 0;
        }
        (**(code **)(*plVar9 + 0x40))
                  (plVar9,param_2,4,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
      }
      lVar15 = param_1 + 0x15f8;
      FUN_03ab2cf0(lVar15,param_2,lVar17);
      FUN_03ab35f8(lVar15,param_2,lVar17,lVar14);
      FUN_03a38934(lVar16,param_2,lVar17,lVar15);
      if (((*(char *)(*(long *)(param_1 + 0x1600) + 0xb90) != '\0') &&
          (*(char *)(*(long *)(param_1 + 0x1600) + 0x650) != '\0')) &&
         (lVar15 = *(long *)(param_1 + 0x1a18), lVar15 != 0)) {
        uVar13 = (uint)*(byte *)(lVar17 + 8);
        if (*(uint *)(lVar15 + 0x1d0) <= (uint)*(byte *)(lVar17 + 8)) {
          uVar13 = 0;
        }
        plVar9 = (long *)(*(long *)(lVar15 + 0x1d8) + (ulong)uVar13 * 0x648);
        if (*plVar9 != 0) {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
          *plVar9 = 0;
        }
        *(undefined8 *)(lVar17 + 0x98) = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0x40);
      }
      plVar9 = *(long **)(param_1 + 0x5590);
      bVar3 = *(byte *)(lVar17 + 8);
      if (plVar9 != (long *)0x0) {
        uVar13 = (uint)bVar3;
        if (*(uint *)(param_1 + 0x108) <= (uint)bVar3) {
          uVar13 = 0;
        }
        (**(code **)(*plVar9 + 0x40))
                  (plVar9,param_2,6,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
        bVar3 = *(byte *)(lVar17 + 8);
      }
      uVar13 = (uint)bVar3;
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)bVar3) {
        uVar13 = 0;
      }
      FUN_039d23e4(*(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar13 * 0x23c0 + 0x1fa8
                    ),param_2);
      if (((*(char *)(*(long *)(*(long *)puVar8 + 0x18) + 0x59) == '\0') ||
          ((*(byte *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3c9) >> 1 & 1) == 0)) ||
         ((*(byte *)(*(long *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3d0) + 0xd19) & 1) == 0)) {
        bVar6 = true;
      }
      else {
        FUN_03b09e00(*(long *)puVar8,param_2,lVar17,lVar14,2);
        bVar6 = true;
      }
    }
    bVar7 = true;
    plVar9 = *(long **)(param_1 + 0x5590);
  }
  if (plVar9 != (long *)0x0) {
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    (**(code **)(*plVar9 + 0x40))
              (plVar9,param_2,8,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
  }
  if (bVar7) {
    if (!bVar6) {
      FUN_03a65000(param_1 + 0x2ee8,param_2,lVar17,lVar14,param_1 + 0x15f8);
    }
    lVar15 = *(long *)(param_1 + 0x1600);
    if (((*(char *)(lVar15 + 0xa10) != '\0') && (*(char *)(lVar15 + 0x4d0) != '\0')) &&
       (*(char *)(lVar15 + 0x1660) == '\0')) {
      bVar3 = *(byte *)(lVar17 + 8);
      if ((*(uint *)(param_1 + 0x1b48) & 1 << (ulong)(bVar3 & 0x1f)) != 0) {
        uVar13 = (uint)bVar3;
        if (*(uint *)(param_1 + 0x1a70) < (uint)bVar3 || *(uint *)(param_1 + 0x1a70) == uVar13) {
          uVar13 = 0;
        }
        lVar15 = *(long *)(param_1 + 0x1a78) + (ulong)uVar13 * 0xfc8;
        if (*(long *)(lVar15 + 0x810) != 0) {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
          *(undefined8 *)(lVar15 + 0x810) = 0;
        }
      }
    }
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,9,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    FUN_03a7f220(lVar10,param_2,lVar17,lVar14);
    FUN_03af8c88(lVar14,*(undefined1 *)(lVar17 + 8),0x20000);
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,10,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    lVar15 = *(long *)(param_1 + 0x4af0);
    if ((lVar15 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x5d0) != '\0')) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(lVar15 + 0x18) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      FUN_03a8010c(lVar10,param_2,lVar17,lVar14,
                   *(long *)(lVar15 + 0x20) + (ulong)uVar13 * 0x970 + 0x2b0);
    }
    lVar15 = param_1 + 0x15f8;
    if ((*(byte *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x401) >> 1 & 1) == 0) {
      FUN_03af8c88(lVar14,*(undefined1 *)(lVar17 + 8),4);
    }
    if (!bVar6) {
      FUN_03ab35f8(lVar15,param_2,lVar17,lVar14);
    }
    FUN_03ab3130(lVar15,param_2,lVar17,lVar14);
    if (*(char *)(*(long *)(param_1 + 0x118) + 0x610) != '\0') {
      FUN_03a64b24(param_1 + 0x2ee8,param_2,lVar17,lVar14,lVar15);
      if (*(char *)(*(long *)(param_1 + 0x2ef0) + 0x5f0) != '\0') {
        lVar15 = *(long *)(param_1 + 0x1a28);
        bVar3 = *(byte *)(lVar17 + 8);
        uVar13 = (uint)bVar3;
        if (*(uint *)(lVar15 + 0x1d0) <= (uint)bVar3) {
          uVar13 = 0;
        }
        FUN_03a64d80(param_1 + 0x2ee8,param_2,bVar3,lVar14,lVar15,
                     *(long *)(lVar15 + 0x1d8) + (ulong)uVar13 * 0x1340 + 0xf00);
      }
    }
    FUN_03a7f334(lVar10,param_2,lVar17);
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,0xb,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    if ((((*(char *)(*(long *)(param_1 + 0x31e0) + 0x6d0) == '\0') ||
         (*(int *)(param_1 + 0x46a0) < 1)) || (lVar15 = *(long *)(lVar17 + 1000), lVar15 == 0)) ||
       ((*(int *)(lVar15 + 0x7c) < 1 || ((*(uint *)(lVar15 + 0x5c) >> 0xc & 1) == 0))))
    goto LAB_03a05d88;
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar13 * 0x23c0 +
                      0x1fa8);
    FUN_039d332c(lVar15,param_2,0,2);
    *(long *)(lVar17 + 0x318) = lVar15 + 0x4a0;
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,0xc,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    local_ac = 0;
    uStack_a8 = 0;
    local_b0 = 0x1000;
    local_a4 = 0;
    uStack_a0 = 0;
    local_84 = 0;
    local_b8 = *(long *)(lVar17 + 1000) + 0x40;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_94 = 1;
    uStack_90 = 0;
    pcStack_c0 = "Model(Deferred Shading)";
    local_8c = 0xffffffff;
    uStack_88 = 0xffffffff;
    local_9c = 0xffff;
    uStack_98 = 0xf;
    local_80 = PTR_DAT_04bd1830 + 0x10;
    FUN_039eec04(lVar17,param_2,&local_c8);
    plVar9 = *(long **)(param_1 + 0x5590);
    if (plVar9 != (long *)0x0) {
      uVar13 = (uint)*(byte *)(lVar17 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
        uVar13 = 0;
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,param_2,0xd,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
    }
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar13 * 0x23c0 +
                      0x1fa8);
    if (*(long *)(lVar15 + 0x13d8) != 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
      *(undefined8 *)(lVar15 + 0x13d8) = 0;
      if (((*(long *)(lVar15 + 0x13c8) != 0) || (*(int *)(lVar15 + 0x13c0) != 0)) ||
         (*(int *)(lVar15 + 0x13c4) != 0)) {
        puVar1 = (uint *)(lVar15 + 0x13b0);
        *(undefined8 *)(lVar15 + 0x13c8) = 0;
        *(undefined8 *)(lVar15 + 0x13d0) = 0;
        *(undefined8 *)(lVar15 + 0x13c0) = 0;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar13 * 0x23c0 + 0x308
                     );
    *(long **)(lVar17 + 0x318) = plVar9;
LAB_03a05d90:
    (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
    FUN_038e77e4(*(undefined8 *)(lVar17 + 800),param_2,*(undefined8 *)(lVar17 + 0x318));
  }
  else {
LAB_03a05d88:
    plVar9 = *(long **)(lVar17 + 0x318);
    if (plVar9 != (long *)0x0) goto LAB_03a05d90;
  }
  if (*(char *)(*(long *)(param_1 + 0x118) + 0x710) != '\0') {
    local_b8 = *(long *)(lVar17 + 1000);
    local_94 = 1;
    uStack_90 = 0;
    local_a4 = 0;
    uStack_a0 = 0x1000040;
    local_8c = 0xffffffff;
    uStack_88 = 1;
    local_9c = 0xffff;
    uStack_98 = 0xf;
    local_ac = 0;
    uStack_a8 = 0;
    local_84 = 0;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c0 = "Model(Opa+AlphaMask)";
    local_b0 = 0x20000000;
    if ((*(uint *)(param_1 + 0x55a4) & 0x10000) != 0) {
      local_b0 = 0x20000200;
    }
    local_80 = PTR_DAT_04bd1830 + 0x10;
    FUN_039eec04(lVar17,param_2,&local_c8);
  }
  if (bVar6) {
    FUN_03a38e70(lVar16,lVar17,lVar10);
  }
  FUN_03a38f9c(lVar16,param_2,lVar17);
  lVar10 = *(long *)(param_1 + 0x118);
  if (*(char *)(lVar10 + 0x750) != '\0') {
    local_b8 = *(long *)(lVar17 + 1000);
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c0 = "Model(DepthSilhouette/ZOnly)";
    local_b0 = 1;
    local_ac = 0;
    uStack_a8 = 4;
    local_a4 = 0;
    uStack_a0 = 2;
    local_9c = 0xffff;
    uStack_98 = 0xf;
    local_94 = 1;
    uStack_90 = 0;
    local_8c = 0xffffffff;
    local_80 = PTR_DAT_04bd1830 + 0x10;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    FUN_039eec04(lVar17,param_2,&local_c8);
    lVar10 = *(long *)(param_1 + 0x118);
  }
  if (*(char *)(lVar10 + 0x710) != '\0') {
    local_b8 = *(long *)(lVar17 + 1000);
    uStack_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x40;
    local_9c = 0xffff;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c0 = "Model(AfterDepthSilhouette/Opa+AlphaMask)";
    local_b0 = 3;
    local_ac = 0;
    uStack_98 = 0xf;
    local_94 = 1;
    uStack_90 = 0;
    local_8c = 0xffffffff;
    local_80 = PTR_DAT_04bd1830 + 0x10;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    FUN_039eec04(lVar17,param_2,&local_c8);
    lVar10 = *(long *)(param_1 + 0x118);
  }
  if (*(char *)(lVar10 + 2000) != '\0') {
    uStack_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x40;
    local_9c = 0xffff;
    local_b8 = *(long *)(lVar17 + 1000) + 0x40;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = 0x10;
    local_ac = 0;
    pcStack_c0 = "Model(XluDepthFill)";
    uStack_98 = 0xf;
    local_94 = 1;
    uStack_90 = 0;
    local_8c = 0xffffffff;
    local_80 = PTR_DAT_04bd1830 + 0x10;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    FUN_039eec04(lVar17,param_2,&local_c8);
  }
  if (!bVar7) {
    FUN_03a38d50(lVar16,param_2,lVar17);
  }
  if (*(char *)(*(long *)(param_1 + 0x118) + 0x770) != '\0') {
    uStack_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x60;
    local_9c = 0xffff;
    local_b8 = *(long *)(lVar17 + 1000) + 0x40;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = 0x100;
    local_ac = 0;
    pcStack_c0 = "Model(XluSeal)";
    uStack_98 = 0xf;
    local_94 = 1;
    uStack_90 = 0;
    local_8c = 0xffffffff;
    local_80 = PTR_DAT_04bd1830 + 0x10;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    FUN_039eec04(lVar17,param_2,&local_c8);
  }
  lVar16 = *(long *)(param_1 + 0x4ee8);
  if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x11) & 1) != 0)) {
    local_b8 = *(long *)(lVar17 + 1000);
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c0 = "Model(Visualize/Opa)";
    local_b0 = 0x20000030;
    local_ac = 0;
    uStack_a8 = 0xb;
    local_a4 = 0;
    uStack_a0 = 0;
    local_9c = 0xffff;
    uStack_98 = 0xf;
    local_94 = 1;
    uStack_90 = 0;
    local_8c = 0xffffffff;
    local_68 = 0;
    puStack_70 = PTR_LAB_04bd18e8;
    local_80 = PTR_DAT_04bd18f0 + 0x10;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_78 = lVar16;
    FUN_039eec04(lVar17,param_2,&local_c8);
  }
  plVar9 = *(long **)(param_1 + 0x5590);
  if (plVar9 != (long *)0x0) {
    if (*(uint *)(param_1 + 0x108) <= param_3) {
      param_3 = 0;
    }
    (**(code **)(*plVar9 + 0x60))
              (plVar9,param_2,0,param_1,*(long *)(param_1 + 0x110) + (long)(int)param_3 * 0x430);
  }
  FUN_03af8c88(*(undefined8 *)(param_1 + 0x3420),*(undefined1 *)(lVar17 + 8),0x2003e);
  if (((*(char *)(*(long *)(param_1 + 0x1600) + 0x5f0) != '\0') &&
      (lVar16 = *(long *)(param_1 + 0x1a28), lVar16 != 0)) && (*(char *)(lVar16 + 0x468) != '\0')) {
    lVar10 = *(long *)(lVar16 + 0x1d8);
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(lVar16 + 0x1d0) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    lVar16 = lVar10 + (ulong)uVar13 * 0x1340;
    if (*(long *)(lVar16 + 0x3f8) != 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
      *(undefined8 *)(lVar16 + 0x3f8) = 0;
      *(undefined1 *)(lVar10 + (ulong)uVar13 * 0x1340 + 0xfe1) = 1;
    }
    *(undefined1 *)(lVar10 + (ulong)uVar13 * 0x1340 + 0xfe0) = 0;
    if (*(long *)(lVar17 + 0x198) != 0) {
      *(long *)(lVar17 + 0x40) = *(long *)(lVar17 + 0x198);
      *(undefined8 *)(lVar17 + 0x198) = 0;
    }
  }
  if (((*(char *)(*(long *)(param_1 + 0x1600) + 0xb90) != '\0') &&
      (*(char *)(*(long *)(param_1 + 0x1600) + 0x650) != '\0')) &&
     (lVar16 = *(long *)(param_1 + 0x1a18), lVar16 != 0)) {
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(lVar16 + 0x1d0) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    plVar9 = (long *)(*(long *)(lVar16 + 0x1d8) + (ulong)uVar13 * 0x648);
    if (*plVar9 != 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
      *plVar9 = 0;
    }
    *(undefined8 *)(lVar17 + 0x98) = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0x40);
  }
  plVar9 = *(long **)(param_1 + 0x5590);
  if (plVar9 != (long *)0x0) {
    uVar13 = (uint)*(byte *)(lVar17 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar17 + 8)) {
      uVar13 = 0;
    }
    (**(code **)(*plVar9 + 0x40))
              (plVar9,param_2,0xe,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar13 * 0x430);
  }
  lVar16 = *(long *)(param_1 + 0x4ad8);
  if (((lVar16 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x670) != '\0')) &&
     ((*(byte *)(lVar16 + 8) >> 6 & 1) != 0)) {
    bVar3 = *(byte *)(lVar17 + 8);
    uVar13 = (uint)bVar3;
    if (*(uint *)(lVar14 + 8) <= (uint)bVar3) {
      uVar13 = 0;
    }
    FUN_03a99740(lVar16,param_2,bVar3,*(long *)(lVar14 + 0x10) + (ulong)uVar13 * 0x23c0 + 0x708);
    plVar9 = *(long **)(lVar17 + 0x318);
    if (plVar9 == (long *)0x0) goto LAB_03a062cc;
    (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
    FUN_038e77e4(*(undefined8 *)(lVar17 + 800),param_2,*(undefined8 *)(lVar17 + 0x318));
  }
  plVar9 = *(long **)(lVar17 + 0x318);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
    FUN_038e77e4(*(undefined8 *)(lVar17 + 800),param_2,*(undefined8 *)(lVar17 + 0x318));
  }
LAB_03a062cc:
  lVar16 = *(long *)PTR_DAT_04bbd8f8;
  if ((((*(char *)(*(long *)(lVar16 + 0x18) + 0x59) != '\0') && (-1 < *(char *)(lVar16 + 0x39c))) &&
      ((*(byte *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3c9) >> 1 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar19 + (long)(int)uVar2 * 0x430 + 0x3d0) + 0xd19) & 1) != 0)) {
    FUN_03b09e00(lVar16,param_2,lVar17,lVar14,1);
  }
  return;
}

