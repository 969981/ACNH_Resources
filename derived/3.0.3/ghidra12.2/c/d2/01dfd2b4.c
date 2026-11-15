
/* WARNING: Removing unreachable block (ram,0x01dfd598) */
/* WARNING: Removing unreachable block (ram,0x01dfd300) */
/* WARNING: Removing unreachable block (ram,0x01dfd4d0) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_01dfd2b4(long param_1,undefined8 *param_2,ushort param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined8 ****ppppuVar20;
  bool bVar21;
  long lVar22;
  long *plVar23;
  undefined8 *__dest;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long *local_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ***local_d8;
  undefined8 **local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  long local_b8 [4];
  undefined8 local_98;
  long *local_90;
  long local_88 [3];
  byte local_6c [12];
  
  if (DAT_05574040 == 0) {
    return false;
  }
  local_f8 = CONCAT44(local_f8._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return false;
  }
  lVar11 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
  if (499 < param_3) {
    return false;
  }
  if (lVar11 == 0) {
    return false;
  }
  lVar11 = lVar11 + (ulong)param_3 * 0x2d48;
  if ((*(long **)(lVar11 + 0x4cc38) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x4cc38), puVar12 == (undefined8 *)0x0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)*puVar12)();
    uVar13 = uVar13 & 0xffffffff;
  }
  lVar22 = *(long *)(lVar11 + 0x4cc20) + *(long *)(lVar11 + 0x4cc18);
  if ((*(short *)(lVar22 + 0xc) == -1 || (*(ushort *)(lVar22 + 8) & 1) != 0) &&
     ((*(ushort *)(lVar22 + 0x11d0) & 1) != 0)) {
    local_90 = local_88;
    local_f8 = 0;
    local_f0 = (long *)0x0;
    local_98 = 0x300000000;
    local_d8 = &local_d0;
    local_d0 = &local_c8;
    local_e8 = &local_d8;
    local_c8 = &local_c0;
    local_c0 = 0;
    if (local_b8 != (long *)0x0) {
      local_f8 = 0x400000000;
      local_f0 = local_b8;
    }
    local_108 = CONCAT62(local_108._2_6_,
                         *(undefined2 *)
                          (*(long *)(lVar11 + 0x4cc20) + *(long *)(lVar11 + 0x4cc18) + 10));
    ppppuStack_e0 = local_e8;
    uVar14 = FUN_03770770(&local_108,&local_f8);
    if ((uVar14 & 1) == 0) {
      uVar4 = *(ushort *)(*(long *)(lVar11 + 0x4cc20) + *(long *)(lVar11 + 0x4cc18) + 0xc);
      if (uVar4 != 0xffff) {
        if (DAT_05574040 != 0) {
          local_108 = CONCAT44(local_108._4_4_,1);
          if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
             (lVar22 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
             uVar4 < 500 && lVar22 != 0)) {
            lVar22 = lVar22 + (ulong)uVar4 * 0x2d48;
            if (*(long **)(lVar22 + 0x4cc38) == (long *)0x0) {
              uVar14 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar22 + 0x4cc38);
              uVar14 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar14 = (**(code **)*puVar12)();
              }
            }
            lVar15 = *(long *)(lVar22 + 0x4cc20) + *(long *)(lVar22 + 0x4cc18);
            sVar6 = *(short *)(lVar15 + 0xc);
            uVar4 = *(ushort *)(lVar15 + 8);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x4cc38) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar22 + 0x4cc38) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (sVar6 != -1 && (uVar4 & 1) == 0) {
              if ((int)local_98 < local_98._4_4_) {
                local_90[(int)local_98] = lVar22 + 0x4cc10;
                local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
              }
              goto LAB_01dfd6d0;
            }
          }
        }
        goto LAB_01dfd3d0;
      }
    }
    else {
      iVar9 = (int)local_f8;
      if (0 < (int)local_f8) {
        ppppuVar20 = (undefined8 ****)*local_f0;
        *ppppuVar20 = local_e8;
        local_e8 = ppppuVar20;
        if (0 < (int)local_f8) {
          if ((int)local_f8 - 1U == 0) {
            iVar9 = 1;
          }
          else {
            memmove(local_f0,local_f0 + 1,(ulong)((int)local_f8 - 1U) << 3);
            iVar9 = (int)local_f8;
          }
          iVar9 = iVar9 + -1;
          local_f8 = CONCAT44(local_f8._4_4_,iVar9);
        }
      }
      if (iVar9 != 0) {
        lVar22 = (long)iVar9 << 3;
        plVar23 = local_f0;
        do {
          if (DAT_05574040 == 0) goto LAB_01dfd3d0;
          uVar4 = *(ushort *)*plVar23;
          local_108 = CONCAT44(local_108._4_4_,1);
          if (((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) ||
              (lVar15 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
              499 < uVar4)) || (lVar15 == 0)) goto LAB_01dfd3d0;
          lVar15 = lVar15 + (ulong)uVar4 * 0x2d48;
          if (*(long **)(lVar15 + 0x4cc38) == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar15 + 0x4cc38);
            uVar14 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar14 = (**(code **)*puVar12)();
            }
          }
          lVar26 = *(long *)(lVar15 + 0x4cc20) + *(long *)(lVar15 + 0x4cc18);
          sVar6 = *(short *)(lVar26 + 0xc);
          uVar4 = *(ushort *)(lVar26 + 8);
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x4cc38) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x4cc38) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
          if (sVar6 == -1 || (uVar4 & 1) != 0) goto LAB_01dfd3d0;
          if ((int)local_98 < local_98._4_4_) {
            local_90[(int)local_98] = lVar15 + 0x4cc10;
            local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
          }
          plVar23 = plVar23 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
    }
LAB_01dfd6d0:
    if (DAT_05574040 != 0) {
      lVar22 = *(long *)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        if (lVar22 != 0) {
          lVar22 = *(long *)(lVar22 + 8);
          goto joined_r0x01dfd6ec;
        }
      }
      else if (lVar22 != 0) {
        lVar22 = *(long *)(lVar22 + 0x138);
joined_r0x01dfd6ec:
        if ((lVar22 != 0) && (*(long *)(lVar22 + 0x18) != 0)) {
          if (DAT_04cd19d8 == 0) {
            bVar5 = DAT_0548e140;
LAB_01dfd76c:
            if (7 < bVar5) {
LAB_01dfd774:
              if (DAT_0537d558 != (long *)0x0) {
                lVar22 = *DAT_0537d558;
                bVar5 = *(byte *)(lVar22 + 0x473);
                pbVar19 = PTR_DAT_04bb5038;
                if ((long)(char)bVar5 != 0xffffffffffffffff) {
                  puVar1 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
                  if (7 < bVar5) {
                    puVar1 = (uint *)(lVar22 + 0x48);
                  }
                  if ((*puVar1 & 8) != 0) {
                    pbVar19 = (byte *)(lVar22 + 0x471);
                  }
                }
                bVar5 = *pbVar19;
                if (*pbVar19 < 8) goto LAB_01dfd7e0;
              }
              bVar5 = DAT_0548e168;
              if (7 < DAT_0548e168) goto LAB_01dfd3d0;
            }
          }
          else {
            pbVar19 = PTR_DAT_04bb32e0;
            if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
              pbVar19 = (byte *)(DAT_04cd19d8 + 0x158);
            }
            bVar5 = *pbVar19;
            if (7 < *pbVar19) {
              if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
                bVar5 = *(byte *)(DAT_054f5738 + 0x11a5);
                goto LAB_01dfd76c;
              }
              goto LAB_01dfd774;
            }
          }
LAB_01dfd7e0:
          local_6c[0] = bVar5;
          uVar14 = FUN_007b39a4(&local_f8,local_6c);
          if ((uVar14 & 1) != 0) {
            local_10c = local_10c & 0xffffff00;
            iVar9 = nn::account::IsNetworkServiceAccountAvailable
                              ((bool *)&local_10c,(UserHandle *)&local_f8);
            if ((iVar9 == 0) && (local_10c._0_1_ != false)) {
              iVar9 = nn::account::GetNetworkServiceAccountId
                                ((NetworkServiceAccountId *)&local_108,(UserHandle *)&local_f8);
              uVar8 = local_108;
              if (iVar9 == 0) {
                iVar9 = (int)local_98;
                local_f8 = 0xffffffffffffffff;
                local_f0 = (long *)0xfffffffff;
                local_108 = 0xffffffffffffffff;
                local_100 = 0xffffffff;
                uStack_fc = 0xf;
                lVar22 = (long)(int)local_98 * 0x1190 + 0x4ef00;
                puVar16 = (undefined4 *)
                          (**(code **)(**(long **)(param_1 + 0x50) + 0x30))
                                    (*(long **)(param_1 + 0x50),lVar22,8);
                if (puVar16 != (undefined4 *)0x0) {
                  puVar12 = (undefined8 *)FUN_01e064f0(puVar16 + 10);
                  if (puVar12 != (undefined8 *)0x0) {
                    lVar15 = *(long *)(lVar11 + 0x4cc18);
                    lVar26 = *(long *)(lVar11 + 0x4cc20);
                    *puVar12 = 0x800005a80;
                    memcpy(puVar12 + 1,(void *)(lVar26 + lVar15),0x5a80);
                    puVar25 = puVar12 + 0xb51;
                    if ((int)local_98 != 0) {
                      lVar15 = (long)(int)local_98 << 3;
                      __dest = puVar12 + 0xb52;
                      plVar23 = local_90;
                      puVar24 = puVar25;
                      puVar12 = puVar12 + 0xd83;
                      do {
                        puVar25 = puVar12;
                        lVar26 = *plVar23;
                        if ((*(long **)(lVar26 + 0x28) == (long *)0x0) ||
                           (puVar12 = (undefined8 *)**(long **)(lVar26 + 0x28),
                           puVar12 == (undefined8 *)0x0)) {
                          uVar14 = 0;
                        }
                        else {
                          uVar14 = (**(code **)*puVar12)();
                          uVar14 = uVar14 & 0xffffffff;
                        }
                        lVar2 = *(long *)(lVar26 + 8);
                        lVar3 = *(long *)(lVar26 + 0x10);
                        *puVar24 = 0x800001188;
                        memcpy(__dest,(void *)(lVar3 + lVar2 + 8),0x1188);
                        if ((((uVar14 & 1) != 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
                           (puVar12 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 8),
                           puVar12 != (undefined8 *)0x0)) {
                          (**(code **)*puVar12)();
                        }
                        plVar23 = plVar23 + 1;
                        __dest = __dest + 0x232;
                        lVar15 = lVar15 + -8;
                        puVar24 = puVar25;
                        puVar12 = puVar25 + 0x232;
                      } while (lVar15 != 0);
                    }
                    uVar17 = FUN_01e06ff0(puVar25,&local_f8);
                    puVar18 = (undefined4 *)FUN_01e07250(uVar17,&local_108);
                    puVar7 = PTR_DAT_04bb3448;
                    lVar15 = (long)puVar18 - (long)puVar16;
                    if (puVar18 <= puVar16) {
                      lVar15 = (long)puVar16 - (long)puVar18;
                    }
                    if (lVar15 != lVar22) {
                      (**(code **)(**(long **)(param_1 + 0x50) + 0x38))
                                (*(long **)(param_1 + 0x50),puVar16);
                    }
                    else {
                      *param_2 = puVar16;
                      *(int *)(param_2 + 1) = (int)lVar22;
                      local_10c = **(uint **)puVar7;
                      puVar16[1] = 7;
                      puVar16[2] = 0xa0028;
                      puVar16[3] = 0xa0002;
                      puVar16[4] = local_10c;
                      *(char *)(puVar16 + 8) = (char)local_98;
                      *(undefined8 *)(puVar16 + 6) = uVar8;
                      uVar10 = FUN_006f6900(puVar16 + 1,(long)iVar9 * 0x1190 + 0x4eefc,0x3f89a3a2);
                      *puVar16 = uVar10;
                    }
                    bVar21 = lVar15 == lVar22;
                    goto joined_r0x01dfd3d4;
                  }
                  (**(code **)(**(long **)(param_1 + 0x50) + 0x38))
                            (*(long **)(param_1 + 0x50),puVar16);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01dfd3d0:
  bVar21 = false;
joined_r0x01dfd3d4:
  if ((uVar13 & 1) == 0) {
    return bVar21;
  }
  if (*(long *)(lVar11 + 0x4cc38) == 0) {
    return bVar21;
  }
  puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x4cc38) + 8);
  if (puVar12 == (undefined8 *)0x0) {
    return bVar21;
  }
  (**(code **)*puVar12)();
  return bVar21;
}

