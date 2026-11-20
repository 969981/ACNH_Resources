
void FUN_03eb71c0(int *param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  undefined *local_70;
  undefined8 uStack_68;
  
  plVar2 = DAT_05aed668;
  if (((*param_1 != -1) && ((char)param_1[1] != '\0')) &&
     (iVar4 = param_1[3], param_1[3] = iVar4 + 1, param_1[4] <= iVar4)) {
    uVar11 = (ulong)*(uint *)(DAT_05aed670 + 0x338);
    iVar4 = *param_1;
    if (iVar4 == 0) {
      do {
        uVar9 = (int)uVar11 + 1;
        iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar4 <= (int)uVar9) {
          iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
          uVar9 = uVar9 - iVar4;
          param_1[7] = param_1[7] + 1;
        }
        uVar11 = (ulong)uVar9;
        uVar7 = FUN_03eb75c0(param_1,uVar11);
      } while ((uVar7 & 1) != 0);
    }
    else if (iVar4 == 2) {
      if (0 < param_1[0x10]) {
        do {
          uVar9 = param_1[2] + 1;
          param_1[2] = uVar9;
          if (param_1[0x10] <= (int)uVar9) {
            uVar9 = 0;
            param_1[2] = 0;
            param_1[7] = param_1[7] + 1;
          }
          plVar3 = DAT_05aed668;
          if ((uint)param_1[0x10] <= uVar9) {
            uVar9 = 0;
          }
          lVar13 = *(long *)(param_1 + 0x12);
          iVar4 = (**(code **)(*DAT_05aed668 + 0x10))(DAT_05aed668);
          if (0 < iVar4) {
            plVar14 = (long *)(lVar13 + (long)(int)uVar9 * 0x38);
            iVar4 = 0;
            do {
              puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,iVar4);
              pcVar15 = (char *)*puVar8;
              (**(code **)(*plVar14 + 0x18))(plVar14);
              pcVar10 = (char *)plVar14[1];
              if (pcVar15 == pcVar10) goto LAB_03eb7324;
              if (*pcVar15 == *pcVar10) {
                if (*pcVar15 == '\0') goto LAB_03eb7324;
                lVar13 = 0x7fffe;
                while( true ) {
                  if (pcVar15[1] != pcVar10[1]) break;
                  if (pcVar15[1] == '\0') goto LAB_03eb7324;
                  if (pcVar15[2] != pcVar10[2]) break;
                  if (pcVar15[2] == '\0') goto LAB_03eb7324;
                  if ((lVar13 == 0) || (cVar1 = pcVar15[3], cVar1 != pcVar10[3])) break;
                  lVar13 = lVar13 + -3;
                  pcVar10 = pcVar10 + 3;
                  pcVar15 = pcVar15 + 3;
                  if (cVar1 == '\0') goto LAB_03eb7324;
                }
              }
              iVar4 = iVar4 + 1;
              iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
            } while (iVar4 < iVar5);
          }
          iVar4 = -1;
LAB_03eb7324:
          uVar11 = FUN_03eb75c0(param_1,iVar4);
          plVar3 = DAT_05aed668;
        } while ((uVar11 & 1) != 0);
        uVar9 = param_1[2];
        lVar13 = *(long *)(param_1 + 0x12);
        if ((uint)param_1[0x10] <= uVar9) {
          uVar9 = 0;
        }
        iVar4 = (**(code **)(*DAT_05aed668 + 0x10))(DAT_05aed668);
        if (iVar4 < 1) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar12 = 0;
          plVar14 = (long *)(lVar13 + (long)(int)uVar9 * 0x38);
          uVar11 = 0xffffffff;
          do {
            puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar12);
            pcVar15 = (char *)*puVar8;
            (**(code **)(*plVar14 + 0x18))(plVar14);
            pcVar10 = (char *)plVar14[1];
            if (pcVar15 == pcVar10) {
LAB_03eb7554:
              uVar11 = (ulong)uVar12;
              break;
            }
            if (*pcVar15 == *pcVar10) {
              if (*pcVar15 == '\0') goto LAB_03eb7554;
              lVar13 = 0x7fffe;
              while( true ) {
                if (pcVar15[1] != pcVar10[1]) break;
                if (pcVar15[1] == '\0') goto LAB_03eb7554;
                if (pcVar15[2] != pcVar10[2]) break;
                if (pcVar15[2] == '\0') goto LAB_03eb7554;
                if ((lVar13 == 0) || (cVar1 = pcVar15[3], cVar1 != pcVar10[3])) break;
                lVar13 = lVar13 + -3;
                pcVar10 = pcVar10 + 3;
                pcVar15 = pcVar15 + 3;
                if (cVar1 == '\0') goto LAB_03eb7554;
              }
            }
            uVar12 = uVar12 + 1;
            iVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          } while ((int)uVar12 < iVar4);
        }
      }
    }
    else if (iVar4 == 1) {
      do {
        puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar11 = (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar9 = *puVar6 ^ *puVar6 << 0xb;
        uVar12 = puVar6[3];
        *puVar6 = puVar6[1];
        puVar6[1] = puVar6[2];
        uVar9 = uVar9 >> 8 ^ uVar12 >> 0x13 ^ uVar9 ^ uVar12;
        puVar6[2] = uVar12;
        puVar6[3] = uVar9;
        uVar11 = (ulong)uVar9 * (uVar11 & 0xffffffff) >> 0x20;
        uVar7 = FUN_03eb75c0(param_1,uVar11);
      } while ((uVar7 & 1) != 0);
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar11);
    uStack_68 = *puVar8;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    FUN_03eb77f0(&local_70,0);
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

