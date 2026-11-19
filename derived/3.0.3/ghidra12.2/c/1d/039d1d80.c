
void FUN_039d1d80(long param_1,long param_2,undefined4 param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long *plVar20;
  undefined4 uVar21;
  undefined **local_80;
  undefined *puStack_78;
  int local_6c;
  
  lVar2 = param_1 + 0x1a08;
  lVar14 = *(long *)(param_1 + 0x1e90);
  uVar19 = 0;
  iVar15 = (int)(*(float *)(param_1 + 0xa90) - *(float *)(param_1 + 0xa88));
  lVar17 = *(long *)PTR_DAT_04bbd510;
  iVar12 = (int)(*(float *)(param_1 + 0xa94) - *(float *)(param_1 + 0xa8c));
  do {
    if ((uVar19 == 5) && (lVar14 != 0)) {
      uVar13 = *(uint *)(param_1 + 0x1978);
      if (uVar13 != 0xffffffff) {
        if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
          uVar9 = uVar13 - *(ushort *)(DAT_05ae78f0 + 0x3da);
          if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar9) {
            uVar9 = 0;
          }
          if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) !=
              0) goto LAB_039d2044;
          uVar10 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        }
        else {
LAB_039d2044:
          if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
            uVar21 = 0x112;
            uVar16 = 0x12;
          }
          else {
            uVar21 = 0x111;
            uVar16 = 0x11;
          }
          if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
            uVar16 = uVar21;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar16);
          uVar10 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar10;
      }
      *(uint *)(param_1 + 0xc) =
           *(uint *)(param_1 + 0xc) &
           (0xf << (ulong)(((int)*(char *)(param_1 + 0x1a00) & 7U) << 2) ^ 0xffffffffU);
    }
    else {
      lVar3 = param_1 + 0x1408 + (long)(int)uVar19 * 0x100;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | (byte)(1 << (ulong)(uVar19 & 0x1f));
      *(uint *)(param_1 + 0xc) =
           0xf << (ulong)(((int)*(char *)(lVar3 + 0xf8) & 7U) << 2) | *(uint *)(param_1 + 0xc);
      if (uVar19 == 1) {
        FUN_01560750(lVar3 + 0x18,param_1 + 0x1a10,*(undefined1 *)(lVar3 + 0xd6),
                     *(undefined2 *)(lVar3 + 0xd4));
        if ((*(ushort *)(param_1 + 0x1a4a) < 10) &&
           ((1 << (ulong)(*(ushort *)(param_1 + 0x1a4a) & 0x1f) & 0x350U) != 0)) {
          uVar9 = (uint)*(ushort *)(param_1 + 0x1a44);
          uVar13 = uVar9;
        }
        else {
          uVar9 = (uint)*(ushort *)(param_1 + 0x1a44);
          uVar13 = 1;
        }
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        if (uVar13 - 1 != (uint)*(ushort *)(lVar3 + 0xd4)) {
          puVar1 = (uint *)(lVar3 + 0xd0);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(short *)(lVar3 + 0xd4) = (short)(uVar13 - 1);
        }
        *(undefined4 *)(param_1 + 0x1af8) = *(undefined4 *)(param_1 + 0x1a10);
        *(undefined4 *)(param_1 + 0x1afc) = *(undefined4 *)(param_1 + 0x1a14);
        *(undefined8 *)(param_1 + 0x1b00) = *(undefined8 *)(param_1 + 0x1a18);
        *(undefined8 *)(param_1 + 0x1b08) = *(undefined8 *)(param_1 + 0x1a20);
        *(undefined4 *)(param_1 + 0x1b10) = *(undefined4 *)(param_1 + 0x1a28);
        *(undefined4 *)(param_1 + 0x1b14) = *(undefined4 *)(param_1 + 0x1a2c);
        *(undefined8 *)(param_1 + 0x1b18) = *(undefined8 *)(param_1 + 0x1a30);
        *(undefined8 *)(param_1 + 0x1b20) = *(undefined8 *)(param_1 + 0x1a38);
        *(undefined8 *)(param_1 + 0x1b3f) = *(undefined8 *)(param_1 + 0x1a57);
        *(undefined8 *)(param_1 + 0x1b28) = *(undefined8 *)(param_1 + 0x1a40);
        *(undefined8 *)(param_1 + 0x1b30) = *(undefined8 *)(param_1 + 0x1a48);
        *(undefined8 *)(param_1 + 0x1b38) = *(undefined8 *)(param_1 + 0x1a50);
        FUN_038fd1e0(param_1 + 0x1b48);
        FUN_038fd2f0(param_1 + 0x1b48,param_1 + 0x1a60);
        *(undefined4 *)(param_1 + 0x1b90) = *(undefined4 *)(param_1 + 0x1aa8);
        *(undefined8 *)(param_1 + 0x1b88) = *(undefined8 *)(param_1 + 0x1aa0);
        puVar1 = (uint *)(param_1 + 0x1bcc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      else {
        puVar7 = (undefined4 *)(param_1 + 0x1408 + ((long)((ulong)uVar19 << 0x20) >> 0x18));
        if (uVar19 == 0) {
          if (param_4 != 0) {
            *(long *)(param_1 + 0x2058) = param_4;
            *(char *)(param_1 + 0x2060) = (char)param_3;
            puVar7 = (undefined4 *)FUN_03976a50(param_4,param_2,param_3,iVar15,iVar12,0,1);
            FUN_01560750(lVar3 + 0x18,puVar7,*(undefined1 *)(lVar3 + 0xd6),
                         *(undefined2 *)(lVar3 + 0xd4));
            *(undefined4 *)(param_1 + 0x1a10) = *puVar7;
            *(undefined4 *)(param_1 + 0x1a14) = puVar7[1];
            *(undefined8 *)(param_1 + 0x1a18) = *(undefined8 *)(puVar7 + 2);
            *(undefined8 *)(param_1 + 0x1a20) = *(undefined8 *)(puVar7 + 4);
            *(undefined4 *)(param_1 + 0x1a28) = puVar7[6];
            *(undefined4 *)(param_1 + 0x1a2c) = puVar7[7];
            *(undefined8 *)(param_1 + 0x1a30) = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(param_1 + 0x1a38) = *(undefined8 *)(puVar7 + 10);
            uVar11 = *(undefined8 *)(puVar7 + 0xc);
            uVar4 = *(undefined8 *)(puVar7 + 0xe);
            uVar18 = *(undefined8 *)(puVar7 + 0x10);
            *(undefined8 *)(param_1 + 0x1a57) = *(undefined8 *)((long)puVar7 + 0x47);
            *(undefined8 *)(param_1 + 0x1a40) = uVar11;
            *(undefined8 *)(param_1 + 0x1a48) = uVar4;
            *(undefined8 *)(param_1 + 0x1a50) = uVar18;
            FUN_038fd1e0(param_1 + 0x1a60);
            FUN_038fd2f0(param_1 + 0x1a60,puVar7 + 0x14);
            uVar11 = *(undefined8 *)(puVar7 + 0x24);
            *(undefined4 *)(param_1 + 0x1aa8) = puVar7[0x26];
            *(undefined8 *)(param_1 + 0x1aa0) = uVar11;
            puVar1 = (uint *)(param_1 + 0x1ae4);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_039d22f4;
          }
          puStack_78 = PTR_s_PreShading_Diffuse__04b6b018;
          uVar16 = *puVar7;
          local_80 = &PTR_LAB_048f9770;
          lVar8 = nn::os::GetTlsValue(DAT_05ae7898);
          if (lVar8 == 0) {
            local_6c = nn::os::GetCurrentCoreNumber();
          }
          else {
            local_6c = (int)lVar8 + -1;
          }
          uVar11 = 4;
          uVar21 = 2;
        }
        else {
          puStack_78 = (&PTR_s_PreShading_Diffuse__04b6b018)[(int)uVar19];
          uVar16 = *puVar7;
          local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          lVar8 = nn::os::GetTlsValue(DAT_05ae7898);
          if (lVar8 == 0) {
            local_6c = nn::os::GetCurrentCoreNumber();
          }
          else {
            local_6c = (int)lVar8 + -1;
          }
          uVar11 = 1;
          uVar21 = 1;
        }
        uVar11 = FUN_03948e10(lVar17,param_2,lVar17 + 0x10 + (long)local_6c * 0x290,&local_80,uVar16
                              ,uVar11,iVar15,iVar12,1,0,uVar21,0,1,0,0,0);
        *(undefined8 *)(lVar2 + (long)(int)uVar19 * 0xe8) = uVar11;
      }
LAB_039d22f4:
      plVar20 = (long *)(lVar2 + (long)(int)uVar19 * 0xe8);
      lVar8 = *plVar20;
      if (lVar8 != 0) {
        FUN_01560750(lVar3 + 0x18,lVar8,*(undefined1 *)(lVar3 + 0xd6),*(undefined2 *)(lVar3 + 0xd4))
        ;
        puVar7 = (undefined4 *)*plVar20;
        lVar8 = lVar2 + (long)(int)uVar19 * 0xe8;
        *(undefined4 *)(lVar8 + 8) = *puVar7;
        *(undefined4 *)(lVar8 + 0xc) = puVar7[1];
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(puVar7 + 2);
        *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(puVar7 + 4);
        *(undefined4 *)(lVar8 + 0x20) = puVar7[6];
        *(undefined4 *)(lVar8 + 0x24) = puVar7[7];
        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(puVar7 + 10);
        uVar11 = *(undefined8 *)(puVar7 + 0xc);
        uVar4 = *(undefined8 *)(puVar7 + 0xe);
        uVar18 = *(undefined8 *)(puVar7 + 0x10);
        *(undefined8 *)(lVar8 + 0x4f) = *(undefined8 *)((long)puVar7 + 0x47);
        *(undefined8 *)(lVar8 + 0x40) = uVar4;
        *(undefined8 *)(lVar8 + 0x48) = uVar18;
        *(undefined8 *)(lVar8 + 0x38) = uVar11;
        FUN_038fd1e0(lVar8 + 0x58);
        FUN_038fd2f0(lVar8 + 0x58,puVar7 + 0x14);
        uVar16 = puVar7[0x26];
        *(undefined8 *)(lVar8 + 0x98) = *(undefined8 *)(puVar7 + 0x24);
        puVar1 = (uint *)(lVar8 + 0xdc);
        *(undefined4 *)(lVar8 + 0xa0) = uVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)(param_1 + 0xa98 + (long)*(char *)(lVar3 + 0xf8) * 8) = lVar3 + 0x18;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 == 6) {
      return;
    }
  } while( true );
}

