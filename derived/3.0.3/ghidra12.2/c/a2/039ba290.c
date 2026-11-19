
void FUN_039ba290(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  uint uVar21;
  uint uVar22;
  long local_490;
  undefined **local_470;
  undefined1 local_468 [8];
  undefined8 local_460;
  undefined8 local_3b8;
  undefined ***local_388;
  undefined8 local_380;
  undefined1 local_378;
  undefined2 local_377;
  undefined8 local_370;
  undefined **local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  long local_2b8;
  undefined8 local_2b0;
  int local_2a8;
  uint local_2a4;
  char *local_2a0;
  undefined ***local_298;
  undefined1 *local_290;
  undefined1 auStack_288 [520];
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  
  pbVar4 = (byte *)(param_1 + 0x1110);
  local_490 = 0;
  uVar22 = 0;
  lVar1 = param_1 + 0x10;
  ppuVar2 = (undefined **)(PTR_DAT_04bd0f88 + 0x10);
  do {
    uVar5 = uVar22 + 3;
    if (-1 < (int)uVar22) {
      uVar5 = uVar22;
    }
    pbVar16 = (byte *)(lVar1 + (long)(int)uVar22 * 0x38 + 0x32);
    uVar17 = (uint)*pbVar16;
    if (*pbVar16 == 0xff) {
      *pbVar16 = (byte)uVar22;
      uVar17 = uVar22;
    }
    if ((uVar22 != 0) && ((*pbVar4 & 1) == 0)) {
      lVar14 = lVar1 + (long)(int)uVar22 * 0x38;
      uVar21 = 0;
      lVar18 = *(long *)(lVar14 + 0x10);
      do {
        if ((((((lVar18 != 0) &&
               (lVar19 = *(long *)(lVar1 + (long)(int)uVar21 * 0x38 + 0x10), lVar19 != 0)) &&
              (uVar11 = FUN_039b77d8(lVar18,lVar19), (uVar11 & 1) != 0)) &&
             (((*(int *)(lVar18 + 0xcc) == *(int *)(lVar19 + 0xcc) &&
               (*(int *)(lVar18 + 0xd0) == *(int *)(lVar19 + 0xd0))) &&
              ((*(int *)(lVar18 + 0xd4) == *(int *)(lVar19 + 0xd4) &&
               ((*(int *)(lVar18 + 0xd8) == *(int *)(lVar19 + 0xd8) &&
                (*(int *)(lVar18 + 0xdc) == *(int *)(lVar19 + 0xdc))))))))) &&
            (*(int *)(lVar18 + 0xe0) == *(int *)(lVar19 + 0xe0))) &&
           (((*(int *)(lVar18 + 0xe4) == *(int *)(lVar19 + 0xe4) &&
             (*(int *)(lVar18 + 0xe8) == *(int *)(lVar19 + 0xe8))) &&
            (*(long *)(lVar14 + 0x18) == *(long *)(lVar1 + (long)(int)uVar21 * 0x38 + 0x18))))) {
          bVar6 = *(byte *)(lVar1 + (long)(int)uVar21 * 0x38 + 0x32);
          uVar17 = (uint)bVar6;
          plVar15 = (long *)(lVar1 + (long)(int)uVar22 * 0x38 + 0x28);
          lVar14 = *plVar15;
          *pbVar16 = bVar6;
          if (lVar14 == 0) {
            *plVar15 = *(long *)(lVar1 + (long)(int)uVar21 * 0x38 + 0x28);
          }
          break;
        }
        uVar21 = uVar21 + 1;
      } while (uVar22 != uVar21);
    }
    lVar14 = DAT_05ae7600;
    if (uVar22 == (uVar17 & 0xff)) {
      plVar15 = (long *)(lVar1 + (long)(int)uVar22 * 0x38 + 0x28);
      if (*plVar15 == 0) {
        if (DAT_05ae7600 == 0) {
          puVar13 = malloc(0x260);
        }
        else {
          plVar12 = param_3;
          if (param_3 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar12 = (long *)(lVar14 + 8);
            if (lVar18 != 0) {
              plVar12 = (long *)(lVar18 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
          }
          puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x260,8);
        }
        puVar13[0x4a] = 0;
        *(undefined1 *)(puVar13 + 0x4b) = 0;
        puVar13[6] = 0;
        puVar13[7] = puVar13 + 8;
        puVar13[0x49] = 0x200;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = &PTR_LAB_04b65c30;
        puVar13[1] = 0;
        puVar13[4] = 0;
        puVar13[5] = "untitled";
        lVar14 = *(long *)(param_1 + 8);
        *plVar15 = (long)puVar13;
        puVar13[5] = *(long *)(lVar14 + 8) + 2;
        bVar6 = *pbVar4;
        lVar14 = DAT_05ae9380;
      }
      else {
        bVar6 = *pbVar4;
        lVar14 = DAT_05ae9380;
      }
      DAT_05ae9380 = lVar14;
      if (((bVar6 & 1) == 0) && (*(long *)(lVar1 + (long)(int)uVar22 * 0x38 + 8) != 0)) {
        local_298 = (undefined ***)0x0;
        local_78 = 0;
        local_70 = 0;
        local_80 = 0x200;
        local_2c8 = &PTR_LAB_04b65c30;
        local_2a0 = "calc resource";
        local_2c0 = 0;
        uStack_2bc = 0;
        local_2b8 = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a4 = 0;
        local_290 = auStack_288;
        nn::os::LockMutex((MutexType *)(lVar14 + 0xd0));
        lVar18 = nn::os::GetTlsValue(DAT_05ae7898);
        if (lVar18 == 0) {
          iVar9 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar9 = (int)lVar18 + -1;
        }
        lVar18 = lVar14 + (long)iVar9 * 0x30;
        local_2c0 = *(undefined4 *)(lVar18 + 0x30);
        uStack_2bc = *(undefined4 *)(lVar18 + 0x34);
        local_2b8 = *(long *)(lVar18 + 0x38);
        local_2b0 = *(undefined8 *)(lVar18 + 0x40);
        local_2a4 = 0;
        local_2a8 = (uint)(local_2b8 != 0) << 0xb;
        local_70 = local_70 & 0xfc | local_80._4_4_ != 0;
        local_470 = &PTR_LAB_04b642f0;
        FUN_00347d68(local_468);
        local_460 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
        local_370 = 0;
        local_468[0] = 2;
        local_380 = 0;
        local_378 = 0;
        local_377 = 4;
        local_3b8 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x40);
        local_388 = &local_2c8;
        local_298 = &local_470;
        local_470 = ppuVar2;
        uVar11 = FUN_038fe8f0(&local_2c8);
        if ((uVar11 & 1) != 0) {
          FUN_039ba850(param_1,&local_470,param_2,(int)uVar5 >> 2,uVar22 - (uVar5 & 0xfffffffc));
          ppuVar20 = local_298[0x17];
          local_78 = (*DAT_04c62820)(ppuVar20);
          uVar10 = (**(code **)PTR_DAT_04bcfce8)(ppuVar20);
          local_80 = CONCAT44(uVar10,(undefined4)local_80);
          lVar19 = (**(code **)PTR_DAT_04bcfcd0)(ppuVar20);
          lVar18 = DAT_05ae78f0;
          local_2a4 = (uint)lVar19;
          local_70 = local_70 & 0xfe | (lVar19 != 0 || local_80._4_4_ != 0);
          (*DAT_04c627a8)(ppuVar20);
          piVar3 = (int *)(lVar18 + 0x644);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = *piVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          local_70 = local_70 & 0xfb | 2;
        }
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0xd0));
        local_490 = ((ulong)local_2a4 + 3 & 0x1fffffffc) + local_490;
        FUN_038f43d0(&local_470);
      }
    }
    uVar22 = uVar22 + 1;
    if (uVar22 == 0x40) {
      if (*(uint *)(param_1 + 0x1060) == 0) {
        *(int *)(param_1 + 0x1060) = (int)local_490;
      }
      else if (local_490 - 1U < (ulong)*(uint *)(param_1 + 0x1060)) {
        FUN_039baa70(param_1,param_2);
      }
      else {
        uVar22 = 0;
        do {
          if (uVar22 == *(byte *)(lVar1 + (long)(int)uVar22 * 0x38 + 0x32)) {
            lVar14 = *(long *)(lVar1 + (long)(int)uVar22 * 0x38 + 0x28);
            *(byte *)(lVar14 + 600) = *(byte *)(lVar14 + 600) & 0xfc;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != 0x40);
      }
      return;
    }
  } while( true );
}

