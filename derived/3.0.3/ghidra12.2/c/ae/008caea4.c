
uint FUN_008caea4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  short local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb39b0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
LAB_008caf10:
    if (*pbVar8 < 8) goto LAB_008caf88;
LAB_008caf1c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008caf80:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_008caf88;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar11 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar9 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar8 = (byte *)(lVar11 + 0x471);
      }
    }
    local_34[0] = *pbVar8;
    if (7 < local_34[0]) goto LAB_008caf80;
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008caf10;
      }
      goto LAB_008caf1c;
    }
LAB_008caf88:
    local_34[0] = *pbVar8;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
  }
  FUN_0253395c(&local_3c,local_34,*(undefined4 *)(param_1 + 0x230));
  puVar5 = PTR_DAT_04bb43c0;
  if (local_3c != -2) {
    local_50 = local_3c;
    local_48 = 0;
    local_4e = local_3a;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_4c = local_38;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar5 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_3c);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar9 != (uint *)0x0 && (uVar6 = *puVar9, uVar6 != 0)) &&
            (puVar9 != (uint *)(ulong)uVar6)))) {
          puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
          if (((*puVar12 != 0) && (uVar6 = puVar12[1], uVar6 != 0)) &&
             ((ulong)(ushort)puVar12[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar6 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if (uVar1 < *(uint *)PTR_DAT_04bc00c8) {
                uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
                if (uVar2 < 0xbd) {
                  if (uVar2 - 0x21 < 3) {
                    if (0 < *(int *)(param_1 + 0x358)) goto LAB_008cb108;
                  }
                  else if (uVar2 == 0x78 && 0 < *(int *)(param_1 + 0x358)) {
LAB_008cb108:
                    if ((*(int *)(*(long *)puVar4 + 0x15c) == 0) ||
                       (uVar10 = (ulong)*(byte *)(*(long *)puVar4 + 0x158), 7 < uVar10)) {
                      puVar7 = (undefined4 *)
                               (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x360) + 0x20))();
                    }
                    else {
                      puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar10 * 0xc + 0xd88);
                    }
                    local_78 = *puVar7;
                    uStack_74 = puVar7[1];
                    local_70 = puVar7[2];
                    local_6c = 1;
                    local_68 = 0;
                    uStack_60 = 0;
                    uVar6 = FUN_008cf370(param_1,&local_78);
                    goto LAB_008cb154;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_008cb154:
  return uVar6 & 1;
}

