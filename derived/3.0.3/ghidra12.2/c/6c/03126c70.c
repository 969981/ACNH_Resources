
void FUN_03126c70(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 *__src;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined8 *local_88;
  int local_80;
  undefined8 local_7c [7];
  undefined1 local_3d;
  uint local_34;
  
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x2c4) & 1) != 0)) {
    *(byte *)(param_1 + 0x2c4) = *(byte *)(param_1 + 0x2c4) & 0xfe;
    return;
  }
  plVar1 = (long *)(param_1 + 0x380) + param_2;
  if (1 < param_2) {
    plVar1 = (long *)(param_1 + 0x380);
  }
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    return;
  }
  local_34 = param_2;
  if (param_2 < 2) {
    local_88 = local_7c;
    local_3d = 0;
    __src = (undefined8 *)(&PTR_s_cCursorOn_04b024e8)[param_2];
    local_80 = 0x40;
    local_90 = &PTR_LAB_048f96d0;
    if (local_88 == __src) {
      lVar3 = 0x3f;
      goto LAB_03126dc8;
    }
  }
  else {
    __src = &DAT_0407ebb1;
    local_90 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
  }
  local_3d = 0;
  local_80 = 0x40;
  local_88 = local_7c;
  lVar3 = 0;
  do {
    if (*(char *)((long)__src + lVar3) == '\0') {
LAB_03126d9c:
      iVar2 = (int)lVar3;
joined_r0x03126da0:
      if (0x3f < iVar2) {
        iVar2 = 0x3f;
      }
      goto LAB_03126da8;
    }
    if (*(char *)((long)__src + lVar3 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_03126d9c;
    }
    if (*(char *)((long)__src + lVar3 + 2) == '\0') {
      iVar2 = (int)lVar3 + 2;
      goto joined_r0x03126da0;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  iVar2 = 0;
LAB_03126da8:
  memcpy(local_88,__src,(long)iVar2);
  *(undefined1 *)((long)local_7c + (long)iVar2) = 0;
  lVar3 = (long)local_80 + -1;
  __src = local_88;
LAB_03126dc8:
  lVar4 = 0;
  local_90 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  *(undefined1 *)((long)__src + lVar3) = 0;
  do {
    if (*(char *)((long)local_88 + lVar4) == '\0') {
LAB_03126e14:
      iVar2 = (int)lVar4;
joined_r0x03126e18:
      if (0 < iVar2) {
        puStack_98 = (undefined *)((long)local_88 + 1);
        goto LAB_03126e3c;
      }
      break;
    }
    if (*(char *)((long)local_88 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03126e14;
    }
    if (*(char *)((long)local_88 + lVar4 + 2) == '\0') {
      iVar2 = (int)lVar4 + 2;
      goto joined_r0x03126e18;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  puStack_98 = PTR_DAT_04c4b988;
LAB_03126e3c:
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  FUN_03d66950(param_1,&local_a0,lVar5);
  return;
}

