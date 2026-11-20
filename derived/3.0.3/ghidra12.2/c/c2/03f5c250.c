
void FUN_03f5c250(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  code *pcVar9;
  ulong uVar10;
  int iVar11;
  ushort uVar12;
  undefined *puVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  code *pcVar19;
  ulong uVar20;
  
  puVar13 = PTR_DAT_04bdf208;
  pbVar2 = (byte *)(param_1 + 0x71489);
  plVar3 = param_1 + 0x69720;
  pcVar9 = (code *)param_1[0x7979d];
  uVar10 = param_1[0x7979e];
  plVar7 = (long *)((long)param_1 + ((long)uVar10 >> 1));
  plVar4 = param_1 + 1;
  pbVar5 = (byte *)(param_1 + 0x68d1);
  plVar6 = param_1 + 0x40cc;
  iVar17 = *(int *)((long)param_1 + 0x34e0bc);
  do {
    if (*(int *)((long)param_1 + 0x54) <= iVar17) {
      do {
        uVar12 = *(ushort *)(param_1 + 0xb);
        uVar15 = (ulong)uVar12;
        uVar18 = (uint)uVar12;
        *(ushort *)(param_1 + 0xb) = uVar12 + 1;
        if (uVar12 >> 6 < 0x3ff || *(char *)((long)param_1 + 0x45) == '\0') {
          if (uVar18 - 0xfd < 3) {
            uVar16 = (ulong)*(byte *)((long)plVar4 + uVar15 + 0x58);
            *(undefined1 *)((long)plVar4 + uVar15 + 0x58) = 0;
          }
          else if (uVar18 == 0xf3) {
            uVar16 = FUN_03f855f0(param_1 + 0x200c,*(byte *)((long)param_1 + 0x152) & 0x7f);
          }
          else {
            uVar16 = (ulong)*(byte *)((long)plVar4 + uVar15 + 0x58);
          }
        }
        else {
          uVar16 = (ulong)(byte)puVar13[uVar18 - 0xffc0];
        }
        (*(code *)(&PTR_LAB_04baaa50)[(uVar16 & 0xff) * 2])(plVar4);
      } while (*(int *)((long)param_1 + 0x54) <= *(int *)((long)param_1 + 0x34e0bc));
    }
    if (*pbVar2 != 0) {
      FUN_03f5b4a4(param_1);
    }
    pcVar19 = pcVar9;
    if ((uVar10 & 1) != 0) {
      pcVar19 = *(code **)(pcVar9 + *plVar7);
    }
    (*pcVar19)(plVar7);
    FUN_03f53408(plVar3);
    FUN_03f53408(plVar3);
    FUN_03f53408(plVar3);
    FUN_03f53408(plVar3);
    FUN_03f53408(plVar3);
    FUN_03f53408(plVar3);
    bVar14 = *pbVar5;
    if (((char)bVar14 < '\0') &&
       (iVar17 = (int)param_1[0x68d2] + -1, *(int *)(param_1 + 0x68d2) = iVar17, iVar17 == 0)) {
      *pbVar5 = bVar14 & 0x7f;
      FUN_03f5e994(plVar6);
      bVar14 = *pbVar5;
    }
    if ((bVar14 >> 6 & 1) != 0) {
      if (*(int *)((long)param_1 + 0x34694) == 0) {
        if (*(char *)((long)param_1 + 0x3468c) == '\0') {
          *pbVar5 = bVar14 & 0xbf;
        }
        else if (*(char *)((long)param_1 + 0x346e7) == '\0') {
          FUN_03f5ec94(plVar6);
          if ((char)*(byte *)((long)param_1 + 0x3468c) < '\0') {
            *(byte *)((long)param_1 + 0x3468c) = *(byte *)((long)param_1 + 0x3468c) & 0x7f;
          }
        }
      }
      else {
        iVar17 = *(int *)((long)param_1 + 0x34694) + -1;
        if (*(char *)((long)param_1 + 0x346e7) != '\0' && iVar17 == 0) {
          iVar17 = 1;
        }
        *(int *)((long)param_1 + 0x34694) = iVar17;
      }
    }
    if (*(char *)((long)param_1 + 0x3469a) == '\0') {
      while (((int)param_1[0x40ce] <= *(int *)((long)param_1 + 0x34e0bc) &&
             (uVar15 = (**(code **)(**(long **)(*param_1 + 0x78) + 0x78))(), (uVar15 & 1) == 0))) {
        if (*(char *)((long)param_1 + 0x3469a) == '\0') {
          uVar15 = (ulong)*(byte *)((long)param_1 + 0x2066a);
          uVar12 = *(ushort *)(param_1 + 0x40cd);
          uVar16 = (ulong)uVar12;
          *(int *)(param_1 + 0x40ce) =
               (int)param_1[0x40ce] +
               (int)*(short *)((long)plVar6 + (ulong)(uVar12 >> 0xc) * 2 + uVar15 * 0x20 + 0x10020);
          uVar20 = param_1[uVar15 * 0x10 + (ulong)(uVar12 >> 0xc) + 0x40d0];
          if (99 < uVar20) {
            uVar16 = uVar16 & 0xfff;
LAB_03f5c554:
            bVar14 = *(byte *)(uVar20 + uVar16);
            goto LAB_03f5c5d0;
          }
          switch(uVar20) {
          case 1:
            if (0x10 < uVar12 >> 9) {
              pcVar19 = *(code **)(*plVar6 + 0x20);
              goto LAB_03f5c5c4;
            }
            goto LAB_03f5c588;
          default:
switchD_03f5c534_caseD_2:
            *(int *)param_1[0x68db] = *(int *)param_1[0x68db] + 1;
LAB_03f5c588:
            bVar14 = *(byte *)((long)param_1 + 0x2066c);
            break;
          case 7:
            if (0x7ff < (uint)(uVar16 & 0xfff)) goto switchD_03f5c534_caseD_2;
            bVar14 = *(byte *)(param_1[0x40cf] + (uVar16 & 0xfff));
            break;
          case 8:
            uVar16 = (ulong)*(uint *)(param_1 + 0x68d8) & (uVar16 | (uVar15 & 3) << 0x10);
            uVar20 = param_1[0x68d5];
            goto LAB_03f5c554;
          case 9:
            bVar14 = (**(code **)(*plVar6 + 8))(plVar6);
            break;
          case 10:
            pcVar19 = *(code **)*plVar6;
LAB_03f5c5c4:
            bVar14 = (*pcVar19)(plVar6,uVar16);
          }
LAB_03f5c5d0:
          *(int *)(param_1 + 0x40cd) = (int)param_1[0x40cd] + 1;
          plVar1 = (long *)((ulong)*(byte *)((long)param_1 + 0x346eb) * 0x1000 + 0x4babad0 +
                           (ulong)bVar14 * 0x10);
          pcVar19 = (code *)*plVar1;
          uVar15 = plVar1[1];
          if ((uVar15 & 1) != 0) {
            pcVar19 = *(code **)(pcVar19 + *(long *)((long)plVar6 + ((long)uVar15 >> 1)));
          }
          (*pcVar19)();
        }
      }
    }
    if ((((char)*(byte *)((long)param_1 + 0x3471c) < '\0') &&
        ((char)*(byte *)((long)param_1 + 0x3471e) < '\0')) && ((*pbVar2 >> 6 & 1) == 0)) {
      *pbVar2 = *pbVar2 | 0x40;
      *(byte *)((long)param_1 + 0x38a44c) = *(byte *)((long)param_1 + 0x38a44c) | 0x10;
      bVar8 = (char)param_1[0x7148b] == '\0';
      if (!bVar8) {
        *(undefined1 *)(param_1 + 0x7148b) = 0;
        *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
      }
      *(uint *)((long)param_1 + 0x38a454) = (uint)bVar8;
    }
    if ((((*(byte *)((long)param_1 + 0x3471c) >> 5 & 1) != 0) &&
        ((*(byte *)((long)param_1 + 0x3471e) >> 5 & 1) != 0)) && ((*pbVar2 >> 6 & 1) == 0)) {
      *pbVar2 = *pbVar2 | 0x40;
      *(byte *)((long)param_1 + 0x38a44c) = *(byte *)((long)param_1 + 0x38a44c) | 0x10;
      bVar8 = (char)param_1[0x7148b] == '\0';
      if (!bVar8) {
        *(undefined1 *)(param_1 + 0x7148b) = 0;
        *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
      }
      *(uint *)((long)param_1 + 0x38a454) = (uint)bVar8;
    }
    iVar11 = (int)param_1[0x69c16];
    iVar17 = *(int *)((long)param_1 + 0x34e0bc);
    if (*(char *)(*param_1 + 0x10) == '\0') {
      if (iVar11 <= iVar17) {
        FUN_03fe7b90(param_1);
        iVar17 = *(int *)((long)param_1 + 0x34e0bc);
      }
    }
    else if (iVar11 <= iVar17) {
      do {
        FUN_03fe7b90(param_1);
        iVar17 = *(int *)((long)param_1 + 0x34e0bc);
      } while ((int)param_1[0x69c16] <= iVar17);
    }
    *(int *)(param_1 + 0x69c18) = iVar17;
    if (*(char *)((long)param_1 + 0x38a459) != '\0') {
      return;
    }
  } while( true );
}

