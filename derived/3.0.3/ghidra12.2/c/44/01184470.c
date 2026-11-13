
void FUN_01184470(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *__src;
  int iVar3;
  undefined1 *__src_00;
  long lVar4;
  long *plVar5;
  undefined *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *puStack_90;
  int local_88;
  undefined1 auStack_84 [63];
  undefined1 local_45;
  
  local_9d = 0;
  local_e0 = 0x40;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = &PTR_LAB_04983700;
  param_1[1] = puVar1;
  __src_00 = *(undefined1 **)(param_2 + 8);
  param_1[2] = __src_00;
  param_1[3] = param_3;
  local_e8 = local_dc;
  if (local_dc == __src_00) {
    lVar4 = 0x3f;
  }
  else {
    lVar4 = 0;
    do {
      if (__src_00[lVar4] == '\0') {
LAB_0118451c:
        iVar3 = (int)lVar4;
joined_r0x01184520:
        if (0x3f < iVar3) {
          iVar3 = 0x3f;
        }
        goto LAB_01184528;
      }
      if (__src_00[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0118451c;
      }
      if (__src_00[lVar4 + 2] == '\0') {
        iVar3 = (int)lVar4 + 2;
        goto joined_r0x01184520;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    iVar3 = 0;
LAB_01184528:
    memcpy(local_dc,__src_00,(long)iVar3);
    local_dc[iVar3] = 0;
    lVar4 = (long)local_e0 + -1;
    __src_00 = local_e8;
  }
  __src = local_e8;
  puVar2 = PTR_DAT_04bb2bc0;
  local_88 = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_45 = 0;
  local_98 = PTR_DAT_04bb2f70 + 0x10;
  __src_00[lVar4] = 0;
  lVar4 = DAT_050b8df8;
  local_f0 = puVar1;
  puStack_90 = auStack_84;
  if (auStack_84 != local_e8) {
    (**(code **)(puVar2 + 0x28))(&local_f0);
    lVar4 = 0;
    do {
      if (local_e8[lVar4] == '\0') goto LAB_011845ec;
      if (local_e8[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_011845ec;
      }
      if (local_e8[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_011845ec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_011845ec:
    iVar3 = (int)lVar4;
    if (local_88 <= (int)lVar4) {
      iVar3 = local_88 + -1;
    }
    memcpy(auStack_84,__src,(long)iVar3);
    auStack_84[iVar3] = 0;
    lVar4 = DAT_050b8df8;
  }
  do {
    local_98 = puVar1;
    if (lVar4 == 0) {
      return;
    }
    iVar3 = FUN_010f70d0(&local_98,lVar4 + 0x20);
    if (iVar3 < 0) {
      plVar5 = (long *)(lVar4 + 8);
    }
    else {
      if (iVar3 == 0) {
        param_1[2] = *(undefined8 *)(lVar4 + 0x80);
        return;
      }
      plVar5 = (long *)(lVar4 + 0x10);
    }
    puVar1 = local_98;
    lVar4 = *plVar5;
  } while( true );
}

