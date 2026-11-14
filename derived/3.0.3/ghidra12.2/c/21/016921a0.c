
void FUN_016921a0(long param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined *local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined *local_90;
  undefined1 auStack_88 [8];
  uint local_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  if (0 < param_2) {
    lVar6 = param_1 + 0x2018;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bbfe68 + 0x10;
    puVar5 = PTR_DAT_04bb6268 + 0x10;
    do {
      lVar12 = 0;
      iVar9 = 0;
      do {
        puVar2 = (uint *)(lVar6 + lVar12);
        lVar12 = lVar12 + 4;
        uVar8 = *puVar2 - (*puVar2 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        iVar9 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar9;
      } while (lVar12 != 0x1000);
      if (iVar9 == 0) {
        return;
      }
      FUN_01696be0(auStack_88,param_1 + 0x2010);
      uVar11 = (ulong)local_80;
      uVar7 = (ulong)uStack_7c;
      uVar13 = (uint)(uVar11 & 0xffe);
      uVar14 = (uint)(uVar7 & 0xffe);
      local_90 = (undefined *)0xfffe;
      local_80 = uVar13;
      uStack_7c = uVar14;
      FUN_0277d4ac(&local_90);
      uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      iVar9 = (int)((ulong)uVar8 + (ulong)uVar8 * 2 >> 0x20);
      DAT_05582b7c = uVar8;
      if (iVar9 == 1) {
        uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar8 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        local_78 = (undefined *)
                   (ulong)(ushort)*(undefined4 *)
                                   (&DAT_04174748 + ((ulong)uVar8 + (ulong)uVar8 * 2 >> 0x1e & 0xc))
        ;
        DAT_0514cb64 = uVar8;
LAB_01692378:
        FUN_0277d4ac(&local_78);
      }
      else {
        if (iVar9 != 0) {
          local_78 = (undefined *)0xed0f;
          goto LAB_01692378;
        }
        FUN_01201740(&local_78);
      }
      local_98 = (undefined2)local_78;
      local_90 = local_78;
      local_96 = local_78._2_1_;
      local_95 = local_78._3_1_;
      local_94 = local_78._4_4_;
      local_70 = 0;
      lVar12 = *(long *)PTR_DAT_04bb2720;
      local_a8 = puVar3;
      local_a0 = uVar13;
      uStack_9c = uVar14;
      local_78 = puVar4;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar9 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
      local_6c = *(undefined4 *)(puVar10 + 7);
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      local_78 = puVar5;
      FUN_011f3880(&local_78,0,&local_98,&local_a8);
      if ((DAT_05233970 <= (int)uVar13) && ((int)uVar13 <= DAT_05233980)) {
        if ((DAT_05233974 <= (int)uVar14) &&
           (((int)uVar14 <= DAT_05233984 &&
            (uVar11 = (uVar7 & 0xffe) * 0x80 + ((uVar11 & 0xffe) >> 1), uVar11 >> 0xf == 0)))) {
          uVar11 = uVar11 >> 3 & 0x1fffc;
          *(uint *)(param_1 + 0x4028 + uVar11) =
               *(uint *)(param_1 + 0x4028 + uVar11) | 1 << (ulong)(uVar13 >> 1 & 0x1f);
        }
        if ((DAT_05233974 <= (int)uVar14) && ((int)uVar14 <= DAT_05233984)) {
          uVar8 = uVar14 * 0x80 + (uVar13 >> 1);
          uVar14 = uVar8 >> 0xf;
          if (uVar14 == 0) {
            lVar12 = (ulong)(uVar8 >> 5) * 4;
            *(uint *)(param_1 + 0x3020 + lVar12) =
                 *(uint *)(param_1 + 0x3020 + lVar12) &
                 (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
LAB_01692534:
            lVar12 = (ulong)(uVar8 >> 5) * 4;
            *(uint *)(param_1 + 0x1010 + lVar12) =
                 *(uint *)(param_1 + 0x1010 + lVar12) &
                 (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          else if (uVar14 == 0) goto LAB_01692534;
          if (uVar14 == 0) {
            lVar12 = (ulong)(uVar8 >> 5) * 4;
            *(uint *)(lVar6 + lVar12) =
                 *(uint *)(lVar6 + lVar12) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      iVar9 = param_2 + -1;
      *(int *)(param_1 + 0xa03c) = *(int *)(param_1 + 0xa03c) + 1;
      bVar1 = 0 < param_2;
      param_2 = iVar9;
    } while (iVar9 != 0 && bVar1);
  }
  return;
}

