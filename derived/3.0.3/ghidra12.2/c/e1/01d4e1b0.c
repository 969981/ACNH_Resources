
undefined8 FUN_01d4e1b0(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  long *plVar14;
  byte *pbVar15;
  int *piVar16;
  byte bVar17;
  long lVar18;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined *local_a0 [4];
  int local_7c;
  byte local_64 [4];
  
  puVar7 = PTR_DAT_04bb5038;
  puVar6 = PTR_DAT_04bb4f78;
  puVar5 = PTR_DAT_04bb27d0;
  if (*(int *)(**(long **)PTR_DAT_04bb27d0 + 0x508) != 4 ||
      *(char *)(**(long **)PTR_DAT_04bb27d0 + 0x55f) == '\0') {
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
    uVar13 = 2;
LAB_01d4e204:
    *param_3 = uVar13;
    return 0;
  }
  if ((0x10 < *(uint *)(param_1 + 0x380)) ||
     ((1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f) & 0x11289U) == 0)) {
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
    uVar13 = 1;
    goto LAB_01d4e204;
  }
  iVar9 = 0;
  do {
    local_64[0] = puVar7[iVar9];
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    lVar10 = FUN_025830c0(*(undefined8 *)puVar6,local_64,1);
    if (lVar10 != 0) {
      if (*(long **)(lVar10 + 0x17be8) == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17be8);
        uVar12 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar12 = (**(code **)*puVar11)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar10 + 0x17bd0) + *(long *)(lVar10 + 0x17bc8));
      iVar3 = *piVar1;
      if (iVar3 != 0) {
        piVar16 = (int *)param_2[3];
        if (((short)piVar16[1] == 0) || ((short)piVar1[1] == 0)) {
          if (*piVar16 == iVar3) goto LAB_01d4e498;
        }
        else if ((*piVar16 == iVar3) &&
                ((*(long *)(piVar1 + 1) == *(long *)(piVar16 + 1) &&
                 *(long *)(piVar1 + 3) == *(long *)(piVar16 + 3)) && piVar1[5] == piVar16[5])) {
LAB_01d4e498:
          if (param_3 != (undefined1 *)0x0) {
            *param_3 = 3;
          }
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          if (*(long *)(lVar10 + 0x17be8) == 0) {
            return 0;
          }
          puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17be8) + 8);
          if (puVar11 == (undefined8 *)0x0) {
            return 0;
          }
          (**(code **)*puVar11)();
          return 0;
        }
      }
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x17be8) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17be8) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 8);
  plVar14 = (long *)param_2[2];
  if (((*plVar14 == *(long *)(param_1 + 0x748) && plVar14[1] == *(long *)(param_1 + 0x750)) &&
      (plVar14[2] == *(long *)(param_1 + 0x758) && plVar14[3] == *(long *)(param_1 + 0x760))) &&
     (plVar14[4] == *(long *)(param_1 + 0x768) && plVar14[5] == *(long *)(param_1 + 0x770))) {
    return 1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 4;
  }
  lVar10 = **(long **)puVar5;
  bVar4 = *(byte *)(lVar10 + 0x476);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if (lVar18 == 0) {
    bVar17 = *PTR_DAT_04bb32e0;
    if (7 < bVar17) goto LAB_01d4e424;
LAB_01d4e4f8:
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_d8 = CONCAT71(local_d8._1_7_,bVar17);
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar18 + 0x158);
    }
    bVar17 = *pbVar15;
    if ((bVar17 < 8) ||
       (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar17 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar17 < 8)))) goto LAB_01d4e4f8;
LAB_01d4e424:
    bVar17 = *(byte *)(lVar10 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar17 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
      if (7 < bVar17) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar15 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar17 = *pbVar15;
    bVar8 = 7 < bVar17;
    if (bVar8) {
      bVar17 = 0xff;
    }
    local_d8 = CONCAT71(local_d8._1_7_,bVar17);
    if (bVar8) {
      bVar17 = *PTR_DAT_04bb5038;
      goto LAB_01d4e4f8;
    }
  }
  FUN_025bb3c0(local_a0,&local_d8);
  uStack_d0 = *param_2;
  local_c8 = param_2[1];
  uStack_b0 = param_2[2];
  local_d8 = param_2[3];
  local_c0 = *(undefined4 *)(**(long **)puVar5 + 0x46c);
  local_b8 = param_1 + 0x748;
  local_a8 = bVar4 - 1;
  FUN_025bb614(local_a0,&local_d8);
  local_a0[0] = PTR_DAT_04bc3358 + 0x10;
  iVar9 = FUN_025bbc68(local_a0);
  if (iVar9 != -1) {
    iVar9 = (**(code **)(local_a0[0] + 0x20))(local_a0);
    local_d8 = CONCAT44(local_d8._4_4_,iVar9);
    if (iVar9 < 0xd) goto LAB_01d4e598;
  }
  if (local_7c == 0) {
    local_7c = 1;
  }
LAB_01d4e598:
  FUN_02601530(local_a0);
  return 0;
}

