
/* WARNING: Removing unreachable block (ram,0x003bb174) */
/* WARNING: Removing unreachable block (ram,0x003bb1a4) */
/* WARNING: Removing unreachable block (ram,0x003bb1b0) */
/* WARNING: Removing unreachable block (ram,0x003bb2ec) */
/* WARNING: Removing unreachable block (ram,0x003bb2f4) */
/* WARNING: Removing unreachable block (ram,0x003bb308) */
/* WARNING: Removing unreachable block (ram,0x003bb310) */
/* WARNING: Removing unreachable block (ram,0x003bb318) */
/* WARNING: Removing unreachable block (ram,0x003bb7ec) */
/* WARNING: Removing unreachable block (ram,0x003bb23c) */
/* WARNING: Removing unreachable block (ram,0x003bb474) */
/* WARNING: Removing unreachable block (ram,0x003bb47c) */
/* WARNING: Removing unreachable block (ram,0x003bb490) */
/* WARNING: Removing unreachable block (ram,0x003bb498) */
/* WARNING: Removing unreachable block (ram,0x003bb7d8) */
/* WARNING: Removing unreachable block (ram,0x003bb840) */

int FUN_003baf20(long param_1,long *param_2,int param_3,uint param_4,long param_5,long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *local_ba0;
  undefined1 auStack_b78 [20];
  int local_b64;
  uint local_b60;
  undefined4 local_b28;
  long local_b20;
  undefined1 auStack_b10 [4];
  undefined4 local_b0c;
  int local_afc;
  byte local_af4;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  long *local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0 [334];
  
  FUN_003bbb40(param_1 + 8,param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_ae8 = *(undefined8 *)(param_1 + 0x10);
  plVar10 = *(long **)(param_1 + 0x28);
  local_ad8 = *(undefined8 *)(param_1 + 0x30);
  local_af0 = uVar1;
  local_ae0 = plVar10;
  uVar6 = FUN_003bbc10(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    return 0xc;
  }
  if (*param_2 != 0) {
    FUN_003cfe24(param_2);
  }
  lVar7 = FUN_003b8394(plVar10,param_3);
  local_af4 = 0;
  plVar8 = *(long **)(param_1 + 0x2f0);
  if (((plVar8 == (long *)0x0) || (lVar7 == 0)) || ((char)plVar8[1] == '\0')) {
    if (param_3 == -1) {
      return 2;
    }
LAB_003bb060:
    iVar4 = FUN_003b8458(plVar10,param_3);
  }
  else {
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = *(long **)(param_1 + 0x2f0);
    if (((char)plVar8[1] == '\0') ||
       (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,lVar7), (uVar6 & 1) == 0)) {
      *(undefined1 *)(plVar10[2] + 8) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 0;
      local_af4 = 1;
      goto LAB_003bb060;
    }
    plVar8 = (long *)plVar10[2];
    if ((char)plVar8[1] == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(*plVar8 + 0x28))(plVar8,lVar7);
    }
    if (param_5 != 0) {
      plVar8 = (long *)plVar10[2];
      if ((char)plVar8[1] == '\0') {
        param_3 = -1;
      }
      else {
        param_3 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7);
      }
    }
    if (iVar4 == 3) {
      plVar8 = *(long **)(param_1 + 0x2f0);
      bVar3 = false;
      if ((char)plVar8[1] != '\0') {
        pcVar16 = *(code **)(*plVar8 + 0x30);
        puVar14 = PTR_DAT_04bd02c8;
        puVar15 = PTR_s_bxwsd_04bd02e0;
LAB_003bb434:
        lVar7 = (*pcVar16)(plVar8,lVar7,puVar14,puVar15,0);
        bVar3 = lVar7 != 0;
      }
LAB_003bb448:
      local_af4 = bVar3 ^ 1;
    }
    else if (iVar4 == 2) {
      local_af4 = 0;
    }
    else if (iVar4 == 1) {
      plVar8 = *(long **)(param_1 + 0x2f0);
      bVar3 = false;
      if ((char)plVar8[1] != '\0') {
        pcVar16 = *(code **)(*plVar8 + 0x30);
        puVar14 = PTR_DAT_04bd02d0;
        puVar15 = PTR_s_bxseq_04bd02e8;
        goto LAB_003bb434;
      }
      goto LAB_003bb448;
    }
    if (local_af4 != 0) {
      *(undefined1 *)(plVar10[2] + 8) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 0;
    }
  }
  uVar6 = FUN_003b84d0(plVar10,auStack_b10,param_3);
  if ((uVar6 & 1) == 0) goto joined_r0x003bb2a8;
  FUN_003e42c8(auStack_b78,auStack_b10);
  FUN_003e4308(auStack_b78,param_6);
  lVar19 = *(long *)(param_1 + 0x300);
  FUN_003b4f70(local_ad0);
  lVar7 = FUN_03b38a74();
  lVar9 = FUN_03b38e8c(local_ad0);
  if (*(char *)(lVar7 + 0x951) == '\0') {
    lVar18 = local_b20;
    if ((local_b20 == 0) && (lVar18 = lVar7 + 0x558, lVar19 != 0)) {
      lVar18 = lVar19;
    }
  }
  else {
    lVar9 = FUN_003b6950(lVar7,local_b28);
    lVar18 = lVar9;
  }
  if ((local_afc != 0) &&
     (iVar5 = FUN_003bb850(lVar9,auStack_b10,param_3,plVar10,
                           *(long *)(param_1 + 0x48) + ((ulong)local_b60 & 0xffffff) * 0x88),
     iVar5 != 0)) goto LAB_003bb124;
  uVar2 = local_b64 - (param_4 & 1);
  uVar17 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (0x7e < (int)uVar17) {
    uVar17 = 0x7f;
  }
  if (((*(long *)(param_1 + 0x2f0) == 0) || (*(char *)(*(long *)(param_1 + 0x2f0) + 8) == '\0')) &&
     (uVar6 = (**(code **)(*plVar10 + 0x30))(plVar10), (uVar6 & 1) != 0)) {
    uVar11 = FUN_003b8394(plVar10,local_b0c);
    local_b60 = FUN_003b83ec(uVar1,uVar11);
  }
  if (local_b60 == 0xffffffff) {
    if (local_af4 != 0) {
      *(undefined1 *)(plVar10[2] + 8) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
    }
    plVar10 = *(long **)(param_1 + 0x2f0);
    if ((plVar10 == (long *)0x0) || ((char)plVar10[1] == '\0')) {
      return 0xf;
    }
    (**(code **)(*plVar10 + 0x20))();
    return 0xf;
  }
  lVar7 = *(long *)(param_1 + 0x48) + (ulong)(local_b60 & 0xffffff) * 0x88;
  uVar6 = FUN_003ce5d0(lVar7,uVar17);
  if ((uVar6 & 1) == 0) {
    if (local_af4 != 0) {
      *(undefined1 *)(plVar10[2] + 8) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
    }
    plVar10 = *(long **)(param_1 + 0x2f0);
    if ((plVar10 == (long *)0x0) || ((char)plVar10[1] == '\0')) {
      return 1;
    }
    (**(code **)(*plVar10 + 0x20))();
    return 1;
  }
  if (iVar4 == 3) {
    if (*(char *)(param_1 + 0x2fa) == '\0') {
      plVar13 = (long *)FUN_003e0c30(param_1 + 0x138,param_3,uVar2,0,0,lVar18);
      if (plVar13 == (long *)0x0) goto LAB_003bb694;
      plVar12 = (long *)0x0;
      plVar8 = (long *)0x0;
      plVar20 = (long *)0x0;
      local_ba0 = plVar13;
    }
    else {
      plVar13 = (long *)FUN_003e1d10(param_1 + 0x1c0,param_3,uVar2,0,0,lVar18);
      if (plVar13 == (long *)0x0) {
LAB_003bb694:
        FUN_003e04b0(3);
        goto joined_r0x003bb68c;
      }
      plVar12 = (long *)0x0;
      local_ba0 = (long *)0x0;
      plVar8 = (long *)0x0;
      plVar20 = plVar13;
    }
  }
  else if (iVar4 == 2) {
    plVar8 = (long *)FUN_003e2c70(param_1 + 0x1f8,param_3,uVar2,0,0,lVar18);
    if (plVar8 == (long *)0x0) {
      FUN_003e04b0(2);
joined_r0x003bb68c:
      if (local_af4 != 0) {
        *(undefined1 *)(plVar10[2] + 8) = 1;
        *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
      }
LAB_003bb6b8:
      plVar10 = *(long **)(param_1 + 0x2f0);
      if ((plVar10 != (long *)0x0) && ((char)plVar10[1] != '\0')) {
        (**(code **)(*plVar10 + 0x20))();
      }
      return 0xe;
    }
    plVar12 = (long *)0x0;
    local_ba0 = (long *)0x0;
    plVar13 = plVar8;
    plVar20 = (long *)0x0;
  }
  else {
    if (iVar4 != 1) goto joined_r0x003bb2a8;
    plVar12 = (long *)FUN_003bc610(param_1 + 0x50,param_3,uVar2,0,0,lVar18);
    if (plVar12 == (long *)0x0) {
      FUN_003e04b0(1);
      if (local_af4 != 0) {
        *(undefined1 *)(plVar10[2] + 8) = 1;
        *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
      }
      goto LAB_003bb6b8;
    }
    plVar8 = (long *)0x0;
    local_ba0 = (long *)0x0;
    plVar13 = plVar12;
    plVar20 = (long *)0x0;
  }
  uVar6 = FUN_003ce2f0(lVar7,plVar13);
  if ((uVar6 & 1) == 0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_af4 != 0) {
      *(undefined1 *)(plVar10[2] + 8) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
    }
    plVar10 = *(long **)(param_1 + 0x2f0);
    if ((plVar10 == (long *)0x0) || ((char)plVar10[1] == '\0')) {
      return 0xff;
    }
    (**(code **)(*plVar10 + 0x20))(plVar10);
    return 0xff;
  }
  if ((param_6 != 0) && ((*(byte *)(param_6 + 1) >> 1 & 1) != 0)) {
    plVar13[0x3b] = *(long *)(param_6 + 0x140);
  }
  FUN_003cfb84(plVar13);
  if (iVar4 == 3) {
    if (*(char *)(param_1 + 0x2fa) != '\0') {
      iVar5 = FUN_003e1d70(param_1 + 0x1c0,plVar10,local_ad8,param_3,plVar20,auStack_b10,auStack_b78
                          );
      if (iVar5 != 0) goto LAB_003bb124;
      goto LAB_003bb788;
    }
    iVar5 = FUN_003e0c90(param_1 + 0x138,plVar10,local_ad8,param_3,local_ba0,auStack_b10,auStack_b78
                        );
    plVar8 = local_ba0;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 1) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
joined_r0x003bb2a8:
        if (local_af4 != 0) {
          *(undefined1 *)(plVar10[2] + 8) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
        }
        plVar10 = *(long **)(param_1 + 0x2f0);
        if ((plVar10 == (long *)0x0) || ((char)plVar10[1] == '\0')) {
          return 3;
        }
        (**(code **)(*plVar10 + 0x20))();
        return 3;
      }
      iVar5 = FUN_003bc670(param_1 + 0x50,&local_af0,param_3,plVar12,auStack_b10,auStack_b78);
      if (iVar5 == 0) goto LAB_003bb788;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      goto LAB_003bb124;
    }
    iVar5 = FUN_003e2cd0(param_1 + 0x1f8,plVar10,local_ad8,param_3,plVar8,auStack_b10,auStack_b78);
  }
  if (iVar5 == 0) {
LAB_003bb788:
    if (local_af4 != 0) {
      *(undefined1 *)(plVar10[2] + 8) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
    }
    plVar8 = *(long **)(param_1 + 0x2f0);
    if ((plVar8 != (long *)0x0) && ((char)plVar8[1] != '\0')) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x20))();
    }
    FUN_003bba34(plVar8,plVar13,auStack_b10);
    if ((param_4 & 1) != 0) {
      FUN_003cebf8(plVar13,local_b64);
    }
    FUN_003cfd90(plVar13,plVar10);
    local_ad0[0] = nn::os::GetSystemTick();
    FUN_003cfd84(plVar13,local_ad0);
    FUN_003cfeac(param_2,plVar13);
    return 0;
  }
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_003bb124:
  if (local_af4 != 0) {
    *(undefined1 *)(plVar10[2] + 8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 8) = 1;
  }
  plVar10 = *(long **)(param_1 + 0x2f0);
  if ((plVar10 != (long *)0x0) && ((char)plVar10[1] != '\0')) {
    (**(code **)(*plVar10 + 0x20))();
  }
  return iVar5;
}

