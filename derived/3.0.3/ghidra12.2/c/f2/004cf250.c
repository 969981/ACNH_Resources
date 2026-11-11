
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_004cf250(int *param_1,undefined8 param_2,uint param_3,ulong *param_4,int param_5,
                    undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  uint3 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined2 *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  void *__src;
  void *__dest;
  void *local_120;
  undefined8 local_118;
  long local_110;
  long *local_108;
  long *plStack_100;
  undefined1 local_e8 [5];
  undefined1 auStack_e3 [3];
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  
  uVar17 = (ulong)param_3;
  uVar5 = FUN_00428440(param_2);
  switch(uVar5 & 0x1f) {
  case 2:
  case 4:
    uVar9 = FUN_00428440(param_2);
    if ((uVar9 & 0x1f) != 4) {
      param_2 = 0;
    }
    iVar6 = FUN_00428440(param_2);
    if (iVar6 == 0x2004) {
      if (param_5 == 1) {
        plVar19 = *(long **)(param_1 + 2);
        if (plVar19[1] - *plVar19 < (long)uVar17) {
          FUN_0049e700(plVar19,param_4,uVar17);
        }
        else {
          memcpy(param_4,(void *)*plVar19,uVar17);
          *plVar19 = *plVar19 + uVar17;
        }
      }
      else if (0 < (int)param_3) {
        do {
          _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
          plVar19 = *(long **)(param_1 + 2);
          if (*plVar19 < plVar19[1]) {
            memcpy(local_e8,(void *)*plVar19,1);
            *plVar19 = *plVar19 + 1;
          }
          else {
            FUN_0049e700(plVar19,local_e8,1);
          }
          *(byte *)param_4 = local_e8[0];
          param_4 = (ulong *)((long)param_4 + (long)param_5);
          uVar5 = (int)uVar17 - 1;
          uVar17 = (ulong)uVar5;
        } while (uVar5 != 0);
      }
    }
    else {
      if (2 < *param_1) {
        _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
        plVar19 = *(long **)(param_1 + 2);
        if (*plVar19 < plVar19[1]) {
          memcpy(local_e8,(void *)*plVar19,1);
          *plVar19 = *plVar19 + 1;
          uVar9 = (ulong)(local_e8[0] >> 1) & 0x3f;
          iVar6 = (int)uVar9;
          uVar12 = _local_e8;
        }
        else {
          FUN_0049e700(plVar19,local_e8,1);
          uVar9 = (ulong)(local_e8[0] >> 1) & 0x3f;
          iVar6 = (int)uVar9;
          uVar12 = _local_e8;
        }
        bVar1 = (char)local_e8[0] < '\0';
        _local_e8 = uVar12;
        if (bVar1) {
          uVar22 = 6;
          do {
            _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
            plVar19 = *(long **)(param_1 + 2);
            if (*plVar19 < plVar19[1]) {
              memcpy(local_e8,(void *)*plVar19,1);
              *plVar19 = *plVar19 + 1;
            }
            else {
              FUN_0049e700(plVar19,local_e8,1);
            }
            uVar9 = (_local_e8 & 0x7f) << (uVar22 & 0x3f) | uVar9;
            iVar6 = (int)uVar9;
            bVar1 = (char)local_e8[0] < '\0';
            uVar22 = (ulong)((int)uVar22 + 7);
          } while (bVar1);
        }
        iVar7 = -iVar6;
        if ((uVar12 & 1) == 0) {
          iVar7 = iVar6;
        }
        if (iVar7 != 4) {
          FUN_004d0350(param_1,param_4,uVar17,param_5);
          return param_4;
        }
      }
      FUN_004d0210(param_1,param_4,uVar17,param_5);
    }
    break;
  case 3:
    if (0 < (int)param_3) {
      puVar10 = param_4;
      do {
        uVar9 = FUN_004ccef0(param_1);
        *puVar10 = uVar9;
        puVar10 = (ulong *)((long)puVar10 + (long)param_5);
        uVar5 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar5;
      } while (uVar5 != 0);
    }
    break;
  case 5:
    if ((char)param_1[1] == '\0') {
      if (param_5 == 4) {
        plVar19 = *(long **)(param_1 + 2);
        uVar17 = (ulong)(param_3 << 2);
        if (plVar19[1] - *plVar19 < (long)uVar17) {
          FUN_0049e700(plVar19,param_4,uVar17);
          cVar3 = (char)param_1[4];
        }
        else {
          memcpy(param_4,(void *)*plVar19,uVar17);
          *plVar19 = *plVar19 + uVar17;
          cVar3 = (char)param_1[4];
        }
        if ((cVar3 != '\0') && (0 < (int)param_3)) {
          puVar10 = param_4;
          do {
            uVar17 = *puVar10;
            *(char *)puVar10 = (char)(uVar17 >> 0x18);
            *(char *)((long)puVar10 + 1) = (char)(uVar17 >> 0x10);
            *(char *)((long)puVar10 + 2) = (char)(uVar17 >> 8);
            *(char *)((long)puVar10 + 3) = (char)uVar17;
            puVar10 = (ulong *)((long)puVar10 + 4);
          } while (puVar10 < (ulong *)((long)param_4 + (long)(int)param_3 * 4));
        }
      }
      else if (0 < (int)param_3) {
        do {
          plVar19 = *(long **)(param_1 + 2);
          if (plVar19[1] - *plVar19 < 4) {
            FUN_0049e700(plVar19,local_e8,4);
            cVar3 = (char)param_1[4];
            uVar9 = _local_e8;
          }
          else {
            memcpy(local_e8,(void *)*plVar19,4);
            *plVar19 = *plVar19 + 4;
            cVar3 = (char)param_1[4];
            uVar9 = _local_e8;
          }
          _local_e8 = uVar9;
          if (cVar3 != '\0') {
            local_e8._0_2_ = CONCAT11((char)(uVar9 >> 0x10),(char)(uVar9 >> 0x18));
            local_e8._0_3_ = CONCAT12((char)(uVar9 >> 8),local_e8._0_2_);
            stack0xffffffffffffff1c = (undefined4)(uVar9 >> 0x20);
            local_e8._0_4_ = CONCAT13((char)uVar9,local_e8._0_3_);
          }
          *(undefined4 *)param_4 = local_e8._0_4_;
          param_4 = (ulong *)((long)param_4 + (long)param_5);
          uVar5 = (int)uVar17 - 1;
          uVar17 = (ulong)uVar5;
        } while (uVar5 != 0);
      }
    }
    else if (param_5 == 8) {
      plVar19 = *(long **)(param_1 + 2);
      uVar17 = (ulong)(param_3 << 3);
      if (plVar19[1] - *plVar19 < (long)uVar17) {
        FUN_0049e700(plVar19,param_4,uVar17);
        cVar3 = (char)param_1[4];
      }
      else {
        memcpy(param_4,(void *)*plVar19,uVar17);
        *plVar19 = *plVar19 + uVar17;
        cVar3 = (char)param_1[4];
      }
      if ((cVar3 != '\0') && (0 < (int)param_3)) {
        puVar10 = param_4;
        do {
          uVar17 = *puVar10;
          *(char *)puVar10 = (char)(uVar17 >> 0x38);
          *(char *)((long)puVar10 + 3) = (char)(uVar17 >> 0x20);
          *(char *)((long)puVar10 + 4) = (char)(uVar17 >> 0x18);
          *(char *)((long)puVar10 + 1) = (char)(uVar17 >> 0x30);
          *(char *)((long)puVar10 + 2) = (char)(uVar17 >> 0x28);
          *(char *)((long)puVar10 + 5) = (char)(uVar17 >> 0x10);
          *(char *)((long)puVar10 + 7) = (char)uVar17;
          *(char *)((long)puVar10 + 6) = (char)(uVar17 >> 8);
          puVar10 = puVar10 + 1;
        } while (puVar10 < param_4 + (int)param_3);
      }
    }
    else if (0 < (int)param_3) {
      do {
        plVar19 = *(long **)(param_1 + 2);
        if (plVar19[1] - *plVar19 < 8) {
          FUN_0049e700(plVar19,local_e8,8);
          cVar3 = (char)param_1[4];
          uVar9 = _local_e8;
        }
        else {
          memcpy(local_e8,(void *)*plVar19,8);
          *plVar19 = *plVar19 + 8;
          cVar3 = (char)param_1[4];
          uVar9 = _local_e8;
        }
        _local_e8 = uVar9;
        if (cVar3 != '\0') {
          local_e8 = (undefined1  [5])
                     ((uint5)CONCAT11((char)(uVar9 >> 0x18),(char)(uVar9 >> 0x20)) << 0x18);
          uVar4 = local_e8._2_3_;
          local_e8._0_2_ = CONCAT11((char)(uVar9 >> 0x30),(char)(uVar9 >> 0x38));
          local_e8._0_3_ = CONCAT12((char)(uVar9 >> 0x28),local_e8._0_2_);
          _local_e8 = CONCAT17((char)uVar9,
                               CONCAT16((char)(uVar9 >> 8),
                                        CONCAT15((char)(uVar9 >> 0x10),
                                                 (int5)CONCAT33(uVar4 >> 8,local_e8._0_3_))));
        }
        *param_4 = _local_e8;
        param_4 = (ulong *)((long)param_4 + (long)param_5);
        uVar5 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar5;
      } while (uVar5 != 0);
    }
    break;
  case 6:
    if (0 < (int)param_3) {
      puVar10 = param_4;
      do {
        _local_e8 = 0;
        FUN_004cf0b0(param_1,puVar10,local_e8);
        puVar10 = (ulong *)((long)puVar10 + (long)param_5);
        uVar5 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar5;
      } while (uVar5 != 0);
    }
    break;
  case 7:
    uVar9 = FUN_00428440(param_2);
    puVar18 = (undefined2 *)PTR_DAT_04bd4d10;
    _local_e8 = 0;
    local_e0 = 0x8000000000000000;
    local_d0 = CONCAT44(local_d0._4_4_,0x80);
    if ((uVar9 & 0x1f) != 7) {
      param_2 = 0;
    }
    lVar14 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    plVar19 = (long *)PTR_DAT_04bd4d18;
    lVar13 = *(long *)PTR_DAT_04bd4d18;
    if (lVar14 != 0) {
      lVar13 = lVar14;
    }
    if (*(ulong *)(lVar13 + 0x10) < 0x80) {
LAB_004cf418:
      local_d8 = FUN_00439510(lVar13,0x80);
    }
    else {
      local_d8 = *(long *)(lVar13 + 0x18);
      if (*(ulong *)(lVar13 + 0x20) < local_d8 + 0x80) goto LAB_004cf418;
      *(ulong *)(lVar13 + 0x18) = local_d8 + 0x80;
    }
    local_e0 = CONCAT44(0x80000080,(uint)local_e0);
    _local_e8 = local_d8;
    uVar8 = FUN_004add00(param_2);
    FUN_004ce4a0(param_1,uVar8,local_e8);
    FUN_00427c30(&local_108,param_2,0);
    uVar11 = *(undefined8 *)PTR_PTR_04bd4d28;
    lVar13 = 0;
LAB_004cf940:
    while( true ) {
      if (local_108 + 1 < plStack_100) goto code_r0x004cf950;
      uVar12 = FUN_00427c40(&local_108);
      uVar9 = local_d8;
      if ((uVar12 & 1) == 0) break;
      uVar5 = FUN_004290b0(local_108);
      if ((uVar5 >> 5 & 1) != 0) goto LAB_004cf978;
    }
    if (local_d8 == _local_e8) {
      local_e0 = local_e0 & 0xffffffff00000000;
    }
    lVar21 = (long)(int)local_d0;
    lVar14 = FUN_0043c4e0(*puVar18);
    lVar13 = *plVar19;
    if (lVar14 != 0) {
      lVar13 = lVar14;
    }
    uVar17 = lVar21 + 0x7fU & 0xffffffffffffff80;
    if (((*(ulong *)(lVar13 + 0x10) < uVar17) || (*(long *)(lVar13 + 0x18) != uVar17 + uVar9)) ||
       (*(long *)(lVar13 + 0x28) == uVar9)) {
      FUN_00439980(lVar13,uVar9);
      uVar5 = local_e0._4_4_;
    }
    else {
      *(ulong *)(lVar13 + 0x18) = uVar9;
      uVar5 = local_e0._4_4_;
    }
    if ((-1 < (long)local_e0) && (local_e0 = (ulong)uVar5 << 0x20, _local_e8 != 0)) {
      FUN_00421f90(*(undefined8 *)PTR_PTR_04bd4d20,_local_e8,1,uVar5 & 0x3fffffff);
    }
    break;
  case 8:
    uVar9 = FUN_00428440(param_2);
    if ((uVar9 & 0x1f) != 8) {
      param_2 = 0;
    }
    puVar10 = (ulong *)FUN_00426e90(param_2,1);
    if (puVar10 != (ulong *)0x0) {
      uVar9 = *puVar10;
      iVar6 = (int)(uVar9 >> 8);
      if (0 < iVar6) {
        uVar11 = FUN_00426d90(param_2);
        uVar12 = FUN_00428440();
        if ((uVar12 & 0x1f) != 5) {
          if ((int)param_3 < 1) {
            return param_4;
          }
          puVar10 = param_4;
          do {
            uVar8 = FUN_00426fc0(uVar11);
            FUN_004cf250(param_1,uVar11,iVar6,puVar10,uVar8,param_6);
            puVar10 = (ulong *)((long)puVar10 + (long)param_5);
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
          return param_4;
        }
        if (iVar6 == 4) {
          _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
          plVar19 = *(long **)(param_1 + 2);
          if (*plVar19 < plVar19[1]) {
            memcpy(local_e8,(void *)*plVar19,1);
            *plVar19 = *plVar19 + 1;
            uVar12 = (ulong)(local_e8[0] >> 1) & 0x3f;
            iVar7 = (int)uVar12;
            uVar22 = _local_e8;
          }
          else {
            FUN_0049e700(plVar19,local_e8,1);
            uVar12 = (ulong)(local_e8[0] >> 1) & 0x3f;
            iVar7 = (int)uVar12;
            uVar22 = _local_e8;
          }
          bVar1 = (char)local_e8[0] < '\0';
          _local_e8 = uVar22;
          if (bVar1) {
            uVar20 = 6;
            do {
              _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
              plVar19 = *(long **)(param_1 + 2);
              if (*plVar19 < plVar19[1]) {
                memcpy(local_e8,(void *)*plVar19,1);
                *plVar19 = *plVar19 + 1;
              }
              else {
                FUN_0049e700(plVar19,local_e8,1);
              }
              uVar12 = (_local_e8 & 0x7f) << (uVar20 & 0x3f) | uVar12;
              iVar7 = (int)uVar12;
              bVar1 = (char)local_e8[0] < '\0';
              uVar20 = (ulong)((int)uVar20 + 7);
            } while (bVar1);
          }
          iVar6 = -iVar7;
          if ((uVar22 & 1) == 0) {
            iVar6 = iVar7;
          }
        }
        if ((char)param_1[1] != '\0') {
          local_d0 = 0;
          if (0 < (int)param_3) {
            uVar12 = (ulong)(uint)(iVar6 << 3);
            uVar9 = -(uVar9 >> 0x27 & 1) & 0xfffffff800000000 | (uVar9 >> 8 & 0xffffffff) << 3;
            if (iVar6 < 1) {
              puVar10 = param_4;
              do {
                plVar19 = *(long **)(param_1 + 2);
                if (plVar19[1] - *plVar19 < (long)uVar12) {
                  FUN_0049e700(plVar19,local_e8,uVar12);
                }
                else {
                  memcpy(local_e8,(void *)*plVar19,uVar12);
                  *plVar19 = *plVar19 + uVar12;
                }
                memcpy(puVar10,local_e8,uVar9);
                puVar10 = (ulong *)((long)puVar10 + (long)param_5);
                uVar5 = (int)uVar17 - 1;
                uVar17 = (ulong)uVar5;
              } while (uVar5 != 0);
            }
            else {
              uVar5 = 0;
              puVar10 = param_4;
              do {
                plVar19 = *(long **)(param_1 + 2);
                if (plVar19[1] - *plVar19 < (long)uVar12) {
                  FUN_0049e700(plVar19,local_e8,uVar12);
                  cVar3 = (char)param_1[4];
                }
                else {
                  memcpy(local_e8,(void *)*plVar19,uVar12);
                  *plVar19 = *plVar19 + uVar12;
                  cVar3 = (char)param_1[4];
                }
                if (cVar3 != '\0') {
                  puVar15 = (undefined8 *)local_e8;
                  do {
                    uVar11 = *puVar15;
                    *(char *)puVar15 = (char)((ulong)uVar11 >> 0x38);
                    *(char *)((long)puVar15 + 3) = (char)((ulong)uVar11 >> 0x20);
                    *(char *)((long)puVar15 + 4) = (char)((ulong)uVar11 >> 0x18);
                    *(char *)((long)puVar15 + 1) = (char)((ulong)uVar11 >> 0x30);
                    *(char *)((long)puVar15 + 2) = (char)((ulong)uVar11 >> 0x28);
                    *(char *)((long)puVar15 + 5) = (char)((ulong)uVar11 >> 0x10);
                    *(char *)((long)puVar15 + 7) = (char)uVar11;
                    *(char *)((long)puVar15 + 6) = (char)((ulong)uVar11 >> 8);
                    puVar15 = puVar15 + 1;
                  } while (puVar15 < (undefined8 *)((long)local_e8 + (long)iVar6 * 8));
                }
                memcpy(puVar10,local_e8,uVar9);
                uVar5 = uVar5 + 1;
                puVar10 = (ulong *)((long)puVar10 + (long)param_5);
              } while (uVar5 != param_3);
            }
          }
          return param_4;
        }
        local_e0 = (ulong)(uint)local_e0;
        if (0 < (int)param_3) {
          uVar12 = (ulong)(uint)(iVar6 << 2);
          uVar9 = -(uVar9 >> 0x27 & 1) & 0xfffffffc00000000 | (uVar9 >> 8 & 0xffffffff) << 2;
          if (iVar6 < 1) {
            puVar10 = param_4;
            do {
              plVar19 = *(long **)(param_1 + 2);
              if (plVar19[1] - *plVar19 < (long)uVar12) {
                FUN_0049e700(plVar19,local_e8,uVar12);
              }
              else {
                memcpy(local_e8,(void *)*plVar19,uVar12);
                *plVar19 = *plVar19 + uVar12;
              }
              memcpy(puVar10,local_e8,uVar9);
              puVar10 = (ulong *)((long)puVar10 + (long)param_5);
              uVar5 = (int)uVar17 - 1;
              uVar17 = (ulong)uVar5;
            } while (uVar5 != 0);
          }
          else {
            puVar16 = (undefined8 *)((long)local_e8 + (long)iVar6 * 4);
            puVar15 = (undefined8 *)((long)local_e8 + 4);
            if (puVar16 <= puVar15) {
              puVar16 = puVar15;
            }
            uVar5 = 0;
            uVar17 = (long)puVar16 + ~(ulong)local_e8;
            puVar10 = param_4;
            do {
              plVar19 = *(long **)(param_1 + 2);
              if (plVar19[1] - *plVar19 < (long)uVar12) {
                FUN_0049e700(plVar19,local_e8,uVar12);
                cVar3 = (char)param_1[4];
                uVar22 = _local_e8;
              }
              else {
                memcpy(local_e8,(void *)*plVar19,uVar12);
                *plVar19 = *plVar19 + uVar12;
                cVar3 = (char)param_1[4];
                uVar22 = _local_e8;
              }
              _local_e8 = uVar22;
              if (cVar3 != '\0') {
                if (((uint)uVar17 >> 2 & 1) == 0) {
                  stack0xffffffffffffff1c = (undefined4)(uVar22 >> 0x20);
                  local_e8._0_2_ = CONCAT11((char)(uVar22 >> 0x10),(char)(uVar22 >> 0x18));
                  local_e8._0_3_ = CONCAT12((char)(uVar22 >> 8),local_e8._0_2_);
                  _local_e8 = CONCAT53(CONCAT41(stack0xffffffffffffff1c,(char)uVar22),local_e8._0_3_
                                      );
                  puVar16 = puVar15;
                }
                else {
                  puVar16 = (undefined8 *)local_e8;
                }
                if (3 < uVar17) {
                  do {
                    uVar8 = *(undefined4 *)puVar16;
                    uVar2 = *(undefined4 *)((long)puVar16 + 4);
                    *(char *)((long)puVar16 + 3) = (char)uVar8;
                    *(char *)((long)puVar16 + 4) = (char)((uint)uVar2 >> 0x18);
                    *(char *)puVar16 = (char)((uint)uVar8 >> 0x18);
                    *(char *)((long)puVar16 + 1) = (char)((uint)uVar8 >> 0x10);
                    *(char *)((long)puVar16 + 2) = (char)((uint)uVar8 >> 8);
                    *(char *)((long)puVar16 + 5) = (char)((uint)uVar2 >> 0x10);
                    *(char *)((long)puVar16 + 6) = (char)((uint)uVar2 >> 8);
                    *(char *)((long)puVar16 + 7) = (char)uVar2;
                    puVar16 = puVar16 + 1;
                  } while (puVar16 < (undefined8 *)((long)local_e8 + (long)iVar6 * 4));
                }
              }
              memcpy(puVar10,local_e8,uVar9);
              uVar5 = uVar5 + 1;
              puVar10 = (ulong *)((long)puVar10 + (long)param_5);
            } while (uVar5 != param_3);
          }
        }
        return param_4;
      }
    }
    lVar13 = FUN_00426d90(param_2);
    if (0 < (int)param_3) {
      uVar9 = 0;
      do {
        _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
        plVar19 = *(long **)(param_1 + 2);
        if (*plVar19 < plVar19[1]) {
          memcpy(local_e8,(void *)*plVar19,1);
          *plVar19 = *plVar19 + 1;
          uVar12 = (ulong)(local_e8[0] >> 1) & 0x3f;
          iVar6 = (int)uVar12;
          uVar22 = _local_e8;
        }
        else {
          FUN_0049e700(plVar19,local_e8,1);
          uVar12 = (ulong)(local_e8[0] >> 1) & 0x3f;
          iVar6 = (int)uVar12;
          uVar22 = _local_e8;
        }
        bVar1 = (char)local_e8[0] < '\0';
        _local_e8 = uVar22;
        if (bVar1) {
          uVar20 = 6;
          do {
            _local_e8 = CONCAT71(stack0xffffffffffffff19,0xff);
            plVar19 = *(long **)(param_1 + 2);
            if (*plVar19 < plVar19[1]) {
              memcpy(local_e8,(void *)*plVar19,1);
              *plVar19 = *plVar19 + 1;
            }
            else {
              FUN_0049e700(plVar19,local_e8,1);
            }
            uVar12 = (_local_e8 & 0x7f) << (uVar20 & 0x3f) | uVar12;
            iVar6 = (int)uVar12;
            bVar1 = (char)local_e8[0] < '\0';
            uVar20 = (ulong)((int)uVar20 + 7);
          } while (bVar1);
        }
        iVar7 = -iVar6;
        if ((uVar22 & 1) == 0) {
          iVar7 = iVar6;
        }
        if (iVar7 < 1) {
          uVar12 = 0;
          *(ulong *)((long)param_4 + uVar9 * (long)param_5) = 0;
        }
        else {
          plVar19 = *(long **)(param_1 + 0x1c);
          iVar6 = FUN_00426fc0(lVar13);
          uVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,(long)(iVar6 * iVar7),0);
          iVar6 = FUN_00426fc0(lVar13);
          FUN_0043a4d0(uVar12,0,iVar6 * iVar7);
          uVar5 = *(uint *)(*(long *)(param_1 + 0x2e) + 0x40);
          *(ulong *)((long)param_4 + uVar9 * (long)param_5) = (ulong)uVar5;
          lVar21 = *(long *)(param_1 + 0x2e);
          _local_e8 = lVar13;
          lVar14 = FUN_0049cee0(lVar21 + 0xe8,local_e8);
          if ((lVar14 == 0) ||
             ((int)(*(uint *)(lVar14 + 4) |
                   ((int)lVar14 - (int)*(undefined8 *)(lVar21 + 0xf8)) * 0x20000000) < 0)) {
            FUN_004ce360(lVar21,*(undefined4 *)(lVar21 + 0xf0),_local_e8);
            uVar11 = *(undefined8 *)(param_1 + 0x2e);
            if (lVar13 != 0) goto LAB_004cf6e0;
LAB_004cf574:
            local_d8 = 0;
            _local_e8 = uVar12;
            local_e0 = lVar13;
          }
          else {
            uVar11 = *(undefined8 *)(param_1 + 0x2e);
            if (lVar13 == 0) goto LAB_004cf574;
LAB_004cf6e0:
            _local_e8 = uVar12;
            local_e0 = lVar13;
            local_d8 = FUN_00428370(lVar13);
            if ((local_d8 & 1) != 0) {
              FUN_0043dd30(local_d8 & 0xfffffffffffffffe);
            }
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar7);
          FUN_004cbd30(uVar11,(ulong)uVar5,local_e8);
          if ((local_d8 & 1) != 0) {
            FUN_0043dd50(local_d8 & 0xfffffffffffffffe);
          }
        }
        uVar8 = FUN_00426fc0(lVar13);
        FUN_004cf250(param_1,lVar13,iVar7,uVar12,uVar8,param_6);
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar17);
    }
  }
  return param_4;
code_r0x004cf950:
  local_108 = local_108 + 1;
  uVar5 = FUN_004290b0();
  if ((uVar5 >> 5 & 1) == 0) goto LAB_004cf940;
LAB_004cf978:
  lVar14 = *local_108;
  local_110 = lVar14;
  if (*(char *)(_local_e8 + lVar13) != '\0') {
    uVar9 = FUN_00428440(lVar14);
    if ((lVar14 != 0) && ((uVar9 & 0x1f) == 8)) {
      uVar9 = FUN_00428440(lVar14);
      if ((uVar9 & 0x1f) != 8) {
        lVar14 = 0;
      }
      puVar15 = (undefined8 *)FUN_00426e90(lVar14,1);
      if ((puVar15 != (undefined8 *)0x0) && (0 < (int)((ulong)*puVar15 >> 8))) {
        iVar7 = FUN_00426fc0(local_110);
        iVar6 = iVar7 * param_3;
        local_120 = (void *)0x0;
        local_118 = -0x8000000000000000;
        if (iVar6 < 1) {
          if (iVar6 == 0) goto LAB_004cfa74;
        }
        else {
          local_120 = (void *)FUN_00426720(uVar11,iVar6,1,0,0,(long)&local_118 + 4);
          if ((int)local_118 == iVar6) goto LAB_004cfa74;
        }
        local_118 = CONCAT44(local_118._4_4_,iVar6);
LAB_004cfa74:
        FUN_004cf250(param_1,local_110,uVar17,local_120,iVar7,param_6);
        iVar6 = FUN_00429050(&local_110);
        if (0 < (int)param_3) {
          __dest = (void *)((long)param_4 + (long)iVar6);
          uVar9 = uVar17;
          __src = local_120;
          do {
            memcpy(__dest,__src,(long)iVar7);
            __src = (void *)((long)__src + (long)iVar7);
            __dest = (void *)((long)__dest + (long)param_5);
            uVar5 = (int)uVar9 - 1;
            uVar9 = (ulong)uVar5;
          } while (uVar5 != 0);
        }
        lVar14 = local_118;
        uVar5 = local_118._4_4_;
        local_118 = (ulong)local_118._4_4_ << 0x20;
        if ((-1 < lVar14) && (local_120 != (void *)0x0)) {
          FUN_00421f90(uVar11,local_120,1,uVar5 & 0x3fffffff);
        }
        lVar13 = lVar13 + 1;
        puVar18 = (undefined2 *)PTR_DAT_04bd4d10;
        plVar19 = (long *)PTR_DAT_04bd4d18;
        goto LAB_004cf940;
      }
    }
    lVar14 = local_110;
    iVar6 = FUN_00429050(&local_110);
    FUN_004cf250(param_1,lVar14,uVar17,(long)param_4 + (long)iVar6,param_5,param_6);
  }
  lVar13 = lVar13 + 1;
  goto LAB_004cf940;
}

