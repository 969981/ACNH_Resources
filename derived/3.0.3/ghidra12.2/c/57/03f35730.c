
long * FUN_03f35730(long param_1,long param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined *local_588;
  char *local_580;
  int local_578;
  long *local_558;
  int local_480;
  undefined8 local_188;
  undefined8 local_180;
  ulong local_178 [4];
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  ulong *local_138;
  undefined *local_f0;
  ulong *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_bb;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined *local_78;
  ulong *local_70 [2];
  
  puVar1 = PTR_DAT_04bb2020;
  local_bc = 0;
  local_d8 = 1;
  local_c0 = 0x1010100;
  local_bb = 0x1010101;
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  puStack_c8 = &DAT_0419b684;
  local_b4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  uStack_98 = 0;
  local_e0 = PTR_DAT_04bdf0b0 + 0x10;
  local_94 = 0;
  uStack_90 = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  local_70[0] = (ulong *)&DAT_0419b684;
  local_78 = local_d0;
  FUN_03f335d0(param_1,&local_e0,&local_78,param_2);
  lVar6 = CONCAT44(local_8c,uStack_90);
  if (uStack_a0 == 0) {
    if (lVar6 != 0) {
      uStack_a0 = param_1 + 0x700;
      nn::os::LockMutex((MutexType *)(param_1 + 0x7a8));
      lVar6 = CONCAT44(local_8c,uStack_90);
      goto joined_r0x03f35808;
    }
  }
  else {
joined_r0x03f35808:
    if (lVar6 != 0) {
      local_178[0] = local_178[0] & 0xffffffffffffff00;
      local_f0 = puVar1 + 0x10;
      local_e8 = (ulong *)&DAT_0419b684;
      local_180 = 0x8100000000;
      local_188 = local_178;
      if ((char)local_bb == '\0') {
        ppuVar11 = local_70;
      }
      else {
        (**(code **)(local_78 + 0x18))(&local_78);
        puVar10 = local_188;
        if (local_188 != local_70[0]) {
          lVar6 = 0;
          do {
            pcVar7 = (char *)((long)local_70[0] + lVar6);
            lVar6 = lVar6 + 1;
          } while (*pcVar7 != '\0');
          uVar12 = (int)lVar6 - 1;
          if (local_180._4_4_ <= (int)uVar12) {
            uVar12 = local_180._4_4_ - 1;
          }
          if ((int)uVar12 < 1) {
            uVar12 = 0;
          }
          else {
            memcpy(local_188,local_70[0],(ulong)uVar12);
            puVar10 = (ulong *)((long)puVar10 + (ulong)uVar12);
          }
          *(undefined1 *)puVar10 = 0;
          local_180 = CONCAT44(local_180._4_4_,uVar12);
        }
        ppuVar11 = (ulong **)&local_188;
        FUN_03f34470(param_1,&local_188);
        lVar6 = CONCAT44(local_8c,uStack_90);
      }
      local_e8 = *ppuVar11;
      plVar9 = *(long **)(*(long *)(lVar6 + 0x10) + 0x30);
      lVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_f0,0);
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_78,0);
        if (lVar6 == 0) {
          if (local_c0._3_1_ == '\0') goto LAB_03f35ab8;
          if (CONCAT44(local_8c,uStack_90) == *(long *)(param_1 + 0x5e8)) {
            (**(code **)(local_78 + 0x18))(&local_78);
            FUN_006e9528(&local_588,&DAT_04064d1a,local_70[0]);
          }
          if (uStack_a0 == param_1 + 0x700) {
            nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a8));
          }
          uStack_90 = 0;
          local_8c = 0;
          uStack_a0 = 0;
        }
      }
    }
  }
  local_588 = puVar1 + 0x10;
  local_580 = ".";
  (**(code **)(local_78 + 0x18))(&local_78);
  uVar15 = 0;
  do {
    if (*(char *)((long)local_70[0] + uVar15) == '\0') goto LAB_03f359d0;
    if (*(char *)((long)local_70[0] + uVar15 + 1) == '\0') {
      uVar15 = uVar15 + 1;
      goto LAB_03f359d0;
    }
    if (*(char *)((long)local_70[0] + uVar15 + 2) == '\0') {
      uVar15 = uVar15 + 2;
      goto LAB_03f359d0;
    }
    uVar15 = uVar15 + 3;
  } while (uVar15 != 0x80001);
  uVar15 = 0;
LAB_03f359d0:
  (**(code **)(local_588 + 0x18))(&local_588);
  lVar6 = 0;
  do {
    iVar4 = (int)uVar15;
    if (local_580[lVar6] == '\0') {
LAB_03f35a24:
      uVar12 = iVar4 - (int)lVar6;
      if ((int)uVar12 < 0) goto LAB_03f35ab8;
LAB_03f35a3c:
      uVar15 = (ulong)uVar12;
      if ((int)lVar6 < 1) goto LAB_03f35ad8;
      goto LAB_03f35a48;
    }
    if (local_580[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03f35a24;
    }
    if (local_580[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      uVar12 = iVar4 - (int)lVar6;
      if (-1 < (int)uVar12) goto LAB_03f35a3c;
      goto LAB_03f35ab8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (iVar4 < 0) {
LAB_03f35ab8:
    if (uStack_a0 == param_1 + 0x700) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a8));
    }
    return (long *)0x0;
  }
LAB_03f35ad8:
  (**(code **)(local_588 + 0x18))(&local_588);
LAB_03f35ae8:
  local_f0 = puVar1 + 0x10;
  iVar4 = (int)uVar15;
  (**(code **)(local_78 + 0x18))(&local_78);
  puVar10 = local_70[0];
  lVar6 = 0;
  do {
    if (*(char *)((long)local_70[0] + lVar6) == '\0') goto LAB_03f35b4c;
    if (*(char *)((long)local_70[0] + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03f35b4c;
    }
    if (*(char *)((long)local_70[0] + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03f35b4c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03f35b4c:
  local_e8 = (ulong *)&DAT_0419b684;
  if (iVar4 < (int)lVar6 && -2 < iVar4) {
    local_e8 = (ulong *)((long)local_70[0] + (ulong)(iVar4 + 1));
  }
  uVar12 = local_bb & 0xff;
  if ((char)local_bb != '\0') {
    piVar5 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x40))();
    iVar4 = *piVar5;
    if (iVar4 != 0) {
      if (iVar4 < 2) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        iVar4 = iVar4 + -1;
        do {
          iVar14 = iVar4 + iVar13;
          if (iVar14 < 0 != SCARRY4(iVar4,iVar13)) {
            iVar14 = iVar14 + 1;
          }
          iVar14 = iVar14 >> 1;
          iVar3 = FUN_03f2a860(*(long *)(piVar5 + 2) + (long)iVar14 * 0x10,&local_f0);
          if (iVar3 == 0) goto joined_r0x03f35c0c;
          if (iVar3 < 0) {
            iVar13 = iVar14 + 1;
          }
          else {
            iVar4 = iVar14 + -1;
          }
        } while (iVar13 < iVar4);
      }
      iVar4 = FUN_03f2a860(*(long *)(piVar5 + 2) + (long)iVar13 * 0x10,&local_f0);
      iVar14 = iVar13;
      if (iVar4 == 0) {
joined_r0x03f35c0c:
        if (iVar14 != -1) {
          uVar12 = 2;
          goto LAB_03f35ca8;
        }
      }
    }
    piVar5 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x38))();
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      iVar13 = -1;
    }
    else {
      if (iVar4 < 2) {
        iVar14 = 0;
      }
      else {
        iVar14 = 0;
        iVar4 = iVar4 + -1;
        do {
          iVar13 = iVar4 + iVar14;
          if (iVar13 < 0 != SCARRY4(iVar4,iVar14)) {
            iVar13 = iVar13 + 1;
          }
          iVar13 = iVar13 >> 1;
          iVar3 = FUN_03f2a860(*(long *)(piVar5 + 2) + (long)iVar13 * 0x10,&local_f0);
          if (iVar3 == 0) goto LAB_03f35ca0;
          if (iVar3 < 0) {
            iVar14 = iVar13 + 1;
          }
          else {
            iVar4 = iVar13 + -1;
          }
        } while (iVar14 < iVar4);
      }
      iVar4 = FUN_03f2a860(*(long *)(piVar5 + 2) + (long)iVar14 * 0x10,&local_f0);
      if (iVar4 != 0) {
        iVar14 = -1;
      }
      iVar13 = iVar14;
    }
LAB_03f35ca0:
    uVar12 = (uint)(iVar13 != -1);
  }
LAB_03f35ca8:
  puVar2 = local_188;
  local_180 = CONCAT44(local_180._4_4_,uVar12);
  local_178[3] = *(undefined8 *)(param_2 + 0x78);
  local_178[0] = 0;
  local_178[1] = 0;
  local_178[2] = 0;
  local_148 = CONCAT44(local_ac,uStack_b0);
  local_188._5_3_ = SUB83(puVar2,5);
  local_188._0_5_ = CONCAT14(local_bb._3_1_,CONCAT13(local_bb._1_1_,1));
  local_158 = &local_e0;
  local_140 = puVar1 + 0x10;
  local_150 = 0;
  local_138 = puVar10;
  FUN_03f3d060(&local_588,&local_188);
  uVar15 = FUN_03f3f040(&local_588,0);
  if ((uVar15 & 1) != 0) {
    if (local_480 == 6) {
LAB_03f35d30:
      if (local_578 == 7) {
LAB_03f35d3c:
        uVar15 = FUN_03f3f590(&local_588,0);
        if ((uVar15 & 1) == 0) goto LAB_03f35d74;
      }
    }
    else if (local_480 != 1) {
      if (local_480 == 0) goto LAB_03f35d30;
      goto LAB_03f35d3c;
    }
    uVar15 = FUN_03f3dd50(&local_588,CONCAT44(local_7c,uStack_80));
    plVar9 = local_558;
    if ((uVar15 & 1) != 0) goto LAB_03f35d78;
    if (local_558 != (long *)0x0) {
      (**(code **)(*local_558 + 0x18))(local_558);
    }
  }
LAB_03f35d74:
  plVar9 = (long *)0x0;
LAB_03f35d78:
  if (uStack_a0 == param_1 + 0x700) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a8));
  }
  FUN_03f3dadc(&local_588);
  return plVar9;
  while( true ) {
    pcVar7 = local_580;
    lVar8 = lVar6;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)((long)puVar10 + uVar15) != *pcVar7) break;
      if ((*(char *)((long)puVar10 + uVar15) == '\0') ||
         (puVar10 = (ulong *)((long)puVar10 + 1), pcVar7 = pcVar7 + 1, lVar8 == 0))
      goto LAB_03f35ab0;
    }
    uVar15 = uVar15 - 1;
    if (iVar4 < 1) break;
LAB_03f35a48:
    puVar10 = local_70[0];
    pcVar7 = (char *)((long)local_70[0] + uVar15);
    (**(code **)(local_588 + 0x18))(&local_588);
    iVar4 = (int)uVar15;
    if (pcVar7 == local_580) {
LAB_03f35ab0:
      if (iVar4 != -1) goto LAB_03f35ae8;
      break;
    }
  }
  goto LAB_03f35ab8;
}

