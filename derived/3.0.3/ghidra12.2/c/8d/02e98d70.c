
void FUN_02e98d70(long param_1,uint param_2,uint *param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  int local_9c;
  undefined1 auStack_98 [3];
  char local_95;
  int local_94;
  undefined *local_90;
  int local_88;
  uint local_84;
  uint uStack_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_76;
  undefined8 local_70;
  undefined4 local_68;
  byte local_64;
  
  lVar16 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  if (lVar16 == 0) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0x1094e0);
  iVar8 = FUN_02e992d0();
  local_78 = 0;
  local_70 = 0xc00000000;
  uVar13 = *(uint *)(param_1 + 0x1c1f8);
  local_7a = 1;
  local_9c = -1;
  local_84 = 0;
  uStack_80 = 0;
  local_76 = 0x1000001;
  local_90 = PTR_DAT_04bc9c78 + 0x10;
  if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x1c1e0))) {
    lVar11 = param_1 + 0x1c1d0;
    uVar9 = uVar13 + 1 & 3;
    if (2 < uVar13) {
      uVar13 = uVar13 + 1 & 0xfffffffc;
      do {
        uVar13 = uVar13 - 4;
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
      } while (uVar13 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    local_9c = -1;
    if ((lVar11 != 0) && (lVar11 = lVar11 - *(int *)(param_1 + 0x1c1e4), lVar11 != 0)) {
      local_9c = *(int *)(lVar11 + 0x270);
    }
  }
  local_88 = iVar8;
  if (local_9c == 0x78) {
    iVar4 = 0x78;
    if (*pcVar1 == '\0') goto LAB_02e99264;
    *pcVar1 = '\0';
  }
  lVar11 = FUN_033d0598(&DAT_0548e140);
  puVar7 = PTR_DAT_04bb43c0;
  uVar13 = *(uint *)(param_1 + 0x1c1f8);
  local_9c = -1;
  if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x1c1e0))) {
    lVar12 = param_1 + 0x1c1d0;
    uVar9 = uVar13 + 1 & 3;
    if (2 < uVar13) {
      uVar13 = uVar13 + 1 & 0xfffffffc;
      do {
        uVar13 = uVar13 - 4;
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
      } while (uVar13 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar12 = *(long *)(lVar12 + 8);
    }
    local_9c = -1;
    if ((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x1c1e4), lVar12 != 0)) {
      local_9c = *(int *)(lVar12 + 0x270);
    }
  }
  if (DAT_056a20e8 == local_9c) {
    lVar12 = 0;
  }
  else if (DAT_056a2158 == local_9c) {
    lVar12 = 1;
  }
  else if (DAT_056a21c8 == local_9c) {
    lVar12 = 2;
  }
  else if (DAT_056a2238 == local_9c) {
    lVar12 = 3;
  }
  else if (DAT_056a22a8 == local_9c) {
    lVar12 = 4;
  }
  else if (DAT_056a2318 == local_9c) {
    lVar12 = 5;
  }
  else if (DAT_056a2388 == local_9c) {
    lVar12 = 6;
  }
  else if (DAT_056a23f8 == local_9c) {
    lVar12 = 7;
  }
  else if (DAT_056a2468 == local_9c) {
    lVar12 = 8;
  }
  else if (DAT_056a24d8 == local_9c) {
    lVar12 = 9;
  }
  else if (DAT_056a2548 == local_9c) {
    lVar12 = 10;
  }
  else if (DAT_056a25b8 == local_9c) {
    lVar12 = 0xb;
  }
  else {
    lVar12 = 0xc;
    if (DAT_056a2628 != local_9c) {
      lVar12 = 0;
    }
  }
  lVar2 = lVar11 + 0x898 + lVar12 * 8;
  uVar13 = *(uint *)(lVar11 + lVar12 * 4 + 0x900);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(lVar2);
  if (*(long *)puVar7 == 0) {
LAB_02e99180:
    if ((param_2 & 1) == 0) goto LAB_02e99228;
LAB_02e9918c:
    iVar4 = local_9c;
    if (iVar8 < 1) goto LAB_02e99264;
    iVar4 = *(int *)(lVar16 + 0x2e8);
    uVar9 = 0;
    if (iVar4 != 0) {
      uVar9 = *(int *)(lVar16 + 0x2f4) / iVar4;
    }
    local_84 = uVar13;
    uStack_80 = uVar13;
    if (uVar9 != 1) {
      fVar17 = (float)(int)uVar9 * 0.5;
      uVar14 = 0;
      if (fVar17 != (float)(int)fVar17) {
        uVar14 = (uint)(0.0 <= fVar17);
      }
      iVar6 = uVar14 + (int)fVar17;
      if ((uVar9 & 1) != 0) {
        iVar6 = uVar9 - (uVar14 + (int)fVar17);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (int)uVar13 / iVar4;
      }
      iVar6 = iVar5 - iVar6;
      iVar3 = iVar6;
      if (iVar8 <= iVar6 * iVar4) {
        iVar3 = iVar5;
      }
      iVar8 = 0;
      if (-1 < iVar6) {
        iVar8 = iVar3;
      }
      local_84 = iVar8 * iVar4;
    }
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02e99180;
    uVar9 = FUN_02e992d0(param_1);
    if (0 < (int)uVar9) {
      uVar14 = 0;
      do {
        FUN_02e8ef00(&local_9c,param_1,uVar14);
        if ((((local_9c != 8) && (uVar10 = FUN_0277d7b4(auStack_98,lVar2), (uVar10 & 1) != 0)) &&
            (local_95 == *(char *)(lVar2 + 3))) && (local_94 == *(int *)(lVar2 + 4)))
        goto LAB_02e99210;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      uVar14 = uVar13;
LAB_02e99210:
      uVar13 = uVar14;
    }
    if ((param_2 & 1) != 0) goto LAB_02e9918c;
LAB_02e99228:
    if ((int)uVar13 < 0) {
      uStack_80 = 0;
      local_84 = 0;
    }
    else {
      iVar8 = *(int *)(lVar11 + 0x864 + lVar12 * 4);
      local_84 = uVar13;
      uStack_80 = uVar13;
      if (-1 < iVar8) {
        iVar4 = *(int *)(lVar16 + 0x2e8);
        iVar6 = 0;
        if (iVar4 != 0) {
          iVar6 = (int)uVar13 / iVar4;
        }
        uVar13 = iVar6 * iVar4 - iVar4 * iVar8;
        local_84 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
      }
    }
  }
  iVar4 = local_9c;
LAB_02e99264:
  local_9c = iVar4;
  local_77 = 1;
  local_64 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_7c = 0x101;
  local_68 = 4;
  FUN_03864290(lVar16,&local_90);
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_80;
  }
  *pcVar1 = '\0';
  return;
}

