
void FUN_03135100(long param_1,uint param_2)

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
  uint local_34;
  
  plVar1 = (long *)(param_1 + 0x288);
  plVar2 = plVar1 + param_2;
  if (2 < param_2) {
    plVar2 = plVar1;
  }
  if (*plVar2 == 0) {
    return;
  }
  local_34 = param_2;
  if (param_2 < 3) {
    local_88 = local_7c;
    local_3d = 0;
    __src = (undefined8 *)(&PTR_s_cSelectNext_04b03820)[param_2];
    local_80 = 0x40;
    local_90 = &PTR_LAB_048f96d0;
    if (local_88 == __src) {
      lVar4 = 0x3f;
      goto LAB_03135228;
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
LAB_031351fc:
      iVar3 = (int)lVar4;
joined_r0x03135200:
      if (0x3f < iVar3) {
        iVar3 = 0x3f;
      }
      goto LAB_03135208;
    }
    if (*(char *)((long)__src + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_031351fc;
    }
    if (*(char *)((long)__src + lVar4 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x03135200;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = 0;
LAB_03135208:
  memcpy(local_88,__src,(long)iVar3);
  *(undefined1 *)((long)local_7c + (long)iVar3) = 0;
  lVar4 = (long)local_80 + -1;
  __src = local_88;
LAB_03135228:
  lVar5 = 0;
  local_90 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  *(undefined1 *)((long)__src + lVar4) = 0;
  do {
    if (*(char *)((long)local_88 + lVar5) == '\0') {
LAB_03135274:
      iVar3 = (int)lVar5;
joined_r0x03135278:
      if (0 < iVar3) {
        puStack_98 = (undefined *)((long)local_88 + 1);
        goto LAB_0313529c;
      }
      break;
    }
    if (*(char *)((long)local_88 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03135274;
    }
    if (*(char *)((long)local_88 + lVar5 + 2) == '\0') {
      iVar3 = (int)lVar5 + 2;
      goto joined_r0x03135278;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  puStack_98 = PTR_DAT_04c4b988;
LAB_0313529c:
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  plVar2 = plVar1 + local_34;
  if (2 < local_34) {
    plVar2 = plVar1;
  }
  FUN_03d66950(param_1,&local_a0,*plVar2);
  return;
}

