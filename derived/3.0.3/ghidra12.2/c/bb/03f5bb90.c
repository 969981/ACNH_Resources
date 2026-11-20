
void FUN_03f5bb90(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  ushort uVar9;
  undefined *puVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  
  puVar10 = PTR_DAT_04bdf208;
  pbVar2 = (byte *)(param_1 + 0x71489);
  pcVar18 = (code *)param_1[0x7979d];
  uVar19 = param_1[0x7979e];
  pbVar3 = (byte *)(param_1 + 0x68d1);
  plVar4 = param_1 + 1;
  plVar5 = param_1 + 0x40cc;
  plVar6 = (long *)((long)param_1 + ((long)uVar19 >> 1));
  iVar14 = *(int *)((long)param_1 + 0x34e0bc);
  do {
    if (*(int *)((long)param_1 + 0x54) <= iVar14) {
      do {
        uVar9 = *(ushort *)(param_1 + 0xb);
        uVar12 = (ulong)uVar9;
        uVar15 = (uint)uVar9;
        *(ushort *)(param_1 + 0xb) = uVar9 + 1;
        if (uVar9 >> 6 < 0x3ff || *(char *)((long)param_1 + 0x45) == '\0') {
          if (uVar15 - 0xfd < 3) {
            uVar13 = (ulong)*(byte *)((long)plVar4 + uVar12 + 0x58);
            *(undefined1 *)((long)plVar4 + uVar12 + 0x58) = 0;
          }
          else if (uVar15 == 0xf3) {
            uVar13 = FUN_03f855f0(param_1 + 0x200c,*(byte *)((long)param_1 + 0x152) & 0x7f);
          }
          else {
            uVar13 = (ulong)*(byte *)((long)plVar4 + uVar12 + 0x58);
          }
        }
        else {
          uVar13 = (ulong)(byte)puVar10[uVar15 - 0xffc0];
        }
        (*(code *)(&PTR_LAB_04baaa50)[(uVar13 & 0xff) * 2])(plVar4);
      } while (*(int *)((long)param_1 + 0x54) <= *(int *)((long)param_1 + 0x34e0bc));
    }
    if (*pbVar2 != 0) {
      FUN_03f5b4a4(param_1);
    }
    pcVar16 = pcVar18;
    if ((uVar19 & 1) != 0) {
      pcVar16 = *(code **)(pcVar18 + *plVar6);
    }
    (*pcVar16)(plVar6);
    bVar11 = *pbVar3;
    if (((char)bVar11 < '\0') &&
       (iVar14 = (int)param_1[0x68d2] + -1, *(int *)(param_1 + 0x68d2) = iVar14, iVar14 == 0)) {
      *pbVar3 = bVar11 & 0x7f;
      FUN_03f5e994(plVar5);
      bVar11 = *pbVar3;
    }
    if ((bVar11 >> 6 & 1) != 0) {
      if (*(int *)((long)param_1 + 0x34694) == 0) {
        if (*(char *)((long)param_1 + 0x3468c) == '\0') {
          *pbVar3 = bVar11 & 0xbf;
        }
        else if (*(char *)((long)param_1 + 0x346e7) == '\0') {
          FUN_03f5ec94(plVar5);
          if ((char)*(byte *)((long)param_1 + 0x3468c) < '\0') {
            *(byte *)((long)param_1 + 0x3468c) = *(byte *)((long)param_1 + 0x3468c) & 0x7f;
          }
        }
      }
      else {
        iVar14 = *(int *)((long)param_1 + 0x34694) + -1;
        if (*(char *)((long)param_1 + 0x346e7) != '\0' && iVar14 == 0) {
          iVar14 = 1;
        }
        *(int *)((long)param_1 + 0x34694) = iVar14;
      }
    }
    if (*(char *)((long)param_1 + 0x3469a) == '\0') {
      while (((int)param_1[0x40ce] <= *(int *)((long)param_1 + 0x34e0bc) &&
             (uVar12 = (**(code **)(**(long **)(*param_1 + 0x78) + 0x78))(), (uVar12 & 1) == 0))) {
        if (*(char *)((long)param_1 + 0x3469a) == '\0') {
          uVar12 = (ulong)*(byte *)((long)param_1 + 0x2066a);
          uVar9 = *(ushort *)(param_1 + 0x40cd);
          uVar13 = (ulong)uVar9;
          *(int *)(param_1 + 0x40ce) =
               (int)param_1[0x40ce] +
               (int)*(short *)((long)plVar5 + (ulong)(uVar9 >> 0xc) * 2 + uVar12 * 0x20 + 0x10020);
          uVar17 = param_1[uVar12 * 0x10 + (ulong)(uVar9 >> 0xc) + 0x40d0];
          if (99 < uVar17) {
            uVar13 = uVar13 & 0xfff;
LAB_03f5be64:
            bVar11 = *(byte *)(uVar17 + uVar13);
            goto LAB_03f5bee0;
          }
          switch(uVar17) {
          case 1:
            if (0x10 < uVar9 >> 9) {
              pcVar16 = *(code **)(*plVar5 + 0x20);
              goto LAB_03f5bed4;
            }
            goto LAB_03f5be98;
          default:
switchD_03f5be44_caseD_2:
            *(int *)param_1[0x68db] = *(int *)param_1[0x68db] + 1;
LAB_03f5be98:
            bVar11 = *(byte *)((long)param_1 + 0x2066c);
            break;
          case 7:
            if (0x7ff < (uint)(uVar13 & 0xfff)) goto switchD_03f5be44_caseD_2;
            bVar11 = *(byte *)(param_1[0x40cf] + (uVar13 & 0xfff));
            break;
          case 8:
            uVar13 = (ulong)*(uint *)(param_1 + 0x68d8) & (uVar13 | (uVar12 & 3) << 0x10);
            uVar17 = param_1[0x68d5];
            goto LAB_03f5be64;
          case 9:
            bVar11 = (**(code **)(*plVar5 + 8))(plVar5);
            break;
          case 10:
            pcVar16 = *(code **)*plVar5;
LAB_03f5bed4:
            bVar11 = (*pcVar16)(plVar5,uVar13);
          }
LAB_03f5bee0:
          *(int *)(param_1 + 0x40cd) = (int)param_1[0x40cd] + 1;
          plVar1 = (long *)((ulong)*(byte *)((long)param_1 + 0x346eb) * 0x1000 + 0x4babad0 +
                           (ulong)bVar11 * 0x10);
          pcVar16 = (code *)*plVar1;
          uVar12 = plVar1[1];
          if ((uVar12 & 1) != 0) {
            pcVar16 = *(code **)(pcVar16 + *(long *)((long)plVar5 + ((long)uVar12 >> 1)));
          }
          (*pcVar16)();
        }
      }
    }
    if ((((char)*(byte *)((long)param_1 + 0x3471c) < '\0') &&
        ((char)*(byte *)((long)param_1 + 0x3471e) < '\0')) && ((*pbVar2 >> 6 & 1) == 0)) {
      *pbVar2 = *pbVar2 | 0x40;
      *(byte *)((long)param_1 + 0x38a44c) = *(byte *)((long)param_1 + 0x38a44c) | 0x10;
      bVar7 = (char)param_1[0x7148b] == '\0';
      if (!bVar7) {
        *(undefined1 *)(param_1 + 0x7148b) = 0;
        *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
      }
      *(uint *)((long)param_1 + 0x38a454) = (uint)bVar7;
    }
    if ((((*(byte *)((long)param_1 + 0x3471c) >> 5 & 1) != 0) &&
        ((*(byte *)((long)param_1 + 0x3471e) >> 5 & 1) != 0)) && ((*pbVar2 >> 6 & 1) == 0)) {
      *pbVar2 = *pbVar2 | 0x40;
      *(byte *)((long)param_1 + 0x38a44c) = *(byte *)((long)param_1 + 0x38a44c) | 0x10;
      bVar7 = (char)param_1[0x7148b] == '\0';
      if (!bVar7) {
        *(undefined1 *)(param_1 + 0x7148b) = 0;
        *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
      }
      *(uint *)((long)param_1 + 0x38a454) = (uint)bVar7;
    }
    iVar8 = (int)param_1[0x69c16];
    iVar14 = *(int *)((long)param_1 + 0x34e0bc);
    if (*(char *)(*param_1 + 0x10) == '\0') {
      if (iVar8 <= iVar14) {
        FUN_03fe7b90(param_1);
        iVar14 = *(int *)((long)param_1 + 0x34e0bc);
      }
    }
    else if (iVar8 <= iVar14) {
      do {
        FUN_03fe7b90(param_1);
        iVar14 = *(int *)((long)param_1 + 0x34e0bc);
      } while ((int)param_1[0x69c16] <= iVar14);
    }
    *(int *)(param_1 + 0x69c18) = iVar14;
    if (*(char *)((long)param_1 + 0x38a459) != '\0') {
      return;
    }
  } while( true );
}

