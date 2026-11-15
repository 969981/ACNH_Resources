
undefined8 FUN_024f7f14(undefined4 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar10 = *(long *)puVar2;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      local_48 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar2 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
            lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar10 != 0) {
              local_38 = lVar10;
            }
          }
        }
      }
      iVar5 = FUN_01afcfa0(&local_48);
      if (((iVar5 != 0) && (puVar6 = (ushort *)FUN_01afd600(&local_48), puVar6 != (ushort *)0x0)) &&
         ((*puVar6 & 0x18) == 0x10)) {
        return 0;
      }
    }
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_024f8098:
    if (7 < *pbVar8) {
LAB_024f80a4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar9 = *(byte *)(lVar10 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar10 + 0x471);
          }
        }
        bVar9 = *pbVar8;
        bVar3 = 7 < bVar9;
        if (bVar3) {
          bVar9 = 0xff;
        }
        local_48 = (undefined **)CONCAT71(local_48._1_7_,bVar9);
        if (!bVar3) goto LAB_024f8124;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_024f8098;
      }
      goto LAB_024f80a4;
    }
  }
  bVar9 = *pbVar8;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_48 = (undefined **)CONCAT71(local_48._1_7_,bVar9);
LAB_024f8124:
  uVar7 = FUN_03422650(param_1,&local_48);
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4(param_1);
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_38 = 0;
        local_40 = *param_1;
        uStack_3c = param_1[1];
        local_48 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar2 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
              if (lVar10 != 0) {
                local_38 = lVar10;
              }
            }
          }
        }
        uVar7 = FUN_01af5064(&local_48,0xb);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_024f6c7c(), (uVar7 & 1) != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

