
/* WARNING: Removing unreachable block (ram,0x03d49228) */
/* WARNING: Removing unreachable block (ram,0x03d49080) */
/* WARNING: Removing unreachable block (ram,0x03d496b0) */
/* WARNING: Removing unreachable block (ram,0x03d492a8) */
/* WARNING: Removing unreachable block (ram,0x03d49164) */
/* WARNING: Removing unreachable block (ram,0x03d49308) */
/* WARNING: Removing unreachable block (ram,0x03d49350) */
/* WARNING: Removing unreachable block (ram,0x03d490e8) */

void FUN_03d48c70(ulong param_1,long param_2,undefined4 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  uint local_68;
  undefined4 local_64;
  
  if (*(ulong *)(param_1 + 8) != param_1) {
    lVar14 = (long)*(int *)(param_1 + 0x14);
    plVar19 = (long *)(*(ulong *)(param_1 + 8) - lVar14);
    do {
      (**(code **)(*plVar19 + 0x18))(plVar19);
      plVar19 = (long *)(*(long *)((long)plVar19 + lVar14 + 8) - lVar14);
    } while (plVar19 != (long *)(param_1 - lVar14));
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    uVar18 = 0;
    do {
      uVar20 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)(int)uVar18 * 8);
      if (uVar20 != 0) {
        lVar14 = *(long *)(param_2 + 0x10);
        uVar4 = uVar18;
        if (*(uint *)(param_2 + 8) <= uVar18) {
          uVar4 = 0;
        }
        if ((*(char *)(param_1 + 0x40) != '\0') && (lVar10 = *(long *)(uVar20 + 0x10), lVar10 != 0))
        {
          *(undefined4 *)(uVar20 + 4) = *(undefined4 *)(lVar10 + 0x14a0);
          *(undefined4 *)(uVar20 + 8) = *(undefined4 *)(lVar10 + 0x14a4);
        }
        puVar15 = (uint *)(lVar14 + (long)(int)uVar4 * 0x48);
        if (*(char *)(param_1 + 0x41) == '\0') {
          uVar9 = *puVar15;
          if ((uVar9 & 1) == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            if (*(long *)(uVar20 + 0x10) != 0) {
              local_90 = local_90 & 0xffffffff00000000;
              uVar9 = *puVar15;
              uVar8 = *(uint *)(*(long *)(uVar20 + 0x10) + 0x14b4) & 1;
            }
            uVar8 = *(uint *)(lVar14 + (long)(int)uVar4 * 0x48 + 0x3c) | uVar8;
            uVar7 = 1;
          }
          if ((uVar9 >> 1 & 1) == 0) {
            cVar3 = *(char *)(param_1 + 0x42);
          }
          else {
            uVar9 = 0;
            if (*(long *)(uVar20 + 0x10) != 0) {
              local_90._4_4_ = (undefined4)(local_90 >> 0x20);
              local_90 = CONCAT44(local_90._4_4_,1);
              uVar9 = *(uint *)(*(long *)(uVar20 + 0x10) + 0x14b4) >> 1 & 1;
            }
            uVar7 = uVar7 | 2;
            uVar8 = uVar8 | uVar9 | (*(uint *)(lVar14 + (long)(int)uVar4 * 0x48 + 0x3c) & 2) >> 1;
            cVar3 = *(char *)(param_1 + 0x42);
          }
        }
        else {
          uVar7 = 0;
          uVar8 = 0;
          cVar3 = *(char *)(param_1 + 0x42);
        }
        if (cVar3 == '\0') {
          uVar9 = *puVar15;
          if ((uVar9 >> 2 & 1) != 0) {
            uVar13 = 0;
            if (*(long *)(uVar20 + 0x10) != 0) {
              local_90._4_4_ = (undefined4)(local_90 >> 0x20);
              local_90 = CONCAT44(local_90._4_4_,2);
              uVar13 = *(uint *)(*(long *)(uVar20 + 0x10) + 0x14b4) >> 2 & 1;
              uVar9 = *puVar15;
            }
            uVar7 = uVar7 | 4;
            uVar8 = uVar8 | uVar13 | (*(uint *)(lVar14 + (long)(int)uVar4 * 0x48 + 0x3c) & 4) >> 2;
          }
          if ((uVar9 >> 3 & 1) != 0) {
            uVar9 = 0;
            if (*(long *)(uVar20 + 0x10) != 0) {
              local_90 = CONCAT44(local_90._4_4_,3);
              uVar9 = *(uint *)(*(long *)(uVar20 + 0x10) + 0x14b4) >> 3 & 1;
            }
            uVar7 = uVar7 | 8;
            uVar8 = uVar8 | uVar9 | (*(uint *)(lVar14 + (long)(int)uVar4 * 0x48 + 0x3c) & 8) >> 3;
          }
        }
        uVar9 = uVar7 & 0xc;
        if (((uVar7 ^ 0xffffffff) & 3) != 0) {
          uVar9 = uVar7;
        }
        uVar7 = uVar9 & 3;
        if (((uVar9 ^ 0xffffffff) & 0xc) != 0) {
          uVar7 = uVar9;
        }
        if ((uVar8 & 1) == 0) {
          if (((param_4 & 1) != 0) || (*(char *)(uVar20 + 0x124) != '\0')) goto LAB_03d48f60;
          if (uVar7 == 0) {
            uVar21 = 0xffffffff;
            goto LAB_03d48f54;
          }
          iVar5 = *(int *)(uVar20 + 0x98);
          if (iVar5 < 1) {
            if (iVar5 == -3) goto LAB_03d48f50;
            if (iVar5 != -1) goto LAB_03d48f60;
LAB_03d493e0:
            uVar21 = *param_3;
            *(undefined4 *)(uVar20 + 0x11c) = 0;
            *(undefined4 *)(uVar20 + 0x98) = uVar21;
          }
          else {
            if ((*(char *)(param_1 + 0x47) != '\0') &&
               ((*(uint *)(uVar20 + 0x120) | uVar7) != *(uint *)(uVar20 + 0x120)))
            goto LAB_03d493e0;
            *(int *)(uVar20 + 0x98) = iVar5 + -1;
            if (iVar5 + -1 != 0) goto LAB_03d48f60;
            *(undefined4 *)(uVar20 + 0x98) = param_3[1];
            *(int *)(uVar20 + 0x11c) = *(int *)(uVar20 + 0x11c) + 1;
          }
          lVar17 = *(long *)(uVar20 + 0x10);
          uVar9 = uVar7 - (uVar7 >> 1 & 0xfffffffd);
          uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
          uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
          uVar9 = uVar9 + (uVar9 >> 8);
          uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3e;
          lVar10 = lVar17;
          if (lVar17 == 0) {
LAB_03d495d8:
            local_80._0_5_ = CONCAT14(uVar9 != 0,uVar18);
            local_90 = param_1;
            local_88 = uVar20;
            lVar10 = FUN_03d49900(&local_90,uVar7);
            if ((lVar10 == 0) && (*(char *)(param_1 + 0x45) != '\0')) {
              if (lVar17 == 0) {
                uVar9 = uVar7 >> 1 & 1;
                if ((uVar7 & 1) != 0) {
                  uVar9 = 2;
                }
                uVar8 = uVar7 >> 1 & 4;
                if ((uVar7 & 4) != 0) {
                  uVar8 = 8;
                }
                lVar10 = FUN_03d49900(&local_90,uVar9 | uVar8);
                goto LAB_03d49644;
              }
            }
            else {
LAB_03d49644:
              if (lVar10 != 0) goto LAB_03d4964c;
            }
            lVar10 = lVar17;
          }
          else {
            if (uVar7 - 2 < 9) {
              uVar8 = *(uint *)(&DAT_041e9324 + (long)(int)(uVar7 - 2) * 4);
            }
            else {
              uVar8 = 0;
            }
            local_90 = CONCAT44(local_90._4_4_,uVar8);
            plVar19 = (long *)(lVar17 + 0x1460);
            plVar2 = plVar19 + uVar8;
            if (7 < uVar8) {
              plVar2 = plVar19;
            }
            lVar6 = *plVar2;
            if ((lVar6 != 0) && (*(ulong *)(lVar6 + 0x18) == param_1)) {
              if ((*(uint *)(lVar6 + 0x14b0) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
                lVar10 = lVar6;
              }
              goto LAB_03d4964c;
            }
            if (uVar9 == 0) goto LAB_03d495d8;
            uVar8 = 2;
            if ((uVar7 & 8) != 0) {
              uVar8 = 3;
            }
            uVar16 = (ulong)uVar8;
            if (7 < uVar8) {
              uVar16 = 0;
            }
            lVar6 = plVar19[uVar16];
            if ((lVar6 == 0) || (*(ulong *)(lVar6 + 0x18) != param_1)) {
              lVar10 = 0;
            }
            else if ((*(uint *)(lVar6 + 0x14b0) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
              lVar10 = lVar6;
            }
            uVar16 = CONCAT44(local_90._4_4_,uVar7) ^ 0xffffffff;
            local_90 = uVar16 & 0xffffffff00000001;
            uVar16 = uVar16 & 1;
            if (7 < (uint)local_90) {
              uVar16 = 0;
            }
            lVar12 = plVar19[uVar16];
            lVar6 = lVar12;
            if (lVar12 == 0) {
LAB_03d49508:
              if (lVar10 == 0) goto LAB_03d495d0;
LAB_03d4950c:
              if (lVar6 != 0) {
                uVar16 = CONCAT44(local_90._4_4_,uVar7) ^ 0xffffffff;
                local_90 = uVar16 & 0xffffffff00000001;
                plVar19 = (long *)(lVar10 + 0x1460) + (uVar16 & 1);
                if (7 < (uint)local_90) {
                  plVar19 = (long *)(lVar10 + 0x1460);
                }
                lVar12 = *plVar19;
                if ((lVar12 == 0) || (*(ulong *)(lVar12 + 0x18) != param_1)) {
                  lVar10 = 0;
                }
                else if ((*(uint *)(lVar12 + 0x14b0) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
                  lVar10 = lVar12;
                }
                local_90 = CONCAT44(local_90._4_4_,uVar8);
                plVar19 = (long *)(lVar6 + 0x1460) + uVar8;
                if (7 < uVar8) {
                  plVar19 = (long *)(lVar6 + 0x1460);
                }
                lVar12 = *plVar19;
                if ((lVar12 == 0) || (*(ulong *)(lVar12 + 0x18) != param_1)) {
                  lVar6 = 0;
                }
                else if ((*(uint *)(lVar12 + 0x14b0) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
                  lVar6 = lVar12;
                }
                if (lVar10 == 0) goto LAB_03d495d0;
                if (lVar6 != 0) {
                  if (*(char *)(param_1 + 0x46) != '\0') {
                    lVar10 = lVar6;
                  }
                }
              }
            }
            else {
              if (*(ulong *)(lVar12 + 0x18) != param_1) {
                lVar6 = 0;
                goto LAB_03d49508;
              }
              lVar6 = lVar17;
              if ((*(uint *)(lVar12 + 0x14b0) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
                lVar6 = lVar12;
              }
              if (lVar10 != 0) goto LAB_03d4950c;
LAB_03d495d0:
              lVar10 = lVar6;
              if (lVar6 == 0) goto LAB_03d495d8;
            }
          }
LAB_03d4964c:
          if (lVar10 == lVar17) goto LAB_03d48f60;
          if (uVar18 < *(uint *)(param_1 + 0x18)) {
            lVar14 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar18 * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar16 = *(ulong *)(lVar14 + 0x10);
          if (uVar16 != 0) {
            local_64 = 1;
            local_80 = &local_70;
            local_88 = (ulong)uVar18;
            local_90 = uVar16;
            local_70 = param_2;
            (*(code *)**(undefined8 **)(uVar16 + 0x40))((undefined8 *)(uVar16 + 0x40),1,&local_90);
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          FUN_03d48b78(param_1,uVar18,lVar10,param_2);
          if (uVar7 - 1 < 2) {
            uVar21 = *(undefined4 *)(lVar10 + 0x14a4);
            *(uint *)(uVar20 + 0x120) = uVar7;
LAB_03d49730:
            *(undefined4 *)(uVar20 + 8) = uVar21;
          }
          else {
            if ((uVar7 != 4) && (uVar7 != 8)) {
              *(undefined4 *)(uVar20 + 4) = *(undefined4 *)(lVar10 + 0x14a0);
              uVar21 = *(undefined4 *)(lVar10 + 0x14a4);
              *(uint *)(uVar20 + 0x120) = uVar7;
              goto LAB_03d49730;
            }
            uVar21 = *(undefined4 *)(lVar10 + 0x14a0);
            *(uint *)(uVar20 + 0x120) = uVar7;
            *(undefined4 *)(uVar20 + 4) = uVar21;
          }
        }
        else {
          iVar5 = *(int *)(uVar20 + 0x98);
          if (iVar5 < 0) {
            if (iVar5 != -1) goto LAB_03d48f38;
          }
          else {
            iVar5 = -3;
            *(undefined4 *)(uVar20 + 0x98) = 0xfffffffd;
LAB_03d48f38:
            if (((iVar5 != -3) || ((param_4 & 1) != 0)) || (*(char *)(uVar20 + 0x124) != '\0'))
            goto LAB_03d48f60;
          }
LAB_03d48f50:
          uVar21 = 0xfffffffe;
LAB_03d48f54:
          *(undefined4 *)(uVar20 + 0x98) = uVar21;
LAB_03d48f60:
          uVar16 = *(ulong *)(uVar20 + 0x10);
          if (uVar16 != 0) {
            uVar9 = 0;
            lVar10 = uVar20 + 0x18;
            lVar17 = uVar20 + 0x9c;
            plVar19 = (long *)(uVar16 + 0x60);
            do {
              uVar20 = (ulong)uVar9;
              uVar11 = (ulong)uVar9;
              if (0x1f < uVar9) {
                uVar20 = 0;
                uVar11 = 0;
              }
              if ((*(uint *)(lVar14 + (long)(int)uVar4 * 0x48 + 0x3c) >> (ulong)(uVar9 & 0x1f) & 1)
                  == 0) {
                if ((param_4 & 1) == 0) {
                  iVar5 = *(int *)(lVar10 + uVar20 * 4);
                  if ((*puVar15 >> (ulong)(uVar9 & 0x1f) & 1) != 0) {
                    if (-1 < iVar5) {
                      *(int *)(lVar10 + uVar20 * 4) = iVar5 + -1;
                      if (iVar5 + -1 == 0) {
                        iVar5 = *(int *)(lVar17 + uVar11 * 4) + 1;
                        *(int *)(lVar17 + uVar11 * 4) = iVar5;
                        local_80 = (long *)CONCAT44(local_80._4_4_,iVar5);
                        local_64 = 2;
                        local_88 = CONCAT44(uVar9,uVar18);
                        local_78 = &local_70;
                        puVar1 = (undefined8 *)(uVar16 + 0xa60) + (ulong)uVar9 * 5;
                        if (0x1f < uVar9) {
                          puVar1 = (undefined8 *)(uVar16 + 0xa60);
                        }
                        local_90 = uVar16;
                        local_70 = param_2;
                        local_68 = uVar9;
                        (**(code **)*puVar1)(puVar1,2,&local_90);
                        *(undefined4 *)(lVar10 + uVar20 * 4) = param_3[1];
                      }
LAB_03d490c0:
                      local_88 = CONCAT44(uVar9,uVar18);
                      local_64 = 3;
                      local_78 = &local_70;
                      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
                      puVar1 = (undefined8 *)(uVar16 + 0xf60) + (ulong)uVar9 * 5;
                      if (0x1f < uVar9) {
                        puVar1 = (undefined8 *)(uVar16 + 0xf60);
                      }
                      local_90 = uVar16;
                      local_70 = param_2;
                      local_68 = uVar9;
                      (**(code **)*puVar1)(puVar1,3,&local_90);
                      goto LAB_03d49190;
                    }
                    if (iVar5 != -3) {
                      if (iVar5 != -1) goto LAB_03d49190;
                      *(undefined4 *)(lVar17 + uVar11 * 4) = 0;
                      local_78 = &local_70;
                      local_80 = (long *)((ulong)local_80._4_4_ << 0x20);
                      local_64 = 0;
                      local_88 = CONCAT44(uVar9,uVar18);
                      plVar2 = plVar19 + (ulong)uVar9 * 5;
                      if (0x1f < uVar9) {
                        plVar2 = plVar19;
                      }
                      local_90 = uVar16;
                      local_70 = param_2;
                      local_68 = uVar9;
                      (**(code **)*plVar2)(plVar2,0,&local_90);
                      local_64 = 2;
                      local_88 = CONCAT44(uVar9,uVar18);
                      local_80 = (long *)CONCAT44(local_80._4_4_,
                                                  *(undefined4 *)(lVar17 + uVar11 * 4));
                      local_78 = &local_70;
                      puVar1 = (undefined8 *)(uVar16 + 0xa60) + (ulong)uVar9 * 5;
                      if (0x1f < uVar9) {
                        puVar1 = (undefined8 *)(uVar16 + 0xa60);
                      }
                      local_90 = uVar16;
                      local_70 = param_2;
                      local_68 = uVar9;
                      (**(code **)*puVar1)(puVar1,2,&local_90);
                      *(undefined4 *)(lVar10 + uVar20 * 4) = *param_3;
                      local_90 = local_90 & 0xffffffff00000000;
                      local_70 = CONCAT44(local_70._4_4_,uVar9);
                      plVar2 = plVar19 + (ulong)uVar9 * 5;
                      if (0x1f < uVar9) {
                        plVar2 = plVar19;
                      }
                      uVar20 = (**(code **)(*plVar2 + 0x10))();
                      if (((uVar20 & 1) != 0) && (*(char *)(uVar16 + 0x14b8) != '\0')) {
                        uVar8 = uVar18;
                        if (*(uint *)(param_2 + 8) <= uVar18) {
                          uVar8 = 0;
                        }
                        *(undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar8 * 0x48 + 0x3c)
                             = 0xffffffff;
                      }
                      goto LAB_03d490c0;
                    }
                    goto LAB_03d49138;
                  }
                  if ((-1 < iVar5) || (iVar5 == -3)) {
                    local_64 = 1;
                    local_88 = CONCAT44(uVar9,uVar18);
                    local_78 = &local_70;
                    local_80 = (long *)((ulong)local_80._4_4_ << 0x20);
                    puVar1 = (undefined8 *)(uVar16 + 0x560) + (ulong)uVar9 * 5;
                    if (0x1f < uVar9) {
                      puVar1 = (undefined8 *)(uVar16 + 0x560);
                    }
                    local_90 = uVar16;
                    local_70 = param_2;
                    local_68 = uVar9;
                    (**(code **)*puVar1)(puVar1,1,&local_90);
                  }
                  uVar21 = 0xffffffff;
                  goto LAB_03d49188;
                }
              }
              else {
                iVar5 = *(int *)(lVar10 + uVar20 * 4);
                if (iVar5 < 0) {
                  if (iVar5 == -1) {
                    uVar21 = 0xfffffffe;
                    goto LAB_03d48fe4;
                  }
                }
                else {
                  uVar21 = 0xfffffffd;
LAB_03d48fe4:
                  *(undefined4 *)(lVar10 + uVar20 * 4) = uVar21;
                  *(undefined4 *)(lVar17 + uVar11 * 4) = 0;
                  iVar5 = *(int *)(lVar10 + uVar20 * 4);
                }
                if ((iVar5 == -3) && ((param_4 & 1) == 0)) {
LAB_03d49138:
                  local_64 = 1;
                  local_88 = CONCAT44(uVar9,uVar18);
                  local_78 = &local_70;
                  local_80 = (long *)((ulong)local_80._4_4_ << 0x20);
                  puVar1 = (undefined8 *)(uVar16 + 0x560) + (ulong)uVar9 * 5;
                  if (0x1f < uVar9) {
                    puVar1 = (undefined8 *)(uVar16 + 0x560);
                  }
                  local_90 = uVar16;
                  local_70 = param_2;
                  local_68 = uVar9;
                  (**(code **)*puVar1)(puVar1,1,&local_90);
                  uVar21 = 0xfffffffe;
LAB_03d49188:
                  *(undefined4 *)(lVar10 + uVar20 * 4) = uVar21;
                  *(undefined4 *)(lVar17 + uVar11 * 4) = 0;
                }
              }
LAB_03d49190:
              if ((*(uint *)(uVar16 + 0x14b4) >> (ulong)(uVar9 & 0x1f) & 1) != 0) {
                uVar8 = uVar18;
                if (*(uint *)(param_2 + 8) <= uVar18) {
                  uVar8 = 0;
                }
                lVar6 = *(long *)(param_2 + 0x10) + (long)(int)uVar8 * 0x48;
                *(uint *)(lVar6 + 0x3c) = *(uint *)(lVar6 + 0x3c) | 1 << (ulong)(uVar9 & 0x1f);
              }
              local_90 = CONCAT44(local_90._4_4_,uVar9);
              uVar9 = uVar9 + 1;
            } while (uVar9 != 0x20);
          }
        }
        if (*(char *)(param_1 + 0x41) == '\0') {
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x3c) = *(uint *)(lVar14 + 0x3c) | 1;
          local_90 = CONCAT44(local_90._4_4_,1);
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x3c) = *(uint *)(lVar14 + 0x3c) | 2;
          if (*(char *)(param_1 + 0x42) != '\0') goto LAB_03d49748;
LAB_03d497c8:
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x3c) = *(uint *)(lVar14 + 0x3c) | 4;
          local_90 = CONCAT44(local_90._4_4_,3);
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x3c) = *(uint *)(lVar14 + 0x3c) | 8;
          uVar4 = *(uint *)(param_1 + 0x48);
          if ((uVar4 & 1) == 0) goto LAB_03d49750;
LAB_03d49838:
          local_90 = local_90 & 0xffffffff00000000;
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x40) = *(uint *)(lVar14 + 0x40) | 1;
          uVar4 = *(uint *)(param_1 + 0x48);
          if ((uVar4 >> 1 & 1) == 0) goto LAB_03d49754;
LAB_03d49870:
          local_90 = CONCAT44(local_90._4_4_,1);
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x40) = *(uint *)(lVar14 + 0x40) | 2;
          uVar4 = *(uint *)(param_1 + 0x48);
          uVar21 = local_90._4_4_;
        }
        else {
          if (*(char *)(param_1 + 0x42) == '\0') goto LAB_03d497c8;
LAB_03d49748:
          uVar4 = *(uint *)(param_1 + 0x48);
          if ((uVar4 & 1) != 0) goto LAB_03d49838;
LAB_03d49750:
          if ((uVar4 >> 1 & 1) != 0) goto LAB_03d49870;
LAB_03d49754:
          uVar21 = local_90._4_4_;
        }
        if ((uVar4 >> 2 & 1) != 0) {
          local_90 = CONCAT44(uVar21,2);
          uVar4 = uVar18;
          if (*(uint *)(param_2 + 8) <= uVar18) {
            uVar4 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar14 + 0x40) = *(uint *)(lVar14 + 0x40) | 4;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar4);
  }
  return;
}

