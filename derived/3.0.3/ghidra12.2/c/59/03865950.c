
void FUN_03865950(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *__src;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined8 *local_88;
  int local_80;
  undefined8 local_7c [7];
  undefined1 local_3d;
  uint local_38;
  uint local_34;
  
  local_34 = (param_3 ^ 0xffffffff) & 1;
  local_38 = (uint)(param_2 != 0);
  if (*(long *)(param_1 + 0x468) != 0) {
    if ((*(byte *)(param_1 + 1000) >> 2 & 1) != 0) {
      local_38 = (uint)(param_2 == 0);
    }
    *(uint *)(*(long *)(param_1 + 0x468) + 0x40) = local_38;
  }
  plVar1 = (long *)(param_1 + 0x450);
  plVar2 = plVar1 + local_34;
  if (2 < local_34) {
    plVar2 = plVar1;
  }
  if (*plVar2 == 0) {
    return;
  }
  if (local_34 < 3) {
    local_88 = local_7c;
    local_3d = 0;
    __src = (undefined8 *)(&PTR_s_cScroll_04b5f620)[local_34];
    local_80 = 0x40;
    local_90 = &PTR_LAB_048f96d0;
    if (local_88 == __src) {
      lVar4 = 0x3f;
      goto LAB_03865aa8;
    }
  }
  else {
    __src = &DAT_0407ebb1;
    local_90 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
  }
  local_3d = 0;
  local_80 = 0x40;
  local_88 = local_7c;
  lVar4 = 0;
  do {
    if (*(char *)((long)__src + lVar4) == '\0') {
LAB_03865a7c:
      iVar3 = (int)lVar4;
joined_r0x03865a80:
      if (0x3f < iVar3) {
        iVar3 = 0x3f;
      }
      goto LAB_03865a88;
    }
    if (*(char *)((long)__src + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03865a7c;
    }
    if (*(char *)((long)__src + lVar4 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x03865a80;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = 0;
LAB_03865a88:
  memcpy(local_88,__src,(long)iVar3);
  *(undefined1 *)((long)local_7c + (long)iVar3) = 0;
  lVar4 = (long)local_80 + -1;
  __src = local_88;
LAB_03865aa8:
  lVar5 = 0;
  local_90 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  *(undefined1 *)((long)__src + lVar4) = 0;
  do {
    if (*(char *)((long)local_88 + lVar5) == '\0') {
LAB_03865af4:
      iVar3 = (int)lVar5;
joined_r0x03865af8:
      if (0 < iVar3) {
        puStack_98 = (undefined *)((long)local_88 + 1);
        goto LAB_03865b1c;
      }
      break;
    }
    if (*(char *)((long)local_88 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03865af4;
    }
    if (*(char *)((long)local_88 + lVar5 + 2) == '\0') {
      iVar3 = (int)lVar5 + 2;
      goto joined_r0x03865af8;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  puStack_98 = PTR_DAT_04c4b988;
LAB_03865b1c:
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  plVar2 = plVar1 + local_34;
  if (2 < local_34) {
    plVar2 = plVar1;
  }
  FUN_03d66950(param_1,&local_a0,*plVar2);
  return;
}

