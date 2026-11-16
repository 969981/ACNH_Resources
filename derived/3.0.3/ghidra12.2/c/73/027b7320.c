
byte FUN_027b7320(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_98;
  long lStack_90;
  uint *local_88 [2];
  uint local_78;
  byte local_74;
  undefined8 local_70;
  long local_68;
  
  bVar11 = 0;
  uVar9 = 0;
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar14 = 1;
  do {
    puVar7 = *(uint **)(param_1 + 0x10);
    uVar12 = 0;
    if (puVar7 != (uint *)0x0) {
      if ((*puVar7 & 0xfe) == 0xc0) {
        uVar12 = *puVar7 >> 8;
        if (*(short *)*puVar1 == 0x5942) {
          uVar12 = uVar12 & 0xff00 | *puVar7 >> 0x18 | (uVar12 & 0xff) << 0x10;
        }
      }
      else {
        uVar12 = 0;
      }
    }
    if (uVar12 <= uVar9) {
      return bVar11;
    }
    FUN_03ea9348(local_88,puVar1,uVar9);
    puVar7 = local_88[0];
    if (local_88[0] != (uint *)0x0) {
      (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
      local_70 = (uint *)((ulong)local_70 & 0xffffff0000000000);
      uVar5 = FUN_03ea9450(local_88,&local_70,DAT_0558d448);
      if ((((uVar5 & 1) != 0) && (local_70._4_1_ != -1)) &&
         ((iVar4 = (uint)local_70, local_70._4_1_ == -0x2d ||
          ((local_70._4_1_ == -0x2f && (-1 < (int)(uint)local_70)))))) {
        puVar8 = *(uint **)(param_1 + 0x10);
        if (puVar8 != (uint *)0x0) {
          uVar12 = uVar14;
          do {
            if ((*puVar8 & 0xfe) != 0xc0) break;
            uVar10 = *puVar8 >> 8;
            if (*(short *)*puVar1 == 0x5942) {
              uVar10 = uVar10 & 0xff00 | *puVar8 >> 0x18 | (uVar10 & 0xff) << 0x10;
            }
            if (uVar10 <= uVar12) break;
            FUN_03ea9348(&local_70,puVar1,uVar12);
            if (local_70 != (uint *)0x0) {
              (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
              local_98 = (uint *)((ulong)local_98 & 0xffffff0000000000);
              uVar5 = FUN_03ea9450(&local_70,&local_98,DAT_0558d448);
              if (((uVar5 & 1) != 0) && (local_98._4_1_ != -1)) {
                if (local_98._4_1_ == -0x2f) {
                  if (-1 < (int)local_98) goto LAB_027b7448;
                }
                else if (local_98._4_1_ == -0x2d) {
LAB_027b7448:
                  bVar11 = iVar4 == (int)local_98 | bVar11;
                }
              }
            }
            puVar8 = *(uint **)(param_1 + 0x10);
            uVar12 = uVar12 + 1;
          } while (puVar8 != (uint *)0x0);
        }
        (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
        local_70 = (uint *)((ulong)local_70 & 0xffffff0000000000);
        uVar5 = FUN_03ea9450(local_88,&local_70,DAT_0558d458);
        if (((uVar5 & 1) != 0) && (local_70._4_1_ - 0xc0 < 2)) {
          uVar12 = 0;
          uVar10 = 1;
          puVar8 = (uint *)((long)puVar7 + ((ulong)local_70 & 0xffffffff));
          while( true ) {
            if ((*puVar8 & 0xfe) == 0xc0) {
              uVar6 = *puVar8 >> 8;
              if ((short)*puVar7 == 0x5942) {
                uVar6 = uVar6 & 0xff00 | *puVar8 >> 0x18 | (uVar6 & 0xff) << 0x10;
              }
            }
            else {
              uVar6 = 0;
            }
            if (uVar6 <= uVar12) break;
            local_98 = (uint *)((ulong)local_98 & 0xffffff0000000000);
            if ((char)*puVar8 == -0x3f) {
              local_68 = CONCAT71(local_68._1_7_,(short)*puVar7 == 0x5942);
              local_70 = puVar8;
              uVar5 = FUN_03eaa938(&local_70,&local_98,uVar12);
              puVar3 = local_98;
joined_r0x027b7624:
              local_98 = puVar3;
              if ((uVar5 & 1) != 0) {
                local_98._4_1_ = (byte)((ulong)puVar3 >> 0x20);
                uVar6 = (uint)local_98._4_1_;
                if (uVar6 - 0xc0 < 2) {
                  lStack_90 = (long)puVar7 + ((ulong)puVar3 & 0xffffffff);
                }
                else {
                  if (uVar6 != 0xff) goto LAB_027b7560;
                  lStack_90 = 0;
                }
                local_98 = puVar7;
                (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                local_70 = (uint *)((ulong)local_70 & 0xffffff0000000000);
                uVar5 = FUN_03ea9450(&local_98,&local_70,DAT_0558d468);
                if (((((uVar5 & 1) != 0) && (local_70._4_1_ != -1)) &&
                    ((uVar6 = (uint)local_70, local_70._4_1_ == -0x2d ||
                     ((local_70._4_1_ == -0x2f && (-1 < (int)(uint)local_70)))))) &&
                   ((*puVar8 & 0xfe) == 0xc0)) {
                  uVar13 = uVar10;
                  do {
                    uVar2 = *puVar8 >> 8;
                    if ((short)*puVar7 == 0x5942) {
                      uVar2 = uVar2 & 0xff00 | *puVar8 >> 0x18 | (uVar2 & 0xff) << 0x10;
                    }
                    if (uVar2 <= uVar13) break;
                    local_78 = 0;
                    local_74 = 0;
                    if ((char)*puVar8 == -0x3f) {
                      local_68 = CONCAT71(local_68._1_7_,(short)*puVar7 == 0x5942);
                      local_70 = puVar8;
                      uVar5 = FUN_03eaa938(&local_70,&local_78,uVar13);
joined_r0x027b7798:
                      if ((uVar5 & 1) != 0) {
                        if (local_74 - 0xc0 < 2) {
                          local_68 = (long)puVar7 + (ulong)local_78;
                        }
                        else {
                          if (local_74 != 0xff) goto LAB_027b76e4;
                          local_68 = 0;
                        }
                        local_70 = puVar7;
                        (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                        local_78 = 0;
                        local_74 = 0;
                        uVar5 = FUN_03ea9450(&local_70,&local_78,DAT_0558d468);
                        if (((uVar5 & 1) != 0) && (local_74 != 0xff)) {
                          if (local_74 == 0xd1) {
                            if (-1 < (int)local_78) goto LAB_027b76cc;
                          }
                          else if (local_74 == 0xd3) {
LAB_027b76cc:
                            bVar11 = uVar6 == local_78 | bVar11;
                          }
                        }
                      }
                    }
                    else if ((char)*puVar8 == -0x40) {
                      local_68 = CONCAT71(local_68._1_7_,(short)*puVar7 == 0x5942);
                      local_70 = puVar8;
                      uVar5 = FUN_03eaa544(&local_70,&local_78,uVar13);
                      goto joined_r0x027b7798;
                    }
LAB_027b76e4:
                    uVar13 = uVar13 + 1;
                  } while ((*puVar8 & 0xfe) == 0xc0);
                }
              }
            }
            else if ((char)*puVar8 == -0x40) {
              local_68 = CONCAT71(local_68._1_7_,(short)*puVar7 == 0x5942);
              local_70 = puVar8;
              uVar5 = FUN_03eaa544(&local_70,&local_98,uVar12);
              puVar3 = local_98;
              goto joined_r0x027b7624;
            }
LAB_027b7560:
            uVar12 = uVar12 + 1;
            uVar10 = uVar10 + 1;
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
    uVar14 = uVar14 + 1;
  } while( true );
}

