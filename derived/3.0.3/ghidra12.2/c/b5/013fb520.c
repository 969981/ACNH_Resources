
void FUN_013fb520(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  void *__s;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  byte bVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  ulong uVar23;
  uint local_818;
  uint local_814;
  undefined *local_810;
  undefined2 local_808;
  undefined1 local_806;
  undefined1 local_805;
  uint local_804;
  uint *local_800;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  byte local_84 [4];
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_78;
  uint local_6c [3];
  
  __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
  memset(__s,0,0x754);
  local_6c[0] = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < local_6c[0]) {
    local_6c[0] = 0;
  }
  uStack_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar14 = 0x17;
  if (0x12 < ((uint)((ulong)uStack_78 >> 0x20) & 0xff) - 5) {
    uVar14 = 4;
  }
  uStack_79 = (undefined1)((ulong)uStack_78 >> 0x38);
  _local_80 = CONCAT25(0x3b3b,CONCAT14(uVar14,(int)uStack_78));
  FUN_013f4bc0(param_1,param_2,&uStack_78,&local_80,local_6c,1,1);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if (lVar18 == 0) {
    bVar15 = *PTR_DAT_04bb32e0;
joined_r0x013fb64c:
    if (7 < bVar15) {
LAB_013fb650:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar15 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar15 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
          if (7 < bVar15) {
            puVar21 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar15 = *pbVar16;
        if (bVar15 < 8) goto LAB_013fb6bc;
      }
      bVar15 = *PTR_DAT_04bb5038;
      if (7 < bVar15) goto LAB_013fb7d4;
    }
  }
  else {
    pbVar16 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    bVar15 = *pbVar16;
    if (7 < bVar15) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar15 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x013fb64c;
      }
      goto LAB_013fb650;
    }
  }
LAB_013fb6bc:
  local_84[0] = bVar15;
  lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_84,1);
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  uVar7 = nn::os::GetSystemTick();
  local_9c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7f0,param_2 + 1,0x754);
  lVar9 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar23 = 0;
  do {
    if ((*(uint *)(lVar9 + (uVar23 >> 5) * 4) >> (ulong)((uint)uVar23 & 0x1f) & 1) != 0)
    goto LAB_013fb790;
    uVar7 = (uint)uVar23 + 1;
    uVar23 = (ulong)uVar7;
  } while (uVar7 != 15000);
  uVar23 = 0;
LAB_013fb790:
  lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar6 = PTR_DAT_04bc00c8;
  iVar22 = 15000;
  do {
    if ((*(uint *)(lVar10 + (ulong)(iVar22 - 1U >> 5) * 4) >> (ulong)(iVar22 - 1U & 0x1f) & 1) != 0)
    break;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  if (iVar22 != (int)uVar23) {
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar21 = (uint *)PTR_DAT_04bbfe58;
LAB_013fb9d0:
    puVar5 = PTR_DAT_04bb43c0;
    puVar19 = puVar21 + uVar23 * 2;
    if (0x752 < (uint)(uVar23 >> 3)) {
      puVar19 = puVar21;
    }
    puVar2 = (uint *)PTR_DAT_04bb37e0;
    if ((uint)uVar23 < 0x3a99) {
      puVar2 = puVar19;
    }
    local_808 = (undefined2)*puVar2;
    local_806 = *(undefined1 *)((long)puVar2 + 2);
    local_805 = *(undefined1 *)((long)puVar2 + 3);
    local_818 = *puVar2;
    local_814 = puVar2[1];
    local_800 = (uint *)0x0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    local_810 = puVar1;
    local_804 = local_814;
    uVar7 = FUN_0277d6c4(&local_808);
    if (*(long *)puVar5 == 0) {
LAB_013fbb40:
      local_818 = 0xbc;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_013fbb40;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_818);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
         (puVar19 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar19 == (uint *)0x0)) goto LAB_013fbb40;
      uVar7 = *puVar19;
      local_818 = 0;
      local_800 = puVar19;
      if ((uVar7 != 0) && (puVar19 != (uint *)(ulong)uVar7)) {
        puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar7);
        local_818 = 0;
        if (*puVar20 != 0) {
          uVar7 = puVar20[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar20 + lVar10 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar10 != 0) {
              uVar3 = 0;
              if ((ulong)uVar7 != 0) {
                uVar3 = (uint)((ulong)((long)puVar19 - lVar10) / (ulong)uVar7);
              }
              if (*puVar20 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar6) &&
                 (local_818 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
                 local_818 < 0xbd)) goto LAB_013fbb44;
            }
          }
          local_818 = 0;
        }
      }
    }
LAB_013fbb44:
    if ((local_818 - 0x60 < 0xb) && ((1 << (ulong)(local_818 - 0x60 & 0x1f) & 0x409U) != 0)) {
      local_818 = *puVar2;
      local_814 = puVar2[1];
      uVar8 = FUN_0277d6c4(&local_818);
      uVar11 = FUN_013f4ed0(param_1,uVar8);
      if ((uVar11 & 1) != 0) {
        if (lVar18 == 0) goto LAB_013fbc90;
        if (*(long *)(lVar18 + 0x194b8) == 0) {
          lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          plVar17 = *(long **)(lVar10 + 0x28);
          if (plVar17 != (long *)0x0) goto LAB_013fbbc4;
LAB_013fbbe0:
          uVar11 = 0;
        }
        else {
          plVar17 = *(long **)(lVar18 + 0x194d8);
          lVar10 = lVar18 + 0x194b0;
          if (plVar17 == (long *)0x0) goto LAB_013fbbe0;
LAB_013fbbc4:
          if ((undefined8 *)*plVar17 == (undefined8 *)0x0) goto LAB_013fbbe0;
          uVar11 = (*(code *)**(undefined8 **)*plVar17)();
          uVar11 = uVar11 & 0xffffffff;
        }
        local_818 = *puVar2;
        local_814 = puVar2[1];
        uVar12 = FUN_0277a1f4(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x11d58,&local_818)
        ;
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar13 != (undefined8 *)0x0))
        {
          (**(code **)*puVar13)();
        }
        puVar21 = (uint *)PTR_DAT_04bbfe58;
        if ((uVar12 & 1) != 0) goto LAB_013fbc90;
      }
      local_818 = *puVar2;
      local_814 = puVar2[1];
      lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
      uVar7 = FUN_0277d6c4(&local_818);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar4 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar4) =
             *(uint *)(lVar10 + lVar4) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
    }
LAB_013fbc90:
    do {
      uVar7 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar7;
      if (0x752 < uVar7 >> 3) {
        uVar7 = 0x3a95;
        goto LAB_013fbcc0;
      }
    } while ((*(uint *)(lVar9 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0);
    goto LAB_013fb9c8;
  }
LAB_013fb7d4:
  local_7f8 = (undefined *)0x8d8;
  FUN_0277d4ac(&local_7f8);
  FUN_0277dedc(&local_7f8);
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_0277d6c4(&local_7f8);
  if ((uVar7 >> 3 & 0x1fff) < 0x753) {
    lVar9 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
    *(uint *)(lVar18 + lVar9) = *(uint *)(lVar18 + lVar9) | 1 << (ulong)(uVar7 & 0x1f);
  }
  local_7f8 = (undefined *)0x8da;
  FUN_0277d4ac(&local_7f8);
  FUN_0277dedc(&local_7f8);
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_0277d6c4(&local_7f8);
  if ((uVar7 >> 3 & 0x1fff) < 0x753) {
    lVar9 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
    *(uint *)(lVar18 + lVar9) = *(uint *)(lVar18 + lVar9) | 1 << (ulong)(uVar7 & 0x1f);
  }
  local_7f8 = (undefined *)0x148;
  FUN_0277d4ac(&local_7f8);
  FUN_0277dedc(&local_7f8);
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_0277d6c4(&local_7f8);
  if ((uVar7 >> 3 & 0x1fff) < 0x753) {
    lVar9 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
    *(uint *)(lVar18 + lVar9) = *(uint *)(lVar18 + lVar9) | 1 << (ulong)(uVar7 & 0x1f);
  }
  local_7f8 = (undefined *)0x8ba;
  FUN_0277d4ac(&local_7f8);
  FUN_0277dedc(&local_7f8);
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_0277d6c4(&local_7f8);
  if ((uVar7 >> 3 & 0x1fff) < 0x753) {
    lVar9 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
    *(uint *)(lVar18 + lVar9) = *(uint *)(lVar18 + lVar9) | 1 << (ulong)(uVar7 & 0x1f);
  }
  return;
  while( true ) {
    uVar3 = uVar7 + 1;
    if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)
    goto LAB_013fb9c0;
    if ((*(uint *)(lVar9 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)
    goto LAB_013fb9c4;
    uVar7 = uVar7 - 3;
    if (uVar7 == 0xfffffffd) break;
LAB_013fbcc0:
    uVar3 = uVar7 + 2;
    if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
LAB_013fb9c0:
      uVar7 = uVar3;
LAB_013fb9c4:
      uVar23 = (ulong)(uVar7 + 1);
      goto LAB_013fb9c8;
    }
  }
  uVar23 = 0;
LAB_013fb9c8:
  if (iVar22 == (int)uVar23) goto LAB_013fb7d4;
  goto LAB_013fb9d0;
}

