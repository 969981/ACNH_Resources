
void FUN_0274eeb0(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined ***pppuVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined **local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [127];
  undefined1 local_3d;
  undefined4 local_34;
  
  pppuVar7 = &local_d0;
  lVar4 = param_1[1];
  (**(code **)(*param_1 + 0x18))();
  lVar10 = 0;
  do {
    if (*(char *)(param_1[1] + lVar10) == '\0') {
LAB_0274ef14:
      iVar8 = (int)lVar10;
joined_r0x0274ef18:
      if ((((4 < iVar8) && (*(char *)(lVar4 + (ulong)(iVar8 - 5)) == ':')) &&
          (lVar4 = (ulong)(iVar8 - 5) + lVar4, *(char *)(lVar4 + 1) == 'D')) &&
         (((*(char *)(lVar4 + 2) == 'o' && (*(char *)(lVar4 + 3) == 'w')) &&
          (*(char *)(lVar4 + 4) == 'n')))) {
        local_c0 = 0x80;
        local_3d = 0;
        local_d0 = &PTR_LAB_048fcff0;
        local_c8 = local_bc;
        (**(code **)(*param_1 + 0x18))(param_1);
        puVar12 = (undefined1 *)param_1[1];
        if (local_bc == puVar12) goto LAB_0274f078;
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar10 = 0;
        goto LAB_0274efc8;
      }
      break;
    }
    lVar1 = param_1[1] + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_0274ef14;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar8 = (int)lVar10 + 2;
      goto joined_r0x0274ef18;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  uVar11 = *(undefined8 *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar6 = FUN_006bd550(param_1[1],0);
  local_d0 = (undefined **)CONCAT44(local_d0._4_4_,uVar6);
  goto LAB_0274f02c;
  while( true ) {
    lVar4 = param_1[1] + lVar10;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_0274f050;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_0274f050;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_0274efc8:
    if (*(char *)(param_1[1] + lVar10) == '\0') goto LAB_0274f050;
  }
  lVar10 = 0;
LAB_0274f050:
  iVar8 = (int)lVar10;
  if (local_c0 <= (int)lVar10) {
    iVar8 = local_c0 + -1;
  }
  memcpy(local_bc,puVar12,(long)iVar8);
  local_bc[iVar8] = 0;
LAB_0274f078:
  puVar12 = local_c8;
  puVar5 = PTR_DAT_04bb2d88;
  lVar10 = 0;
  local_d0 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  local_c8[(long)local_c0 + -1] = 0;
  do {
    if (local_c8[lVar10] == '\0') goto LAB_0274f0dc;
    if (local_c8[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_0274f0dc;
    }
    if (local_c8[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_0274f0dc;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_0274f0dc:
  iVar9 = (int)lVar10;
  iVar8 = iVar9;
  if (4 < iVar9) {
    iVar8 = 5;
  }
  local_c8[iVar9 - iVar8] = 0;
  (**(code **)(puVar5 + 0x28))(&local_d0);
  lVar10 = 0;
  do {
    if (local_c8[lVar10] == '\0') goto LAB_0274f144;
    if (local_c8[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_0274f144;
    }
    if (local_c8[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_0274f144;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_0274f144:
  uVar2 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  uVar3 = 3;
  if ((int)(local_c0 - uVar2) < 4) {
    uVar3 = local_c0 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(puVar12 + uVar2,&DAT_040f5adf,(ulong)uVar3);
    puVar12[(ulong)uVar3 + (ulong)uVar2] = 0;
  }
  uVar11 = *(undefined8 *)PTR_DAT_04bb2208;
  (*(code *)local_d0[3])(&local_d0);
  local_34 = FUN_006bd550(local_c8,0);
  pppuVar7 = (undefined ***)&local_34;
LAB_0274f02c:
  FUN_00d654a0(uVar11,pppuVar7);
  return;
}

