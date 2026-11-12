
void FUN_0073aab0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *__src;
  undefined **ppuVar5;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  int local_d0;
  undefined1 local_cc [127];
  undefined1 local_4d;
  undefined1 local_48;
  
  if (*(long *)(param_1 + 0x1138) != 0) {
    local_4d = 0;
    local_d0 = 0x80;
    local_cc[0] = 0;
    local_e0 = &DAT_048fc708;
    local_48 = 1;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x48) + 0x15c);
    if ((uVar2 < 0xec) && ((int *)(&DAT_04c969c8)[uVar2] != (int *)0x0)) {
      ppuVar5 = (undefined **)(PTR_DAT_04bb3840 + (long)*(int *)(&DAT_04c969c8)[uVar2] * 0x10);
    }
    else {
      ppuVar5 = &PTR_PTR_04c4b980;
    }
    puStack_d8 = local_cc;
    (**(code **)(*ppuVar5 + 0x18))(ppuVar5);
    __src = ppuVar5[1];
    if (local_cc != __src) {
      (**(code **)(*ppuVar5 + 0x18))(ppuVar5);
      puVar4 = ppuVar5[1];
      lVar3 = 0;
      do {
        if (puVar4[lVar3] == '\0') goto LAB_0073abc0;
        if (puVar4[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_0073abc0;
        }
        if (puVar4[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_0073abc0;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_0073abc0:
      iVar1 = (int)lVar3;
      if (local_d0 <= (int)lVar3) {
        iVar1 = local_d0 + -1;
      }
      memcpy(local_cc,__src,(long)iVar1);
      local_cc[iVar1] = 0;
    }
    if ((*(char *)(param_1 + 0x11de) == '\0') ||
       ((*(uint *)(*(long *)(param_1 + 0x48) + 0x248) >> 7 & 1) == 0)) {
      local_48 = *(char *)(param_1 + 0x1140) == '\0';
    }
    else {
      local_48 = false;
    }
    lVar3 = *(long *)(param_1 + 0x1138);
    if (((*(char *)(lVar3 + 0x2c0) != '\0') && (*(char *)(lVar3 + 0xae) != '\0')) &&
       (*(char *)(lVar3 + 0xb4) == '\0')) {
      *(undefined1 *)(lVar3 + 0x2c0) = 0;
      FUN_03855b20(lVar3 + 0xc0,0);
    }
    FUN_0384f3b0(lVar3,&local_e0);
    *(char *)(param_1 + 0x1140) = '\0';
  }
  return;
}

