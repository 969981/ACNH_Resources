
uint FUN_036a1bbc(long param_1,ulong param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  
  if ((3 < (uint)param_2) || (*(long *)(param_1 + 8) == 0)) {
    return *param_4;
  }
  local_a8 = 0;
  uVar10 = param_2 & 0xffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_036a2470(param_1,param_2,0,&local_a8,&local_a4);
  FUN_036a2470(param_1,uVar10,1,&local_a0,&local_9c);
  FUN_036a2470(param_1,uVar10,2,&local_98,&local_94);
  FUN_036a2470(param_1,uVar10,3,&local_90,&local_8c);
  FUN_036a2470(param_1,uVar10,4,&local_88,&local_84);
  FUN_036a2470(param_1,uVar10,5,&local_80,&local_7c);
  FUN_036a2470(param_1,uVar10,6,&local_78,&local_74);
  FUN_036a2470(param_1,uVar10,7,&local_70,&local_6c);
  FUN_036a2470(param_1,uVar10,8,&local_68,&local_64);
  switch(uVar10) {
  case 0:
    puVar4 = *(uint **)(param_1 + 8);
    uVar5 = 0;
    uVar9 = *puVar4;
    if (uVar9 == 0) break;
    if (puVar4 != (uint *)(ulong)uVar9) {
      puVar8 = (uint *)((long)puVar4 - (long)(ulong)uVar9);
      if (((*puVar8 != 0) && (uVar9 = puVar8[1], uVar9 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar7 != 0) {
          uVar5 = 0;
          if ((ulong)uVar9 != 0) {
            uVar5 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar9);
          }
          if (*puVar8 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if (uVar5 < DAT_05ab11a0) {
            lVar7 = DAT_05ab11a8;
LAB_036a1f58:
            uVar3 = *(ushort *)(lVar7 + (long)(int)uVar5 * 2);
            uVar5 = (uint)uVar3;
            if (uVar3 < 0x3d) goto LAB_036a1f74;
          }
        }
      }
LAB_036a1f68:
      uVar5 = 0;
    }
    goto LAB_036a1f74;
  case 1:
    puVar4 = *(uint **)(param_1 + 8);
    uVar5 = 0;
    uVar9 = *puVar4;
    if (uVar9 != 0) {
      if (puVar4 != (uint *)(ulong)uVar9) {
        puVar8 = (uint *)((long)puVar4 - (long)(ulong)uVar9);
        if (((*puVar8 != 0) && (uVar9 = puVar8[1], uVar9 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar7 != 0) {
            uVar5 = 0;
            if ((ulong)uVar9 != 0) {
              uVar5 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar9);
            }
            if (*puVar8 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if (uVar5 < DAT_05ab11b0) {
              lVar7 = DAT_05ab11b8;
              goto LAB_036a1f58;
            }
          }
        }
        goto LAB_036a1f68;
      }
      goto LAB_036a1f74;
    }
    break;
  case 2:
    puVar4 = *(uint **)(param_1 + 8);
    uVar5 = 0;
    uVar9 = *puVar4;
    if (uVar9 != 0) {
      if (puVar4 != (uint *)(ulong)uVar9) {
        puVar8 = (uint *)((long)puVar4 - (long)(ulong)uVar9);
        if (((*puVar8 != 0) && (uVar9 = puVar8[1], uVar9 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar7 != 0) {
            uVar5 = 0;
            if ((ulong)uVar9 != 0) {
              uVar5 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar9);
            }
            if (*puVar8 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if (uVar5 < DAT_05ab11c0) {
              lVar7 = DAT_05ab11c8;
              goto LAB_036a1f58;
            }
          }
        }
        goto LAB_036a1f68;
      }
      goto LAB_036a1f74;
    }
    break;
  case 3:
    puVar4 = *(uint **)(param_1 + 8);
    uVar5 = 0;
    uVar9 = *puVar4;
    if (uVar9 != 0) {
      if (puVar4 != (uint *)(ulong)uVar9) {
        puVar8 = (uint *)((long)puVar4 - (long)(ulong)uVar9);
        if (((*puVar8 != 0) && (uVar9 = puVar8[1], uVar9 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar7 != 0) {
            uVar5 = 0;
            if ((ulong)uVar9 != 0) {
              uVar5 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar9);
            }
            if (*puVar8 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if (uVar5 < DAT_05ab11d0) {
              lVar7 = DAT_05ab11d8;
              goto LAB_036a1f58;
            }
          }
        }
        goto LAB_036a1f68;
      }
      goto LAB_036a1f74;
    }
  }
  uVar5 = 0;
LAB_036a1f74:
  if (((local_a8 != 0) && (*param_4 != local_a8)) && (*param_4 != local_a8)) {
    if ((*(uint *)(param_3 + (long)((int)local_a8 >> 5) * 4) >> (ulong)(local_a8 & 0x1f) & 1) == 0)
    {
      uVar9 = local_a4;
      goto LAB_036a1fc0;
    }
    local_a4 = 0;
  }
  uVar9 = 0;
LAB_036a1fc0:
  if (((local_a0 != 0) && (*param_4 != local_a0)) && (*param_4 != local_a0)) {
    if ((*(uint *)(param_3 + (long)((int)local_a0 >> 5) * 4) >> (ulong)(local_a0 & 0x1f) & 1) == 0)
    {
      uVar9 = local_9c + uVar9;
    }
    else {
      local_9c = 0;
    }
  }
  if (((local_98 != 0) && (*param_4 != local_98)) && (*param_4 != local_98)) {
    if ((*(uint *)(param_3 + (long)((int)local_98 >> 5) * 4) >> (ulong)(local_98 & 0x1f) & 1) == 0)
    {
      uVar9 = local_94 + uVar9;
    }
    else {
      local_94 = 0;
    }
  }
  if (((local_90 != 0) && (*param_4 != local_90)) && (*param_4 != local_90)) {
    if ((*(uint *)(param_3 + (long)((int)local_90 >> 5) * 4) >> (ulong)(local_90 & 0x1f) & 1) == 0)
    {
      uVar9 = local_8c + uVar9;
    }
    else {
      local_8c = 0;
    }
  }
  if (((local_88 != 0) && (*param_4 != local_88)) && (*param_4 != local_88)) {
    if ((*(uint *)(param_3 + (long)((int)local_88 >> 5) * 4) >> (ulong)(local_88 & 0x1f) & 1) == 0)
    {
      uVar9 = local_84 + uVar9;
    }
    else {
      local_84 = 0;
    }
  }
  if (((local_80 != 0) && (*param_4 != local_80)) && (*param_4 != local_80)) {
    if ((*(uint *)(param_3 + (long)((int)local_80 >> 5) * 4) >> (ulong)(local_80 & 0x1f) & 1) == 0)
    {
      uVar9 = local_7c + uVar9;
    }
    else {
      local_7c = 0;
    }
  }
  if (((local_78 != 0) && (*param_4 != local_78)) && (*param_4 != local_78)) {
    if ((*(uint *)(param_3 + (long)((int)local_78 >> 5) * 4) >> (ulong)(local_78 & 0x1f) & 1) == 0)
    {
      uVar9 = local_74 + uVar9;
    }
    else {
      local_74 = 0;
    }
  }
  if (((local_70 != 0) && (*param_4 != local_70)) && (*param_4 != local_70)) {
    if ((*(uint *)(param_3 + (long)((int)local_70 >> 5) * 4) >> (ulong)(local_70 & 0x1f) & 1) == 0)
    {
      uVar9 = local_6c + uVar9;
    }
    else {
      local_6c = 0;
    }
  }
  if (((local_68 != 0) && (*param_4 != local_68)) && (*param_4 != local_68)) {
    if ((*(uint *)(param_3 + (long)((int)local_68 >> 5) * 4) >> (ulong)(local_68 & 0x1f) & 1) == 0)
    {
      uVar9 = local_64 + uVar9;
    }
    else {
      local_64 = 0;
    }
  }
  if (uVar9 != 0) {
    puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar1 = *puVar4 ^ *puVar4 << 0xb;
    uVar2 = puVar4[3];
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar4[2] = uVar2;
    puVar4[3] = uVar1;
    iVar6 = (int)((ulong)uVar1 * (ulong)uVar9 >> 0x20);
    uVar9 = 0;
    if (local_a8 != 0) {
      if (*param_4 == local_a8) {
        uVar9 = 0;
      }
      else {
        uVar9 = local_a4;
        if ((local_a4 != 0) && (iVar6 < (int)local_a4)) {
          return local_a8;
        }
      }
    }
    if (((local_a0 != 0) && (*param_4 != local_a0)) &&
       ((local_9c != 0 && (uVar9 = local_9c + uVar9, iVar6 < (int)uVar9)))) {
      return local_a0;
    }
    if ((((local_98 != 0) && (*param_4 != local_98)) && (local_94 != 0)) &&
       (uVar9 = local_94 + uVar9, iVar6 < (int)uVar9)) {
      return local_98;
    }
    if (((local_90 != 0) && (*param_4 != local_90)) &&
       ((local_8c != 0 && (uVar9 = local_8c + uVar9, iVar6 < (int)uVar9)))) {
      return local_90;
    }
    if (((local_88 != 0) && (*param_4 != local_88)) &&
       ((local_84 != 0 && (uVar9 = local_84 + uVar9, iVar6 < (int)uVar9)))) {
      return local_88;
    }
    if ((((local_80 != 0) && (*param_4 != local_80)) && (local_7c != 0)) &&
       (uVar9 = local_7c + uVar9, iVar6 < (int)uVar9)) {
      return local_80;
    }
    if (((local_78 != 0) && (*param_4 != local_78)) &&
       ((local_74 != 0 && (uVar9 = local_74 + uVar9, iVar6 < (int)uVar9)))) {
      return local_78;
    }
    if (((local_70 != 0) && (*param_4 != local_70)) &&
       ((local_6c != 0 && (uVar9 = local_6c + uVar9, iVar6 < (int)uVar9)))) {
      return local_70;
    }
    if ((((local_68 != 0) && (*param_4 != local_68)) && (local_64 != 0)) &&
       (iVar6 < (int)(local_64 + uVar9))) {
      return local_68;
    }
  }
  return uVar5;
}

