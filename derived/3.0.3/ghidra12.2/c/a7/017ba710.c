
ulong FUN_017ba710(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined5 local_64;
  char cStack_5f;
  char cStack_5e;
  undefined4 uStack_5d;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  char cStack_56;
  undefined1 local_55;
  
  uVar4 = FUN_017f37d0();
  if ((uVar4 & 1) != 0) goto LAB_017ba730;
  if (param_1 < -0x169521c) {
    if (param_1 < -0x41c3528e) {
      if (param_1 < -0x68a9a319) {
        if (param_1 < -0x75e80b7c) {
          if (param_1 < -0x7a57de51) {
            if (param_1 == -0x7b521843) goto LAB_017ba730;
            if (param_1 == -0x7ad2e1aa) goto LAB_017ba880;
            goto LAB_017bae18;
          }
          if (param_1 != -0x7a57de51) {
            iVar2 = -0x7975b8e8;
            goto LAB_017babc4;
          }
        }
        else {
          if (-0x74337aac < param_1) {
            if (param_1 == -0x74337aab) goto LAB_017ba730;
            iVar2 = -0x6e1ed560;
            goto LAB_017baddc;
          }
          if (param_1 != -0x75e80b7c) {
            iVar2 = -0x74938232;
            goto LAB_017bacf4;
          }
        }
      }
      else if (param_1 < -0x57d4aeba) {
        if (param_1 < -0x5f95286e) {
          if (param_1 != -0x68a9a319) {
            iVar2 = -0x66cc4d79;
            goto LAB_017badb8;
          }
        }
        else if (param_1 != -0x5f95286e) {
          if (param_1 == -0x5c2fda8c) {
            uVar4 = FUN_017f765c(0xa3d02574,param_2);
            return uVar4;
          }
          goto LAB_017bae18;
        }
      }
      else {
        if (-0x4772f805 < param_1) {
          if (param_1 == -0x4772f804) goto LAB_017ba730;
          iVar2 = -0x4701dc58;
          goto LAB_017badb8;
        }
        if (param_1 != -0x57d4aeba) {
          iVar2 = -0x477aafe0;
          goto LAB_017baddc;
        }
      }
    }
    else {
      if (param_1 < -0x122957f5) {
        if (param_1 < -0x21a6781c) {
          if (param_1 < -0x2c3fb610) {
            if (param_1 != -0x41c3528e) {
              iVar2 = -0x3e092032;
LAB_017babc4:
              if (param_1 == iVar2) {
                if (DAT_05aed670 == 0) {
                  puVar9 = &DAT_055c04a0;
                }
                else {
                  puVar9 = &DAT_055c04a0;
                  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                    puVar9 = (undefined8 *)
                             (**(code **)(*DAT_05aed668 + 0x18))
                                       (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
                    iVar2 = FUN_006bd550(*puVar9,0);
                    puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar2 != 0x758f7eaf) {
                      puVar9 = &DAT_055c04a0;
                    }
                  }
                }
                if (*(int *)(puVar9 + 7) == param_1) {
                  if (DAT_05292338 == 0) {
                    iVar2 = 0;
                    iVar8 = 0;
                    iVar6 = 0x10;
                    iVar7 = 0x10;
                  }
                  else {
                    iVar2 = *(int *)(DAT_05292338 + 0xd88);
                    iVar8 = *(int *)(DAT_05292338 + 0xd8c);
                    iVar7 = *(int *)(DAT_05292338 + 0xd98);
                    iVar6 = *(int *)(DAT_05292338 + 0xd9c);
                  }
                  iVar1 = iVar2;
                  if (iVar7 <= iVar2) {
                    iVar1 = iVar7;
                  }
                  if (iVar2 <= iVar7) {
                    iVar2 = iVar7;
                  }
                  *(int *)(param_2 + 0x10) = iVar1;
                  *(int *)(param_2 + 0x20) = iVar2;
                  iVar2 = iVar8;
                  if (iVar6 <= iVar8) {
                    iVar2 = iVar6;
                  }
                  if (iVar8 <= iVar6) {
                    iVar8 = iVar6;
                  }
                }
                else {
                  iVar2 = 0x1a;
                  iVar8 = 0x25;
                  *(undefined4 *)(param_2 + 0x10) = 0x1a;
                  *(undefined4 *)(param_2 + 0x20) = 0x25;
                }
                *(int *)(param_2 + 0x14) = iVar2;
                *(int *)(param_2 + 0x24) = iVar8;
                return 1;
              }
              goto LAB_017bae18;
            }
            goto LAB_017b4bd4;
          }
          if (param_1 == -0x2c3fb610) goto LAB_017bacfc;
          iVar2 = -0x21ba1d3a;
        }
        else if (param_1 < -0x196792d8) {
          if (param_1 == -0x21a6781c) goto LAB_017b4bd4;
          iVar2 = -0x2099c902;
        }
        else {
          if (param_1 == -0x196792d8) goto LAB_017ba730;
          iVar2 = -0x15fdefdb;
        }
        goto LAB_017baddc;
      }
      if (param_1 < -0xe632453) {
        if (-0x11ea17dd < param_1) {
          if (param_1 == -0x11ea17dc) goto LAB_017ba730;
          iVar2 = -0xea9e7e3;
LAB_017bacf4:
          if (param_1 == iVar2) {
LAB_017bacfc:
            uVar4 = FUN_017f7434(param_1,param_2);
            return uVar4;
          }
          goto LAB_017bae18;
        }
        if (param_1 != -0x122957f5) {
          iVar2 = -0x11f68f68;
          goto LAB_017badb8;
        }
      }
      else {
        if (-0x917edfa < param_1) {
          if ((param_1 == -0x917edf9) || (param_1 == -0x8fb780d)) goto LAB_017ba730;
          iVar2 = -0x83ceb3d;
          goto LAB_017baddc;
        }
        if (param_1 != -0xe632453) {
          iVar2 = -0xbf1cc08;
          goto LAB_017badb8;
        }
      }
    }
  }
  else {
    if (0x3fce6458 < param_1) {
      if (param_1 < 0x65b7732d) {
        if (0x5fbb6b25 < param_1) {
          if (param_1 < 0x6148bcad) {
            if (param_1 == 0x5fbb6b26) {
LAB_017bab3c:
              uVar4 = FUN_017f7548(param_1,param_2);
              return uVar4;
            }
            iVar2 = 0x60c2c4f0;
          }
          else {
            if (param_1 == 0x6148bcad) goto LAB_017b4bd4;
            iVar2 = 0x6168e44d;
          }
          goto LAB_017badb8;
        }
        if (param_1 < 0x4d702d55) {
          if (param_1 != 0x3fce6459) {
            if (param_1 == 0x483e4538) goto LAB_017bab3c;
            goto LAB_017bae18;
          }
          goto LAB_017b4bd4;
        }
        if (param_1 == 0x4d702d55) goto LAB_017ba730;
        iVar2 = 0x593d97a5;
LAB_017baddc:
        if (param_1 == iVar2) goto LAB_017b4bd4;
      }
      else {
        if (param_1 < 0x72a13146) {
          if (param_1 < 0x6c9ebc71) {
            if (param_1 == 0x65b7732d) goto LAB_017ba730;
            iVar2 = 0x66eec322;
          }
          else {
            if (param_1 == 0x6c9ebc71) goto LAB_017ba730;
            iVar2 = 0x7194bd96;
          }
          goto LAB_017baddc;
        }
        if (0x77870a83 < param_1) {
          if (param_1 == 0x77870a84) goto LAB_017ba730;
          if (param_1 == 0x7fff3f46) {
LAB_017ba880:
            uVar4 = FUN_017f7320(param_1,param_2);
            return uVar4;
          }
          iVar2 = 0x7c939885;
          goto LAB_017badb8;
        }
        if (param_1 == 0x72a13146) goto LAB_017ba730;
        if (param_1 == 0x756daeec) {
          uVar4 = FUN_017f7770(0x756daeec,param_2);
          return uVar4;
        }
      }
LAB_017bae18:
      uVar4 = FUN_017f3a18(param_1);
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_017f7884(param_1,param_2);
        return uVar4;
      }
      if (param_1 < 0x2922957e) {
        if ((param_1 == 0x80e20d8) || (param_1 == 0xb6a5301)) goto LAB_017ba730;
        iVar2 = 0x1490248c;
      }
      else {
        if ((param_1 == 0x2922957e) || (param_1 == 0x7a616e2f)) goto LAB_017ba730;
        iVar2 = 0x51b9e069;
      }
      if (param_1 != iVar2) {
        return 0;
      }
LAB_017ba730:
      uVar4 = FUN_017f7a50(param_1,param_2);
      return uVar4;
    }
    if (param_1 < 0x1693a871) {
      if (param_1 < 0xc672fa7) {
        if (param_1 < 0x1ac1236) {
          if (param_1 == -0x169521c) goto LAB_017b4bd4;
          iVar2 = 0x5f6c88;
        }
        else {
          if (param_1 == 0x1ac1236) goto LAB_017ba730;
          iVar2 = 0x427dece;
        }
      }
      else {
        if (0x10cdc40b < param_1) {
          if (param_1 == 0x10cdc40c) {
            uVar4 = FUN_017f720c(0x10cdc40c,param_2);
            return uVar4;
          }
          iVar2 = 0x11889761;
          goto LAB_017baddc;
        }
        if (param_1 == 0xc672fa7) goto LAB_017bab3c;
        iVar2 = 0xe716ff8;
      }
      goto LAB_017badb8;
    }
    if (0x28c45758 < param_1) {
      if (param_1 < 0x3b3bf38a) {
        if (param_1 == 0x28c45759) goto LAB_017ba730;
        iVar2 = 0x3411ee5c;
      }
      else {
        if (param_1 == 0x3b3bf38a) goto LAB_017b4bd4;
        iVar2 = 0x3ee08254;
      }
      goto LAB_017baddc;
    }
    if (param_1 < 0x17f77b87) {
      if (param_1 != 0x1693a871) {
        iVar2 = 0x16f2dadc;
        goto LAB_017badb8;
      }
    }
    else if (param_1 != 0x17f77b87) {
      iVar2 = 0x1d096e7d;
LAB_017badb8:
      if (param_1 == iVar2) goto LAB_017ba730;
      goto LAB_017bae18;
    }
  }
LAB_017b4bd4:
  uVar3 = 0;
  if (param_1 < -0x169521c) {
    if (-0x21ba1d3b < param_1) {
      if (param_1 < -0x122957f5) {
        if (param_1 == -0x21ba1d3a) {
          uVar5 = 0;
LAB_017b4fe4:
          uVar4 = FUN_017b4854(param_2,uVar5);
          return uVar4;
        }
        if (param_1 == -0x2099c902) {
          uVar4 = FUN_017b3c70(param_2,0);
          return uVar4;
        }
        if (param_1 == -0x15fdefdb) {
          uVar5 = 1;
          goto LAB_017b50f4;
        }
      }
      else {
        if (param_1 != -0x122957f5) {
          if (param_1 == -0xe632453) {
            uVar5 = 0;
          }
          else {
            if (param_1 != -0x83ceb3d) goto LAB_017b50b4;
            uVar5 = 1;
          }
LAB_017b4fc0:
          uVar4 = FUN_017b4170(param_2,uVar5);
          return uVar4;
        }
        local_68 = 0x40;
        local_70 = &local_64;
        local_78 = PTR_DAT_04bb2bc0 + 0x10;
        local_64 = s_IdrTsunekichi00_040c51f7._0_5_;
        cStack_5f = s_IdrTsunekichi00_040c51f7[5];
        cStack_5e = s_IdrTsunekichi00_040c51f7[6];
        local_55 = 0;
        uStack_5d = (undefined4)
                    CONCAT71(s_IdrTsunekichi00_040c51f7._8_7_,s_IdrTsunekichi00_040c51f7[7]);
        cStack_59 = s_IdrTsunekichi00_040c51f7[0xb];
        cStack_58 = s_IdrTsunekichi00_040c51f7[0xc];
        cStack_57 = s_IdrTsunekichi00_040c51f7[0xd];
        cStack_56 = s_IdrTsunekichi00_040c51f7[0xe];
        local_88 = PTR_DAT_04bb2010 + 0x10;
        local_80 = (char *)0x0;
        uVar3 = FUN_00979580(&local_78,&local_88,&local_8c,&local_90);
        if ((uVar3 & 1) != 0) {
          local_80._0_4_ = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_80;
          local_80._4_4_ = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_80._4_4_;
          iVar8 = (int)local_80 + local_8c + -1;
          iVar2 = (int)local_80;
          if (iVar8 <= (int)local_80) {
            iVar2 = iVar8;
          }
          if ((int)local_80 <= iVar8) {
            local_80._0_4_ = iVar8;
          }
          iVar8 = local_80._4_4_;
          if (0x24 < local_80._4_4_) {
            iVar8 = 0x25;
          }
          if (local_80._4_4_ < 0x26) {
            local_80._4_4_ = 0x25;
          }
          *(int *)(param_2 + 0x10) = iVar2;
          *(int *)(param_2 + 0x14) = iVar8;
          *(int *)(param_2 + 0x20) = (int)local_80;
          *(int *)(param_2 + 0x24) = local_80._4_4_;
        }
      }
      goto LAB_017b50b4;
    }
    if (-0x57d4aebb < param_1) {
      if (param_1 == -0x57d4aeba) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
        uVar4 = FUN_017b43b0(param_2,1);
        return uVar4;
      }
      if (param_1 == -0x477aafe0) {
        uVar5 = 2;
        goto LAB_017b4fc0;
      }
      if (param_1 != -0x41c3528e) goto LAB_017b50b4;
LAB_017b4db4:
      iVar2 = FUN_017ba560();
      local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar2);
      uVar4 = FUN_017b3b54(param_2,iVar2 + -1);
      return uVar4;
    }
    if (param_1 == -0x75e80b7c) goto LAB_017b4db4;
    if (param_1 != -0x6e1ed560) {
      if (param_1 == -0x68a9a319) {
        uVar5 = 1;
        goto LAB_017b4fe4;
      }
      goto LAB_017b50b4;
    }
    local_64 = s_IdrTailor00_040a6407._0_5_;
    cStack_5f = s_IdrTailor00_040a6407[5];
    cStack_5e = s_IdrTailor00_040a6407[6];
    uStack_5d = CONCAT31(0x303072,s_IdrTailor00_040a6407[7]);
    cStack_59 = '\0';
LAB_017b503c:
    local_68 = 0x40;
    local_70 = &local_64;
    local_78 = PTR_DAT_04bb2bc0 + 0x10;
    local_88 = PTR_DAT_04bb2010 + 0x10;
    local_80 = (char *)0x0;
    uVar3 = FUN_00979580(&local_78,&local_88,&local_8c,&local_90);
    if ((uVar3 & 1) == 0) goto LAB_017b50b4;
    iVar2 = (int)local_80;
    iVar8 = local_80._4_4_;
  }
  else {
    if (0x3ee08253 < param_1) {
      if (0x6148bcac < param_1) {
        if (param_1 == 0x6148bcad) {
          uVar5 = 0;
LAB_017b51c4:
          uVar4 = FUN_017b3ee8(param_2,uVar5);
          return uVar4;
        }
        if (param_1 == 0x66eec322) {
LAB_017b4e9c:
          iVar2 = FUN_017ba638();
          local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar2);
          uVar4 = FUN_017b3dec(param_2,iVar2 + -2);
          return uVar4;
        }
        if (param_1 == 0x7194bd96) {
          uVar3 = 1;
          *(undefined8 *)(param_2 + 0x10) = 0x1c0000001c;
          *(undefined8 *)(param_2 + 0x20) = 0x2300000023;
        }
        goto LAB_017b50b4;
      }
      if (param_1 != 0x3ee08254) {
        if (param_1 == 0x3fce6459) {
          uVar5 = 2;
          goto LAB_017b51c4;
        }
        if (param_1 == 0x593d97a5) goto LAB_017b4e9c;
        goto LAB_017b50b4;
      }
      cStack_57 = '\0';
      local_64._0_1_ = s_IdrHotelEnt00_040b53ed[0];
      local_64._1_1_ = s_IdrHotelEnt00_040b53ed[1];
      local_64._2_1_ = s_IdrHotelEnt00_040b53ed[2];
      local_64._3_1_ = s_IdrHotelEnt00_040b53ed[3];
      local_64._4_1_ = s_IdrHotelEnt00_040b53ed[4];
      cStack_5f = s_IdrHotelEnt00_040b53ed[5];
      cStack_5e = s_IdrHotelEnt00_040b53ed[6];
      uStack_5d = (undefined4)
                  (CONCAT53(s_IdrHotelEnt00_040b53ed._8_5_,s_IdrHotelEnt00_040b53ed._5_3_) >> 0x10);
      cStack_59 = s_IdrHotelEnt00_040b53ed[0xb];
      cStack_58 = s_IdrHotelEnt00_040b53ed[0xc];
      goto LAB_017b503c;
    }
    if (param_1 < 0x17f77b87) {
      if (param_1 == -0x169521c) {
        uVar5 = 1;
        goto LAB_017b51c4;
      }
      if (param_1 != 0x11889761) {
        if (param_1 != 0x1693a871) goto LAB_017b50b4;
        local_64 = s_IdrTanukichi00_040ca383._0_5_;
        cStack_5f = s_IdrTanukichi00_040ca383[5];
        cStack_56 = 0;
        cStack_5e = s_IdrTanukichi00_040ca383[6];
        uStack_5d = (undefined4)
                    (CONCAT62(s_IdrTanukichi00_040ca383._8_6_,s_IdrTanukichi00_040ca383._6_2_) >> 8)
        ;
        cStack_59 = s_IdrTanukichi00_040ca383[0xb];
        cStack_58 = s_IdrTanukichi00_040ca383[0xc];
        cStack_57 = s_IdrTanukichi00_040ca383[0xd];
        goto LAB_017b503c;
      }
      local_80 = "IdrMuseumCafe00";
    }
    else {
      if (param_1 == 0x17f77b87) {
        uVar5 = 2;
LAB_017b50f4:
        uVar4 = FUN_017b3ff0(param_2,uVar5);
        return uVar4;
      }
      if (param_1 != 0x3411ee5c) {
        if (param_1 != 0x3b3bf38a) goto LAB_017b50b4;
        uVar5 = 0;
        goto LAB_017b50f4;
      }
      local_80 = "IdrAirPort00";
    }
    local_70 = (undefined5 *)0x0;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_88 = PTR_DAT_04bb2020 + 0x10;
    uVar3 = FUN_00979580(&local_88,&local_78,&local_8c,&local_90);
    if ((uVar3 & 1) == 0) goto LAB_017b50b4;
    iVar2 = (int)local_70;
    iVar8 = local_70._4_4_;
  }
  iVar2 = *(int *)(PTR_DAT_04bbe490 + 8) + iVar2;
  iVar8 = *(int *)(PTR_DAT_04bbe490 + 0xc) + iVar8;
  iVar6 = iVar2 + local_8c + -1;
  iVar1 = iVar8 + local_90 + -1;
  iVar7 = iVar2;
  if (iVar6 <= iVar2) {
    iVar7 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  iVar6 = iVar8;
  if (iVar1 <= iVar8) {
    iVar6 = iVar1;
  }
  if (iVar8 <= iVar1) {
    iVar8 = iVar1;
  }
  *(int *)(param_2 + 0x10) = iVar7;
  *(int *)(param_2 + 0x14) = iVar6;
  *(int *)(param_2 + 0x20) = iVar2;
  *(int *)(param_2 + 0x24) = iVar8;
  FUN_017b3420(param_2);
LAB_017b50b4:
  return (ulong)(uVar3 & 1);
}

