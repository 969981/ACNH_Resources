
void FUN_03c55a80(long param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *pcVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  int local_264;
  undefined8 local_258 [50];
  undefined1 local_c8 [8];
  char *local_c0;
  long *plStack_b8;
  long local_b0;
  undefined1 local_a8;
  long local_a0;
  long lStack_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined1 local_80;
  long local_78;
  undefined1 auStack_6c [12];
  
  lVar24 = *param_2;
  *(long *)(param_1 + 0xd0) = lVar24;
  bVar2 = *(byte *)(param_2 + 6);
  bVar3 = *(byte *)((long)param_2 + 0x31);
  bVar4 = *(byte *)((long)param_2 + 0x32);
  plVar20 = (long *)param_2[1];
  if (bVar4 != 0) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar10 = malloc((ulong)bVar4 << 3);
    }
    else {
      plVar9 = plVar20;
      if (plVar20 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_03c55b2c;
      }
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)bVar4 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(lVar24 + 0x10) = pvVar10;
      *(undefined4 *)(lVar24 + 8) = 0;
      *(uint *)(lVar24 + 0xc) = (uint)bVar4;
    }
  }
LAB_03c55b2c:
  if (bVar2 != 0) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar10 = malloc((ulong)bVar2 << 3);
    }
    else {
      plVar9 = plVar20;
      if (plVar20 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_03c55b98;
      }
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)bVar2 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(lVar24 + 0x20) = pvVar10;
      *(undefined4 *)(lVar24 + 0x18) = 0;
      *(uint *)(lVar24 + 0x1c) = (uint)bVar2;
    }
  }
LAB_03c55b98:
  if (bVar3 != 0) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar10 = malloc((ulong)bVar3 << 3);
    }
    else {
      if (plVar20 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar14 = (undefined8 *)(lVar18 + 8);
        if (lVar8 != 0) {
          puVar14 = (undefined8 *)(lVar8 + 0xa8);
        }
        plVar20 = (long *)*puVar14;
        if (plVar20 == (long *)0x0) goto LAB_03c55c04;
      }
      pvVar10 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)bVar3 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(lVar24 + 0x30) = pvVar10;
      *(undefined4 *)(lVar24 + 0x28) = 0;
      *(uint *)(lVar24 + 0x2c) = (uint)bVar3;
    }
  }
LAB_03c55c04:
  (**(code **)(**(long **)(param_1 + 0xd0) + 0xa8))();
  (**(code **)(**(long **)(param_1 + 0xd0) + 0xb0))(*(long **)(param_1 + 0xd0),param_2[1]);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xd0) + 0xf8))();
  lVar17 = param_2[2];
  lVar8 = param_2[3];
  plVar9 = *(long **)(param_1 + 0xd0);
  lVar5 = plVar9[5];
  lVar24 = param_2[4];
  lVar18 = param_2[5];
  local_264 = (int)plVar9[3];
  plVar20 = plVar9;
  if (0 < local_264) {
    uVar21 = 0;
    do {
      uVar11 = (**(code **)(*plVar20 + 0x18))(plVar20,uVar21 & 0xffffffff);
      local_258[uVar21] = uVar11;
      plVar20 = *(long **)(param_1 + 0xd0);
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)(int)plVar20[3]);
  }
  puVar26 = PTR_DAT_04bb2020;
  if (*(char *)((long)param_2 + 0x33) != '\0') {
    plStack_b8 = (long *)(**(code **)(*plVar20 + 0x100))();
    local_c0 = puVar26 + 0x10;
    FUN_03eb9c70(param_1 + 0x20,&local_c0,0x5f);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(param_1 + 0x20);
    plVar20 = DAT_05aec208;
    if (DAT_05aec208 != (long *)0x0) {
      pcVar15 = *(char **)(param_1 + 0x28);
      lVar23 = param_2[1];
      local_88 = local_258;
      local_c0 = pcVar15;
      plStack_b8 = plVar9;
      local_b0 = lVar17;
      local_a8 = (char)lVar8;
      local_a0 = lVar24;
      lStack_98 = lVar18;
      local_90 = local_264;
      uStack_8c = (int)lVar5;
      lVar12 = FUN_03bec770(DAT_05aec208[1],pcVar15,local_c8);
      if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        bVar1 = *(int *)(lVar12 + 0x18) == 0;
        if (bVar1) {
          iVar7 = 0;
          local_90 = 0;
        }
        else {
          iVar7 = local_264;
        }
        *(bool *)(param_1 + 0x18) = !bVar1;
        iVar6 = 0;
        do {
          iVar16 = iVar6;
          plVar13 = (long *)(**(code **)(*plVar20 + 0x38))(plVar20);
          (**(code **)(*plVar13 + 0x10))();
          if (((int)plVar20[4] != 0) && ((long *)plVar20[3] != plVar20 + 2)) {
            lVar19 = (long)*(int *)((long)plVar20 + 0x24);
            lVar25 = plVar20[0x10];
            lVar12 = plVar20[3] - lVar19;
            do {
              if (((*(long *)(lVar12 + 0x38) == lVar23 || *(long *)(lVar12 + 0x38) == lVar25) &&
                  (*(int *)(lVar12 + 0x40) == iVar16)) &&
                 (iVar6 = strcmp(*(char **)(lVar12 + 0x10),pcVar15), iVar6 == 0)) goto LAB_03c55e84;
              lVar12 = *(long *)(lVar12 + lVar19 + 8) - lVar19;
            } while (lVar12 != (long)(plVar20 + 2) - lVar19);
          }
          lVar12 = 0;
LAB_03c55e84:
          (**(code **)(*plVar13 + 0x18))(plVar13);
        } while ((lVar12 != 0) && (iVar6 = iVar16 + 1, iVar7 != *(short *)(lVar12 + 0x46)));
        lVar12 = FUN_03bd217c(plVar20,&local_c0,lVar23,iVar16);
        *(long *)(param_1 + 8) = lVar12;
        puVar26 = PTR_DAT_04bb2020;
        if (lVar12 != 0) {
          if ((*(byte *)(lVar12 + 0xd8) >> 1 & 1) == 0) {
            FUN_03bf3a60(lVar12);
            *(byte *)(lVar12 + 0xd8) = *(byte *)(lVar12 + 0xd8) | 2;
          }
          lVar12 = *(long *)(param_1 + 0xd0);
          uVar21 = (ulong)*(uint *)(lVar12 + 0x28);
          if (0 < (int)*(uint *)(lVar12 + 0x28)) {
            uVar22 = 0;
            do {
              if (uVar22 < (uVar21 & 0xffffffff)) {
                lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + uVar22 * 8);
              }
              else {
                lVar12 = 0;
              }
              lVar23 = *(long *)(param_1 + 8);
              FUN_03bf3310(*(undefined8 *)(lVar23 + 0x30),uVar22 & 0xffffffff,lVar12);
              if ((*(uint *)(lVar12 + 0x60) < 2) || (*(uint *)(lVar12 + 0x60) == 2)) {
                *(undefined4 *)(*(long *)(lVar23 + 0x78) + uVar22 * 4) = 0;
              }
              lVar12 = *(long *)(param_1 + 0xd0);
              uVar22 = uVar22 + 1;
              uVar21 = (ulong)*(int *)(lVar12 + 0x28);
            } while ((long)uVar22 < (long)uVar21);
          }
        }
      }
    }
  }
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    plStack_b8 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x108))();
    local_c0 = puVar26 + 0x10;
    FUN_03eb9c70(param_1 + 0x78,&local_c0,0x5f);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(param_1 + 0x78);
    plVar20 = DAT_05aec220;
    if (DAT_05aec220 != (long *)0x0) {
      pcVar15 = *(char **)(param_1 + 0x80);
      local_78 = param_2[7];
      local_80 = *(undefined1 *)((long)param_2 + 0x36);
      lVar12 = param_2[1];
      local_88 = local_258;
      local_c0 = pcVar15;
      plStack_b8 = plVar9;
      local_b0 = lVar17;
      local_a8 = (char)lVar8;
      local_a0 = lVar24;
      lStack_98 = lVar18;
      local_90 = local_264;
      uStack_8c = (int)lVar5;
      lVar24 = FUN_03bec770(DAT_05aec220[1],pcVar15,auStack_6c);
      if ((lVar24 == 0) || (*(int *)(lVar24 + 0xc) == 0)) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        bVar1 = *(int *)(lVar24 + 0x18) == 0;
        if (bVar1) {
          local_264 = 0;
          local_90 = 0;
        }
        *(bool *)(param_1 + 0x19) = !bVar1;
        iVar7 = 0;
        do {
          iVar6 = iVar7;
          plVar9 = (long *)(**(code **)(*plVar20 + 0x38))(plVar20);
          (**(code **)(*plVar9 + 0x10))();
          if (((int)plVar20[4] != 0) && ((long *)plVar20[3] != plVar20 + 2)) {
            lVar18 = (long)*(int *)((long)plVar20 + 0x24);
            lVar8 = plVar20[0x10];
            lVar24 = plVar20[3] - lVar18;
            do {
              if (((*(long *)(lVar24 + 0x38) == lVar12 || *(long *)(lVar24 + 0x38) == lVar8) &&
                  (*(int *)(lVar24 + 0x40) == iVar6)) &&
                 (iVar7 = strcmp(*(char **)(lVar24 + 0x10),pcVar15), iVar7 == 0)) goto LAB_03c56114;
              lVar24 = *(long *)(lVar24 + lVar18 + 8) - lVar18;
            } while (lVar24 != (long)(plVar20 + 2) - lVar18);
          }
          lVar24 = 0;
LAB_03c56114:
          (**(code **)(*plVar9 + 0x18))(plVar9);
        } while ((lVar24 != 0) && (iVar7 = iVar6 + 1, local_264 != *(short *)(lVar24 + 0x46)));
        lVar24 = FUN_03bdd5c8(plVar20,&local_c0,lVar12,iVar6);
        *(long *)(param_1 + 0x10) = lVar24;
        puVar26 = PTR_DAT_04bb2020;
        if (lVar24 != 0) {
          if ((*(byte *)(lVar24 + 0xd8) >> 1 & 1) == 0) {
            FUN_03bf3a60(lVar24);
            *(byte *)(lVar24 + 0xd8) = *(byte *)(lVar24 + 0xd8) | 2;
          }
          lVar24 = *(long *)(param_1 + 0xd0);
          uVar21 = (ulong)*(uint *)(lVar24 + 0x28);
          if (0 < (int)*(uint *)(lVar24 + 0x28)) {
            uVar22 = 0;
            do {
              if (uVar22 < (uVar21 & 0xffffffff)) {
                lVar24 = *(long *)(*(long *)(lVar24 + 0x30) + uVar22 * 8);
              }
              else {
                lVar24 = 0;
              }
              lVar18 = *(long *)(param_1 + 0x10);
              FUN_03bf3310(*(undefined8 *)(lVar18 + 0x30),uVar22 & 0xffffffff,lVar24);
              if ((*(uint *)(lVar24 + 0x60) < 2) || (*(uint *)(lVar24 + 0x60) == 2)) {
                *(undefined4 *)(*(long *)(lVar18 + 0x78) + uVar22 * 4) = 0;
              }
              lVar24 = *(long *)(param_1 + 0xd0);
              uVar22 = uVar22 + 1;
              uVar21 = (ulong)*(int *)(lVar24 + 0x28);
            } while ((long)uVar22 < (long)uVar21);
          }
        }
      }
    }
  }
  lVar24 = DAT_05ae7600;
  if (*(char *)((long)param_2 + 0x35) == '\0') {
    return;
  }
  if (DAT_05ae7600 == 0) {
    puVar14 = malloc(0x20);
  }
  else {
    plVar20 = (long *)param_2[1];
    if (plVar20 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar20 = (long *)(lVar24 + 8);
      if (lVar18 != 0) {
        plVar20 = (long *)(lVar18 + 0xa8);
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto LAB_03c5626c;
      }
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar20 + 0x30))(plVar20,0x20,8);
  }
LAB_03c5626c:
  puVar14[2] = 0;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_04b81328;
  puVar14[1] = 0;
  *(undefined8 **)(param_1 + 0xd8) = puVar14;
  (**(code **)(*(long *)(param_1 + 0x78) + 0x18))((long *)(param_1 + 0x78));
  plStack_b8 = *(long **)(param_1 + 0x80);
  local_c0 = puVar26 + 0x10;
  FUN_03c570e0(puVar14,&local_c0,param_2[1]);
  return;
}

