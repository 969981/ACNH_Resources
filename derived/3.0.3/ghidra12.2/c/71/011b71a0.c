
void FUN_011b71a0(long param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  char *__src;
  uint uVar3;
  long lVar4;
  char *__src_00;
  int iVar5;
  undefined1 *__dest;
  undefined4 uVar6;
  undefined **local_b8;
  char *local_b0;
  int local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_b0 = "EventPlazaBuilt";
  local_b8 = ppuVar1;
  uVar3 = FUN_0273f0a0(&local_b8);
  local_50 = PTR_DAT_04bbb980 + 0x10;
  uVar3 = (uVar3 & 1) - (uint)*(ushort *)(DAT_050d57c8 + 0x298);
  if (uVar3 < *(uint *)(DAT_050d57c8 + 0x278)) {
    local_48 = *(undefined8 *)(*(long *)(DAT_050d57c8 + 0x280) + (long)(int)uVar3 * 8);
  }
  else {
    local_48 = 0;
  }
  lVar4 = DAT_050d57c8 + 0x20;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0;
  local_b0 = (char *)FUN_011a1820(&local_50);
  local_b8 = ppuVar1;
  FUN_00979900(&local_b8,lVar4,&local_60);
  local_b0 = (char *)CONCAT44(local_b0._4_4_,(float)local_58._4_4_ * 5.0);
  local_b8 = (undefined **)(ulong)(uint)((float)(int)local_58 * 5.0);
  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar4 == 0)) {
    uVar6 = 0xc3fa0000;
  }
  else {
    if (DAT_04c487d4 == -1) {
      local_34 = 7;
    }
    else {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      local_34 = 7;
      if ((*puVar2 & 2) != 0) {
        local_34 = 5;
      }
    }
    local_38[0] = 0;
    uVar6 = FUN_00962700(lVar4,&local_b8,&local_34,1,local_38);
  }
  __src_00 = (char *)FUN_011a1820(&local_50);
  local_65 = 0;
  local_a8 = 0x40;
  local_b0 = local_a4;
  if (local_a4 == __src_00) {
    lVar4 = 0x3f;
  }
  else {
    lVar4 = 0;
    do {
      if (__src_00[lVar4] == '\0') {
LAB_011b739c:
        iVar5 = (int)lVar4;
joined_r0x011b73a0:
        if (0x3f < iVar5) {
          iVar5 = 0x3f;
        }
        goto LAB_011b73a8;
      }
      if (__src_00[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_011b739c;
      }
      if (__src_00[lVar4 + 2] == '\0') {
        iVar5 = (int)lVar4 + 2;
        goto joined_r0x011b73a0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    iVar5 = 0;
LAB_011b73a8:
    memcpy(local_a4,__src_00,(long)iVar5);
    local_a4[iVar5] = 0;
    lVar4 = (long)local_a8 + -1;
    __src_00 = local_b0;
  }
  __src = local_b0;
  __dest = *(undefined1 **)(param_1 + 0x58);
  local_b8 = &PTR_LAB_048fb9f8;
  __src_00[lVar4] = 0;
  if (__dest != local_b0) {
    (*(code *)PTR_FUN_048fba10)(&local_b8);
    lVar4 = 0;
    do {
      if (local_b0[lVar4] == '\0') goto LAB_011b7450;
      if (local_b0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_011b7450;
      }
      if (local_b0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_011b7450;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_011b7450:
    iVar5 = (int)lVar4;
    if (*(int *)(param_1 + 0x60) <= (int)lVar4) {
      iVar5 = *(int *)(param_1 + 0x60) + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    __dest[iVar5] = 0;
  }
  FUN_00939474(uVar6,0,param_1 + 8,&local_60,0);
  return;
}

