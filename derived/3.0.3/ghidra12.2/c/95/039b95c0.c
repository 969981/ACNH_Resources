
ulong FUN_039b95c0(long param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined *local_470;
  undefined1 local_468 [8];
  undefined8 local_460;
  undefined8 local_3b8;
  undefined **local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined2 local_377;
  undefined8 local_370;
  undefined *local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  char *pcStack_2a0;
  undefined **local_298;
  undefined1 *puStack_290;
  undefined1 auStack_288 [520];
  undefined4 local_80;
  int iStack_7c;
  undefined8 local_78;
  byte local_70;
  
  plVar16 = (long *)PTR_DAT_04bd1630;
  param_3 = param_3 + param_2 * 4;
  lVar18 = *(long *)(param_1 + 0x10 + (long)param_3 * 0x38 + 0x10);
  if (lVar18 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    if ((param_2 != 0xb) && ((*(byte *)(param_1 + 0x1110) & 1) == 0)) {
      puStack_290 = auStack_288;
      local_298 = (undefined **)0x0;
      local_80 = 0x200;
      iStack_7c = 0;
      local_78 = 0;
      local_70 = 0;
      lVar13 = *(long *)PTR_DAT_04bd1630;
      local_2a8 = 0;
      pcStack_2a0 = "calc instance";
      local_2c8 = PTR_DAT_04bd1150 + 0x10;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2c0 = 0;
      nn::os::LockMutex((MutexType *)(lVar13 + 0xd0));
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar10 == 0) {
        iVar8 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar8 = (int)lVar10 + -1;
      }
      lVar13 = lVar13 + (long)iVar8 * 0x30;
      local_2c0 = *(undefined8 *)(lVar13 + 0x30);
      local_2b8 = *(long *)(lVar13 + 0x38);
      uStack_2b0 = *(undefined8 *)(lVar13 + 0x40);
      local_2a8 = (ulong)(local_2b8 != 0) << 0xb;
      local_470 = PTR_DAT_04bd0d18 + 0x10;
      local_70 = local_70 & 0xfc | iStack_7c != 0;
      FUN_00347d68(local_468);
      local_460 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
      local_468[0] = 2;
      local_378 = 0;
      local_370 = 0;
      uStack_380 = 0;
      local_470 = PTR_DAT_04bd0f88 + 0x10;
      local_377 = 4;
      local_388 = &local_2c8;
      local_3b8 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x40);
      local_298 = &local_470;
      uVar12 = FUN_038fe8f0(&local_2c8);
      if ((uVar12 & 1) != 0) {
        plVar16 = *(long **)(*(long *)PTR_DAT_04bc1010 + 0x318);
        uVar14 = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0x18);
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xb0);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xb1);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xb2) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xb2),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xb3) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0xb3),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xa0);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xa1);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xa2) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xa2),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xa3) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0xa3),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0x98);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0x99);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0x9a) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0x9a),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0x9b) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0x9b),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xa4);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xa5);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xa6) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xa6),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xa7) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0xa7),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0x9c);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0x9d);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0x9e) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0x9e),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0x9f) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0x9f),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xbc);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xbd);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xbe) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xbe),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xbf) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0xbf),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xc0);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xc1);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xc2) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xc2),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xc3) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 0xc3),lVar13,uVar2);
          }
        }
        lVar13 = plVar16[0xe];
        bVar3 = *(byte *)((long)plVar16 + 0x39);
        uVar4 = *(ushort *)((long)plVar16 + 0x3a);
        lVar10 = plVar16[6];
        iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
        iVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar7 = local_3b8;
        uVar11 = *(uint *)(lVar18 + 0xc4);
        if (uVar11 != 0xffffffff) {
          lVar13 = lVar13 + (ulong)uVar4 * (ulong)bVar3 *
                            (ulong)(((int)lVar10 + iVar8) - 1U & -iVar9);
          uVar2 = (undefined4)plVar16[6];
          if (((uVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar11 = uVar11 >> 8;
          }
          else {
            (**(code **)(*plVar16 + 0x40))(plVar16,local_3b8,0,(int)(char)uVar11,lVar13,uVar2);
            uVar11 = (uint)*(byte *)(lVar18 + 0xc5);
          }
          if (((uVar11 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar16 + 0x40))(plVar16,uVar7,1,(int)(char)uVar11,lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 0xc6) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,2,(long)*(char *)(lVar18 + 0xc6),lVar13,uVar2);
          }
          if (*(char *)(lVar18 + 199) != -1) {
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,uVar7,5,(long)*(char *)(lVar18 + 199),lVar13,uVar2);
          }
        }
        plVar16 = (long *)(param_1 + 0x10 + (long)param_3 * 0x38 + 0x20);
        lVar10 = *plVar16;
        if (0 < *(int *)(lVar10 + 0x408)) {
          lVar13 = 0;
          lVar17 = 8;
          do {
            FUN_0390d290(uVar14,&local_470,lVar10 + lVar17,0,1);
            lVar10 = *plVar16;
            lVar13 = lVar13 + 1;
            lVar17 = lVar17 + 0x20;
          } while (lVar13 < *(int *)(lVar10 + 0x408));
        }
        FUN_0390d290(uVar14,&local_470,lVar18 + 0x88,0,1);
        FUN_0390d290(uVar14,&local_470,lVar18 + 0x8c,0,1);
        puVar15 = local_298[0x17];
        local_78 = (**(code **)PTR_DAT_04bcf108)(puVar15);
        iStack_7c = (**(code **)PTR_DAT_04bcfce8)(puVar15);
        lVar18 = (**(code **)PTR_DAT_04bcfcd0)(puVar15);
        local_2a8 = CONCAT44((int)lVar18,(undefined4)local_2a8);
        local_70 = local_70 & 0xfe | (lVar18 != 0 || iStack_7c != 0);
        lVar18 = *(long *)PTR_DAT_04bc1010;
        (**(code **)PTR_DAT_04bcf0e8)(puVar15);
        piVar1 = (int *)(lVar18 + 0x644);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          plVar16 = (long *)PTR_DAT_04bd1630;
        } while (cVar5 != '\0');
        local_70 = local_70 & 0xfb | 2;
        if (((param_4 & 1) != 0) && (local_2b8 != 0)) {
          (**(code **)PTR_DAT_04bb2cd8)();
          uVar11 = 0;
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 500);
            nn::os::SleepThread();
            uVar11 = uVar11 + 1;
          } while (uVar11 < (local_2a8._4_4_ >> 2) + 4);
        }
      }
      nn::os::UnlockMutex((MutexType *)(*plVar16 + 0xd0));
      uVar12 = (local_2a8 >> 0x20) + 3 & 0x1fffffffc;
      FUN_038f43d0(&local_470);
    }
  }
  return uVar12;
}

