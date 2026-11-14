
void FUN_01680e90(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  void *__s_00;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short local_c8 [4];
  undefined *local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  uint local_80;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  memset((void *)(param_1 + 8),0,0x4000);
  memset((void *)(param_1 + 0x4010),0,0x4000);
  memset((void *)(param_1 + 0x8018),0,0x4000);
  memset((void *)(param_1 + 0xc020),0,0x4000);
  memset((void *)(param_1 + 0x10028),0,0x4000);
  memset((void *)(param_1 + 0x14030),0,0x1000);
  memset((void *)(param_1 + 0x15038),0,0x1000);
  memset((void *)(param_1 + 0x16040),0,0x1000);
  memset((void *)(param_1 + 0x17048),0,0x1000);
  memset((void *)(param_1 + 0x18050),0,0x1000);
  memset((void *)(param_1 + 0x19058),0,0x1000);
  memset((void *)(param_1 + 0x1a060),0,0x1000);
  memset((void *)(param_1 + 0x1b068),0,0x1000);
  memset((void *)(param_1 + 0x1c070),0,0x1000);
  memset((void *)(param_1 + 0x1d078),0,0x1000);
  memset((void *)(param_1 + 0x1e080),0,0x1000);
  memset((void *)(param_1 + 0x1f088),0,0x1000);
  memset((void *)(param_1 + 0x20090),0,0x1000);
  memset((void *)(param_1 + 0x21098),0,0x1000);
  memset((void *)(param_1 + 0x220a0),0,0x1000);
  memset((void *)(param_1 + 0x230a8),0,0x1000);
  memset((void *)(param_1 + 0x240b0),0,0x1000);
  memset((void *)(param_1 + 0x250b8),0,0x1000);
  memset((void *)(param_1 + 0x260c0),0,0x1000);
  __s = (void *)(param_1 + 0x270c8);
  memset(__s,0,0x1000);
  memset((void *)(param_1 + 0x280d0),0,0x1000);
  memset((void *)(param_1 + 0x290d8),0,0x1000);
  __s_00 = (void *)(param_1 + 0x2a0e0);
  memset(__s_00,0,0x1000);
  memset((void *)(param_1 + 0x2b0e8),0,0x1000);
  memset((void *)(param_1 + 0x2c0f0),0,0x1000);
  memset((void *)(param_1 + 0x2d0f8),0,0x1000);
  memset((void *)(param_1 + 0x2e100),0,0x1000);
  memset((void *)(param_1 + 0x2f108),0,0x1000);
  memset((void *)(param_1 + 0x30110),0,0x1000);
  *(undefined1 *)(param_1 + 0x321a0) = 0;
  memset((void *)(param_1 + 0x31118),0,0x1058);
  *(undefined1 *)(param_1 + 0x321a1) = 0;
  DAT_052338a0 = 3;
  DAT_052338a4 = 9;
  *(undefined8 *)(param_1 + 0x32170) = 0;
  *(undefined8 *)(param_1 + 0x32178) = 0;
  *(undefined8 *)(param_1 + 0x32180) = 0;
  *(undefined8 *)(param_1 + 0x32188) = 0;
  *(undefined8 *)(param_1 + 0x32190) = 0;
  *(undefined8 *)(param_1 + 0x32198) = 0;
  uStack_6c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_70 = 1;
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  lVar11 = FUN_01a4fa00(&local_78);
  puVar7 = PTR_DAT_04bb2010;
  iVar15 = *(int *)(lVar11 + 0x24);
  uVar2 = iVar15 + 1;
  uVar17 = *(uint *)(lVar11 + 0x14);
  if (uVar2 != uVar17) {
    iVar13 = *(int *)(lVar11 + 0x20);
    uVar9 = *(uint *)(lVar11 + 0x10);
    puVar4 = PTR_DAT_04bbbad8 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    puVar6 = PTR_DAT_04bb2010 + 0x10;
    uVar18 = uVar9;
    do {
      local_88 = puVar4;
      local_80 = uVar18;
      local_7c = uVar17;
      if (((uVar18 | uVar17) & 1) == 0) {
        uVar12 = FUN_0097ce60(&local_88);
        uVar8 = local_80;
        if (((uVar12 & 1) == 0) &&
           ((((int)local_80 < (int)(uVar9 + 0x20) || (iVar13 + -0x20 < (int)local_80)) ||
            (iVar15 + -0x20 < (int)local_7c)))) {
          uVar3 = local_7c + 2;
          local_a0 = local_80;
          uStack_9c = local_7c;
          local_90 = local_80 + 1;
          iStack_8c = local_7c + 1;
          uVar16 = local_7c;
          uVar14 = local_80;
          local_b0 = puVar5;
          local_a8 = puVar6;
          local_98 = puVar6;
          do {
            local_c0 = puVar7 + 0x10;
            local_b8 = uVar14;
            uStack_b4 = uVar16;
            FUN_01a5033c(local_c8,&local_78,0,&local_c0,0);
            if ((local_c8[0] != -2) && (iVar10 = FUN_0277ebd0(local_c8), iVar10 != 0))
            goto LAB_016813c0;
            if ((int)uVar14 < local_90) {
              uVar14 = uVar14 + 1;
            }
            else {
              uVar16 = uVar16 + 1;
              uVar14 = local_a0;
            }
          } while ((uVar8 != uVar14) || (uVar3 != uVar16));
          uVar12 = FUN_0097d8e0(&local_b0);
          if (((uVar12 & 1) != 0) &&
             ((((DAT_05233970 <= (int)local_80 && ((int)local_80 <= DAT_05233980)) &&
               (DAT_05233974 <= (int)local_7c)) &&
              (((int)local_7c <= DAT_05233984 &&
               (uVar8 = (local_7c & 0x1fffffe) * 0x80 + ((int)local_80 >> 1), uVar8 >> 0xf == 0)))))
             ) {
            lVar11 = (ulong)(uVar8 >> 5) * 4;
            *(uint *)((long)__s_00 + lVar11) =
                 *(uint *)((long)__s_00 + lVar11) | 1 << (ulong)(local_80 >> 1 & 0x1f);
          }
        }
      }
LAB_016813c0:
      if ((int)uVar18 < iVar13) {
        uVar18 = uVar18 + 1;
      }
      else {
        uVar17 = uVar17 + 1;
        uVar18 = uVar9;
      }
    } while ((uVar9 != uVar18) || (uVar2 != uVar17));
  }
  lVar11 = 0;
  iVar15 = 0;
  do {
    iVar13 = iVar15;
    puVar1 = (uint *)((long)__s_00 + lVar11);
    lVar11 = lVar11 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = uVar2 + (uVar2 >> 0x10);
    iVar15 = (uVar2 & 0x3f) + iVar13;
  } while (lVar11 != 0x1000);
  if (iVar15 != 0) {
    iVar15 = 0;
    puVar7 = PTR_DAT_04bb2010 + 0x10;
    do {
      local_a8 = (undefined *)0x0;
      local_b0 = puVar7;
      uVar12 = FUN_01696a90(param_1 + 0x2a0d8,iVar15 + 1,&local_b0);
      if ((uVar12 & 1) == 0) {
        return;
      }
      uVar12 = FUN_016963e0(param_1 + 0x2a0d8,&local_b0,0);
      if (((((uVar12 & 1) != 0) && (DAT_05233970 <= (int)(uint)local_a8)) &&
          ((int)(uint)local_a8 <= DAT_05233980)) &&
         (((DAT_05233974 <= (int)local_a8._4_4_ && ((int)local_a8._4_4_ <= DAT_05233984)) &&
          (uVar17 = (local_a8._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_a8 >> 1),
          uVar17 >> 0xf == 0)))) {
        lVar11 = (ulong)(uVar17 >> 5) * 4;
        *(uint *)((long)__s + lVar11) =
             *(uint *)((long)__s + lVar11) | 1 << (ulong)((uint)local_a8 >> 1 & 0x1f);
      }
      iVar15 = iVar15 + 1;
    } while (iVar13 + (uVar2 & 0x3f) != iVar15);
  }
  return;
}

