
void FUN_02c7d7a0(long param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  void *__s;
  uint uVar7;
  long lVar8;
  short *psVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puStack_3b1a8;
  undefined1 auStack_3b1a0 [1876];
  uint uStack_3aa4c;
  uint uStack_3aa48;
  uint uStack_3aa44;
  int iStack_3aa40;
  undefined *puStack_3aa38;
  undefined8 uStack_3aa30;
  undefined8 *puStack_3aa28;
  long *plStack_3aa20;
  long *plStack_3aa18;
  long alStack_3aa10 [2];
  long lStack_3aa00;
  long lStack_3a9f8;
  undefined1 auStack_3a9f0 [119968];
  undefined8 auStack_1d550 [15000];
  undefined4 local_8c;
  undefined **local_88;
  undefined4 *local_80;
  
  uStack_3aa30._4_4_ = 0;
  puStack_3aa28 = (undefined8 *)0x0;
  plStack_3aa20 = alStack_3aa10;
  puStack_3aa38 = PTR_DAT_04bb60c8 + 0x10;
  lVar8 = 0;
  while( true ) {
    plVar10 = (long *)((long)alStack_3aa10 + lVar8 + 8);
    *plVar10 = (long)alStack_3aa10 + lVar8 + 0x10;
    *(long **)((long)alStack_3aa10 + lVar8) = plVar10;
    *(undefined1 **)((long)alStack_3aa10 + lVar8 + 0x10) = auStack_3a9f0 + lVar8 + -8;
    if (lVar8 == 0x1d4a0) break;
    *(undefined1 **)(auStack_3a9f0 + lVar8 + -8) = auStack_3a9f0 + lVar8;
    lVar8 = lVar8 + 0x20;
  }
  if (auStack_1d550 != (undefined8 *)0x0) {
    uStack_3aa30._4_4_ = 15000;
    puStack_3aa28 = auStack_1d550;
  }
  uStack_3aa30 = (ulong)uStack_3aa30._4_4_ << 0x20;
  puStack_3b1a8 = PTR_DAT_04bbfe60 + 0x10;
  plStack_3aa18 = plStack_3aa20;
  memset(auStack_3b1a0,0,0x754);
  uVar6 = nn::os::GetSystemTick();
  uStack_3aa4c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uStack_3aa48 = (uStack_3aa4c ^ uStack_3aa4c >> 0x1e) * 0x6c078965 + 2;
  uStack_3aa44 = (uStack_3aa48 ^ uStack_3aa48 >> 0x1e) * 0x6c078965 + 3;
  iStack_3aa40 = (uStack_3aa44 ^ uStack_3aa44 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&puStack_3b1a8);
  memset(__s,0,0x754);
  uVar6 = 0xffffffff;
  do {
    while (uVar7 = uVar6, uVar7 == 0xffffffff) {
      uVar6 = 0;
    }
    if (uVar7 == 0xb) {
      FUN_009aa4b0(&puStack_3aa38,&puStack_3b1a8);
      puVar5 = PTR_DAT_04bb43c0;
      if ((int)uStack_3aa30 != 0) {
        lVar8 = (long)(int)uStack_3aa30 << 3;
        puVar11 = puStack_3aa28;
        do {
          psVar9 = (short *)*puVar11;
          lVar12 = *(long *)puVar5;
          sVar3 = *psVar9;
          sVar4 = psVar9[1];
          uVar2 = *(undefined1 *)((long)psVar9 + 3);
          uVar1 = *(undefined4 *)(psVar9 + 2);
          puStack_3b1a8 = *(undefined **)psVar9;
          uVar6 = FUN_0277d6c4(&puStack_3b1a8);
          if (*(long *)puVar5 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0 && sVar3 != -2))
               && (*param_2 < param_2[1])) {
              psVar9 = *(short **)(param_2 + 4);
              if (psVar9 != (short *)0x0) {
                *(undefined8 *)(param_2 + 4) = *(undefined8 *)psVar9;
              }
              *psVar9 = sVar3;
              *(char *)(psVar9 + 1) = (char)sVar4;
              *(undefined1 *)((long)psVar9 + 3) = uVar2;
              *(undefined4 *)(psVar9 + 2) = uVar1;
              if (*param_2 < param_2[1]) {
                *(short **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = psVar9;
                *param_2 = *param_2 + 1;
              }
            }
          }
          puVar11 = puVar11 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      return;
    }
    local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar7);
    if ((*(ulong *)(param_1 + 0x97d10) >> ((ulong)uVar7 & 0x3f) & 1) != 0) {
      if (DAT_0565e880 == uVar7) {
        lVar8 = 0;
LAB_02c7da74:
        local_8c = (&DAT_0565e884)[lVar8 * 2];
      }
      else {
        if (DAT_0565e888 == uVar7) {
          lVar8 = 1;
          goto LAB_02c7da74;
        }
        if (DAT_0565e890 == uVar7) {
          lVar8 = 2;
          goto LAB_02c7da74;
        }
        if (DAT_0565e898 == uVar7) {
          lVar8 = 3;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8a0 == uVar7) {
          lVar8 = 4;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8a8 == uVar7) {
          lVar8 = 5;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8b0 == uVar7) {
          lVar8 = 6;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8b8 == uVar7) {
          lVar8 = 7;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8c0 == uVar7) {
          lVar8 = 8;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8c8 == uVar7) {
          lVar8 = 9;
          goto LAB_02c7da74;
        }
        if (DAT_0565e8d0 == uVar7) {
          lVar8 = 10;
          goto LAB_02c7da74;
        }
        local_8c = 0;
      }
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = &local_8c;
      FUN_008a1ba0(&puStack_3b1a8,&local_88);
    }
    uVar6 = 0xb;
    if ((int)uVar7 < 0xb) {
      uVar6 = uVar7 + 1;
    }
  } while( true );
}

