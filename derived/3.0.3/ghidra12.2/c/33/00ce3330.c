
void FUN_00ce3330(long param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined1 *__src;
  undefined1 *__dest;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  undefined *local_180;
  undefined1 *local_178;
  int local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined2 local_114;
  undefined2 uStack_112;
  undefined4 local_110;
  ulong local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
LAB_00ce33b8:
    if (*pbVar9 < 8) goto LAB_00ce3424;
LAB_00ce33c4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00ce341c:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_00ce3424;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar11 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar8 = *pbVar9;
    if (7 < bVar8) goto LAB_00ce341c;
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00ce33b8;
      }
      goto LAB_00ce33c4;
    }
LAB_00ce3424:
    bVar8 = *pbVar9;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
  }
  local_10c = local_10c & 0xffffffffffffff00;
  uStack_124 = 0x430c0000;
  uStack_120 = 0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_128 = CONCAT31(local_128._1_3_,bVar8);
  local_11c = 0x432a0000;
  uStack_118 = 0x20000000;
  local_114 = 0x101;
  local_110 = 0;
  FUN_0255c85c(&local_128);
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar14 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar14 = 1;
      goto joined_r0x00ce3530;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00ce3530;
    }
  }
  uVar14 = 0;
joined_r0x00ce3530:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3928);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar14;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      local_65 = 0;
      local_128 = 0;
      uStack_124 = 10;
      uStack_120 = 0x43200000;
      local_11c = 0;
      local_110 = 0xe0000000;
      uStack_118 = 0x432a0000;
      local_114 = 0;
      uStack_112 = 0x3f80;
      local_f0 = local_e4;
      local_e8 = 0x80;
      local_e4[0] = 0;
      local_f8 = PTR_DAT_04bb2d88 + 0x10;
      local_58 = 0;
      local_5c = 0;
      local_10c = 0;
      local_104 = 0;
      local_12d = 0;
      local_60 = 7;
      local_170 = 0x40;
      local_178 = local_16c;
      if (local_16c == param_2) {
        lVar11 = 0x3f;
      }
      else {
        lVar11 = 0;
        do {
          if (param_2[lVar11] == '\0') {
LAB_00ce3644:
            iVar4 = (int)lVar11;
            if (0x3f < iVar4) {
              iVar4 = 0x3f;
            }
            goto LAB_00ce3650;
          }
          if (param_2[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_00ce3644;
          }
          if (param_2[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_00ce3644;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar4 = 0;
LAB_00ce3650:
        memcpy(local_16c,param_2,(long)iVar4);
        local_16c[iVar4] = 0;
        lVar11 = (long)local_170 + -1;
        param_2 = local_178;
      }
      lVar10 = 0;
      local_180 = PTR_DAT_04bb2bc0 + 0x10;
      param_2[lVar11] = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_00ce36cc;
        if (local_178[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_00ce36cc;
        }
        if (local_178[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_00ce36cc;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_00ce36cc:
      uVar14 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      uVar1 = 0xd;
      if ((int)(local_170 - uVar14) < 0xe) {
        uVar1 = local_170 + ~uVar14;
      }
      if (0 < (int)uVar1) {
        memcpy(param_2 + uVar14,"/AIC:Activity",(ulong)uVar1);
        param_2[(ulong)uVar1 + (ulong)uVar14] = 0;
      }
      __dest = local_f0;
      local_10c = CONCAT44(local_10c._4_4_,param_3);
      (**(code **)(local_180 + 0x18))(&local_180);
      __src = local_178;
      if (__dest != local_178) {
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar11 = 0;
        do {
          if (local_178[lVar11] == '\0') goto LAB_00ce378c;
          if (local_178[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_00ce378c;
          }
          if (local_178[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_00ce378c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_00ce378c:
        iVar4 = (int)lVar11;
        if (local_e8 <= (int)lVar11) {
          iVar4 = local_e8 + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        __dest[iVar4] = 0;
      }
      local_104 = CONCAT44(1,(undefined4)local_104);
      uVar5 = FUN_02030e80(plVar13,&local_128);
      if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0x110)) {
        puVar12 = *(undefined8 **)(param_1 + 0x100);
        plVar13 = (long *)(param_1 + 0xe8);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x100) = *puVar12;
        }
        *(undefined4 *)puVar12 = uVar5;
        puVar12[2] = 0;
        plVar6 = puVar12 + 1;
        *plVar6 = 0;
        lVar11 = *plVar13;
        *plVar13 = (long)plVar6;
        puVar12[2] = plVar13;
        *plVar6 = lVar11;
        if (lVar11 != 0) {
          *(long **)(lVar11 + 8) = plVar6;
        }
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      FUN_020b92d0(*(long *)PTR_DAT_04bb3968 + 0xa68,"LandReadjustNpc",uVar5);
    }
  }
  return;
}

