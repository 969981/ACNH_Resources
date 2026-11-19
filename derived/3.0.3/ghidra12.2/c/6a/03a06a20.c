
void FUN_03a06a20(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long local_e0;
  undefined *local_c8;
  char *local_c0;
  long lStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined **local_80;
  long lStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar17 = *(long *)(param_1 + 0x110);
  uVar10 = param_3;
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    uVar10 = 0;
  }
  lVar15 = lVar17 + (long)(int)uVar10 * 0x430;
  if ((*(byte *)(lVar15 + 0x3c8) & 1) == 0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x3420);
  plVar8 = *(long **)(lVar15 + 0x318);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
    FUN_038e77e4(*(undefined8 *)(lVar15 + 800),param_2,*(undefined8 *)(lVar15 + 0x318));
  }
  plVar8 = *(long **)(param_1 + 0x5590);
  uVar3 = *(uint *)(param_1 + 0x5598);
  if (plVar8 != (long *)0x0) {
    uVar11 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar11 = 0;
    }
    (**(code **)(*plVar8 + 0x50))
              (plVar8,param_2,0,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar11 * 0x430);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    uVar11 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(lVar16 + 8) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar11 = 0;
    }
    lVar12 = *(long *)(lVar16 + 0x10) + (ulong)uVar11 * 0x23c0;
    lVar9 = 0;
    if ((*(uint *)(lVar12 + 8) & 1) != 0) {
      lVar9 = lVar12 + 0x8c8;
    }
    FUN_03a9a9f0(param_1 + 0x2c00,param_2,lVar15,lVar9);
    plVar8 = *(long **)(param_1 + 0x5590);
    if (plVar8 != (long *)0x0) {
      uVar11 = (uint)*(byte *)(lVar15 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar15 + 8)) {
        uVar11 = 0;
      }
      (**(code **)(*plVar8 + 0x50))
                (plVar8,param_2,2,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar11 * 0x430);
    }
    lVar9 = *(long *)(param_1 + 0x2eb0);
    if (lVar9 != 0) {
      bVar4 = *(byte *)(lVar15 + 8);
      if ((((*(char *)(*(long *)(param_1 + 0x2c08) + 0x8b0) == '\0') ||
           (lVar12 = *(long *)(param_1 + 0x2e88), lVar12 == 0)) ||
          (*(char *)(lVar12 + 0x7d8) == '\0')) ||
         ((*(uint *)(lVar12 + 8) >> (ulong)(bVar4 & 0x1f) & 1) == 0)) {
        FUN_03aa4e80(lVar9,param_2,bVar4,*(undefined8 *)(lVar15 + 0x318),
                     *(undefined8 *)(lVar15 + 800),0);
      }
      else {
        FUN_03aa4ff0(lVar9,param_2,bVar4,*(undefined8 *)(lVar15 + 0x318),
                     *(undefined8 *)(lVar15 + 800),0);
      }
    }
    uVar11 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(lVar16 + 8) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar11 = 0;
    }
    FUN_03a64998(param_1 + 0x2ee8,param_2,lVar15,
                 *(long *)(lVar16 + 0x10) + (ulong)uVar11 * 0x23c0 + 0xec8);
    uVar11 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(lVar16 + 8) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar11 = 0;
    }
    lVar9 = *(long *)(lVar16 + 0x10) + (ulong)uVar11 * 0x23c0;
    FUN_03a64a64(param_1 + 0x2ee8,param_2,lVar15,lVar9 + 0x708,lVar9 + 0xec8);
  }
  if (*(int *)(*(long *)(param_1 + 0x118) + 0x11e0) == 1) {
    FUN_03a06928(param_1,param_2,param_3);
  }
  FUN_03a4f7f0(lVar15,param_2,lVar16,7,0,0,0);
  lVar9 = *(long *)(*(long *)(param_1 + 0x3420) + 0x10);
  uVar11 = (uint)*(byte *)(lVar15 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar15 + 8)) {
    uVar11 = 0;
  }
  lVar12 = lVar9 + (ulong)uVar11 * 0x23c0;
  local_e0 = lVar12 + 0x7e8;
  if ((*(byte *)(param_1 + 0x4698) >> 3 & 1) != 0) {
    uVar11 = *(uint *)(lVar9 + (ulong)uVar11 * 0x23c0 + 8);
    if ((uVar11 >> 0xb & 1) == 0) {
      if ((uVar11 & 1) == 0) {
        if ((uVar11 & 0x1000) != 0) {
          local_e0 = lVar12 + 0xfa8;
        }
      }
      else {
        local_e0 = lVar12 + 0x8c8;
      }
    }
    else {
      local_e0 = lVar12 + 0x1088;
    }
  }
  lVar9 = *(long *)(param_1 + 0x4e78);
  cVar5 = *(char *)(lVar17 + (long)(int)uVar10 * 0x430 + 0x3ca);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x20000000);
  lVar17 = *(long *)(param_1 + 0x118);
  iVar14 = (int)cVar5;
  if (*(uint *)(param_1 + 0x4e70) <= (uint)(int)cVar5) {
    iVar14 = 0;
  }
  if ((*(char *)(lVar17 + 0x890) == '\0') ||
     ((lVar12 = lVar9 + (long)iVar14 * 0x3d8,
      *(int *)(lVar12 + 0x35c) < 1 || (*(uint *)(lVar12 + 0x33c) & 0x20000000) == 0 &&
      ((lVar12 = lVar9 + (long)iVar14 * 0x3d8, *(int *)(lVar12 + 0x39c) < 1 ||
       ((*(uint *)(lVar12 + 0x37c) & 0x20000091) == 0)))))) goto LAB_03a06f08;
  plVar8 = *(long **)(param_1 + 0x5590);
  if (plVar8 != (long *)0x0) {
    uVar10 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar10 = 0;
    }
    (**(code **)(*plVar8 + 0x50))
              (plVar8,param_2,1,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar10 * 0x430);
    lVar17 = *(long *)(param_1 + 0x118);
  }
  if (*(char *)(lVar17 + 0x1aa0) != '\0') {
    if ((((*(byte *)(param_1 + 0x55a0) & 1) != 0) &&
        (*(char *)(*(long *)(param_1 + 0x2c08) + 0x8b0) != '\0')) &&
       ((lVar17 = *(long *)(param_1 + 0x2e88), lVar17 != 0 && (*(char *)(lVar17 + 0x7d8) != '\0'))))
    {
      bVar4 = *(byte *)(lVar15 + 8);
      if (((*(uint *)(lVar17 + 8) >> (ulong)(bVar4 & 0x1f) & 1) != 0) &&
         ((*(char *)(lVar17 + 0x238) != '\0' || *(char *)(lVar17 + 0x198) != '\0' ||
          (*(char *)(lVar17 + 0x2d8) != '\0')))) {
        uVar11 = *(uint *)(*(long *)(param_1 + 0x3420) + 8);
        uVar10 = (uint)bVar4;
        if (uVar11 < bVar4 || uVar11 == uVar10) {
          uVar10 = 0;
        }
        lVar17 = *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar10 * 0x23c0;
        if (((*(long *)(lVar17 + 0x6e0) != 0) || (*(int *)(lVar17 + 0x6d8) != 0)) ||
           (*(int *)(lVar17 + 0x6dc) != 0)) {
          *(undefined8 *)(lVar17 + 0x6d8) = 0;
          puVar2 = (uint *)(lVar17 + 0x6c8);
          *(undefined8 *)(lVar17 + 0x6e0) = 0;
          *(undefined8 *)(lVar17 + 0x6e8) = 0;
          do {
            local_e0 = 0;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_03a06e44;
        }
      }
    }
    local_e0 = 0;
  }
LAB_03a06e44:
  lVar17 = lVar9 + (long)iVar14 * 0x3d8;
  if (*(int *)(lVar17 + 0x39c) < 1 || (*(uint *)(lVar17 + 0x37c) & 0x81) == 0) {
LAB_03a06ec8:
    plVar8 = *(long **)(lVar15 + 0x318);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
      FUN_038e77e4(*(undefined8 *)(lVar15 + 800),param_2,*(undefined8 *)(lVar15 + 0x318));
    }
  }
  else {
    FUN_03af9610(*(undefined8 *)(param_1 + 0x3420),param_2,*(undefined1 *)(lVar15 + 8));
    plVar8 = *(long **)(lVar15 + 0x318);
    uVar10 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar10 = 0;
    }
    *(ulong *)(lVar15 + 0xa8) =
         *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar10 * 0x23c0 + 0xec8;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
      FUN_038e77e4(*(undefined8 *)(lVar15 + 800),param_2,*(undefined8 *)(lVar15 + 0x318));
      goto LAB_03a06ec8;
    }
  }
  FUN_03b0ca20(lVar9 + (long)iVar14 * 0x3d8 + 0x318,param_2,lVar15,&local_c8,1);
LAB_03a06f08:
  FUN_03a4f7f0(lVar15,param_2,lVar16,9,0,0,0);
  lVar17 = *(long *)(param_1 + 0x4ee8);
  if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x11) & 1) != 0)) {
    local_a4 = 0;
    local_ac = 0xb00000000;
    local_84 = 0;
    local_9c = 0xf0000ffff;
    lStack_b8 = *(long *)(lVar15 + 1000) + 0x40;
    local_b0 = 0x20000730;
    local_c0 = "Model(Visualize/Xlu)";
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_94 = 1;
    local_8c = 0xffffffffffffffff;
    local_70 = &LAB_03a50d30;
    uStack_68 = 0;
    local_80 = &PTR_LAB_04b6e220;
    lStack_78 = lVar17;
    FUN_039eec04(lVar15,param_2,&local_c8);
  }
  bVar4 = *(byte *)(lVar15 + 8);
  uVar10 = (uint)bVar4;
  if (*(uint *)(param_1 + 0x108) <= (uint)bVar4) {
    uVar10 = 0;
  }
  lVar17 = *(long *)(param_1 + 0x110) + (ulong)uVar10 * 0x430;
  if ((*(byte *)(lVar17 + 0x3c8) >> 3 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x110) + (ulong)uVar10 * 0x430;
    FUN_03ab3890(param_1 + 0x15f8,param_2,lVar9,1);
    lVar16 = *(long *)(param_1 + 0x4af0);
    if ((lVar16 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x5d0) != '\0')) {
      lVar12 = *(long *)(lVar16 + 0x20);
      uVar10 = (uint)*(byte *)(lVar9 + 8);
      if (*(uint *)(lVar16 + 0x18) <= (uint)*(byte *)(lVar9 + 8)) {
        uVar10 = 0;
      }
      lVar13 = lVar12 + (ulong)uVar10 * 0x970;
      if (*(long *)(lVar13 + 0x550) != 0) {
        FUN_039499cc(DAT_05ae90c0);
        *(undefined8 *)(lVar13 + 0x550) = 0;
        if ((*(uint *)(lVar16 + 0xc) & 1) != 0) {
          *(uint *)(lVar16 + 0xc) = *(uint *)(lVar16 + 0xc) | 2;
        }
      }
      lVar12 = lVar12 + (ulong)uVar10 * 0x970;
      uVar11 = *(uint *)(lVar12 + 0x8d8);
      uVar10 = uVar11 | 2;
      if ((uVar11 & 4) != 0) {
        uVar10 = uVar11 & 0xfffffff8;
      }
      *(uint *)(lVar12 + 0x8d8) = uVar10;
    }
    if (((*(long *)(param_1 + 0x4b00) != 0) &&
        (*(char *)(*(long *)(param_1 + 0x46b8) + 0x690) != '\0')) &&
       ((*(byte *)(lVar9 + 0x402) & 1) != 0)) {
      FUN_03a8c7e8(*(long *)(param_1 + 0x4b00),*(undefined1 *)(lVar9 + 8));
    }
    lVar16 = *(long *)(param_1 + 0x4ad0);
    if ((lVar16 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x550) != '\0')) {
      uVar10 = (uint)*(byte *)(lVar9 + 8);
      if (*(uint *)(lVar16 + 0x1d0) <= (uint)*(byte *)(lVar9 + 8)) {
        uVar10 = 0;
      }
      plVar8 = (long *)(*(long *)(lVar16 + 0x1d8) + (ulong)uVar10 * 0x3b0);
      if (*plVar8 != 0) {
        FUN_039499cc(DAT_05ae90c0);
        *plVar8 = 0;
      }
    }
    puVar7 = PTR_DAT_04bbd510;
    lVar16 = *(long *)(param_1 + 0x31a8);
    pbVar1 = (byte *)(lVar17 + 0x3c8);
    if (((lVar16 != 0) && (*(char *)(*(long *)(param_1 + 0x2ef0) + 0x790) != '\0')) &&
       (*(char *)(lVar16 + 0x4d0) != '\0')) {
      uVar10 = (uint)*(byte *)(lVar9 + 8);
      if (*(uint *)(lVar16 + 0x230) <= (uint)*(byte *)(lVar9 + 8)) {
        uVar10 = 0;
      }
      if ((*(char *)(*(long *)(lVar16 + 0x238) + (ulong)uVar10 * 0x6d0) != '\0') &&
         (iVar14 = *(int *)(lVar16 + 0x220), 0 < iVar14)) {
        lVar17 = *(long *)(lVar16 + 0x238) + (ulong)uVar10 * 0x6d0;
        uVar10 = 0;
        puVar2 = (uint *)(lVar17 + 0x18);
        plVar8 = (long *)(lVar17 + 0x20);
        do {
          uVar11 = uVar10;
          if (*puVar2 <= uVar10) {
            uVar11 = 0;
          }
          if (*(long *)(*plVar8 + (ulong)uVar11 * 8) != 0) {
            FUN_039499cc(*(undefined8 *)puVar7);
            uVar11 = uVar10;
            if (*puVar2 <= uVar10) {
              uVar11 = 0;
            }
            *(undefined8 *)(*plVar8 + (ulong)uVar11 * 8) = 0;
            iVar14 = *(int *)(lVar16 + 0x220);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar14);
      }
    }
    *pbVar1 = *pbVar1 & 0xf7;
    bVar4 = *(byte *)(lVar15 + 8);
  }
  FUN_03af8c88(*(undefined8 *)(param_1 + 0x3420),bVar4,0x607fe);
  uVar10 = (uint)*(byte *)(lVar15 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= (uint)*(byte *)(lVar15 + 8)) {
    uVar10 = 0;
  }
  FUN_039d3574(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar10 * 0x23c0 + 0x1fa8));
  lVar17 = *(long *)(param_1 + 0x2ea0);
  if (((lVar17 != 0) && (*(char *)(*(long *)(param_1 + 0x2c08) + 0x930) != '\0')) &&
     (*(char *)(lVar17 + 0x48) != '\0')) {
    bVar4 = *(byte *)(lVar15 + 8);
    uVar18 = *(undefined8 *)(lVar15 + 0x318);
    lVar16 = *(long *)(lVar17 + 0x188);
    uVar11 = (uint)bVar4;
    uVar10 = uVar11;
    if (*(uint *)(lVar17 + 0x180) <= (uint)bVar4) {
      uVar10 = 0;
    }
    FUN_03a9e6d0(lVar17,param_2,bVar4,uVar18,0);
    FUN_03a9eeb0(lVar17,param_2,uVar11);
    FUN_03a9f890(lVar17,param_2,uVar11,uVar18,0);
    *(undefined1 *)(lVar16 + (ulong)uVar10 * 0xd70 + 0xd68) = 1;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x2eb8);
    if ((lVar17 != 0) && (*(char *)(*(long *)(param_1 + 0x2c08) + 0x8f0) != '\0')) {
      bVar4 = *(byte *)(lVar15 + 8);
      lVar16 = *(long *)(*(long *)(lVar15 + 0x318) + 0x20) + 8;
      if (((*(char *)(*(long *)(param_1 + 0x2c08) + 0x8b0) == '\0') ||
          ((lVar9 = *(long *)(param_1 + 0x2e88), lVar9 == 0 || (*(char *)(lVar9 + 0x7d8) == '\0'))))
         || ((*(uint *)(lVar9 + 8) >> (ulong)(bVar4 & 0x1f) & 1) == 0)) {
        FUN_03aa9c6c(lVar17,param_2,bVar4,*(long *)(lVar15 + 0x318),*(undefined8 *)(lVar15 + 800),
                     lVar16,2,2);
      }
      else {
        FUN_03aa9de0(lVar17,param_2,bVar4,lVar16,2,2);
      }
    }
    FUN_03a9aa74(param_1 + 0x2c00,param_2,lVar15,local_e0);
    FUN_03a64880(param_1 + 0x2ee8,param_2,lVar15);
  }
  plVar8 = *(long **)(param_1 + 0x5590);
  if (plVar8 != (long *)0x0) {
    uVar10 = (uint)*(byte *)(lVar15 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar15 + 8)) {
      uVar10 = 0;
    }
    (**(code **)(*plVar8 + 0x50))
              (plVar8,param_2,3,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar10 * 0x430);
  }
  FUN_03af8c88(*(undefined8 *)(param_1 + 0x3420),param_3,0xffffe7fe);
  return;
}

