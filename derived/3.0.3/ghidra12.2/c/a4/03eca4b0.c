
void FUN_03eca4b0(long param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  long lVar14;
  char *pcVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined *local_98;
  long lStack_90;
  undefined *local_88;
  undefined4 local_80;
  long local_78;
  undefined *local_70;
  char *local_68;
  
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 8) + 0x54));
  if (0 < (int)uVar6) {
    uVar17 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bd47f0 + 0x10;
    do {
      lVar14 = *(long *)(param_1 + 8);
      piVar3 = (int *)(lVar14 + *(int *)(lVar14 + 0x54) + 8 + uVar17 * 8);
      if (0 < *piVar3) {
        iVar11 = 0;
        piVar13 = (int *)(lVar14 + piVar3[1]);
        do {
          lVar19 = *(long *)(param_1 + 8);
          iVar7 = *(int *)(lVar19 + 0x24);
          lVar14 = lVar19 + iVar7;
          iVar5 = *piVar13;
          pcVar4 = (char *)(lVar14 + iVar5);
          local_68 = (char *)(lVar14 + piVar13[1]);
          local_70 = puVar1;
          if (*pcVar4 == '\0') {
LAB_03eca6a4:
            if (*local_68 != '\0') {
              (**(code **)(local_70 + 0x18))(&local_70);
              (**(code **)(local_70 + 0x18))(&local_70);
              pcVar4 = local_68;
              (**(code **)(*param_4 + 0x18))(param_4);
              pcVar15 = (char *)param_4[1];
              if (pcVar4 != pcVar15) {
                uVar18 = 0;
                bVar9 = true;
                do {
                  if (local_68[uVar18] != pcVar15[uVar18]) break;
                  if (local_68[uVar18] == '\0') {
                    if (bVar9) goto LAB_03eca760;
                    break;
                  }
                  if (local_68[uVar18 + 1] != pcVar15[uVar18 + 1]) break;
                  if (local_68[uVar18 + 1] == '\0') goto LAB_03eca760;
                  if (local_68[uVar18 + 2] != pcVar15[uVar18 + 2]) break;
                  if (local_68[uVar18 + 2] == '\0') goto LAB_03eca760;
                  bVar9 = uVar18 < 0x7fffe;
                  uVar18 = uVar18 + 3;
                } while (uVar18 != 0x80001);
                goto LAB_03eca5c0;
              }
            }
LAB_03eca760:
            local_80 = 0;
            lVar14 = *(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 8) + 0x24);
            lStack_90 = lVar14 + piVar13[3];
            local_88 = puVar2;
            local_78 = param_1;
            switch((short)piVar13[2]) {
            case 0:
              local_98 = PTR_DAT_04bb2020 + 0x10;
              if (piVar13[4] < 0) {
                uVar12 = (**(code **)(**(long **)(param_5 + 0x18) + 0x118))
                                   (*(long **)(param_5 + 0x18),param_1,piVar13[4] & 0xffff);
                iVar11 = (**(code **)(**(long **)(param_5 + 0x20) + 0x128))
                                   (*(long **)(param_5 + 0x20),uVar12);
              }
              else {
                iVar11 = piVar13[5];
              }
              (**(code **)(*param_2 + 0x28))(param_2,&local_98,iVar11);
              goto LAB_03eca570;
            case 1:
              local_98 = PTR_DAT_04bb2020 + 0x10;
              if (piVar13[4] < 0) {
                uVar12 = (**(code **)(**(long **)(param_5 + 0x18) + 0x110))
                                   (*(long **)(param_5 + 0x18),param_1,piVar13[4] & 0xffff);
                piVar13 = (int *)(**(code **)(**(long **)(param_5 + 0x20) + 0x120))
                                           (*(long **)(param_5 + 0x20),uVar12);
              }
              else {
                piVar13 = (int *)(lVar14 + piVar13[5]);
              }
              pcVar16 = *(code **)(*param_2 + 0x20);
              break;
            case 2:
              local_98 = PTR_DAT_04bb2020 + 0x10;
              FUN_03ebf3f0(param_5,piVar13 + 5,&local_88,1,0,0);
              (**(code **)(*param_2 + 0x30))(param_2,&local_98);
              goto LAB_03eca570;
            case 3:
              local_98 = PTR_DAT_04bb2020 + 0x10;
              if (piVar13[4] < 0) {
                uVar12 = (**(code **)(**(long **)(param_5 + 0x18) + 0x128))
                                   (*(long **)(param_5 + 0x18),param_1,piVar13[4] & 0xffff);
                bVar10 = (**(code **)(**(long **)(param_5 + 0x20) + 0x138))
                                   (*(long **)(param_5 + 0x20),uVar12);
              }
              else {
                bVar10 = piVar13[5] != 0;
              }
              (**(code **)(*param_2 + 0x38))(param_2,&local_98,bVar10 & 1);
              goto LAB_03eca570;
            default:
              local_98 = PTR_DAT_04bb2020 + 0x10;
              if (piVar13[4] < 0) {
                uVar12 = (**(code **)(**(long **)(param_5 + 0x18) + 0x130))
                                   (*(long **)(param_5 + 0x18),param_1,piVar13[4] & 0xffff);
                piVar13 = (int *)(**(code **)(**(long **)(param_5 + 0x20) + 0x140))
                                           (*(long **)(param_5 + 0x20),uVar12);
              }
              else {
                piVar13 = piVar13 + 5;
              }
              pcVar16 = *(code **)(*param_2 + 0x40);
            }
            (*pcVar16)(param_2,&local_98,piVar13);
            break;
          }
          (**(code **)(*param_3 + 0x18))(param_3);
          pcVar15 = (char *)param_3[1];
          if (pcVar4 == pcVar15) goto LAB_03eca6a4;
          uVar18 = 0;
          bVar9 = true;
          lVar14 = lVar19 + (long)iVar5 + (long)iVar7 + 2;
          do {
            lVar19 = lVar14 + uVar18;
            cVar8 = *(char *)(lVar19 + -2);
            if (cVar8 != pcVar15[uVar18]) break;
            if (cVar8 == '\0') {
              if (bVar9) goto LAB_03eca6a4;
              break;
            }
            cVar8 = *(char *)(lVar19 + -1);
            if (cVar8 != pcVar15[uVar18 + 1]) break;
            if (cVar8 == '\0') goto LAB_03eca6a4;
            cVar8 = *(char *)(lVar14 + uVar18);
            if (cVar8 != pcVar15[uVar18 + 2]) break;
            if (cVar8 == '\0') goto LAB_03eca6a4;
            bVar9 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
LAB_03eca5c0:
          iVar11 = iVar11 + 1;
          piVar13 = piVar13 + 8;
        } while (iVar11 < *piVar3);
      }
LAB_03eca570:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar6);
  }
  return;
}

