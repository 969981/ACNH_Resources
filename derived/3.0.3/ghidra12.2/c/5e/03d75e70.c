
void FUN_03d75e70(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *__dest;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *__src;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_75;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar8 = malloc(0xa8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar14 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar8,6);
  *puVar8 = &PTR_FUN_04b91b48;
  puVar8[0x11] = &PTR_LAB_04b91bf0;
  local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20);
  *(undefined2 *)(puVar8 + 4) = 1;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_03c5bcd4(puVar8);
  if ((undefined8 *)puVar8[10] != puVar8 + 9) {
    lVar14 = (long)*(int *)((long)puVar8 + 0x5c);
    puVar15 = (undefined8 *)((long)puVar8[10] - lVar14);
    do {
      (**(code **)*puVar15)(puVar15,*(undefined4 *)((long)puVar8 + 0x24));
      puVar15 = (undefined8 *)(*(long *)((long)puVar15 + lVar14 + 8) - lVar14);
    } while (puVar15 != (undefined8 *)((long)(puVar8 + 9) - lVar14));
  }
  lVar14 = *(long *)(param_2 + 0x18);
  plVar13 = (long *)(lVar14 + 0x60);
  lVar6 = *plVar13;
  plVar7 = (long *)((long)*(int *)(lVar14 + 0x74) + (long)puVar8);
  *plVar13 = (long)plVar7;
  *plVar7 = lVar6;
  plVar7[1] = (long)plVar13;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar7;
  }
  lVar6 = *(long *)puVar3;
  *(int *)(lVar14 + 0x70) = *(int *)(lVar14 + 0x70) + 1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar14 != 0) {
      plVar7 = (long *)(lVar14 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,0xfffffffc);
    }
  }
  *plVar7 = param_2;
  puVar2 = PTR_PTR_04bb2238;
  puVar8[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  plVar7[1] = (long)puVar8;
  *(long **)(param_2 + 0x20) = plVar7;
  local_a0 = 0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_9e = 1;
  puVar1 = puVar1 + 0x10;
  local_c8 = (undefined *)0x0;
  local_b8 = "*Select";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,0,1,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_9e = 1;
  local_c8 = (undefined *)0x0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*UnSelect;<*Select";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,1,0,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_9e = 1;
  local_c8 = (undefined *)0x0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*TouchSelect;*Select";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,0,2,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_9e = 1;
  local_c8 = (undefined *)0x0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*TouchUnSelect;<*TouchSelect;*UnSelect;<*Select";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,2,0,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_9e = 1;
  local_c8 = (undefined *)0x0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*Invalid";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,0,3,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_9e = 1;
  local_c8 = (undefined *)0x0;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*Valid;<*Invalid";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,0,4,&local_c8);
  local_a8 = *(undefined8 *)(puVar2 + 8);
  local_a0 = 0;
  local_c8 = (undefined *)0x0;
  local_9e = 1;
  local_9c = 0x3f800000;
  local_98 = 0x100;
  local_b8 = "*Valid;<*Invalid";
  local_c0 = puVar1;
  puStack_b0 = puVar1;
  FUN_03c5cb04(plVar7,3,4,&local_c8);
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],1);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],3);
  plVar13 = (long *)plVar7[1];
  lVar14 = plVar13[0xd] + (long)(int)(uVar4 + *(uint *)(plVar13 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar13 + 100) <= uVar5 || *(uint *)(plVar13 + 0xc) <= uVar4) {
    lVar14 = 0;
  }
  if (*(int *)(lVar14 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar14 + 0x10) = 0;
    plVar13 = (long *)plVar7[1];
  }
  uVar5 = (**(code **)(*plVar13 + 0x80))(plVar13,4);
  puVar1 = PTR_DAT_04bb2020;
  lVar14 = plVar7[1];
  uVar4 = *(uint *)(lVar14 + 0x60);
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      lVar6 = *(long *)(lVar14 + 0x68) + (long)(int)(uVar10 + uVar4 * uVar5) * 0x18;
      if (*(uint *)(lVar14 + 100) <= uVar5 || uVar4 <= uVar10) {
        lVar6 = 0;
      }
      if (*(int *)(lVar6 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar6 + 0xc) = 0;
        *(undefined1 *)(lVar6 + 0x14) = 0;
        lVar14 = plVar7[1];
      }
      uVar4 = *(uint *)(lVar14 + 0x60);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar4);
  }
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
    free(plVar7);
  }
  else {
    plVar13 = (long *)FUN_038cb610(lVar6,plVar7);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x38))(plVar13,plVar7);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x280) = lVar14;
  *(undefined1 **)(lVar14 + 0x98) = &LAB_03d76c70;
  *(undefined8 *)(lVar14 + 0xa0) = 0;
  *(undefined ***)(lVar14 + 0x88) = &PTR_LAB_04b91c98;
  *(long *)(lVar14 + 0x90) = param_1;
  plVar7 = *(long **)(param_1 + 0x280);
  *(undefined2 *)(plVar7 + 4) = 1;
  *(undefined4 *)((long)plVar7 + 0x24) = 0;
  *(undefined4 *)(plVar7 + 8) = 0;
  *(undefined4 *)((long)plVar7 + 0x2c) = 0x80000000;
  plVar7[6] = 0;
  plVar7[7] = 0;
  (**(code **)(*plVar7 + 0x28))(plVar7,0);
  if ((long *)plVar7[10] != plVar7 + 9) {
    lVar14 = (long)*(int *)((long)plVar7 + 0x5c);
    puVar8 = (undefined8 *)(plVar7[10] - lVar14);
    do {
      (**(code **)*puVar8)(puVar8,*(undefined4 *)((long)plVar7 + 0x24));
      puVar8 = (undefined8 *)(*(long *)((long)puVar8 + lVar14 + 8) - lVar14);
    } while (puVar8 != (undefined8 *)((long)(plVar7 + 9) - lVar14));
  }
  puVar1 = puVar1 + 0x10;
  local_c0 = "*Volume";
  local_c8 = puVar1;
  uVar9 = FUN_03c68d44(param_2,&local_c8,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x288) = uVar9;
  local_c0 = "*Root;<*Translate";
  local_c8 = puVar1;
  uVar9 = FUN_03c688b0(param_2,&local_c8);
  *(undefined8 *)(param_1 + 0x290) = uVar9;
  local_c0 = "*Translate";
  local_c8 = puVar1;
  uVar9 = FUN_03c688b0(param_2,&local_c8);
  *(undefined8 *)(param_1 + 0x298) = uVar9;
  local_c0 = "*ScrollArea";
  local_c8 = puVar1;
  uVar9 = FUN_03c688b0(param_2,&local_c8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar9;
  local_c0 = "*Hit";
  pcStack_68 = "*Cursor";
  local_c8 = puVar1;
  local_70 = puVar1;
  FUN_03d5d740(param_1,param_2,param_3,&local_c8,&local_70);
  FUN_03d5d990(param_1,param_2,param_3);
  FUN_03d5de00(param_1,param_2,param_3);
  FUN_03d5e1e0(param_1);
  plVar7 = *(long **)(param_1 + 0x58);
  local_70 = (undefined *)0x0;
  if ((((plVar7 != (long *)0x0) &&
       ((**(code **)(*plVar7 + 0x28))(plVar7,&local_70), local_70 != (undefined *)0x0)) &&
      (*(long *)(local_70 + 0xb8) != 0)) &&
     (__src = (char *)FUN_00364d70(local_70 + 0xb8,"AdjustWindow"), __src != (char *)0x0)) {
    lVar14 = 0;
    do {
      if (__src[lVar14] == '\0') {
LAB_03d76520:
        iVar11 = (int)lVar14;
joined_r0x03d76524:
        if (3 < iVar11) {
          local_75 = 0;
          __dest = (char *)((long)&local_b8 + 4);
          local_b8 = (char *)CONCAT44(local_b8._4_4_,0x40);
          local_c0 = __dest;
          if (__dest != __src) {
            lVar14 = 0;
            goto LAB_03d76550;
          }
          lVar14 = 0x3f;
          goto LAB_03d76618;
        }
        break;
      }
      if (__src[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03d76520;
      }
      if (__src[lVar14 + 2] == '\0') {
        iVar11 = (int)lVar14 + 2;
        goto joined_r0x03d76524;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
  }
  local_c0 = "*AdjustWindow";
  local_c8 = puVar1;
  goto LAB_03d76598;
  while( true ) {
    if (__src[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_03d765ec;
    }
    if (__src[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_03d765ec;
    }
    lVar14 = lVar14 + 3;
    if (lVar14 == 0x80001) break;
LAB_03d76550:
    if (__src[lVar14] == '\0') {
LAB_03d765ec:
      iVar11 = (int)lVar14;
      if (0x3f < iVar11) {
        iVar11 = 0x3f;
      }
      goto LAB_03d765f8;
    }
  }
  iVar11 = 0;
LAB_03d765f8:
  memcpy(__dest,__src,(long)iVar11);
  __dest[iVar11] = '\0';
  lVar14 = (long)(int)local_b8 + -1;
  __src = local_c0;
LAB_03d76618:
  lVar6 = 0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  __src[lVar14] = '\0';
  do {
    if (local_c0[lVar6] == '\0') goto LAB_03d76670;
    if (local_c0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03d76670;
    }
    if (local_c0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03d76670;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03d76670:
  iVar12 = (int)lVar6;
  iVar11 = iVar12;
  if (2 < iVar12) {
    iVar11 = 3;
  }
  local_c0[iVar12 - iVar11] = '\0';
LAB_03d76598:
  uVar9 = FUN_03c688b0(param_2,&local_c8);
  *(undefined8 *)(param_1 + 0x2a8) = uVar9;
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}

