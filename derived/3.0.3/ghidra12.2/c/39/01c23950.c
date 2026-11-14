
void FUN_01c23950(long *param_1,long *param_2,long *param_3,void *param_4,void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  long *plVar10;
  long lVar11;
  undefined **ppuStack_3b188;
  undefined8 uStack_3b180;
  undefined1 *puStack_3b178;
  long *plStack_3b170;
  long *plStack_3b168;
  long alStack_3b160 [2];
  long lStack_3b150;
  long lStack_3b148;
  undefined1 auStack_3b140 [119968];
  undefined1 auStack_1dca0 [120004];
  undefined4 local_7dc;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar4 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar8 = (long *)(lVar4 + 0x70);
      lVar7 = *plVar8;
      plVar10 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar8 = (long)plVar10;
      *plVar10 = lVar7;
      plVar10[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar10;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  plVar10 = param_1 + 4;
  *plVar10 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = param_2[1];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = lVar4;
  lVar4 = param_2[6];
  *plVar10 = (long)&DAT_04b7e798;
  param_1[9] = 0;
  *(int *)(param_1 + 8) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,plVar10);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = (long)&PTR_LAB_04a40758;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  pvVar5 = (void *)((long)param_1 + 0x94);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[4] = (long)&PTR_LAB_04a40828;
  *(undefined4 *)(param_1 + 0x12) = 0x40;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  param_1[0x10] = (long)puVar1;
  param_1[0x11] = (long)pvVar5;
  if (pvVar5 != param_4) {
    lVar4 = 0;
    do {
      if (*(char *)((long)param_4 + lVar4) == '\0') goto LAB_01c23b10;
      if (*(char *)((long)param_4 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01c23b10;
      }
      if (*(char *)((long)param_4 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01c23b10;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01c23b10:
    iVar6 = (int)lVar4;
    if (0x3e < iVar6) {
      iVar6 = 0x3f;
    }
    memcpy(pvVar5,param_4,(long)iVar6);
    *(undefined1 *)((long)pvVar5 + (long)iVar6) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d) = 0x40;
  puVar2 = PTR_DAT_04bb2bc0;
  pvVar5 = (void *)((long)param_1 + 0xec);
  *(undefined1 *)((long)param_1 + 299) = 0;
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)pvVar5;
  param_1[0x10] = (long)(puVar2 + 0x10);
  if (pvVar5 != param_5) {
    lVar4 = 0;
    do {
      if (*(char *)((long)param_5 + lVar4) == '\0') goto LAB_01c23b9c;
      if (*(char *)((long)param_5 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01c23b9c;
      }
      if (*(char *)((long)param_5 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01c23b9c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01c23b9c:
    iVar6 = (int)lVar4;
    if (0x3e < iVar6) {
      iVar6 = 0x3f;
    }
    memcpy(pvVar5,param_5,(long)iVar6);
    *(undefined1 *)((long)pvVar5 + (long)iVar6) = 0;
  }
  puVar1 = PTR_DAT_04bb60c8;
  param_1[0x1b] = (long)(puVar2 + 0x10);
  plVar10 = param_1 + 0x32;
  lVar4 = 0x3a94;
  param_1[0x29] = (long)(puVar1 + 0x10);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)(param_1 + 0x2e);
  while( true ) {
    plVar10[-3] = (long)(plVar10 + -2);
    plVar10[-4] = (long)(plVar10 + -3);
    plVar10[-2] = (long)(plVar10 + -1);
    if (lVar4 == 0) break;
    plVar10[-1] = (long)plVar10;
    plVar10 = plVar10 + 4;
    lVar4 = lVar4 + -4;
  }
  param_1[0x2d] = (long)(param_1 + 0x2e);
  param_1[0x3ac5] = 0;
  if (param_1 + 0x3ac6 != (long *)0x0) {
    param_1[0x2b] = (long)(param_1 + 0x3ac6);
    *(undefined4 *)((long)param_1 + 0x154) = 15000;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d0,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7c = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_7d8);
  memset(pvVar5,0,0x754);
  local_7dc = 0x6a;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  local_7dc = 0x6b;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  local_7dc = 0x69;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  local_7dc = 0x70;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  local_7dc = 0xa4;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  local_7dc = 0xa5;
  ppuStack_3b188 = &PTR_FUN_049ff448;
  uStack_3b180 = &local_7dc;
  FUN_008a1ba0(&local_7d8,&ppuStack_3b188);
  ppuStack_3b188 = (undefined **)(puVar1 + 0x10);
  plStack_3b170 = alStack_3b160;
  uStack_3b180._4_4_ = 0;
  puStack_3b178 = (undefined1 *)0x0;
  lVar4 = 0;
  while( true ) {
    plVar10 = (long *)((long)alStack_3b160 + lVar4 + 8);
    *plVar10 = (long)alStack_3b160 + lVar4 + 0x10;
    *(long **)((long)alStack_3b160 + lVar4) = plVar10;
    *(undefined1 **)((long)alStack_3b160 + lVar4 + 0x10) = auStack_3b140 + lVar4 + -8;
    if (lVar4 == 0x1d4a0) break;
    *(undefined1 **)(auStack_3b140 + lVar4 + -8) = auStack_3b140 + lVar4;
    lVar4 = lVar4 + 0x20;
  }
  if (auStack_1dca0 != (undefined1 *)0x0) {
    uStack_3b180._4_4_ = 15000;
    puStack_3b178 = auStack_1dca0;
  }
  uStack_3b180 = (undefined4 *)((ulong)uStack_3b180._4_4_ << 0x20);
  plStack_3b168 = plStack_3b170;
  FUN_009aa4b0(&ppuStack_3b188,&local_7d8);
  if ((undefined ***)(param_1 + 0x29) != &ppuStack_3b188) {
    uVar3 = *(uint *)((long)param_1 + 0x154);
    if ((int)(uint)uStack_3b180 <= (int)*(uint *)((long)param_1 + 0x154)) {
      uVar3 = (uint)uStack_3b180;
    }
    if (0 < (int)param_1[0x2a]) {
      lVar4 = 0;
      plVar10 = (long *)param_1[0x2c];
      do {
        plVar8 = *(long **)(param_1[0x2b] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar8 = (long)plVar10;
        param_1[0x2c] = (long)plVar8;
        plVar10 = plVar8;
      } while (lVar4 < (int)param_1[0x2a]);
    }
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if ((0 < (int)uVar3) && (0 < *(int *)((long)param_1 + 0x154))) {
      lVar4 = 0;
      iVar6 = 0;
      do {
        if (iVar6 < *(int *)((long)param_1 + 0x154)) {
          plVar10 = (long *)param_1[0x2c];
          puVar9 = *(undefined2 **)(puStack_3b178 + lVar4);
          if (plVar10 != (long *)0x0) {
            param_1[0x2c] = *plVar10;
          }
          *(undefined2 *)plVar10 = *puVar9;
          *(undefined1 *)((long)plVar10 + 2) = *(undefined1 *)(puVar9 + 1);
          *(undefined1 *)((long)plVar10 + 3) = *(undefined1 *)((long)puVar9 + 3);
          *(undefined4 *)((long)plVar10 + 4) = *(undefined4 *)(puVar9 + 2);
          iVar6 = (int)param_1[0x2a];
          if (iVar6 < *(int *)((long)param_1 + 0x154)) {
            *(long **)(param_1[0x2b] + (long)iVar6 * 8) = plVar10;
            iVar6 = (int)param_1[0x2a] + 1;
            *(int *)(param_1 + 0x2a) = iVar6;
          }
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar3 * 8 != lVar4);
    }
  }
  param_1[0x7566] = 0;
  param_1[0x7567] = 0;
  param_1[0x7564] = 0;
  param_1[0x7565] = 0;
  param_1[0x7562] = 0;
  param_1[0x7563] = 0;
  param_1[0x7560] = 0;
  param_1[0x7561] = 0;
  param_1[0x755e] = 0;
  param_1[0x755f] = 0;
  return;
}

