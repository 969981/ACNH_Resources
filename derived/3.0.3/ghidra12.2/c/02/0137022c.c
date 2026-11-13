
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0137022c(int *param_1,undefined8 *param_2,long param_3,ulong param_4,undefined1 *param_5)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  byte bVar13;
  long lVar14;
  byte *pbVar15;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  local_5c = FUN_01377528(param_2,param_3,param_1[0xc] == 0,param_1[0xc] == 1);
  puVar4 = PTR_DAT_04bb43c0;
  bVar13 = 4;
  switch(local_5c) {
  case 0:
  case 1:
    local_64 = *(undefined4 *)param_2;
    uStack_60 = *(undefined4 *)((long)param_2 + 4);
    FUN_0277e56c(&local_64,1);
    uVar10 = FUN_0277e9e0(&local_64);
    if ((uVar10 & 1) == 0) {
      return 1;
    }
    if (local_5c == 0) {
      *param_1 = *param_1 + 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_0137054c;
    }
    else {
      param_1[6] = param_1[6] + 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        if (local_5c == 1) {
          local_50 = CONCAT44(local_50._4_4_,(float)*(int *)(param_3 + 0xc) * 5.0 + 2.5);
          local_58 = (undefined *)CONCAT44(local_58._4_4_,(float)*(int *)(param_3 + 8) * 5.0 + 2.5);
          FUN_0124d150(&local_6c,param_2,&local_58);
          local_64 = local_6c;
          uStack_60 = uStack_68;
          FUN_0277e56c(&local_64,1);
        }
LAB_0137054c:
        puVar4 = PTR_DAT_04bb43c0;
        local_48 = 0;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        local_50 = CONCAT44(uStack_60,local_64);
        lVar9 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_64);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar9 != 0) {
                local_48 = lVar9;
              }
            }
          }
        }
        if ((((*(byte *)(param_1 + 8) >> 1 & 1) != 0) && (*(long *)(param_1 + 10) != 0)) &&
           (uVar10 = FUN_01af0020(&local_58), (uVar10 & 1) != 0)) {
          lVar9 = *(long *)(param_1 + 10);
          goto LAB_01370620;
        }
        if (DAT_04cd19d8 == 0) {
          pbVar15 = &DAT_0548e140;
LAB_013707b0:
          if (7 < *pbVar15) {
LAB_013707bc:
            if (DAT_0537d558 != (long *)0x0) {
              lVar9 = *DAT_0537d558;
              bVar13 = *(byte *)(lVar9 + 0x473);
              pbVar15 = PTR_DAT_04bb5038;
              if ((long)(char)bVar13 != 0xffffffffffffffff) {
                puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
                if (7 < bVar13) {
                  puVar1 = (uint *)(lVar9 + 0x48);
                }
                if ((*puVar1 & 8) != 0) {
                  pbVar15 = (byte *)(lVar9 + 0x471);
                }
              }
              bVar13 = *pbVar15;
              bVar5 = 7 < bVar13;
              if (bVar5) {
                bVar13 = 0xff;
              }
              local_6c = CONCAT31(local_6c._1_3_,bVar13);
              if (!bVar5) goto LAB_0137083c;
            }
            pbVar15 = &DAT_0548e168;
          }
        }
        else {
          pbVar15 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          if (7 < *pbVar15) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_013707b0;
            }
            goto LAB_013707bc;
          }
        }
        bVar13 = *pbVar15;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        local_6c = CONCAT31(local_6c._1_3_,bVar13);
LAB_0137083c:
        FUN_0267d900(&local_6c,&local_64);
        return 1;
      }
    }
    lVar9 = *(long *)(param_1 + 10);
    if (lVar9 == 0) {
      return 1;
    }
LAB_01370620:
    FUN_01375f5c(lVar9,&local_64);
    return 1;
  case 2:
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = *param_2;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar4 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar9 != 0) {
            local_48 = lVar9;
          }
        }
      }
    }
    iVar7 = FUN_01aed4b8(&local_58);
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    if (lVar9 == 0) {
      pbVar15 = &DAT_0548e140;
LAB_0137068c:
      if (7 < *pbVar15) {
LAB_01370698:
        if (DAT_0537d558 != (long *)0x0) {
          lVar9 = *DAT_0537d558;
          bVar13 = *(byte *)(lVar9 + 0x473);
          pbVar15 = PTR_DAT_04bb5038;
          if ((long)(char)bVar13 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
            if (7 < bVar13) {
              puVar1 = (uint *)(lVar9 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar15 = (byte *)(lVar9 + 0x471);
            }
          }
          bVar13 = *pbVar15;
          bVar5 = 7 < bVar13;
          if (bVar5) {
            bVar13 = 0xff;
          }
          local_64 = CONCAT31(local_64._1_3_,bVar13);
          if (!bVar5) goto LAB_01370718;
        }
        pbVar15 = &DAT_0548e168;
      }
    }
    else {
      pbVar15 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar15 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar15) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_0137068c;
        }
        goto LAB_01370698;
      }
    }
    bVar13 = *pbVar15;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_64 = CONCAT31(local_64._1_3_,bVar13);
LAB_01370718:
    iVar8 = FUN_0267f8b0(&local_64);
    if (iVar8 + iVar7 + (-(*(byte *)(param_1 + 8) & 1) & param_1[4]) < 1000000000) {
      param_1[4] = param_1[4] + iVar7;
      param_1[5] = param_1[5] + 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_0267f9f0(&local_64,iVar7);
      }
      return 1;
    }
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
    if (param_5 == (undefined1 *)0x0) {
      return 0;
    }
    if ((param_4 & 1) == 0) {
      *param_5 = 1;
      return 1;
    }
    return 0;
  case 3:
    goto switchD_013702a0_caseD_3;
  case 4:
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
switchD_013702a0_caseD_3:
    if (DAT_05574040 == 0) {
switchD_013702a0_default:
      return 0;
    }
    lVar9 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
    if (lVar9 == 0) {
      return 0;
    }
    uVar10 = FUN_027a991c(param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    uVar10 = FUN_027a9de4(param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_013708e0;
    lVar14 = *(long *)(lVar9 + 0x276fb0);
    if (lVar14 == 0) {
      uVar10 = 0;
    }
    else {
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(lVar9 + 0x276fb0);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar14 == 0) goto LAB_01370888;
      }
      plVar11 = *(long **)(lVar14 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_58 = *(undefined **)(lVar9 + 0x276f90);
        local_50 = *(undefined8 *)(lVar9 + 0x276f98);
        local_48 = 0x280;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_58);
      }
    }
LAB_01370888:
    lVar14 = *(long *)(lVar9 + 0x276f90);
    lVar2 = *(long *)(lVar9 + 0x276f98);
    local_58 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_58);
    local_58 = (undefined *)*param_2;
    uVar3 = (ulong)local_50 >> 0x10;
    local_50 = CONCAT62((uint6)uVar3 & 0xffffffffff00,1);
    FUN_027a9730(lVar2 + lVar14,&local_58);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x276fb0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x276fb0) + 0x18), puVar12 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar12)();
    }
LAB_013708e0:
    param_1[1] = param_1[1] + 1;
    return 1;
  case 5:
    param_1[2] = param_1[2] + 1;
    return 1;
  case 6:
    param_1[6] = param_1[6] + 1;
    return 1;
  case 7:
    goto switchD_013702a0_caseD_7;
  case 8:
    break;
  case 9:
    bVar13 = 8;
    break;
  case 10:
    bVar13 = 0x10;
    break;
  default:
    goto switchD_013702a0_default;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | bVar13;
switchD_013702a0_caseD_7:
  if ((param_5 != (undefined1 *)0x0) && ((param_4 & 1) == 0)) {
    *param_5 = 1;
  }
  return 0;
}

