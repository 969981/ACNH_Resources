
undefined8 FUN_02482f30(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *__dest;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte local_1ac [4];
  uint local_1a8 [3];
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  int local_198;
  char *local_148;
  int local_140;
  undefined *local_f0;
  int local_e8;
  undefined1 local_a0;
  undefined4 local_94;
  byte local_54 [4];
  
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    uVar7 = FUN_02535e8c(pbVar1,*(undefined4 *)(param_1 + 0x230),1,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if ((param_2 & 1) != 0) {
      return 0;
    }
    local_54[0] = *pbVar1;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    uVar7 = FUN_0266a8f0(local_54);
    if ((uVar7 & 1) == 0) {
      local_1ac[0] = *pbVar1;
      if (7 < local_1ac[0]) {
        local_1ac[0] = 0xff;
      }
      iVar4 = FUN_0266ae30(local_1ac);
      puVar3 = PTR_DAT_04bb4f78;
      if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
        pbVar2 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        bVar10 = *pbVar2;
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        bVar11 = *pbVar1;
        if (7 < bVar11) {
          bVar11 = 0xff;
        }
        if (bVar10 != bVar11) {
          local_1a8[0] = CONCAT31(local_1a8[0]._1_3_,bVar11);
          lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_1a8,1);
          if (lVar9 == 0) {
LAB_02483438:
            uStack_19c = 0;
            local_1a8[0] = 0xffffffff;
            local_1a8[1] = 0;
            local_1a8[2] = 1;
            FUN_024834e0(param_1,local_1a8);
            return 1;
          }
          if ((*(long **)(lVar9 + 0x161a8) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar9 + 0x161a8), puVar8 == (undefined8 *)0x0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)*puVar8)();
            uVar5 = uVar5 ^ 1;
          }
          pbVar2 = (byte *)(*(long *)(lVar9 + 0x16190) + *(long *)(lVar9 + 0x16188));
          bVar10 = pbVar2[1];
          bVar11 = *pbVar2;
          if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x161a8) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x161a8) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          if (bVar10 != 0 && bVar11 < 8) goto LAB_02483438;
          if (iVar4 != 0) {
            bVar10 = *pbVar1;
            if (7 < bVar10) {
              bVar10 = 0xff;
            }
            local_1a8[0]._1_3_ = (undefined3)(local_1a8[0] >> 8);
            local_1a8[0] = CONCAT31(local_1a8[0]._1_3_,bVar10);
            lVar9 = FUN_025830c0(*(undefined8 *)puVar3,local_1a8,1);
            if (lVar9 != 0) {
              if ((*(long **)(lVar9 + 0x3eb8) == (long *)0x0) ||
                 (puVar8 = (undefined8 *)**(long **)(lVar9 + 0x3eb8), puVar8 == (undefined8 *)0x0))
              {
                uVar5 = 1;
              }
              else {
                uVar5 = (**(code **)*puVar8)();
                uVar5 = uVar5 ^ 1;
              }
              uVar6 = FUN_026e8284(*(long *)(lVar9 + 0x3ea0) + *(long *)(lVar9 + 0x3e98),
                                   param_1 + 0x288);
              if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x3eb8) != 0)) &&
                 (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x3eb8) + 8),
                 puVar8 != (undefined8 *)0x0)) {
                (**(code **)*puVar8)();
              }
              if (-1 < (int)uVar6) {
                uStack_19c = 0;
                local_1a8[1] = 0;
                local_1a8[2] = 0;
                local_1a8[0] = uVar6;
                FUN_024834e0(param_1,local_1a8);
                goto LAB_02483390;
              }
            }
          }
          goto LAB_02482f54;
        }
      }
      if (iVar4 == 0) {
        local_1a8[0] = 0x83;
      }
      else {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f0960);
            puVar12 = (uint *)&DAT_054f0958;
            if (iVar4 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar12 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar12 = (uint *)(DAT_054f5738 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar12 = puVar12 + (ulong)*pbVar1 * 2;
          }
        }
        *puVar12 = *puVar12 | 0x20;
        local_1a8[0] = 0x80;
      }
      if (local_1a8[0] < 0x149) {
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        lVar9 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar9 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar9,local_1a8[0]);
      }
    }
    else {
      if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
        pbVar2 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        bVar11 = *pbVar1;
        bVar10 = *pbVar2;
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        if (7 < bVar11) {
          bVar11 = 0xff;
        }
        if (bVar10 != bVar11) goto LAB_02482f54;
      }
      FUN_0257a010(local_1a8);
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      puVar3 = PTR_DAT_04c4b988;
      if (local_f0 != PTR_DAT_04c4b988) {
        (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
        lVar9 = 0;
        do {
          if (PTR_DAT_04c4b988[lVar9] == '\0') goto LAB_024832c8;
          if (PTR_DAT_04c4b988[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_024832c8;
          }
          if (PTR_DAT_04c4b988[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_024832c8;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_024832c8:
        iVar4 = (int)lVar9;
        if (local_e8 <= (int)lVar9) {
          iVar4 = local_e8 + -1;
        }
        memcpy(local_f0,puVar3,(long)iVar4);
        local_f0[iVar4] = 0;
      }
      __dest = (char *)CONCAT26(uStack_19a,CONCAT24(uStack_19c,local_1a8[2]));
      if (__dest != "Player_ToolActionError") {
        iVar4 = 0x16;
        if (local_198 < 0x17) {
          iVar4 = local_198 + -1;
        }
        memcpy(__dest,"Player_ToolActionError",(long)iVar4);
        __dest[iVar4] = '\0';
      }
      if (local_148 != "RentalMannequinCode") {
        iVar4 = 0x13;
        if (local_140 < 0x14) {
          iVar4 = local_140 + -1;
        }
        memcpy(local_148,"RentalMannequinCode",(long)iVar4);
        local_148[iVar4] = '\0';
      }
      local_a0 = 0;
      local_94 = 0xc;
      FUN_024480f0(param_1,local_1a8);
    }
LAB_02483390:
    uVar13 = 1;
  }
  else {
LAB_02482f54:
    uVar13 = 0;
  }
  return uVar13;
}

