
void FUN_01375b10(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  byte bVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  byte local_84 [4];
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar13 = *(uint **)(param_1 + 2);
  if (puVar13 == (uint *)0x0) {
    return;
  }
  param_1[0] = 0;
  puVar4 = PTR_DAT_04bb37e0;
  param_1[1] = 0;
  uVar5 = *puVar13;
  if (uVar5 != 0) {
    lVar14 = *(long *)(puVar13 + 2);
    uVar15 = 0;
    do {
      puVar8 = (undefined2 *)(lVar14 + ((long)((ulong)uVar15 << 0x20) >> 0x1c));
      *puVar8 = *(undefined2 *)puVar4;
      *(undefined *)(puVar8 + 1) = puVar4[2];
      *(undefined *)((long)puVar8 + 3) = puVar4[3];
      uVar3 = *(undefined4 *)(puVar4 + 4);
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined4 *)(puVar8 + 2) = uVar3;
      uVar15 = uVar15 + 1;
    } while (uVar5 != uVar15);
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01375bf0:
    if (7 < *pbVar10) {
LAB_01375bfc:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar14 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar13 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar13 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar13 & 8) != 0) {
            pbVar10 = (byte *)(lVar14 + 0x471);
          }
        }
        local_84[0] = *pbVar10;
        if (local_84[0] < 8) goto LAB_01375c7c;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01375bf0;
      }
      goto LAB_01375bfc;
    }
  }
  local_84[0] = *pbVar10;
  if (7 < local_84[0]) {
    local_84[0] = 0xff;
  }
LAB_01375c7c:
  bVar12 = local_84[0];
  if (7 < local_84[0]) {
    bVar12 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar12);
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  if (lVar14 == 0) {
    return;
  }
  lVar16 = lVar14 + 0x194b0;
  if (*(long *)(lVar14 + 0x194b8) == 0) {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar11 = *(long **)(lVar16 + 0x178);
  }
  else {
    plVar11 = *(long **)(lVar14 + 0x19628);
  }
  if ((plVar11 == (long *)0x0) || ((undefined8 *)*plVar11 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (*(code *)**(undefined8 **)*plVar11)();
    uVar5 = uVar5 ^ 1;
  }
  uVar15 = *(uint *)(*(long *)(lVar16 + 0x160) + *(long *)(lVar16 + 0x158) + 72000);
  if (8999 < uVar15) {
    uVar15 = 9000;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar16 + 0x178) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  puVar4 = PTR_DAT_04bb43c0;
  if (uVar15 != 0) {
    uVar5 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar8 = (undefined2 *)FUN_0267ce80(local_84,uVar5);
      lVar14 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4();
      lVar16 = *(long *)puVar4;
      if (lVar16 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_78 = *puVar8;
          local_76 = *(undefined1 *)(puVar8 + 1);
          local_75 = *(undefined1 *)((long)puVar8 + 3);
          local_74 = *(undefined4 *)(puVar8 + 2);
          local_70 = (uint *)0x0;
          local_80 = puVar1;
          uVar6 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar4 != 0) {
            lVar14 = *(long *)(lVar16 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(puVar8);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                puVar13 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
                if (puVar13 != (uint *)0x0) {
                  local_70 = puVar13;
                }
              }
            }
          }
          uVar9 = FUN_01af0020(&local_80);
          if ((uVar9 & 1) == 0) {
            local_64 = 0x55;
            if (local_70 == (uint *)0x0) {
              local_68 = 0xbc;
            }
            else {
              uVar6 = *local_70;
              local_68 = 0;
              if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
                puVar13 = (uint *)((long)local_70 - (long)(ulong)uVar6);
                local_68 = 0;
                if (*puVar13 != 0) {
                  uVar6 = puVar13[1];
                  if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar13 + 10) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
                    if (lVar14 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar6 != 0) {
                        uVar2 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar6);
                      }
                      if (*puVar13 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
                         , local_68 < 0xbd)) goto LAB_01375f20;
                    }
                  }
                  local_68 = 0;
                }
              }
            }
LAB_01375f20:
            *param_1 = *param_1 + 1;
          }
          else {
            FUN_01372240(*(undefined8 *)(param_1 + 2),puVar8);
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar15 != uVar5);
  }
  return;
}

