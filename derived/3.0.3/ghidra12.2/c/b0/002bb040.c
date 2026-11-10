
void FUN_002bb040(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  plVar6 = (long *)PTR_DAT_04bc1510;
  if (*(char *)(param_2 + 8) != '\0') {
    lVar5 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    if (lVar5 != 0) {
      lVar12 = *(long *)(lVar5 + 0x20);
      local_78 = 0;
      local_70 = 0;
      local_88 = 0;
      local_80 = 0;
      if (lVar12 == lVar5 + 0x18) {
LAB_002bb294:
        *(undefined1 *)(param_2 + 0x352c) = 0;
        if (local_88._1_1_ != '\0') goto LAB_002bb194;
LAB_002bb2a0:
        *(undefined1 *)(param_2 + 0x354c) = 0;
        if (local_88._2_1_ == '\0') goto LAB_002bb2ac;
LAB_002bb19c:
        if (local_88._3_1_ != '\0') goto LAB_002bb1a4;
LAB_002bb2b8:
        *(undefined1 *)(param_2 + 0x358c) = 0;
        if (local_88._4_1_ == '\0') goto LAB_002bb2c4;
LAB_002bb1ac:
        if (local_88._5_1_ != '\0') goto LAB_002bb1b4;
LAB_002bb2d0:
        *(undefined1 *)(param_2 + 0x35cc) = 0;
        if (local_88._6_1_ == '\0') goto LAB_002bb2dc;
LAB_002bb1bc:
        if (local_88._7_1_ != '\0') goto LAB_002bb1c4;
LAB_002bb2e8:
        *(undefined1 *)(param_2 + 0x360c) = 0;
        if ((char)local_80 == '\0') goto LAB_002bb2f4;
LAB_002bb1cc:
        if (local_80._1_1_ != '\0') goto LAB_002bb1d4;
LAB_002bb300:
        *(undefined1 *)(param_2 + 0x364c) = 0;
        if (local_80._2_1_ == '\0') goto LAB_002bb30c;
LAB_002bb1dc:
        if (local_80._3_1_ != '\0') goto LAB_002bb1e4;
LAB_002bb318:
        *(undefined1 *)(param_2 + 0x368c) = 0;
        if (local_80._4_1_ == '\0') goto LAB_002bb324;
LAB_002bb1ec:
        if (local_80._5_1_ != '\0') goto LAB_002bb1f4;
LAB_002bb330:
        *(undefined1 *)(param_2 + 0x36cc) = 0;
        if (local_80._6_1_ == '\0') goto LAB_002bb33c;
LAB_002bb1fc:
        if (local_80._7_1_ != '\0') goto LAB_002bb204;
LAB_002bb348:
        *(undefined1 *)(param_2 + 0x370c) = 0;
        if ((char)local_78 == '\0') goto LAB_002bb354;
LAB_002bb20c:
        if (local_78._1_1_ != '\0') goto LAB_002bb214;
LAB_002bb360:
        *(undefined1 *)(param_2 + 0x374c) = 0;
        if (local_78._2_1_ == '\0') goto LAB_002bb36c;
LAB_002bb21c:
        if (local_78._3_1_ != '\0') goto LAB_002bb224;
LAB_002bb378:
        *(undefined1 *)(param_2 + 0x378c) = 0;
        if (local_78._4_1_ == '\0') goto LAB_002bb384;
LAB_002bb22c:
        if (local_78._5_1_ != '\0') goto LAB_002bb234;
LAB_002bb390:
        *(undefined1 *)(param_2 + 0x37cc) = 0;
        if (local_78._6_1_ == '\0') goto LAB_002bb39c;
LAB_002bb23c:
        if (local_78._7_1_ != '\0') goto LAB_002bb244;
LAB_002bb3a8:
        *(undefined1 *)(param_2 + 0x380c) = 0;
        if ((char)local_70 == '\0') goto LAB_002bb3b4;
LAB_002bb24c:
        if (local_70._1_1_ != '\0') goto LAB_002bb254;
LAB_002bb3c0:
        *(undefined1 *)(param_2 + 0x384c) = 0;
        if (local_70._2_1_ == '\0') goto LAB_002bb3cc;
LAB_002bb25c:
        if (local_70._3_1_ != '\0') goto LAB_002bb264;
LAB_002bb3d8:
        *(undefined1 *)(param_2 + 0x388c) = 0;
        if (local_70._4_1_ == '\0') goto LAB_002bb3e4;
LAB_002bb26c:
        if (local_70._5_1_ != '\0') goto LAB_002bb274;
LAB_002bb3f0:
        *(undefined1 *)(param_2 + 0x38cc) = 0;
        if (local_70._6_1_ == '\0') goto LAB_002bb3fc;
LAB_002bb27c:
        if (local_70._7_1_ != '\0') goto LAB_002bb284;
LAB_002bb408:
        *(undefined1 *)(param_2 + 0x390c) = 0;
        puVar9 = (ulong *)*plVar6;
        if (puVar9 == (ulong *)0x0) goto LAB_002bb414;
LAB_002bb28c:
        uVar8 = *puVar9;
      }
      else {
        lVar13 = *(long *)(lVar5 + 0x98);
        do {
          lVar11 = *(long *)(lVar12 + 0x10);
          if ((lVar13 != lVar11) && (uVar8 = (ulong)*(byte *)(lVar11 + 0x38), uVar8 < 0x20)) {
            *(undefined1 *)((long)&local_88 + uVar8) = 1;
            puVar1 = (undefined4 *)(param_2 + 0x3510 + uVar8 * 0x20);
            uVar4 = FUN_002b3eec(lVar11);
            *puVar1 = uVar4;
            uVar4 = FUN_002b3f38(*(undefined8 *)(lVar12 + 0x10));
            puVar1[1] = uVar4;
            uVar4 = FUN_002b3f5c(*(undefined8 *)(lVar12 + 0x10));
            puVar1[2] = uVar4;
            puVar10 = puVar1 + 4;
            uVar4 = *(undefined4 *)(lVar11 + 0x6c);
            uVar2 = *(undefined4 *)(lVar11 + 0x70);
            if (*(char *)(puVar1 + 7) == '\0') {
              *puVar10 = uVar4;
              puVar1[6] = uVar2;
              puVar1[3] = uVar4;
              puVar1[5] = uVar2;
              *(char *)(puVar1 + 7) = '\x01';
            }
            else {
              uVar3 = *puVar10;
              *puVar10 = uVar4;
              puVar1[3] = uVar3;
              uVar4 = puVar1[6];
              puVar1[6] = uVar2;
              puVar1[5] = uVar4;
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 != lVar5 + 0x18);
        plVar6 = (long *)PTR_DAT_04bc1510;
        if ((char)local_88 == '\0') goto LAB_002bb294;
        if (local_88._1_1_ == '\0') goto LAB_002bb2a0;
LAB_002bb194:
        if (local_88._2_1_ != '\0') goto LAB_002bb19c;
LAB_002bb2ac:
        *(undefined1 *)(param_2 + 0x356c) = 0;
        if (local_88._3_1_ == '\0') goto LAB_002bb2b8;
LAB_002bb1a4:
        if (local_88._4_1_ != '\0') goto LAB_002bb1ac;
LAB_002bb2c4:
        *(undefined1 *)(param_2 + 0x35ac) = 0;
        if (local_88._5_1_ == '\0') goto LAB_002bb2d0;
LAB_002bb1b4:
        if (local_88._6_1_ != '\0') goto LAB_002bb1bc;
LAB_002bb2dc:
        *(undefined1 *)(param_2 + 0x35ec) = 0;
        if (local_88._7_1_ == '\0') goto LAB_002bb2e8;
LAB_002bb1c4:
        if ((char)local_80 != '\0') goto LAB_002bb1cc;
LAB_002bb2f4:
        *(undefined1 *)(param_2 + 0x362c) = 0;
        if (local_80._1_1_ == '\0') goto LAB_002bb300;
LAB_002bb1d4:
        if (local_80._2_1_ != '\0') goto LAB_002bb1dc;
LAB_002bb30c:
        *(undefined1 *)(param_2 + 0x366c) = 0;
        if (local_80._3_1_ == '\0') goto LAB_002bb318;
LAB_002bb1e4:
        if (local_80._4_1_ != '\0') goto LAB_002bb1ec;
LAB_002bb324:
        *(undefined1 *)(param_2 + 0x36ac) = 0;
        if (local_80._5_1_ == '\0') goto LAB_002bb330;
LAB_002bb1f4:
        if (local_80._6_1_ != '\0') goto LAB_002bb1fc;
LAB_002bb33c:
        *(undefined1 *)(param_2 + 0x36ec) = 0;
        if (local_80._7_1_ == '\0') goto LAB_002bb348;
LAB_002bb204:
        if ((char)local_78 != '\0') goto LAB_002bb20c;
LAB_002bb354:
        *(undefined1 *)(param_2 + 0x372c) = 0;
        if (local_78._1_1_ == '\0') goto LAB_002bb360;
LAB_002bb214:
        if (local_78._2_1_ != '\0') goto LAB_002bb21c;
LAB_002bb36c:
        *(undefined1 *)(param_2 + 0x376c) = 0;
        if (local_78._3_1_ == '\0') goto LAB_002bb378;
LAB_002bb224:
        if (local_78._4_1_ != '\0') goto LAB_002bb22c;
LAB_002bb384:
        *(undefined1 *)(param_2 + 0x37ac) = 0;
        if (local_78._5_1_ == '\0') goto LAB_002bb390;
LAB_002bb234:
        if (local_78._6_1_ != '\0') goto LAB_002bb23c;
LAB_002bb39c:
        *(undefined1 *)(param_2 + 0x37ec) = 0;
        if (local_78._7_1_ == '\0') goto LAB_002bb3a8;
LAB_002bb244:
        if ((char)local_70 != '\0') goto LAB_002bb24c;
LAB_002bb3b4:
        *(undefined1 *)(param_2 + 0x382c) = 0;
        if (local_70._1_1_ == '\0') goto LAB_002bb3c0;
LAB_002bb254:
        if (local_70._2_1_ != '\0') goto LAB_002bb25c;
LAB_002bb3cc:
        *(undefined1 *)(param_2 + 0x386c) = 0;
        if (local_70._3_1_ == '\0') goto LAB_002bb3d8;
LAB_002bb264:
        if (local_70._4_1_ != '\0') goto LAB_002bb26c;
LAB_002bb3e4:
        *(undefined1 *)(param_2 + 0x38ac) = 0;
        if (local_70._5_1_ == '\0') goto LAB_002bb3f0;
LAB_002bb274:
        if (local_70._6_1_ != '\0') goto LAB_002bb27c;
LAB_002bb3fc:
        *(undefined1 *)(param_2 + 0x38ec) = 0;
        if (local_70._7_1_ == '\0') goto LAB_002bb408;
LAB_002bb284:
        puVar9 = (ulong *)*plVar6;
        if (puVar9 != (ulong *)0x0) goto LAB_002bb28c;
LAB_002bb414:
        local_98 = 0;
        FUN_002282f0(&local_98);
        uVar8 = local_98;
      }
      lVar5 = *(long *)(param_2 + 0x3920);
      plVar6 = (long *)FUN_00228380();
      local_98 = local_98 & 0xffffffff00000000;
      local_64 = 0;
      uVar4 = 0;
      if (*plVar6 != 0) {
        uVar4 = (undefined4)((long)(uVar8 - lVar5) / *plVar6);
      }
      *(undefined4 *)(param_2 + 0x3910) = uVar4;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)&local_64);
      puVar7 = &local_98;
      goto LAB_002bb458;
    }
  }
  local_98 = local_98 & 0xffffffff00000000;
  local_88 = CONCAT44(local_88._4_4_,0x10c08);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_98);
  puVar7 = &local_88;
LAB_002bb458:
  FUN_002296c4(param_1,puVar7);
  return;
}

