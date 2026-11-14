
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_01c8f3dc(void)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  short *psVar11;
  int *piVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38;
  char local_37;
  char local_36;
  int local_18;
  byte local_14 [4];
  
  uVar7 = FUN_02640eb0();
  puVar4 = PTR_DAT_04bb7ff8;
  puVar3 = PTR_DAT_04bb6298;
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)PTR_DAT_04bb39b0;
    pbVar14 = PTR_DAT_04bb32e0;
    if (lVar10 == 0) {
LAB_01c8f44c:
      if (*pbVar14 < 8) goto LAB_01c8f4c4;
LAB_01c8f458:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c8f4bc:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_01c8f4c4;
      }
      lVar15 = **(long **)PTR_DAT_04bb27d0;
      bVar1 = *(byte *)(lVar15 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        puVar8 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
        if (7 < bVar1) {
          puVar8 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar8 & 8) != 0) {
          pbVar14 = (byte *)(lVar15 + 0x471);
        }
      }
      local_14[0] = *pbVar14;
      uVar13 = (uint)local_14[0];
      if (7 < local_14[0]) goto LAB_01c8f4bc;
    }
    else {
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar10 + 0x158);
      }
      if (7 < *pbVar14) {
        if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01c8f44c;
        }
        goto LAB_01c8f458;
      }
LAB_01c8f4c4:
      uVar13 = (uint)*pbVar14;
      if (7 < uVar13) {
        uVar13 = 0xff;
      }
      local_14[0] = (byte)uVar13;
    }
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) goto LAB_01c8f920;
    }
    else {
      local_40 = 0x15;
      uVar6 = 0;
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar8 >> 0x15 & 1) != 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51))
      goto LAB_01c8f924;
    }
    if (*(long *)PTR_DAT_04bb7ff8 != 0) {
      local_40 = 0;
                    /* WARNING: Could not recover jumptable at 0x01c8f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&UNK_01c8f594 + (ulong)DAT_04178738 * 4))();
      return uVar7;
    }
    if (*(int *)(lVar10 + 0x15c) == 0) {
LAB_01c8f694:
      if (uVar13 < 8) {
        lVar10 = *(long *)PTR_DAT_04bb4718;
        if (lVar10 == 0) {
          if ((DAT_054f0c70 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
            psVar11 = &DAT_054f0c08;
            if (iVar5 != 0) {
              DAT_054f0c6c = 0;
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
              psVar11 = &DAT_054f0c08;
            }
          }
          else {
            psVar11 = &DAT_054f0c08;
          }
        }
        else {
          psVar11 = (short *)(lVar10 + (ulong)uVar13 * 0xd0 +
                              (ulong)(*(uint *)(lVar10 + (ulong)uVar13 * 4 + 0xd68) & 1) * 0x68 +
                             0x6e8);
        }
        if ((((char)psVar11[0x32] != '\0') && (*psVar11 == *(short *)puVar3)) &&
           ((char)psVar11[4] == '\0')) goto LAB_01c8f920;
      }
      if (((*(long *)PTR_DAT_04bc1118 == 0) ||
          (lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x6e0), lVar10 == 0)) ||
         ((lVar10 = *(long *)(lVar10 + 8), lVar10 == 0 || (*(char *)(lVar10 + 0x17de) == '\0')))) {
        local_40 = 3;
        iVar5 = 3;
        if (*(uint *)(*(long *)PTR_DAT_04bb46c0 + 8) < 4) {
          iVar5 = 0;
        }
        if (*(int *)(*(long *)(*(long *)PTR_DAT_04bb46c0 + 0x10) + (long)iVar5 * 4) < 1) {
          uVar6 = 1;
          goto LAB_01c8f924;
        }
        uVar7 = FUN_00a738a0(local_14,0);
        if ((uVar7 & 1) != 0) {
          lVar10 = *(long *)puVar4;
          uVar6 = 0;
          if (lVar10 == 0) goto LAB_01c8f924;
          uVar7 = FUN_02ef9074(lVar10,4,local_14);
          if ((uVar7 & 1) != 0) goto LAB_01c8f920;
        }
        puVar8 = (uint *)FUN_0251ad2c();
        puVar9 = (uint *)FUN_0251d150(local_14);
        if (((*puVar9 >> 0xb & 1) == 0) && (local_40 = 0, (*puVar8 & 1) == 0)) {
          puVar9 = (uint *)FUN_0251d150(local_14);
          local_40 = 0x17;
          if ((((*puVar9 >> 0x17 & 1) == 0) &&
              (puVar9 = (uint *)FUN_0251d150(local_14), (*puVar9 >> 0x18 & 1) == 0)) &&
             ((((lVar10 = *(long *)puVar4, lVar10 == 0 || (*(int *)(lVar10 + 0x588) == 0)) &&
               (local_40 = 1, (*puVar8 >> 1 & 1) == 0)) &&
              (iVar5 = FUN_025835f4(*(undefined8 *)PTR_DAT_04bb4f78,local_14), -1 < iVar5)))) {
            if (((ulong)local_14[0] < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              piVar12 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)local_14[0] * 4 + 0xde8);
            }
            else {
              piVar12 = (int *)PTR_DAT_04bb3238;
            }
            local_18 = *piVar12;
            if (local_18 != 0) {
              FUN_01c8f9ac(&local_40,&local_18);
              uVar6 = 0;
              if (((CONCAT44(uStack_3c,local_40) != 0) && (local_38 != '\0')) &&
                 ((local_36 != '\0' && (local_37 != '\0')))) {
                uVar6 = FUN_0231f6e4(CONCAT44(uStack_3c,local_40));
              }
              goto LAB_01c8f924;
            }
          }
        }
      }
    }
    else {
      uVar13 = FUN_02582d8c(local_14,1);
      if ((uVar13 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d4) != '\0')) {
        uVar13 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d8);
        uVar7 = (ulong)uVar13;
        if (uVar13 != 0xffffffff) {
          if (3 < uVar13) {
            uVar7 = 0;
          }
          if (*(uint *)(*(long *)PTR_DAT_04bb3960 + uVar7 * 4 + 0xf5b40) < 3) {
            uVar13 = (uint)local_14[0];
            goto LAB_01c8f694;
          }
        }
      }
    }
  }
LAB_01c8f920:
  uVar6 = 0;
LAB_01c8f924:
  return (ulong)(uVar6 & 1);
}

