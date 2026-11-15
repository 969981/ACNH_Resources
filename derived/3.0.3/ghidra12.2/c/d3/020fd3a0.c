
void FUN_020fd3a0(undefined2 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined1 local_64 [4];
  
  *param_1 = 0x23;
  *(undefined1 *)(param_1 + 1) = 8;
  local_78 = 8;
  local_6d = 0;
  puVar1 = PTR_DAT_04bb6a30 + 0x10;
  local_88 = puVar1;
  local_80 = local_74;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar10 = (undefined1 *)param_2[1];
  if (local_74 != puVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_020fd470;
      lVar2 = param_2[1] + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_020fd470;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_020fd470;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_020fd470:
    iVar7 = (int)lVar8;
    if (local_78 <= (int)lVar8) {
      iVar7 = local_78 + -1;
    }
    memcpy(local_74,puVar10,(long)iVar7);
    local_74[iVar7] = 0;
  }
  puVar3 = PTR_DAT_04bb3768;
  uVar11 = 0;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  iVar7 = 3;
  if (local_78 < 4) {
    iVar7 = local_78 + -1;
  }
  local_80[iVar7] = 0;
  puVar4 = PTR_DAT_04bb9e38;
  do {
    local_98 = 8;
    local_8d = 0;
    puVar10 = *(undefined1 **)(puVar4 + uVar11 * 8 + 0xb0);
    local_a0 = local_94;
    if (local_94 != puVar10) {
      lVar8 = 0;
      do {
        if (puVar10[lVar8] == '\0') {
LAB_020fd544:
          iVar7 = (int)lVar8;
joined_r0x020fd548:
          if (7 < iVar7) {
            iVar7 = 7;
          }
          goto LAB_020fd550;
        }
        if (puVar10[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_020fd544;
        }
        if (puVar10[lVar8 + 2] == '\0') {
          iVar7 = (int)lVar8 + 2;
          goto joined_r0x020fd548;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      iVar7 = 0;
LAB_020fd550:
      local_a8 = puVar1;
      memcpy(local_94,puVar10,(long)iVar7);
      local_94[iVar7] = 0;
    }
    local_a8 = puVar3 + 0x10;
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(local_88 + 0x18))(&local_88);
    puVar10 = local_80;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar5 = local_80;
    if (puVar10 == local_a0) {
LAB_020fd630:
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar10 = (undefined1 *)param_2[1];
      if (puVar5 == puVar10) goto LAB_020fd6c8;
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      break;
    }
    uVar9 = 0;
    bVar6 = true;
    do {
      if (local_80[uVar9] != local_a0[uVar9]) break;
      if (local_80[uVar9] == '\0') {
        if (bVar6) goto LAB_020fd630;
        break;
      }
      if (local_80[uVar9 + 1] != local_a0[uVar9 + 1]) break;
      if (local_80[uVar9 + 1] == '\0') goto LAB_020fd630;
      if (local_80[uVar9 + 2] != local_a0[uVar9 + 2]) break;
      if (local_80[uVar9 + 2] == '\0') goto LAB_020fd630;
      bVar6 = uVar9 < 0x7fffe;
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x23) {
      return;
    }
  } while( true );
  while( true ) {
    lVar2 = param_2[1] + lVar8;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_020fd6a0;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_020fd6a0;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
    if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_020fd6a0;
  }
  lVar8 = 0;
LAB_020fd6a0:
  iVar7 = (int)lVar8;
  if (local_78 <= (int)lVar8) {
    iVar7 = local_78 + -1;
  }
  memcpy(puVar5,puVar10,(long)iVar7);
  puVar5[iVar7] = 0;
LAB_020fd6c8:
  iVar7 = local_78;
  puVar10 = local_80;
  local_a0 = *(undefined1 **)(puVar4 + (uVar11 & 0xffffffff) * 8 + 0xb0);
  local_64[0] = 0;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  puStack_b0 = &DAT_0407ebb1;
  local_a8 = local_b8;
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar5 = local_80;
  (**(code **)(local_88 + 0x18))(&local_88);
  lVar8 = 0;
  do {
    if (local_80[lVar8] == '\0') goto LAB_020fd75c;
    if (local_80[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_020fd75c;
    }
    if (local_80[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_020fd75c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_020fd75c:
  FUN_038d0770(puVar10,0,iVar7,puVar5,lVar8,&local_a8,&local_b8,local_64);
  local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
  uVar9 = FUN_038d30c0(&local_a8,&local_88,10);
  if (((uVar9 & 1) != 0) && ((int)local_a8 <= (int)(uint)(byte)(&DAT_053e6e93)[uVar11 & 0xffffffff])
     ) {
    FUN_020fd218(param_1,uVar11 & 0xffffffff);
  }
  return;
}

