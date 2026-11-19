
void FUN_03bb3320(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *__dest;
  long lVar13;
  undefined1 *__src;
  long lVar14;
  
  if (*(char *)param_2[1] != '\0') {
    lVar10 = param_1 + 0x48;
    if (*(long *)(param_1 + 0x50) != lVar10) {
      lVar13 = (long)*(int *)(param_1 + 0x5c);
      lVar14 = *(long *)(param_1 + 0x50) - lVar13;
      do {
        plVar11 = (long *)(lVar14 + 8);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar12 = *(long *)(lVar14 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        if (lVar12 == lVar8) {
          return;
        }
        uVar9 = 0;
        bVar7 = true;
        lVar12 = *(long *)(lVar14 + 0x10) + 2;
        do {
          lVar1 = lVar12 + uVar9;
          cVar4 = *(char *)(lVar1 + -2);
          if (cVar4 != *(char *)(lVar8 + uVar9)) break;
          if (cVar4 == '\0') {
            if (bVar7) {
LAB_03bb345c:
              if (lVar14 != 0) {
                return;
              }
              goto LAB_03bb3460;
            }
            break;
          }
          cVar4 = *(char *)(lVar1 + -1);
          if (cVar4 != *(char *)(lVar8 + uVar9 + 1)) break;
          if (cVar4 == '\0') goto LAB_03bb345c;
          cVar4 = *(char *)(lVar12 + uVar9);
          if (cVar4 != *(char *)(lVar8 + uVar9 + 2)) break;
          if (cVar4 == '\0') goto LAB_03bb345c;
          bVar7 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != lVar10 - lVar13);
    }
LAB_03bb3460:
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      plVar11 = malloc(0x70);
      puVar5 = PTR_DAT_04bb2020;
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar14 + 8);
        if (lVar13 != 0) {
          puVar3 = (undefined8 *)(lVar13 + 0xa8);
        }
        param_3 = (long *)*puVar3;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      plVar11 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x70,8);
      puVar5 = PTR_DAT_04bb2020;
    }
    PTR_DAT_04bb2020 = puVar5;
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 5) = 0x20;
      __dest = (undefined1 *)((long)plVar11 + 0x2c);
      *__dest = 0;
      puVar6 = PTR_DAT_04bb2028;
      plVar11[2] = (long)&DAT_0407ebb1;
      plVar11[3] = (long)(puVar6 + 0x10);
      plVar11[4] = (long)__dest;
      puVar6 = PTR_DAT_04bd2280;
      *(undefined1 *)((long)plVar11 + 0x4b) = 0;
      plVar11[0xc] = 0;
      plVar11[0xd] = 0;
      *plVar11 = (long)(puVar6 + 0x10);
      plVar11[1] = (long)(puVar5 + 0x10);
      plVar11[10] = 0x42b4000042340000;
      plVar11[0xb] = 0x3f0000003f000000;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (undefined1 *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar14 = 0;
        do {
          if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_03bb35ac;
          lVar13 = param_2[1] + lVar14;
          if (*(char *)(lVar13 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_03bb35ac;
          }
          if (*(char *)(lVar13 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_03bb35ac;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_03bb35ac:
        iVar2 = (int)lVar14;
        if ((int)plVar11[5] <= (int)lVar14) {
          iVar2 = (int)plVar11[5] + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        __dest[iVar2] = 0;
      }
      plVar11[2] = plVar11[4];
      lVar14 = *(long *)(param_1 + 0x48);
      plVar11 = (long *)((long)*(int *)(param_1 + 0x5c) + (long)plVar11);
      *(long **)(param_1 + 0x48) = plVar11;
      *plVar11 = lVar14;
      plVar11[1] = lVar10;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar11;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      if (*(long *)(param_1 + 0x10) != param_1 + 8) {
        lVar14 = (long)*(int *)(param_1 + 0x1c);
        lVar10 = *(long *)(param_1 + 0x10) - lVar14;
        do {
          FUN_03bbf760(lVar10);
          lVar10 = *(long *)(lVar10 + lVar14 + 8) - lVar14;
        } while (lVar10 != (param_1 + 8) - lVar14);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar10 != 0)) &&
         (*(long *)(lVar10 + 8) != lVar10)) {
        lVar8 = (long)*(int *)(lVar10 + 0x14);
        lVar13 = *(long *)(lVar10 + 8) - lVar8;
        lVar14 = lVar13;
        do {
          lVar14 = *(long *)(lVar14 + lVar8 + 8) + -lVar8;
        } while (lVar14 != lVar10 - lVar8);
        do {
          lVar13 = *(long *)(lVar13 + lVar8 + 8) + -lVar8;
        } while (lVar13 != lVar10 - lVar8);
      }
      if (((*(long *)(param_1 + 0x60) != 0) &&
          (lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 8), lVar10 != 0)) &&
         (*(long *)(lVar10 + 8) != lVar10)) {
        lVar8 = (long)*(int *)(lVar10 + 0x14);
        lVar13 = *(long *)(lVar10 + 8) - lVar8;
        lVar14 = lVar13;
        do {
          lVar14 = *(long *)(lVar14 + lVar8 + 8) + -lVar8;
        } while (lVar14 != lVar10 - lVar8);
        do {
          lVar13 = *(long *)(lVar13 + lVar8 + 8) + -lVar8;
        } while (lVar13 != lVar10 - lVar8);
      }
    }
  }
  return;
}

