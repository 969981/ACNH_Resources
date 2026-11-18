
uint FUN_036d5030(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  short sVar12;
  int *piVar13;
  uint *puVar14;
  undefined *local_30;
  char *pcStack_28;
  
  iVar7 = FUN_036cec40();
  if (iVar7 == 0) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,param_2);
    if ((int)DAT_05ab3e80 < 1) {
      if ((((DAT_05ab3d70 != 0) && (puVar14 = *(uint **)(DAT_05ab3d70 + 8), puVar14 != (uint *)0x0))
          && ((DAT_05ab3d88 <= param_2 || (*(char *)(DAT_05ab3d90 + (int)param_2) != '\0')))) &&
         (((param_2 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * param_2 + (uint)(ushort)puVar14[2] * 8 + iVar7) +
                          (long)puVar14);
        goto joined_r0x036d5200;
      }
    }
    else if (param_2 < DAT_05ab3e80) {
      if (DAT_05ab3e70 <= param_2) {
        param_2 = 0;
      }
      puVar14 = *(uint **)(DAT_05ab3e78 + (ulong)param_2 * 8);
joined_r0x036d5200:
      if (puVar14 != (uint *)0x0) {
        sVar6 = FUN_036cee50(param_1);
        puVar5 = PTR_DAT_04bcac38;
        puVar4 = PTR_DAT_04bcac30;
        uVar9 = *puVar14;
        if (uVar9 != 0) {
          cVar11 = *PTR_DAT_04bcac30;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined4 *)puVar5 = 0xffffffff;
              *puVar4 = 1;
              uVar9 = *puVar14;
            }
            else {
              uVar2 = *(uint *)puVar5;
              if (-1 < (int)uVar2) {
                if ((short *)((ulong)uVar2 + (long)puVar14) != (short *)0x0) {
                  sVar12 = *(short *)((ulong)uVar2 + (long)puVar14);
                  goto LAB_036d521c;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar3 = (uint *)(ulong)uVar9;
            sVar12 = 0;
            if ((puVar3 == (uint *)0x0) || (sVar12 = 0, puVar14 == puVar3)) goto LAB_036d521c;
            lVar1 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar3)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar14 + (lVar1 - (long)puVar3);
            sVar12 = 0;
            if (lVar1 == 0) goto LAB_036d521c;
            uVar10 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar3));
            *(undefined4 *)puVar5 = 0xfffffffe;
            if (uVar10 == 0) break;
            piVar13 = (int *)(lVar1 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_036d5218;
            }
            iVar7 = 0;
            if (*piVar13 != -1) {
              iVar7 = *piVar13;
            }
            *(int *)puVar5 = iVar7;
            uVar9 = *puVar14;
            if (uVar9 == 0) break;
          } while( true );
        }
LAB_036d5218:
        sVar12 = 0;
LAB_036d521c:
        if (sVar12 == sVar6) {
          FUN_036cf070(&local_30,param_1);
          uVar10 = FUN_0277e294(&local_30);
          if ((uVar10 & 1) != 0) {
            local_30 = PTR_DAT_04bb2020 + 0x10;
            pcStack_28 = "OtgGetStartingSalary";
            iVar7 = FUN_02758850(&local_30);
            if (iVar7 == 0) {
              uVar9 = 2;
            }
            else {
              local_30 = (undefined *)CONCAT44(local_30._4_4_,*(int *)PTR_DAT_04bba738);
              uVar9 = (uint)(*(int *)PTR_DAT_04bba738 != 0);
            }
            uVar2 = uVar9;
            if (2 < uVar9) {
              uVar2 = 0;
            }
            if (((code *)(&PTR_FUN_04b45110)[(ulong)uVar2 * 2] != (code *)0x0) &&
               (local_30._0_4_ = uVar9,
               uVar10 = (*(code *)(&PTR_FUN_04b45110)[(ulong)uVar2 * 2])(param_1), (uVar10 & 1) != 0
               )) {
              iVar7 = FUN_036d0930(param_1);
              local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar7);
              uVar9 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5;
              if (iVar7 == 2) {
                if (0xc < uVar9) goto LAB_036d5308;
              }
              else if (iVar7 == 1) {
                if (uVar9 < 0xd) goto LAB_036d5308;
              }
              else if (iVar7 == 0) {
LAB_036d5308:
                uVar8 = FUN_036d0b40(param_1);
                uVar9 = FUN_036d4a88(uVar8);
                goto LAB_036d505c;
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_036d505c:
  return uVar9 & 1;
}

