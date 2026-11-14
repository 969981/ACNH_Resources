
bool FUN_01682fd0(long param_1)

{
  uint *puVar1;
  void *__s;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined *local_98;
  uint local_90;
  int local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  __s = (void *)(param_1 + 0x10028);
  memset(__s,0,0x4000);
  uStack_6c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_70 = 1;
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a4fa00(&local_78);
  puVar5 = PTR_DAT_04bb2010;
  iVar14 = 0;
  lVar8 = 0;
  do {
    lVar2 = lVar8 + 4;
    uVar4 = *(uint *)((long)&DAT_05232810 + lVar8) -
            (*(uint *)((long)&DAT_05232810 + lVar8) >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar14 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar14;
    lVar8 = lVar2;
  } while (lVar2 != 0x1000);
  if (iVar14 == 0) {
    bVar6 = false;
  }
  else {
    iVar11 = 0;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    do {
      iVar11 = iVar11 + 1;
      local_80 = 0;
      local_88 = puVar3;
      uVar7 = FUN_01696a90(&DAT_05232808,iVar11,&local_88);
      if ((((uVar7 & 1) != 0) && ((local_80 & 1) == 0)) && ((local_80 & 0x100000000) == 0)) {
        iVar12 = -4;
        iVar9 = -4;
        do {
          do {
            if (iVar12 == 0 && iVar9 == 0) {
              iVar10 = 0;
              iVar13 = 0;
            }
            else {
              local_98 = puVar5 + 0x10;
              local_90 = (uint)local_80 + iVar12;
              local_8c = local_80._4_4_ + iVar9;
              uVar7 = FUN_0097ce60(&local_98);
              iVar10 = iVar9;
              iVar13 = iVar12;
              if (((((uVar7 & 1) == 0) && (DAT_05233970 <= (int)local_90)) &&
                  (((int)local_90 <= DAT_05233980 &&
                   ((DAT_05233974 <= local_8c && (local_8c <= DAT_05233984)))))) &&
                 ((uVar4 = local_90 + local_8c * 0x200, uVar4 >> 0x11 == 0 &&
                  ((*(uint *)(param_1 + 0xc020 + (ulong)(uVar4 >> 5) * 4) >>
                    (ulong)(local_90 & 0x1f) & 1) != 0)))) {
                iVar10 = 4;
                if ((int)(uint)local_80 < DAT_05233970) {
                  iVar13 = 4;
                }
                else {
                  iVar13 = 4;
                  if (((((int)(uint)local_80 <= DAT_05233980) && (DAT_05233974 <= local_80._4_4_))
                      && (local_80._4_4_ <= DAT_05233984)) &&
                     (uVar4 = (uint)local_80 + local_80._4_4_ * 0x200, uVar4 >> 0x11 == 0)) {
                    lVar8 = (ulong)(uVar4 >> 5) * 4;
                    *(uint *)((long)__s + lVar8) =
                         *(uint *)((long)__s + lVar8) | 1 << (ulong)((uint)local_80 & 0x1f);
                  }
                }
              }
            }
            iVar12 = iVar13 + 2;
            iVar9 = iVar10;
          } while (iVar13 < 3);
          iVar9 = iVar10 + 2;
          iVar12 = -4;
        } while (iVar10 < 3);
      }
    } while (iVar11 != iVar14);
    lVar8 = 0;
    iVar14 = 0;
    do {
      puVar1 = (uint *)((long)__s + lVar8);
      lVar8 = lVar8 + 4;
      uVar4 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      iVar14 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar14;
    } while (lVar8 != 0x4000);
    bVar6 = iVar14 != 0;
  }
  return bVar6;
}

