
void FUN_020e6638(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  char *__src;
  uint uVar15;
  undefined *local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_a4 [31];
  undefined1 local_85;
  uint local_7c;
  undefined *local_78;
  char *pcStack_70;
  byte local_64 [4];
  
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 8;
  puVar2 = PTR_DAT_04bb39b0;
  puVar1 = PTR_DAT_04bb27d0;
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (lVar12 == 0) {
    return;
  }
  if ((*(long *)(lVar12 + 0x10) != 0) &&
     (local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000),
     (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) != 0)) {
    return;
  }
  if (1 < *(uint *)(lVar12 + 0x80)) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0 || *(long *)PTR_DAT_04bb32f0 == 0) {
    return;
  }
  if (*(uint *)(lVar12 + 0x80) != 1 || *(long *)(lVar12 + 0x28) == 0) {
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_020e674c;
    }
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "TodayGlobalEventId";
    iVar8 = FUN_0273ea30(&local_b8);
    if (iVar8 != 0xffff) {
      return;
    }
  }
LAB_020e674c:
  uVar10 = FUN_00a8117c(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  puVar3 = PTR_DAT_04bb2020;
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar12 = *(long *)puVar2;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_020e67e4:
    if (7 < *pbVar13) {
LAB_020e67f0:
      if (*(long **)puVar1 != (long *)0x0) {
        lVar12 = **(long **)puVar1;
        bVar6 = *(byte *)(lVar12 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar11 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar11 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar11 & 8) != 0) {
            pbVar13 = (byte *)(lVar12 + 0x471);
          }
        }
        local_64[0] = *pbVar13;
        if (local_64[0] < 8) goto LAB_020e6868;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020e67e4;
      }
      goto LAB_020e67f0;
    }
  }
  local_64[0] = *pbVar13;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_020e6868:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = "PgeRegularCount";
  local_b8 = puVar1;
  iVar8 = FUN_0274bce0(local_64,&local_b8);
  if (4 < iVar8) {
    pcStack_70 = "SawMuseumCafeTakeoutNpc";
    local_78 = puVar1;
    iVar8 = FUN_0274bce0(local_64,&local_78);
    if (((((((iVar8 == 0) && (**(char **)(param_1 + 0x10) == '\0')) &&
           (**(char **)(param_1 + 0x30) == '\0')) &&
          ((**(char **)(param_1 + 0x50) == '\0' && (**(char **)(param_1 + 0x70) == '\0')))) &&
         ((**(char **)(param_1 + 0x90) == '\0' &&
          ((**(char **)(param_1 + 0xb0) == '\0' && (**(char **)(param_1 + 0xd0) == '\0')))))) &&
        (**(char **)(param_1 + 0xf0) == '\0')) &&
       ((((**(char **)(param_1 + 0x110) == '\0' && (**(char **)(param_1 + 0x130) == '\0')) &&
         (**(char **)(param_1 + 0x150) == '\0')) &&
        (((**(char **)(param_1 + 0x170) == '\0' && (**(char **)(param_1 + 400) == '\0')) &&
         ((**(char **)(param_1 + 0x1b0) == '\0' &&
          ((**(char **)(param_1 + 0x1d0) == '\0' && (**(char **)(param_1 + 0x1f0) == '\0'))))))))))
    {
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar15 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar15 = uVar15 >> 8 ^ uVar4 >> 0x13 ^ uVar15 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar15;
      if ((uint)((ulong)uVar15 * 100 >> 0x20) < 10) {
        uVar15 = 0;
        lVar12 = 0;
        local_7c = 0;
        puVar1 = PTR_DAT_04bb2a08 + 0x10;
        puVar2 = PTR_DAT_04bb2028 + 0x10;
        do {
          local_85 = 0;
          __src = (&PTR_DAT_04a73fa0)[lVar12];
          local_a8 = 0x20;
          local_b0 = local_a4;
          if (local_a4 != __src) {
            lVar14 = 0;
            do {
              if (__src[lVar14] == '\0') {
LAB_020e6a74:
                iVar8 = (int)lVar14;
                if (0x1f < iVar8) {
                  iVar8 = 0x1f;
                }
                goto LAB_020e6a80;
              }
              if (__src[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_020e6a74;
              }
              if (__src[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_020e6a74;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            iVar8 = 0;
LAB_020e6a80:
            local_b8 = puVar1;
            memcpy(local_a4,__src,(long)iVar8);
            local_a4[iVar8] = '\0';
          }
          if (*local_b0 == '\0') {
LAB_020e69f4:
            uVar15 = 1 << (ulong)((uint)lVar12 & 0x1f) | uVar15;
          }
          else {
            local_b8 = puVar2;
            local_78 = puVar3 + 0x10;
            pcStack_70 = __src;
            iVar8 = FUN_0274bce0(local_64,&local_78);
            if (iVar8 != 0) goto LAB_020e69f4;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 8);
        local_7c = uVar15;
        if ((uVar15 >> 7 & 1) != 0) {
          local_b8 = PTR_DAT_04bb2020 + 0x10;
          local_b0 = "SeqHotelEditTutorialDone";
          iVar8 = FUN_0274bce0(local_64,&local_b8);
          if (iVar8 == 0) {
            uVar15 = uVar15 & 0xffffff7f;
            local_7c = uVar15;
          }
        }
        local_b8 = PTR_DAT_04bb2020 + 0x10;
        local_b0 = "LastSawMuseumCafeTakeoutNpc";
        iVar8 = FUN_0274bce0(local_64,&local_b8);
        if (iVar8 - 1U < 8) {
          uVar15 = uVar15 & (1 << (ulong)(iVar8 - 1U & 0x1f) ^ 0xffffffffU);
          local_7c = uVar15;
        }
        uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
        if (uVar15 != 0) {
          puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar4 = *puVar11 ^ *puVar11 << 0xb;
          uVar5 = puVar11[3];
          *puVar11 = puVar11[1];
          puVar11[1] = puVar11[2];
          uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
          puVar11[2] = uVar5;
          puVar11[3] = uVar4;
          uVar9 = FUN_020e6be0(&local_7c,(int)((ulong)uVar4 * (ulong)uVar15 >> 0x20) + 1);
          *(undefined4 *)(param_1 + 0x260) = uVar9;
          *(undefined1 *)(param_1 + 0x268) = 1;
        }
      }
    }
  }
  return;
}

