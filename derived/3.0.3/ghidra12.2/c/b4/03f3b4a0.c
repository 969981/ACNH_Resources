
undefined4 FUN_03f3b4a0(long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  int iVar19;
  ulong uVar20;
  undefined **local_1a8;
  undefined8 uStack_1a0;
  uint local_194;
  undefined *local_190;
  char *local_188;
  byte *local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined *local_78;
  byte *local_70;
  
  puVar5 = PTR_DAT_04bb2020;
  pbVar15 = *(byte **)(param_2 + 0x128);
  lVar10 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = pbVar15;
  nn::os::LockMutex((MutexType *)&DAT_05b058c0);
  if (lVar10 == 0) {
    uVar8 = (uint)*pbVar15;
    if (*pbVar15 != 0) {
      uVar12 = 0xffffffff;
      pbVar13 = pbVar15;
      do {
        pbVar13 = pbVar13 + 1;
        uVar12 = crc32b(uVar12,uVar8,0x4c11db7);
        uVar8 = (uint)*pbVar13;
      } while (uVar8 != 0);
      uVar8 = ~uVar12;
    }
    local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar8);
    local_188 = puVar5 + 0x10;
    local_180 = pbVar15;
    nn::os::LockMutex((MutexType *)&DAT_05b058c0);
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      do {
        while( true ) {
          if ((uint)local_190 < *(uint *)(lVar10 + 0x20)) break;
          if ((uint)local_190 <= *(uint *)(lVar10 + 0x20)) {
            (**(code **)(local_188 + 0x18))(&local_188);
            (**(code **)(local_188 + 0x18))(&local_188);
            pbVar15 = local_180;
            (**(code **)(*(long *)(lVar10 + 0x28) + 0x18))((long *)(lVar10 + 0x28));
            if (pbVar15 == *(byte **)(lVar10 + 0x30)) {
LAB_03f3b770:
              lVar10 = *(long *)(lVar10 + 0x38);
              nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
              if (lVar10 == 0) goto LAB_03f3b668;
              uVar8 = *(uint *)(lVar10 + 0xc);
              if ((((uVar8 >> 7 & 1) != 0) || ((uVar8 >> 8 & 1) != 0)) || ((uVar8 >> 0x10 & 1) != 0)
                 ) goto LAB_03f3b510;
              if (*(int *)(lVar10 + 0x10) != 0) goto LAB_03f3b4f0;
              FUN_03f3dcc8(lVar10);
              (**(code **)(local_78 + 0x18))(&local_78);
              FUN_006e9528(&local_190,&DAT_04094589,local_70);
              goto LAB_03f3b668;
            }
            pbVar15 = *(byte **)(lVar10 + 0x30);
            pbVar13 = local_180;
            lVar16 = 0x7ffff;
            while( true ) {
              bVar2 = *pbVar13;
              if (bVar2 != *pbVar15) break;
              if (bVar2 == 0) goto LAB_03f3b770;
              bVar4 = lVar16 == 0;
              pbVar15 = pbVar15 + 1;
              pbVar13 = pbVar13 + 1;
              lVar16 = lVar16 + -1;
              if (bVar4) goto LAB_03f3b770;
            }
            if (bVar2 < *pbVar15) break;
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_03f3b65c;
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != 0);
    }
LAB_03f3b65c:
    nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
  }
  else {
LAB_03f3b4f0:
    if (*(long *)(lVar10 + 0x218) != 0) {
      FUN_03f42ca4(*(long *)(lVar10 + 0x218),lVar10 + 0x1f8,1);
    }
    if (*(long *)(lVar10 + 0xc0) == 0 && *(long *)(lVar10 + 0xb8) == 0) {
      uVar8 = *(int *)(lVar10 + 0x10) - 2;
      if (uVar8 < 5) {
        *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(&DAT_041e9590 + (long)(int)uVar8 * 4);
      }
      piVar1 = (int *)(lVar10 + 0x90);
      *(long *)(lVar6 + 0x10) = lVar10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) & 0xffff7fff;
      uVar9 = 2;
      if (*(int *)(lVar10 + 0x90) == 1) {
        uVar9 = 3;
      }
      nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
      return uVar9;
    }
LAB_03f3b510:
    lVar16 = *(long *)(lVar10 + 0x80);
    if (lVar16 != 0) {
      nn::os::LockMutex((MutexType *)&DAT_05b058c0);
      if ((*(byte *)(lVar10 + 8) & 1) != 0) {
        plVar17 = (long *)(lVar16 + 0x10);
        lVar16 = FUN_03f3be90(plVar17,*plVar17,lVar10 + 0x2b0);
        *plVar17 = lVar16;
        if (lVar16 != 0) {
          *(undefined8 *)(lVar16 + 0x18) = 1;
        }
        *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) & 0xfe;
      }
      goto LAB_03f3b65c;
    }
  }
LAB_03f3b668:
  nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
  plVar17 = (long *)PTR_DAT_04bb49b8;
  if (*(char *)(param_2 + 8) != '\0') {
    return 8;
  }
  local_194 = 0;
  uVar18 = *(undefined8 *)(param_2 + 0x128);
  uVar8 = (uint)*(byte *)(param_2 + 0xdd);
  if (*(byte *)(param_2 + 0xdd) == 0) goto LAB_03f3b994;
  local_190 = puVar5 + 0x10;
  local_188 = ".";
  (**(code **)(*(long *)(param_2 + 0x120) + 0x18))(param_2 + 0x120);
  uVar20 = 0;
  do {
    if (*(char *)(*(long *)(param_2 + 0x128) + uVar20) == '\0') goto LAB_03f3b7d8;
    lVar10 = *(long *)(param_2 + 0x128) + uVar20;
    if (*(char *)(lVar10 + 1) == '\0') {
      uVar20 = uVar20 + 1;
      goto LAB_03f3b7d8;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      uVar20 = uVar20 + 2;
      goto LAB_03f3b7d8;
    }
    uVar20 = uVar20 + 3;
  } while (uVar20 != 0x80001);
  uVar20 = 0;
LAB_03f3b7d8:
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar10 = 0;
  do {
    iVar19 = (int)uVar20;
    if (local_188[lVar10] == '\0') {
LAB_03f3b824:
      uVar8 = iVar19 - (int)lVar10;
      if ((int)uVar8 < 0) {
        return 5;
      }
LAB_03f3b83c:
      uVar20 = (ulong)uVar8;
      if (0 < (int)lVar10) goto LAB_03f3b84c;
      goto LAB_03f3b8f0;
    }
    if (local_188[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03f3b824;
    }
    if (local_188[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      uVar8 = iVar19 - (int)lVar10;
      if ((int)uVar8 < 0) {
        return 5;
      }
      goto LAB_03f3b83c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  if (iVar19 < 0) {
    return 5;
  }
LAB_03f3b8f0:
  (**(code **)(local_190 + 0x18))(&local_190);
  goto LAB_03f3b900;
LAB_03f3b84c:
  while( true ) {
    lVar16 = *(long *)(param_2 + 0x128);
    (**(code **)(local_190 + 0x18))(&local_190);
    iVar19 = (int)uVar20;
    if ((char *)(lVar16 + uVar20) == local_188) break;
    pcVar11 = local_188;
    lVar14 = lVar10;
    while( true ) {
      lVar14 = lVar14 + -1;
      if (*(char *)(lVar16 + uVar20) != *pcVar11) break;
      if (*(char *)(lVar16 + uVar20) == '\0') goto LAB_03f3b8d8;
      lVar16 = lVar16 + 1;
      pcVar11 = pcVar11 + 1;
      if (lVar14 == 0) goto LAB_03f3b8d8;
    }
    uVar20 = uVar20 - 1;
    if (iVar19 < 1) {
      return 5;
    }
  }
LAB_03f3b8d8:
  plVar17 = (long *)PTR_DAT_04bb49b8;
  if (iVar19 == -1) {
    return 5;
  }
LAB_03f3b900:
  local_190 = puVar5 + 0x10;
  iVar19 = (int)uVar20;
  (**(code **)(*(long *)(param_2 + 0x120) + 0x18))(param_2 + 0x120);
  lVar16 = *(long *)(param_2 + 0x128);
  lVar10 = 0;
  do {
    if (*(char *)(lVar16 + lVar10) == '\0') goto LAB_03f3b960;
    if (*(char *)(lVar16 + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03f3b960;
    }
    if (*(char *)(lVar16 + lVar10 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_03f3b960;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_03f3b960:
  local_188 = "";
  if (iVar19 < (int)lVar10 && -2 < iVar19) {
    local_188 = (char *)(lVar16 + (ulong)(iVar19 + 1));
  }
  FUN_03f35dc0(*plVar17,&local_194,&local_190);
  uVar8 = local_194;
LAB_03f3b994:
  local_188 = (char *)CONCAT44(local_188._4_4_,uVar8);
  local_160 = param_2 + 0xb8;
  uStack_1a0 = *(undefined8 *)(param_2 + 0x100);
  local_150 = *(undefined **)(param_2 + 0xe8);
  local_190 = (undefined *)
              ((ulong)CONCAT32((int3)((ulong)local_190 >> 0x28),
                               CONCAT11(*(undefined1 *)(param_2 + 0xe0),
                                        *(undefined1 *)(param_2 + 0xde))) << 0x18);
  puStack_148 = puVar5 + 0x10;
  local_170 = 0;
  lStack_168 = 0;
  local_1a8 = &local_190;
  local_180 = (byte *)lVar6;
  lStack_178 = param_1;
  lStack_158 = uStack_1a0;
  local_140 = uVar18;
  lVar10 = FUN_03f35f40(*plVar17,&local_1a8);
  if (lVar10 == 0) {
    return 7;
  }
  nn::os::LockMutex((MutexType *)&DAT_05b058c0);
  lVar6 = FUN_03f3bc90(*(undefined8 *)(param_1 + 0x10),lVar10 + 0x290);
  *(long *)(param_1 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 1;
  *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 1;
  nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
  iVar19 = *(int *)(param_2 + 0xc0);
  if (iVar19 == 0) {
    uVar7 = 1;
    if ((*(byte *)(lVar10 + 0xc) & 0x20) == 0) {
      uVar7 = 2;
    }
  }
  else if (iVar19 == 1) {
    uVar7 = 3;
    if ((*(byte *)(lVar10 + 0xc) & 0x20) == 0) {
      uVar7 = 4;
    }
  }
  else if (iVar19 == 2) {
    uVar7 = 5;
    if ((*(byte *)(lVar10 + 0xc) & 0x20) == 0) {
      uVar7 = 6;
    }
  }
  else {
    uVar7 = 0xff;
  }
  lStack_158 = *plVar17;
  *(undefined4 *)(lVar10 + 0x10) = 7;
  local_188 = (char *)CONCAT62(CONCAT51(local_188._3_5_,uVar7),1);
  local_150 = puVar5 + 0x10;
  local_180 = *(byte **)(lStack_158 + 0x148);
  local_170 = lStack_158 + 0x300;
  lStack_158 = lStack_158 + 0x310;
  local_190 = PTR_DAT_04bb5070 + 0x10;
  local_160 = 0;
  puStack_148 = *(undefined **)(lVar10 + 0x368);
  lStack_178 = 0;
  lStack_168 = lVar10;
  FUN_03f44830(lVar10 + 200,&local_190);
  return 4;
}

