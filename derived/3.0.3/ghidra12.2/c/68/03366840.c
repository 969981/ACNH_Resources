
void FUN_03366840(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  byte *pbVar14;
  undefined *local_168;
  ushort *local_160;
  int local_158;
  ushort local_154 [15];
  undefined2 local_136;
  undefined1 local_d5;
  undefined *local_d0;
  ushort *local_c8;
  undefined4 local_c0;
  ushort local_bc [15];
  undefined2 local_9e;
  undefined *local_98;
  byte *local_90;
  uint local_88;
  byte local_84 [36];
  
  puVar7 = PTR_DAT_04bbd6c0;
  if (param_2 == (ushort *)0x0) {
    return;
  }
  uVar2 = *param_2;
  if (uVar2 == 0) {
    return;
  }
  local_84[0x1f] = 0;
  local_84[0] = 0;
  local_88 = 0x20;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  local_90 = local_84;
  if ((uVar2 == 0x30c3) || (uVar2 == 0x3063)) {
    puVar6 = param_2 + 1;
    local_136 = 0;
    local_158 = 0x10;
    local_160 = local_154;
    if (local_154 == puVar6) {
      lVar11 = 0xf;
    }
    else {
      uVar9 = 0;
      param_2 = param_2 + 2;
      do {
        if (param_2[-1] == 0) {
LAB_03366994:
          iVar4 = (int)uVar9;
joined_r0x03366998:
          if (0xf < iVar4) {
            uVar9 = 0xf;
          }
          goto LAB_033669a0;
        }
        if (*param_2 == 0) {
          uVar9 = uVar9 + 1;
          goto LAB_03366994;
        }
        if (param_2[1] == 0) {
          uVar9 = uVar9 + 2;
          iVar4 = (int)uVar9;
          goto joined_r0x03366998;
        }
        uVar9 = uVar9 + 3;
        param_2 = param_2 + 3;
      } while (uVar9 != 0x80001);
      uVar9 = 0;
LAB_033669a0:
      uVar9 = -(uVar9 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar9 & 0xffffffff) << 1;
      memcpy(local_154,puVar6,uVar9);
      *(undefined2 *)((long)local_154 + uVar9) = 0;
      lVar11 = (long)local_158 + -1;
      puVar6 = local_160;
    }
    local_84[0x1f] = 0;
    uVar5 = 0;
    puVar6[lVar11] = 0;
    lVar11 = 0x7fffffff;
    do {
      pbVar14 = local_84 + uVar5;
      if (lVar11 == 0) goto LAB_03366c84;
      uVar2 = *local_160;
      if (uVar2 == 0) goto LAB_03366c84;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar14 = bVar3;
        iVar4 = 1;
      }
      else if (uVar2 < 0x800) {
        if (0x1e < uVar5) break;
        *pbVar14 = (byte)(uVar2 >> 6) | 0xc0;
        local_84[(ulong)uVar5 + 1] = bVar3 & 0x3f | 0x80;
        iVar4 = 2;
      }
      else {
        if (0x1f < uVar5 + 2) break;
        *pbVar14 = (byte)(uVar2 >> 0xc) | 0xe0;
        local_84[(ulong)uVar5 + 1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        local_84[(ulong)uVar5 + 2] = bVar3 & 0x3f | 0x80;
        iVar4 = 3;
      }
      uVar5 = iVar4 + uVar5;
      lVar11 = lVar11 + -1;
      local_160 = local_160 + 1;
    } while (uVar5 < 0x20);
    pbVar14 = local_84 + (uVar5 - 1);
  }
  else {
    local_136 = 0;
    local_158 = 0x10;
    local_160 = local_154;
    if (local_154 == param_2) {
      puVar6 = param_2;
    }
    else {
      uVar9 = 0;
      puVar6 = param_2 + 1;
      do {
        if (puVar6[-1] == 0) {
LAB_03366aa0:
          if (0xf < (int)uVar9) {
            uVar9 = 0xf;
          }
          goto LAB_03366aac;
        }
        if (*puVar6 == 0) {
          uVar9 = uVar9 + 1;
          goto LAB_03366aa0;
        }
        if (puVar6[1] == 0) {
          uVar9 = uVar9 + 2;
          goto LAB_03366aa0;
        }
        uVar9 = uVar9 + 3;
        puVar6 = puVar6 + 3;
      } while (uVar9 != 0x80001);
      uVar9 = 0;
LAB_03366aac:
      uVar9 = -(uVar9 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar9 & 0xffffffff) << 1;
      memcpy(local_154,param_2,uVar9);
      *(undefined2 *)((long)local_154 + uVar9) = 0;
      puVar6 = local_160;
    }
    local_168 = puVar7 + 0x10;
    puVar6[local_158 + -1] = 0;
    lVar11 = 0;
    do {
      if (local_160[lVar11] == 0) {
LAB_03366b14:
        iVar4 = (int)lVar11;
joined_r0x03366b18:
        if ((1 < iVar4) && ((*param_2 & 0xffffffdf) - 0x41 < 0x1a)) {
          local_9e = 0;
          local_c0 = 0x10;
          local_c8 = local_bc;
          if (local_bc == param_2 + (iVar4 - 1)) goto LAB_03366fcc;
          uVar9 = 0;
          puVar6 = param_2 + (ulong)(iVar4 - 1) + 1;
          goto LAB_03366b74;
        }
        break;
      }
      if (local_160[lVar11 + 1] == 0) {
        lVar11 = lVar11 + 1;
        goto LAB_03366b14;
      }
      if (local_160[lVar11 + 2] == 0) {
        iVar4 = (int)lVar11 + 2;
        goto joined_r0x03366b18;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    (**(code **)(local_98 + 0x18))(&local_98);
    uVar5 = local_88;
    pbVar12 = local_90;
    (**(code **)(local_168 + 0x18))(&local_168);
    if (uVar5 == 0) goto LAB_03366c88;
    uVar8 = 0;
    lVar11 = 0x7fffffff;
    do {
      pbVar14 = pbVar12 + uVar8;
      if (lVar11 == 0) goto LAB_03366c84;
      uVar2 = *local_160;
      if (uVar2 == 0) goto LAB_03366c84;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar14 = bVar3;
        iVar4 = 1;
      }
      else if (uVar2 < 0x800) {
        if (uVar5 <= uVar8 + 1) break;
        *pbVar14 = (byte)(uVar2 >> 6) | 0xc0;
        pbVar14[1] = bVar3 & 0x3f | 0x80;
        iVar4 = 2;
      }
      else {
        if (uVar5 <= uVar8 + 2) break;
        *pbVar14 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar14[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        pbVar14[2] = bVar3 & 0x3f | 0x80;
        iVar4 = 3;
      }
      uVar8 = iVar4 + uVar8;
      lVar11 = lVar11 + -1;
      local_160 = local_160 + 1;
    } while (uVar8 < uVar5);
    pbVar14 = pbVar12 + (uVar8 - 1);
  }
LAB_03366c84:
  *pbVar14 = 0;
  goto LAB_03366c88;
  while( true ) {
    lVar1 = (&DAT_05733d38)[lVar11 * 0xe] + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03366e1c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_03366e1c;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_03366de0:
    if (*(char *)((&DAT_05733d38)[lVar11 * 0xe] + lVar10) == '\0') goto LAB_03366e1c;
  }
  lVar10 = 0;
LAB_03366e1c:
  iVar4 = (int)lVar10;
  if ((int)local_88 <= (int)lVar10) {
    iVar4 = local_88 - 1;
  }
  memcpy(pbVar14,pbVar12,(long)iVar4);
  pbVar14[iVar4] = 0;
  goto LAB_03366e44;
  while( true ) {
    if (*puVar6 == 0) {
      uVar9 = uVar9 + 1;
      goto LAB_03366fac;
    }
    if (puVar6[1] == 0) {
      uVar9 = uVar9 + 2;
      goto LAB_03366fac;
    }
    uVar9 = uVar9 + 3;
    puVar6 = puVar6 + 3;
    if (uVar9 == 0x80001) break;
LAB_03366b74:
    if (puVar6[-1] == 0) {
LAB_03366fac:
      if (0xf < (int)uVar9) {
        uVar9 = 0xf;
      }
      goto LAB_03366fb8;
    }
  }
  uVar9 = 0;
LAB_03366fb8:
  uVar9 = -(uVar9 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar9 & 0xffffffff) << 1;
  memcpy(local_bc,param_2 + (iVar4 - 1),uVar9);
  *(undefined2 *)((long)local_bc + uVar9) = 0;
LAB_03366fcc:
  local_d0 = puVar7 + 0x10;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar5 = local_88;
  pbVar14 = local_90;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  FUN_038d4e80(pbVar14,uVar5,local_c8,0xffffffff);
LAB_03366c88:
  iVar4 = 0;
  local_d5 = 0;
  local_160 = local_154;
  local_154[0]._0_1_ = 0;
  local_158 = 0x80;
  local_168 = PTR_DAT_04bb2d88 + 0x10;
  do {
    lVar11 = (long)iVar4;
    plVar13 = &DAT_05733cf8 + lVar11 * 0xe;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pbVar14 = (byte *)(&DAT_05733d00)[lVar11 * 0xe];
    (**(code **)(local_98 + 0x18))(&local_98);
    if (pbVar14 == local_90) {
LAB_03366d98:
      lVar11 = (long)iVar4;
      plVar13 = &DAT_05733d30 + lVar11 * 0xe;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pbVar12 = (byte *)(&DAT_05733d38)[lVar11 * 0xe];
      if (pbVar14 != pbVar12) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        lVar10 = 0;
        goto LAB_03366de0;
      }
      break;
    }
    pbVar12 = (byte *)(&DAT_05733d00)[lVar11 * 0xe];
    if (*pbVar12 == *local_90) {
      pbVar14 = local_90;
      if (*pbVar12 == 0) goto LAB_03366d98;
      lVar11 = 0;
      while (pbVar12[lVar11 + 1] == local_90[lVar11 + 1]) {
        if (pbVar12[lVar11 + 1] == 0) goto LAB_03366d98;
        if (pbVar12[lVar11 + 2] != local_90[lVar11 + 2]) break;
        if (pbVar12[lVar11 + 2] == 0) goto LAB_03366d98;
        if ((lVar11 == 0x7fffe) || (lVar10 = lVar11 + 3, pbVar12[lVar10] != local_90[lVar11 + 3]))
        break;
        lVar11 = lVar11 + 3;
        if (pbVar12[lVar10] == 0) goto LAB_03366d98;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x21);
LAB_03366e44:
  iVar4 = FUN_033011a4(*(undefined8 *)(DAT_05355a60 + 0x20));
  (**(code **)(local_98 + 0x18))(&local_98);
  pbVar14 = local_90;
  if (iVar4 - 0x12U < 5) {
    if ((DAT_05ae76c0 == (int *)0x0) || ((char)DAT_05ae76c0[8] == '\0')) {
      uVar5 = FUN_038ced70();
    }
    else {
      uVar9 = (ulong)(uint)(*DAT_05ae76c0 << 1) | 1;
      if (0x1f < (uint)uVar9) {
        uVar9 = 0;
      }
      uVar5 = (uint)(byte)(&DAT_04058440)[uVar9];
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar5);
    if (uVar5 - 1 < 10) {
      puVar7 = &DAT_0418e3cc + *(int *)(&DAT_0418e3cc + (long)(int)(uVar5 - 1) * 4);
    }
    else {
      puVar7 = &DAT_040b2897;
    }
  }
  else {
    uVar5 = FUN_033011a4(*(undefined8 *)(DAT_05355a60 + 0x20));
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar5);
    if (0x19 < uVar5) {
      uVar5 = 0;
    }
    (**(code **)((&DAT_05733b58)[(long)(int)uVar5 * 2] + 0x18))
              (&DAT_05733b58 + (long)(int)uVar5 * 2);
    puVar7 = (undefined *)(&DAT_05733b60)[(long)(int)uVar5 * 2];
  }
  FUN_038d1270(&local_168,"Decide_%s_%s",pbVar14,puVar7);
  lVar11 = *(long *)(param_1 + 0x10);
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
    (**(code **)(local_168 + 0x18))(&local_168);
    local_d0 = (undefined *)0x0;
    FUN_03366350(param_1,lVar11 + 8,local_160,0,&local_d0,0);
  }
  return;
}

