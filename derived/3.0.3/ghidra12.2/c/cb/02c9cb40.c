
void FUN_02c9cb40(long param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined **ppuVar11;
  undefined *puVar10;
  long *plVar12;
  undefined **local_80;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined4 local_60;
  undefined8 local_5c;
  byte local_54;
  
  FUN_02ca7cfc(param_1,param_2);
  plVar12 = *(long **)(*(long *)(param_1 + 0x210) + 0x608);
  if (param_3 == 0) {
    FUN_02ca8f70(param_1);
  }
  switch(param_2) {
  case 0x35:
    uVar5 = 0xffffffff;
LAB_02c9cbb8:
    uVar2 = uVar5 + 1;
    if (uVar2 < 2) goto LAB_02c9cbb4;
    if (uVar5 != 0xb) goto code_r0x02c9cbcc;
    FUN_02ca7fe0(param_1,0,1,0);
    if (param_3 == 1) break;
    plVar12 = (long *)(param_1 + 0xf38);
    iVar4 = (**(code **)(*(long *)(param_1 + 0xf38) + 0x10))(plVar12);
    if ((iVar4 < 0) || (iVar4 = (**(code **)(*plVar12 + 0x10))(plVar12), iVar4 < 0)) {
      local_80 = *(undefined ***)(param_1 + 0x210);
      uVar5 = 0;
LAB_02c9d16c:
      ppuVar11 = local_80 + (ulong)uVar5 + 0xc2;
    }
    else {
      uVar5 = (**(code **)(*(long *)(param_1 + 0xf38) + 0x10))(plVar12);
      local_80 = *(undefined ***)(param_1 + 0x210);
      if ((int)uVar5 < -0x10) {
        ppuVar11 = local_80 + 0xb1;
      }
      else {
        uVar2 = uVar5 + 0x11;
        if (uVar2 == 1) {
          ppuVar11 = local_80 + 0xb2;
        }
        else if (uVar2 < 5) {
          ppuVar11 = local_80 + (ulong)(uVar5 + 0xf) + 0xb3;
        }
        else if (uVar2 < 9) {
          ppuVar11 = local_80 + (ulong)(uVar5 + 0xc) + 0xb6;
        }
        else if (uVar2 < 0xb) {
          ppuVar11 = local_80 + (ulong)(uVar5 + 8) + 0xba;
        }
        else if (uVar2 < 0xe) {
          ppuVar11 = local_80 + (ulong)(uVar5 + 6) + 0xbc;
        }
        else if (uVar2 < 0x10) {
          ppuVar11 = local_80 + (ulong)(uVar5 + 3) + 0xbf;
        }
        else {
          if (uVar2 != 0x10) {
            if (0x1c < uVar2) {
              return;
            }
            goto LAB_02c9d16c;
          }
          ppuVar11 = local_80 + 0xc1;
        }
      }
    }
    puVar10 = *ppuVar11;
    if (puVar10 == (undefined *)0x0) {
      return;
    }
    uStack_70 = 0;
    local_78 = SUB84(puVar10,0);
    local_74 = (uint)((ulong)puVar10 >> 0x20);
    goto LAB_02c9d4e4;
  case 0x36:
    iVar4 = -1;
    while( true ) {
      iVar8 = iVar4;
      if (iVar8 == -1) goto LAB_02c9cc00;
      if (iVar8 == 0xb) break;
      if (iVar8 - 1U < 2) goto LAB_02c9cc00;
      FUN_02ca7fe0(param_1,iVar8,0,1);
      iVar4 = 0xb;
      if (iVar8 < 0xb) {
LAB_02c9cc00:
        iVar4 = iVar8 + 1;
      }
    }
    if (param_3 != 1) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x678);
      if (lVar9 != 0) {
        local_78 = *(undefined4 *)(param_1 + 0x330);
        local_6a = 0x1000001;
        local_60 = 0;
        plVar12 = (long *)(param_1 + 0xea8);
        local_5c = 0x60000000c;
        local_54 = *(byte *)(param_1 + 0x1f8);
        local_74 = 0;
        uStack_70 = 0;
        local_6c = 0;
        local_80 = &PTR_LAB_04b2b020;
        if (7 < local_54) {
          local_54 = 0xff;
        }
        iVar4 = (**(code **)(*(long *)(param_1 + 0xea8) + 0x10))(plVar12);
        if (iVar4 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        if (1 < *(uint *)(lVar9 + 0x298)) {
          iVar4 = *(int *)(lVar9 + 0x2e8);
          iVar8 = iVar4 * *(int *)(lVar9 + 0x430);
          if (((int)uVar5 < iVar8) || (iVar8 + *(int *)(lVar9 + 0x2f4) <= (int)uVar5)) {
            local_74 = uVar5;
            if (*(int *)(lVar9 + 0x444) + *(int *)(lVar9 + 0x440) * iVar4 <= (int)uVar5) {
              iVar8 = 0;
              if (iVar4 != 0) {
                iVar8 = *(int *)(lVar9 + 0x2f4) / iVar4;
              }
              iVar3 = 0;
              if (iVar4 != 0) {
                iVar3 = (int)uVar5 / iVar4;
              }
              local_74 = iVar4 + iVar4 * (iVar3 - iVar8);
              local_74 = local_74 & ((int)local_74 >> 0x1f ^ 0xffffffffU);
            }
          }
          else {
            local_74 = 0xffffffff;
          }
          uStack_70 = uVar5;
        }
        FUN_03864290(lVar9,&local_80);
      }
      FUN_02ca7fe0(param_1,1,1,0);
      uVar7 = 2;
LAB_02c9d30c:
      FUN_02ca7fe0(param_1,uVar7,0,1);
      return;
    }
    FUN_02ca7fe0(param_1,1,0,2);
    uVar7 = 2;
    goto LAB_02c9ce64;
  case 0x37:
    iVar4 = -1;
    while( true ) {
      iVar8 = iVar4;
      if (iVar8 == -1) goto LAB_02c9cc54;
      if (iVar8 == 0xb) break;
      if (iVar8 - 3U < 2) goto LAB_02c9cc54;
      FUN_02ca7fe0(param_1,iVar8,0,1);
      iVar4 = 0xb;
      if (iVar8 < 0xb) {
LAB_02c9cc54:
        iVar4 = iVar8 + 1;
      }
    }
    if (param_3 != 1) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x670);
      if (lVar9 != 0) {
        local_78 = *(undefined4 *)(param_1 + 0x770);
        local_6a = 0x1000001;
        local_60 = 0;
        plVar12 = (long *)(param_1 + 0xef0);
        local_5c = 0x60000000c;
        local_54 = *(byte *)(param_1 + 0x1f8);
        local_74 = 0;
        uStack_70 = 0;
        local_6c = 0;
        local_80 = &PTR_LAB_04b2b020;
        if (7 < local_54) {
          local_54 = 0xff;
        }
        iVar4 = (**(code **)(*(long *)(param_1 + 0xef0) + 0x10))(plVar12);
        if (iVar4 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        if (1 < *(uint *)(lVar9 + 0x298)) {
          iVar4 = *(int *)(lVar9 + 0x2e8);
          iVar8 = iVar4 * *(int *)(lVar9 + 0x430);
          if (((int)uVar5 < iVar8) || (iVar8 + *(int *)(lVar9 + 0x2f4) <= (int)uVar5)) {
            local_74 = uVar5;
            if (*(int *)(lVar9 + 0x444) + *(int *)(lVar9 + 0x440) * iVar4 <= (int)uVar5) {
              iVar8 = 0;
              if (iVar4 != 0) {
                iVar8 = *(int *)(lVar9 + 0x2f4) / iVar4;
              }
              iVar3 = 0;
              if (iVar4 != 0) {
                iVar3 = (int)uVar5 / iVar4;
              }
              local_74 = iVar4 + iVar4 * (iVar3 - iVar8);
              local_74 = local_74 & ((int)local_74 >> 0x1f ^ 0xffffffffU);
            }
          }
          else {
            local_74 = 0xffffffff;
          }
          uStack_70 = uVar5;
        }
        FUN_03864290(lVar9,&local_80);
      }
      FUN_02ca7fe0(param_1,3,1,0);
      uVar7 = 4;
      goto LAB_02c9d30c;
    }
    FUN_02ca7fe0(param_1,3,0,2);
    uVar7 = 4;
LAB_02c9ce64:
    FUN_02ca7fe0(param_1,uVar7,0,2);
    if (plVar12 == (long *)0x0) {
      return;
    }
    goto LAB_02c9cfbc;
  case 0x38:
    iVar4 = -1;
LAB_02c9ccb4:
    iVar8 = iVar4;
    uVar5 = iVar8 + 1;
    if (0xc < uVar5) goto LAB_02c9ccd8;
    if ((1 << (ulong)(uVar5 & 0x1f) & 0xc3U) != 0) goto LAB_02c9ccb0;
    if (uVar5 != 0xc) goto LAB_02c9ccd8;
    FUN_02ca7fe0(param_1,5,1,0);
    FUN_02ca7fe0(param_1,6,1,0);
    if (param_3 != 1) {
      plVar12 = (long *)(param_1 + 0xf50);
      lVar9 = *(long *)(param_1 + 0x210);
      iVar4 = (**(code **)(*(long *)(param_1 + 0xf50) + 0x10))(plVar12);
      if (iVar4 < 0) {
        uVar5 = 0;
LAB_02c9d18c:
        plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x598);
      }
      else {
        uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        if ((int)uVar5 < -1) {
LAB_02c9d15c:
          plVar12 = (long *)(lVar9 + 0x588);
        }
        else {
          uVar2 = uVar5 + 2;
          if (uVar2 == 1) {
LAB_02c9d244:
            plVar12 = (long *)(lVar9 + 0x590);
          }
          else {
            if (uVar2 < 5) goto LAB_02c9d18c;
            if (uVar2 < 9) {
              uVar5 = uVar5 - 3;
LAB_02c9d368:
              plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5b0);
            }
            else if (uVar2 < 0xb) {
              uVar5 = uVar5 - 7;
LAB_02c9d3b8:
              plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5d0);
            }
            else if (uVar2 < 0xe) {
              uVar5 = uVar5 - 9;
LAB_02c9d410:
              plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5e0);
            }
            else if (uVar2 < 0x10) {
              uVar5 = uVar5 - 0xc;
LAB_02c9d440:
              plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5f8);
            }
            else {
              if (uVar2 == 0x10) goto LAB_02c9d4a4;
              if (0x1c < uVar2) {
                return;
              }
              uVar5 = uVar5 - 0xf;
LAB_02c9d4c8:
              plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x610);
            }
          }
        }
      }
LAB_02c9d4d0:
      lVar9 = *plVar12;
      if (lVar9 == 0) {
        return;
      }
      local_80 = *(undefined ***)(param_1 + 0x210);
      uStack_70 = 0;
      local_78 = (undefined4)lVar9;
      local_74 = (uint)((ulong)lVar9 >> 0x20);
      goto LAB_02c9d4e4;
    }
    break;
  case 0x39:
    iVar4 = -1;
    while( true ) {
      iVar8 = iVar4;
      if (iVar8 == -1) goto LAB_02c9cd10;
      if (iVar8 == 0xb) break;
      if (iVar8 - 7U < 2) goto LAB_02c9cd10;
      FUN_02ca7fe0(param_1,iVar8,0,0);
      iVar4 = 0xb;
      if (iVar8 < 0xb) {
LAB_02c9cd10:
        iVar4 = iVar8 + 1;
      }
    }
    FUN_02ca7fe0(param_1,7,1,0);
    FUN_02ca7fe0(param_1,8,1,0);
    if (param_3 != 1) {
      plVar12 = (long *)(param_1 + 0xf80);
      lVar9 = *(long *)(param_1 + 0x210);
      iVar4 = (**(code **)(*(long *)(param_1 + 0xf80) + 0x10))(plVar12);
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        if ((int)uVar5 < -10) goto LAB_02c9d15c;
        uVar2 = uVar5 + 0xb;
        if (uVar2 == 1) goto LAB_02c9d244;
        if (uVar2 < 5) {
          uVar5 = uVar5 + 9;
LAB_02c9d328:
          plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x598);
          goto LAB_02c9d4d0;
        }
        if (uVar2 < 9) {
          uVar5 = uVar5 + 6;
          goto LAB_02c9d368;
        }
        if (0xfffffff4 < uVar5) {
          uVar5 = uVar5 + 2;
          goto LAB_02c9d3b8;
        }
        if (0xd < uVar2) {
          if (uVar2 < 0x10) {
            uVar5 = uVar5 - 3;
            goto LAB_02c9d440;
          }
          if (uVar2 != 0x10) {
            if (0x1c < uVar2) {
              return;
            }
            uVar5 = uVar5 - 6;
            goto LAB_02c9d4c8;
          }
LAB_02c9d4a4:
          plVar12 = (long *)(lVar9 + 0x608);
          goto LAB_02c9d4d0;
        }
      }
      plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5e0);
      goto LAB_02c9d4d0;
    }
    break;
  case 0x3a:
    iVar4 = -1;
    while( true ) {
      iVar8 = iVar4;
      if (iVar8 == -1) goto LAB_02c9cd64;
      if (iVar8 == 0xb) break;
      if (iVar8 - 9U < 2) goto LAB_02c9cd64;
      FUN_02ca7fe0(param_1,iVar8,0,0);
      iVar4 = 0xb;
      if (iVar8 < 0xb) {
LAB_02c9cd64:
        iVar4 = iVar8 + 1;
      }
    }
    FUN_02ca7fe0(param_1,9,1,0);
    FUN_02ca7fe0(param_1,10,1,0);
    if (param_3 != 2) {
      if (param_3 != 1) {
        plVar12 = (long *)(param_1 + 0xfd8);
        lVar9 = *(long *)(param_1 + 0x210);
        iVar4 = (**(code **)(*(long *)(param_1 + 0xfd8) + 0x10))(plVar12);
        if (iVar4 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
          if ((int)uVar5 < -0xd) goto LAB_02c9d15c;
          uVar2 = uVar5 + 0xe;
          if (uVar2 == 1) goto LAB_02c9d244;
          if (uVar2 < 5) {
            uVar5 = uVar5 + 0xc;
            goto LAB_02c9d328;
          }
          if (uVar2 < 9) {
            uVar5 = uVar5 + 9;
            goto LAB_02c9d368;
          }
          if (uVar2 < 0xb) {
            uVar5 = uVar5 + 5;
            goto LAB_02c9d3b8;
          }
          if (0xfffffff1 < uVar5) {
            uVar5 = uVar5 + 3;
            goto LAB_02c9d410;
          }
          if (0xf < uVar2) {
            if (uVar2 != 0x10) {
              if (0x1c < uVar2) {
                return;
              }
              uVar5 = uVar5 - 3;
              goto LAB_02c9d4c8;
            }
            goto LAB_02c9d4a4;
          }
        }
        plVar12 = (long *)(lVar9 + (ulong)uVar5 * 8 + 0x5f8);
        goto LAB_02c9d4d0;
      }
      break;
    }
    local_80 = *(undefined ***)(param_1 + 0x210);
    plVar12 = (long *)local_80[0xc0];
    if (plVar12 == (long *)0x0) {
      return;
    }
    local_78 = SUB84(plVar12,0);
    local_74 = (uint)((ulong)plVar12 >> 0x20);
    lVar9 = *plVar12;
    goto LAB_02c9cfd0;
  default:
    goto switchD_02c9cba4_default;
  }
  if (plVar12 != (long *)0x0) {
LAB_02c9cfbc:
    local_80 = *(undefined ***)(param_1 + 0x210);
    local_78 = SUB84(plVar12,0);
    local_74 = (uint)((ulong)plVar12 >> 0x20);
    lVar9 = *plVar12;
LAB_02c9cfd0:
    uStack_70 = 0;
    uVar6 = (**(code **)(lVar9 + 0xf0))(plVar12);
    if ((uVar6 & 1) == 0) {
      if (DAT_05739190 != 0) {
        *(byte *)(DAT_05739190 + 0x429) = *(byte *)(DAT_05739190 + 0x429) | 2;
      }
LAB_02c9d4e4:
      FUN_032017e0(&local_80);
    }
  }
switchD_02c9cba4_default:
  return;
LAB_02c9ccd8:
  FUN_02ca7fe0(param_1,iVar8,0,0);
  iVar4 = 0xb;
  if (iVar8 < 0xb) {
LAB_02c9ccb0:
    iVar4 = iVar8 + 1;
  }
  goto LAB_02c9ccb4;
code_r0x02c9cbcc:
  FUN_02ca7fe0(param_1,uVar5,0,0);
  bVar1 = (int)uVar5 < 0xb;
  uVar5 = 0xb;
  if (bVar1) {
LAB_02c9cbb4:
    uVar5 = uVar2;
  }
  goto LAB_02c9cbb8;
}

