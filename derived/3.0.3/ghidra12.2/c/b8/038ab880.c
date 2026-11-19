
int FUN_038ab880(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  if (*(char *)param_2[1] != '\0') {
    plVar10 = (long *)(param_1 + 0x28);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar11 = *(long *)(param_1 + 0x30);
    (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar11 != param_2[1]) {
      uVar8 = 0;
      bVar5 = true;
      do {
        cVar4 = *(char *)(*(long *)(param_1 + 0x30) + uVar8);
        if (cVar4 != *(char *)(param_2[1] + uVar8)) {
          iVar9 = 0;
          goto LAB_038abb08;
        }
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_038ab94c;
          iVar9 = 0;
          goto LAB_038abb08;
        }
        bVar5 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      iVar9 = 0;
      goto LAB_038abb08;
    }
LAB_038ab94c:
    if ((*(char *)param_3[1] != '\0') && (*(char *)param_4[1] != '\0')) {
      lVar11 = *(long *)(param_1 + 0xa0);
      if (lVar11 == param_1 + 0x98) {
        ppuVar7 = (undefined **)(PTR_PTR_04bb2238 + 8);
      }
      else {
        lVar12 = lVar11 + -0x30;
        do {
          (**(code **)(*(long *)(lVar11 + -0x30) + 0x18))(lVar12);
          (**(code **)(*(long *)(lVar11 + -0x30) + 0x18))(lVar12);
          lVar13 = *(long *)(lVar12 + 8);
          (**(code **)(*param_3 + 0x18))(param_3);
          if (lVar13 == param_3[1]) {
LAB_038aba6c:
            ppuVar7 = (undefined **)(lVar12 + 0x20);
            goto LAB_038aba70;
          }
          uVar8 = 0;
          lVar13 = param_3[1] + 1;
          bVar5 = true;
          lVar1 = *(long *)(lVar12 + 8) + 1;
          do {
            lVar2 = lVar1 + uVar8;
            lVar3 = lVar13 + uVar8;
            cVar4 = *(char *)(lVar2 + -1);
            if (cVar4 != *(char *)(lVar3 + -1)) break;
            if (cVar4 == '\0') {
              if (bVar5) goto LAB_038aba6c;
              break;
            }
            cVar4 = *(char *)(lVar1 + uVar8);
            if (cVar4 != *(char *)(lVar13 + uVar8)) break;
            if (cVar4 == '\0') goto LAB_038aba6c;
            cVar4 = *(char *)(lVar2 + 1);
            if (cVar4 != *(char *)(lVar3 + 1)) break;
            if (cVar4 == '\0') goto LAB_038aba6c;
            bVar5 = uVar8 < 0x7fffe;
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x30;
        } while (lVar12 != param_1 + 0x68);
        ppuVar7 = &PTR_DAT_04c4b988;
      }
LAB_038aba70:
      puVar14 = *ppuVar7;
      (**(code **)(*param_4 + 0x18))(param_4);
      if (puVar14 != (undefined *)param_4[1]) {
        uVar8 = 0;
        bVar5 = true;
        do {
          cVar4 = puVar14[uVar8];
          if (cVar4 != ((undefined *)param_4[1])[uVar8]) {
            iVar9 = 0;
            break;
          }
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_038abadc;
            iVar9 = 0;
            break;
          }
          bVar5 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
          iVar9 = 0;
        } while (uVar8 != 0x80001);
        goto LAB_038abb08;
      }
    }
  }
LAB_038abadc:
  iVar9 = 1;
LAB_038abb08:
  while (param_1 = *(long *)(param_1 + 0x10), param_1 != 0) {
    iVar6 = FUN_038ab880(param_1 + -8,param_2,param_3,param_4);
    iVar9 = iVar6 + iVar9;
  }
  return iVar9;
}

