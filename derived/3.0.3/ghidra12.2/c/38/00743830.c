
void FUN_00743830(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined *local_70;
  undefined8 *puStack_68;
  
  lVar19 = param_2[1];
  if (lVar19 == 0) {
    return;
  }
  plVar10 = (long *)(param_1 + 0x18);
  *(long *)(param_1 + 8) = param_2[2];
  FUN_016100c4(plVar10,lVar19);
  lVar18 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x28) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(4);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar18 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_007438f4;
      }
      puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,4,8);
    }
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x28) = puVar6;
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
  }
LAB_007438f4:
  uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x508) + 0xf0))
                    (*(long *)(param_1 + 8) + 0x508);
  if ((*(long *)(param_1 + 0x28) != 0) && (lVar18 = *plVar10, lVar18 != 0)) {
    if (*(int *)(lVar18 + 0x30) == 0) {
      uVar20 = 0xffffffff;
    }
    else {
      lVar21 = *(long *)(lVar18 + 0x38);
      lVar5 = 0;
      lVar18 = (long)*(int *)(lVar18 + 0x30) << 3;
      uVar20 = 0xffffffff;
      do {
        plVar4 = (long *)**(undefined8 **)(lVar21 + lVar5 * 8);
        iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar7);
        if (iVar3 != -1) {
          uVar20 = (uint)lVar5 & 0xffff | iVar3 << 0x10;
          break;
        }
        lVar5 = lVar5 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
    }
    **(uint **)(param_1 + 0x28) = uVar20;
  }
  lVar18 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x38) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(0x10);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar18 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_00743a14;
      }
      puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x10,8);
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar6 + 1) = 0xffff;
      *(undefined2 *)(puVar6 + 3) = 0xffff;
      *puVar6 = 0xffffffff;
      puVar6[2] = 0xffffffff;
      *(undefined4 *)(param_1 + 0x30) = 2;
      *(undefined4 **)(param_1 + 0x38) = puVar6;
    }
  }
LAB_00743a14:
  pcVar8 = (char *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x3c0) + 0xf0))
                             (*(long *)(param_1 + 8) + 0x3c0);
  puVar2 = PTR_DAT_04bb2020;
  if (*pcVar8 != '\0') {
    puVar9 = (uint *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x4a8) + 0xf0))
                               (*(long *)(param_1 + 8) + 0x4a8);
    uVar20 = *puVar9;
    uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x420) + 0xf0))
                      (*(long *)(param_1 + 8) + 0x420);
    if (uVar20 < 5) {
      puStack_68 = (undefined8 *)(&PTR_s_const_color0_04903ec0)[uVar20];
    }
    else {
      puStack_68 = &DAT_0407ebb1;
    }
    local_70 = puVar2 + 0x10;
    FUN_016102c0(plVar10,0,uVar7,&local_70);
  }
  pcVar8 = (char *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x3f0) + 0xf0))
                             (*(long *)(param_1 + 8) + 0x3f0);
  if (*pcVar8 != '\0') {
    puVar9 = (uint *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x4d8) + 0xf0))
                               (*(long *)(param_1 + 8) + 0x4d8);
    uVar20 = *puVar9;
    uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x420) + 0xf0))
                      (*(long *)(param_1 + 8) + 0x420);
    if (uVar20 < 9) {
      puStack_68 = (undefined8 *)(&PTR_s_material_emission_intensity_04903f70)[uVar20];
    }
    else {
      puStack_68 = &DAT_0407ebb1;
    }
    local_70 = puVar2 + 0x10;
    FUN_016102c0(plVar10,1,uVar7,&local_70);
  }
  if ((((*(uint **)(param_1 + 0x28) == (uint *)0x0) || (*(long *)(param_1 + 0x18) == 0)) ||
      (uVar20 = **(uint **)(param_1 + 0x28), 0xfffeffff < uVar20)) || ((uVar20 & 0xffff) == 0xffff))
  goto LAB_00743c08;
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x88);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  plVar10 = (long *)(*(long *)(param_1 + 8) + 0x30);
  uVar11 = (**(code **)(*plVar10 + 0x118))(plVar10,&local_70);
  if ((uVar11 & 1) == 0) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
    plVar10 = (long *)(*(long *)(param_1 + 8) + 0x30);
    uVar11 = (**(code **)(*plVar10 + 0x118))(plVar10,&local_70);
    if ((uVar11 & 1) != 0) {
      uVar12 = FUN_015efaf8(uVar7,0,*param_2);
      goto LAB_00743be0;
    }
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_015ef988(uVar7,0,*param_2);
LAB_00743be0:
    FUN_015ef730(uVar7,uVar12,lVar19,uVar20,0);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar12;
LAB_00743c08:
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 8) != 0)) {
    lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar19 + 0x158) + 0xf0))(lVar19 + 0x158);
    *puVar13 = 1;
    *(uint *)(lVar19 + 0x178) = *(uint *)(lVar19 + 0x178) | 0x1000000;
    lVar19 = *(long *)(param_1 + 0x10);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xd0) + 0xf0))();
    lVar19 = *(long *)(lVar19 + 0x10);
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x280) + 0xf0))(lVar19 + 0x280);
    *puVar14 = *puVar6;
    puVar14[1] = puVar6[1];
    puVar14[2] = puVar6[2];
    *(uint *)(lVar19 + 0x2a0) = *(uint *)(lVar19 + 0x2a0) | 0x1000000;
    pcVar8 = (char *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x3c0) + 0xf0))
                               (*(long *)(param_1 + 8) + 0x3c0);
    if (*pcVar8 == '\0') {
      lVar19 = *(long *)(param_1 + 0x10);
      puVar15 = (undefined8 *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x90) + 0xf0))();
      lVar19 = *(long *)(lVar19 + 0x10);
      puVar16 = (undefined8 *)(**(code **)(*(long *)(lVar19 + 0x210) + 0xf0))(lVar19 + 0x210);
      uVar7 = puVar15[1];
      *puVar16 = *puVar15;
      puVar16[1] = uVar7;
      *(uint *)(lVar19 + 0x230) = *(uint *)(lVar19 + 0x230) | 0x1000000;
    }
    lVar19 = *(long *)(param_1 + 0x10);
    puVar6 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x108) + 0xf0))
                       (*(long *)(param_1 + 8) + 0x108);
    lVar19 = *(long *)(lVar19 + 0x10);
    uVar22 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x250) + 0xf0))(lVar19 + 0x250);
    *puVar6 = uVar22;
    *(uint *)(lVar19 + 0x270) = *(uint *)(lVar19 + 0x270) | 0x1000000;
    lVar19 = *(long *)(param_1 + 0x10);
    puVar6 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x138) + 0xf0))
                       (*(long *)(param_1 + 8) + 0x138);
    lVar19 = *(long *)(lVar19 + 0x10);
    uVar22 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x2b8) + 0xf0))(lVar19 + 0x2b8);
    *puVar6 = uVar22;
    *(uint *)(lVar19 + 0x2d8) = *(uint *)(lVar19 + 0x2d8) | 0x1000000;
    lVar19 = *(long *)(param_1 + 0x10);
    puVar13 = (undefined1 *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x60) + 0xf0))();
    lVar19 = *(long *)(lVar19 + 0x10);
    uVar1 = *puVar13;
    puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar19 + 0x578) + 0xf0))(lVar19 + 0x578);
    *puVar13 = uVar1;
    lVar19 = *(long *)(param_1 + 0x10);
    pbVar17 = (byte *)(**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x560) + 0xf0))
                                (*(long *)(param_1 + 8) + 0x560);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
    *(uint *)(lVar19 + 0x38) = *(uint *)(lVar19 + 0x38) & 0xffffffbf | (uint)*pbVar17 << 6;
    plVar10 = (long *)(*(long *)(param_1 + 8) + 0x30);
    uVar11 = (**(code **)(*plVar10 + 0x118))(plVar10,&local_70);
    if (((uVar11 & 1) == 0) ||
       (iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(), iVar3 != 1)) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
      plVar10 = (long *)(*(long *)(param_1 + 8) + 0x30);
      uVar11 = (**(code **)(*plVar10 + 0x118))(plVar10,&local_70);
      if ((uVar11 & 1) == 0) {
        return;
      }
      iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
      if (iVar3 != 2) {
        return;
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x328) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x328);
      puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x5a8) + 0xf0))(lVar19 + 0x5a8);
      *puVar14 = *puVar6;
      puVar14[1] = puVar6[1];
      puVar14[2] = puVar6[2];
      *(uint *)(lVar19 + 0x5c8) = *(uint *)(lVar19 + 0x5c8) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x360) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x360);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x5e0) + 0xf0))(lVar19 + 0x5e0);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x600) = *(uint *)(lVar19 + 0x600) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x390) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x390);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x610) + 0xf0))(lVar19 + 0x610);
      puVar9 = (uint *)(lVar19 + 0x630);
      *puVar6 = uVar22;
    }
    else {
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x168) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x168);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x5a8) + 0xf0))(lVar19 + 0x5a8);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x5c8) = *(uint *)(lVar19 + 0x5c8) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar13 = (undefined1 *)
                (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x198) + 0xf0))
                          (*(long *)(param_1 + 8) + 0x198);
      uVar1 = *puVar13;
      puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar19 + 0x5d8) + 0xf0))(lVar19 + 0x5d8);
      *puVar13 = uVar1;
      *(uint *)(lVar19 + 0x5f8) = *(uint *)(lVar19 + 0x5f8) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar13 = (undefined1 *)
                (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x1c8) + 0xf0))
                          (*(long *)(param_1 + 8) + 0x1c8);
      uVar1 = *puVar13;
      puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar19 + 0x608) + 0xf0))(lVar19 + 0x608);
      *puVar13 = uVar1;
      *(uint *)(lVar19 + 0x628) = *(uint *)(lVar19 + 0x628) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar15 = (undefined8 *)
                (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x1f8) + 0xf0))
                          (*(long *)(param_1 + 8) + 0x1f8);
      puVar16 = (undefined8 *)(**(code **)(*(long *)(lVar19 + 0x638) + 0xf0))(lVar19 + 0x638);
      uVar7 = puVar15[1];
      *puVar16 = *puVar15;
      puVar16[1] = uVar7;
      *(uint *)(lVar19 + 0x658) = *(uint *)(lVar19 + 0x658) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x238) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x238);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x678) + 0xf0))(lVar19 + 0x678);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x698) = *(uint *)(lVar19 + 0x698) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x268) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x268);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x6a8) + 0xf0))(lVar19 + 0x6a8);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x6c8) = *(uint *)(lVar19 + 0x6c8) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x298) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x298);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x6d8) + 0xf0))(lVar19 + 0x6d8);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x6f8) = *(uint *)(lVar19 + 0x6f8) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x2c8) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x2c8);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x708) + 0xf0))(lVar19 + 0x708);
      *puVar6 = uVar22;
      *(uint *)(lVar19 + 0x728) = *(uint *)(lVar19 + 0x728) | 0x1000000;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x2f8) + 0xf0))
                         (*(long *)(param_1 + 8) + 0x2f8);
      uVar22 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x738) + 0xf0))(lVar19 + 0x738);
      *puVar6 = uVar22;
      puVar9 = (uint *)(lVar19 + 0x758);
    }
    *puVar9 = *puVar9 | 0x1000000;
  }
  return;
}

