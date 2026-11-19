
void FUN_03ca4210(long *param_1,long *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  void *__ptr;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [56];
  undefined *local_1a0;
  char *local_198;
  int local_190;
  char local_18c [255];
  undefined1 local_8d;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  
  puVar3 = PTR_DAT_04bb21f8;
  local_18c[0] = '\0';
  local_190 = 0x100;
  lVar8 = 0;
  local_8d = 0;
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_18c[lVar8] == '\0') goto LAB_03ca42b0;
    if (local_18c[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03ca42b0;
    }
    if (local_18c[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03ca42b0;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03ca42b0:
  uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar2 = 4;
  if (0xfb < uVar1) {
    uVar2 = 0xff - uVar1;
  }
  local_198 = local_18c;
  if (0 < (int)uVar2) {
    memcpy(local_18c + uVar1,&DAT_04079d7a,(ulong)uVar2);
    local_18c[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  pcVar10 = local_198;
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  lVar8 = 0;
  do {
    if (local_198[lVar8] == '\0') goto LAB_03ca434c;
    if (local_198[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03ca434c;
    }
    if (local_198[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03ca434c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03ca434c:
  uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = 0;
  do {
    if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_03ca43ac;
    lVar5 = param_2[1] + lVar8;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03ca43ac;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03ca43ac;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03ca43ac:
  uVar2 = (uint)lVar8;
  if ((int)(local_190 - uVar1) <= (int)(uint)lVar8) {
    uVar2 = local_190 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(pcVar10 + uVar1,(void *)param_2[1],(ulong)uVar2);
    pcVar10[(int)(uVar2 + uVar1)] = '\0';
  }
  uVar9 = 1;
  if ((param_3 & 1) != 0) {
    uVar9 = 0xffffffff;
  }
  lVar8 = FUN_03c9ef54(&local_1a0,*(undefined8 *)(param_1[4] + 0x28),uVar9);
  param_1[0x12] = lVar8;
  lVar8 = (**(code **)(**(long **)PTR_DAT_04bd4508 + 8))
                    (*(long **)PTR_DAT_04bd4508,param_2,lVar8,param_4 & 1);
  if (lVar8 != 0) {
    FUN_00363ddc(auStack_1d8,lVar8);
    local_1e0 = 0;
    iVar4 = FUN_003640a0(auStack_1d8,"timg/__Combined.bntx");
    if (((-1 < iVar4) && (lVar5 = FUN_00364024(auStack_1d8,&local_1e0,iVar4), lVar5 != 0)) &&
       (local_1e0._4_4_ != 0)) {
      lVar5 = FUN_0034fb8c();
      param_1[0x16] = lVar5;
      lVar6 = *(long *)(lVar5 + 0x30);
      local_70 = 0;
      uVar11 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
      local_88 = 0x21;
      lStack_78 = nn::util::BinaryBlockHeader::GetBlockSize();
      lStack_78 = lStack_78 + -0x10;
      local_84 = (undefined4)lStack_78;
      local_80 = lVar6 + 0x10;
      FUN_003490c4(*(undefined8 *)(lVar5 + 0x40),uVar11,&local_88);
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x50) = 0;
    }
    lVar5 = param_1[0x16];
    plVar7 = (long *)FUN_00367b30(0x50);
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)plVar7;
      plVar7[1] = (long)plVar7;
      FUN_00363ddc(plVar7 + 2,lVar8);
    }
    plVar7[9] = lVar5;
    lVar5 = *plVar7;
    *plVar7 = (long)(param_1 + 0xd);
    *(long *)(lVar5 + 8) = param_1[0xe];
    *(long *)param_1[0xe] = lVar5;
    param_1[0xe] = (long)plVar7;
    FUN_00364020(auStack_1d8);
  }
  if (*(char *)((long)param_1 + 0xce) != '\0') {
    (**(code **)(param_1[0x17] + 0x18))(param_1 + 0x17);
    __ptr = (void *)param_1[0x18];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar7 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xce) = 0;
  }
  FUN_03c5a110(param_1 + 0x17,param_2,0xffffffff,2);
  if (lVar8 == 0) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  else {
    local_8d = 0;
    local_18c[0] = '\0';
    local_190 = 0x100;
    local_1a0 = puVar3 + 0x10;
    local_198 = local_18c;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar10 = (char *)param_2[1];
    if (local_18c != pcVar10) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      do {
        if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_03ca4644;
        lVar5 = param_2[1] + lVar8;
        if (*(char *)(lVar5 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03ca4644;
        }
        if (*(char *)(lVar5 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03ca4644;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03ca4644:
      iVar4 = (int)lVar8;
      if (local_190 <= (int)lVar8) {
        iVar4 = local_190 + -1;
      }
      memcpy(local_18c,pcVar10,(long)iVar4);
      local_18c[iVar4] = '\0';
    }
    pcVar10 = local_198;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar8 = 0;
    do {
      if (local_198[lVar8] == '\0') goto LAB_03ca46c0;
      if (local_198[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03ca46c0;
      }
      if (local_198[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03ca46c0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03ca46c0:
    uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    uVar2 = 6;
    if ((int)(local_190 - uVar1) < 7) {
      uVar2 = local_190 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy(pcVar10 + uVar1,".bflyt",(ulong)uVar2);
      pcVar10[(ulong)uVar2 + (ulong)uVar1] = '\0';
    }
    plVar7 = (long *)(**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,0x626c7974,local_198);
    *(bool *)(param_1 + 0x1a) = lVar8 != 0;
  }
  return;
}

