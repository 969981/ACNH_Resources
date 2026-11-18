
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03454db0(undefined8 param_1,undefined8 *param_2,byte *param_3,ulong param_4)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  short *psVar11;
  byte *pbVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  int local_34;
  
  puVar5 = PTR_DAT_04bb4718;
  lVar10 = *(long *)PTR_DAT_04bb4718;
  if ((lVar10 == 0) || (uVar14 = (ulong)*param_3, 7 < uVar14)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar8 != 0) {
        DAT_054f0c6c = '\0';
        _DAT_054f0c44 = 0;
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar11 = &DAT_054f0c08;
      param_4 = param_4 & 0xffffffff;
      cVar2 = DAT_054f0c6c;
      goto joined_r0x03454ec8;
    }
    psVar11 = &DAT_054f0c08;
    if (DAT_054f0c6c != '\0') goto LAB_03454e30;
LAB_03454ecc:
    iVar8 = 1;
  }
  else {
    lVar10 = lVar10 + uVar14 * 0xd0 + (ulong)(*(uint *)(lVar10 + uVar14 * 4 + 0xd68) & 1) * 0x68;
    psVar11 = (short *)(lVar10 + 0x6e8);
    cVar2 = *(char *)(lVar10 + 0x74c);
joined_r0x03454ec8:
    if (cVar2 == '\0') goto LAB_03454ecc;
LAB_03454e30:
    if (*psVar11 != *(short *)PTR_DAT_04bb6298) goto LAB_03454ecc;
    iVar8 = *(int *)(psVar11 + 0x30);
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar8);
  if (iVar8 - 5U < 0xfffffffd) {
    if ((param_4 & 1) == 0) {
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        local_50 = (undefined *)CONCAT44(local_50._4_4_,6);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 6 & 1) != 0) && (DAT_05453f6c != -1)) {
          return 4;
        }
      }
      if ((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) &&
         (uVar14 = FUN_033f9b30(), (uVar14 & 1) != 0)) {
        return 0x11;
      }
    }
    else {
      uVar14 = FUN_0277e294(param_2);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar14 & 1) != 0) {
        local_40 = 0;
        local_50 = PTR_DAT_04bc0510 + 0x10;
        local_48 = (char *)*param_2;
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        uVar7 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar4 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(param_2);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
              if (lVar10 != 0) {
                local_40 = lVar10;
              }
            }
          }
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,0xe);
        local_34 = FUN_01ae7550(&local_50);
        if (local_34 == (int)local_60) {
          lVar10 = *(long *)PTR_DAT_04bb39b0;
          pbVar12 = PTR_DAT_04bb32e0;
          if (lVar10 == 0) {
LAB_034550a4:
            if (*pbVar12 < 8) goto LAB_0345511c;
LAB_034550b0:
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03455114:
              pbVar12 = PTR_DAT_04bb5038;
              goto LAB_0345511c;
            }
            lVar10 = **(long **)PTR_DAT_04bb27d0;
            bVar13 = *(byte *)(lVar10 + 0x473);
            pbVar12 = PTR_DAT_04bb5038;
            if ((long)(char)bVar13 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
              if (7 < bVar13) {
                puVar1 = (uint *)(lVar10 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar12 = (byte *)(lVar10 + 0x471);
              }
            }
            bVar13 = *pbVar12;
            bVar6 = 7 < bVar13;
            if (bVar6) {
              bVar13 = 0xff;
            }
            local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
            local_34 = CONCAT31(local_34._1_3_,bVar13);
            if (bVar6) goto LAB_03455114;
          }
          else {
            if (*(int *)(lVar10 + 0x15c) != 0) {
              pbVar12 = (byte *)(lVar10 + 0x158);
            }
            if (7 < *pbVar12) {
              if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)puVar5 != 0)) {
                pbVar12 = (byte *)(*(long *)puVar5 + 0x11a5);
                goto LAB_034550a4;
              }
              goto LAB_034550b0;
            }
LAB_0345511c:
            bVar13 = *pbVar12;
            if (7 < bVar13) {
              bVar13 = 0xff;
            }
            local_34 = CONCAT31(local_34._1_3_,bVar13);
          }
          local_60 = PTR_DAT_04bb2020 + 0x10;
          pcStack_58 = "UnlockInterior_CeilingFurniture";
          iVar8 = FUN_0274bce0(&local_34,&local_60);
          if (iVar8 == 0) {
            return 0x6c;
          }
        }
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 == -1) {
          if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) goto LAB_03455254;
        }
        else {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 6 & 1) == 0) {
            bVar13 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
          }
          else {
            if (DAT_05453f6c != -1) {
              return 4;
            }
            bVar13 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
          }
          if (1 < bVar13) {
            local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
            if (0xff < (uint)(int)sVar3) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar1 >> 3 & 1) != 0) {
              return 0x10;
            }
LAB_03455254:
            uVar14 = FUN_033f9b30();
            if ((uVar14 & 1) != 0) {
              return 4;
            }
          }
        }
        if ((*(long *)PTR_DAT_04bb5ce0 != 0) &&
           (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) != '\0')) {
          local_50 = PTR_DAT_04bb2020 + 0x10;
          local_48 = "JuneBrideCeremonyDemoAfterNow";
          iVar8 = FUN_02743000(&local_50);
          if ((iVar8 != 0) || (iVar8 = FUN_02202f80(), iVar8 == 0)) goto LAB_034552a0;
        }
      }
    }
    uVar9 = 0;
  }
  else {
LAB_034552a0:
    uVar9 = 0x12;
  }
  return uVar9;
}

