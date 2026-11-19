
void FUN_0396dcf0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  ulong local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined7 local_180;
  undefined1 uStack_179;
  byte local_178;
  undefined6 uStack_177;
  undefined8 local_170 [8];
  undefined8 local_130;
  undefined4 local_128;
  uint local_ec;
  short local_e6;
  undefined2 local_dc [2];
  uint local_d8;
  
  lVar15 = param_1 + 0x10;
  lVar11 = *(long *)(param_1 + 0xbf8);
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = (long *)0x0;
  local_198 = CONCAT44(local_198._4_4_,0xffffffff);
  local_180 = 0;
  uStack_179 = 0;
  local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_1 + 8));
  local_178 = 1;
  local_190 = (undefined *)0x0;
  local_188 = (undefined *)0x0;
  local_1b0 = lVar15;
  local_170[0] = param_2;
  if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x38) & 1) != 0)) {
    (*(code *)**(undefined8 **)(lVar11 + 0x3c))((undefined8 *)(lVar11 + 0x3c),&local_1c0);
  }
  uVar10 = *(uint *)(param_1 + 0x6d8) & 0xfffffffd;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar10 = *(uint *)(param_1 + 0x6d8);
  }
  (**(code **)(*(long *)(param_1 + 0x10) + 0x38))(lVar15,param_2);
  lVar11 = param_1 + 0x688;
  FUN_039025b0(*(undefined4 *)(param_1 + 0x6ec),lVar15,param_2,0,uVar10,param_1 + 0x6dc,
               *(undefined4 *)(param_1 + 0x6f0),lVar11,1);
  if (*(int *)(param_1 + 0x6b8) != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x6c0);
    puVar1 = puVar14 + *(int *)(param_1 + 0x6b8);
    do {
      plVar18 = (long *)*puVar14;
      local_1c0 = 0xffffffff;
      local_1a8 = 0;
      local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_1 + 8));
      local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)((long)plVar18 + 0x94));
      if (((*(ushort *)((long)plVar18 + 0x8a) & 0x21) == 0 ||
           (*(ushort *)((long)plVar18 + 0x8a) & 2) == 0) || (lVar13 = plVar18[0x3f], lVar13 == 0)) {
        local_190 = PTR_DAT_04bd13c0;
        if ((undefined *)plVar18[0xf] != (undefined *)0x0) {
          local_190 = (undefined *)plVar18[0xf];
        }
        local_188 = PTR_DAT_04bd13c8;
        if ((undefined *)plVar18[0x10] != (undefined *)0x0) {
          local_188 = (undefined *)plVar18[0x10];
        }
      }
      else {
        local_190 = (undefined *)(lVar13 + 8);
        local_188 = *(undefined **)(lVar13 + 0x100);
      }
      plVar16 = plVar18 + 10;
      local_180 = SUB87(plVar16,0);
      uVar8 = local_180;
      uStack_179 = (undefined1)((ulong)plVar16 >> 0x38);
      uVar9 = uStack_179;
      local_178 = (*(ushort *)(plVar18 + 0x11) & 4) == 0 & (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
      local_1b0 = lVar15;
      local_1a0 = plVar18;
      local_170[0] = param_2;
      FUN_038e77e4(plVar16,param_2,lVar15);
      (**(code **)(*plVar18 + 0x48))(plVar18,&local_1c0);
      uVar12 = (**(code **)(*plVar18 + 0x90))(plVar18);
      if (((uVar12 & 1) == 0) && (bVar3 = *(byte *)((long)plVar18 + 0x93), bVar3 != 0)) {
        lVar13 = local_1b0;
        if (local_1a8 != 0) {
          lVar13 = local_1a8;
        }
        if (lVar13 != 0) {
          FUN_039025b0(*(undefined4 *)((long)plVar18 + 0xac),lVar13,local_170[0],0,
                       bVar3 & 1 | (bVar3 >> 2 & 1) << 1,(long)plVar18 + 0x9c,0,
                       CONCAT17(uStack_179,local_180),1);
        }
      }
      uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18);
      if (0 < (int)uVar10) {
        uVar21 = 0;
        do {
          (**(code **)(*plVar18 + 0x80))(plVar18,uVar21);
          local_1a8 = 0;
          local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_1 + 8));
          local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)((long)plVar18 + 0x94));
          if ((((*(ushort *)((long)plVar18 + 0x8a) & 0x21) == 0) ||
              ((*(ushort *)((long)plVar18 + 0x8a) >> 1 & 1) == 0)) ||
             (lVar13 = plVar18[0x3f], lVar13 == 0)) {
            local_190 = PTR_DAT_04bd13c0;
            if ((undefined *)plVar18[0xf] != (undefined *)0x0) {
              local_190 = (undefined *)plVar18[0xf];
            }
            local_188 = PTR_DAT_04bd13c8;
            if ((undefined *)plVar18[0x10] != (undefined *)0x0) {
              local_188 = (undefined *)plVar18[0x10];
            }
          }
          else {
            local_190 = (undefined *)(lVar13 + 8);
            local_188 = *(undefined **)(lVar13 + 0x100);
          }
          lVar13 = plVar18[0x17];
          local_1c0 = (ulong)uVar21;
          local_178 = (*(ushort *)(plVar18 + 0x11) & 4) == 0 &
                      (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
          uVar2 = uVar21;
          if (*(uint *)(plVar18 + 0x16) <= uVar21) {
            uVar2 = 0;
          }
          local_1b0 = lVar15;
          local_1a0 = plVar18;
          local_180 = uVar8;
          uStack_179 = uVar9;
          local_170[0] = param_2;
          if ((*(byte *)(lVar13 + (ulong)uVar2 * 0x820 + 0x818) & 1) != 0) {
            (**(code **)(*plVar18 + 0x50))(plVar18,&local_1c0);
            lVar13 = lVar13 + (ulong)uVar2 * 0x820;
            iVar4 = *(int *)(lVar13 + 8);
            if (iVar4 != 0) {
              plVar16 = *(long **)(lVar13 + 0x10);
              lVar13 = (long)iVar4 << 3;
              do {
                lVar22 = *plVar16;
                (**(code **)(*plVar18 + 0x58))(plVar18,&local_1c0,lVar22);
                if ((*(byte *)(lVar22 + 0x38) & 1) != 0) {
                  (*(code *)**(undefined8 **)(lVar22 + 0x3c))
                            ((undefined8 *)(lVar22 + 0x3c),&local_1c0);
                }
                (**(code **)(*plVar18 + 0x60))(plVar18,&local_1c0,lVar22);
                plVar16 = plVar16 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
            (**(code **)(*plVar18 + 0x68))(plVar18,&local_1c0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar10);
      }
      local_1c0 = 0xffffffff;
      local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_1 + 8));
      local_1a8 = 0;
      local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)((long)plVar18 + 0x94));
      if ((((*(ushort *)((long)plVar18 + 0x8a) & 0x21) == 0) ||
          ((*(ushort *)((long)plVar18 + 0x8a) >> 1 & 1) == 0)) ||
         (lVar13 = plVar18[0x3f], lVar13 == 0)) {
        local_190 = PTR_DAT_04bd13c0;
        if ((undefined *)plVar18[0xf] != (undefined *)0x0) {
          local_190 = (undefined *)plVar18[0xf];
        }
        local_188 = PTR_DAT_04bd13c8;
        if ((undefined *)plVar18[0x10] != (undefined *)0x0) {
          local_188 = (undefined *)plVar18[0x10];
        }
      }
      else {
        local_190 = (undefined *)(lVar13 + 8);
        local_188 = *(undefined **)(lVar13 + 0x100);
      }
      local_178 = (*(ushort *)(plVar18 + 0x11) & 4) == 0 & (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
      local_1b0 = lVar15;
      local_1a0 = plVar18;
      local_180 = uVar8;
      uStack_179 = uVar9;
      local_170[0] = param_2;
      if (((*(uint *)(param_1 + 0x6b0) ^ 0xffffffff) & 0x28) == 0) {
        FUN_0396ad68(plVar18,&local_1c0);
      }
      (**(code **)(*plVar18 + 0x70))(plVar18,&local_1c0);
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar1);
  }
  lVar13 = *(long *)(param_1 + 0xc00);
  if (lVar13 != 0) {
    local_188 = (undefined *)0x0;
    local_180 = 0;
    uStack_179 = 0;
    local_1a0 = (long *)0x0;
    local_190 = (undefined *)0x0;
    local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_1 + 8));
    local_198 = CONCAT44(local_198._4_4_,0xffffffff);
    local_178 = 1;
    local_1c0 = 1;
    local_1a8 = 0;
    local_1b0 = lVar15;
    local_170[0] = param_2;
    if ((*(byte *)(lVar13 + 0x38) & 1) != 0) {
      (*(code *)**(undefined8 **)(lVar13 + 0x3c))((undefined8 *)(lVar13 + 0x3c),&local_1c0);
    }
  }
  if (*(long *)(param_1 + 0x4d0) != 0) {
    FUN_038e4cec(local_dc);
    local_dc[0] = 0;
    local_d8 = local_d8 & 0xfffffffe;
    FUN_038e4d90(local_dc,param_2);
    uVar17 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_1 + 0x578;
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    (**(code **)(*(long *)(param_1 + 0x10) + 0x38))(lVar15,param_2);
    FUN_038e77e4(lVar11,param_2,lVar15);
    FUN_0390cee0(&local_1c0);
    local_1c0 = *(ulong *)(param_1 + 0x1d0);
    local_1b8 = *(undefined8 *)(param_1 + 0x1d8);
    local_1b0 = *(undefined8 *)(param_1 + 0x1e0);
    local_1a8 = *(undefined8 *)(param_1 + 0x1e8);
    local_1a0 = *(long **)(param_1 + 0x1f0);
    local_198 = *(undefined8 *)(param_1 + 0x1f8);
    local_188 = *(undefined **)(param_1 + 0x208);
    local_178 = (byte)((ulong)*(undefined8 *)(param_1 + 0x217) >> 8);
    uStack_177 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x217) >> 0x10);
    local_190 = *(undefined **)(param_1 + 0x200);
    local_180 = (undefined7)*(undefined8 *)(param_1 + 0x210);
    uStack_179 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x38);
    FUN_038fd1e0(local_170);
    FUN_038fd2f0(local_170,param_1 + 0x220);
    local_130 = *(undefined8 *)(param_1 + 0x260);
    local_128 = *(undefined4 *)(param_1 + 0x268);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_ec,0x10);
      if (bVar6) {
        cVar5 = ExclusiveMonitorsStatus();
        local_ec = local_ec | 1;
      }
    } while (cVar5 != '\0');
    if ((ulong)(long)(char)local_188 < 9) {
      uVar12 = (ulong)*(uint *)(&DAT_041b3d7c + (long)(char)local_188 * 4);
    }
    else {
      uVar12 = 5;
    }
    if ((uint)uVar12 < *(uint *)(*(long *)PTR_DAT_04bbdd18 + 8)) {
      uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + uVar12 * 8);
    }
    else {
      uVar19 = 0;
    }
    FUN_03907810(uVar19,param_2);
    FUN_03949e90(param_2,uVar19,&local_1c0,lVar11,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    *(undefined8 *)(param_1 + 0x30) = uVar17;
    *(undefined8 *)(param_1 + 0x70) = uVar20;
    if (local_e6 != -1) {
      lVar15 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
      uVar10 = (int)local_e6 - (uint)*(ushort *)(lVar15 + 0x5c0);
      if (*(uint *)(lVar15 + 0x5a0) <= uVar10) {
        uVar10 = 0;
      }
      lVar11 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar10 * 0x80;
      sVar7 = *(short *)(lVar11 + 0x76) + -1;
      *(short *)(lVar11 + 0x76) = sVar7;
      if (sVar7 == 0) {
        *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
      local_e6 = -1;
    }
    FUN_038fd0e0(local_170);
  }
  return;
}

