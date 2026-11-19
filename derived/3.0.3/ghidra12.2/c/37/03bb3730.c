
void FUN_03bb3730(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 *__dest;
  long lVar12;
  undefined1 *__src;
  long lVar13;
  
  if (*(char *)param_2[1] != '\0') {
    lVar9 = param_1 + 0x68;
    if (*(long *)(param_1 + 0x70) != lVar9) {
      lVar12 = (long)*(int *)(param_1 + 0x7c);
      lVar13 = *(long *)(param_1 + 0x70) - lVar12;
      do {
        plVar10 = (long *)(lVar13 + 8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar11 = *(long *)(lVar13 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        if (lVar11 == lVar7) {
          return;
        }
        uVar8 = 0;
        bVar5 = true;
        lVar11 = *(long *)(lVar13 + 0x10) + 2;
        do {
          lVar1 = lVar11 + uVar8;
          cVar3 = *(char *)(lVar1 + -2);
          if (cVar3 != *(char *)(lVar7 + uVar8)) break;
          if (cVar3 == '\0') {
            if (bVar5) {
LAB_03bb386c:
              if (lVar13 != 0) {
                return;
              }
              goto LAB_03bb3870;
            }
            break;
          }
          cVar3 = *(char *)(lVar1 + -1);
          if (cVar3 != *(char *)(lVar7 + uVar8 + 1)) break;
          if (cVar3 == '\0') goto LAB_03bb386c;
          cVar3 = *(char *)(lVar11 + uVar8);
          if (cVar3 != *(char *)(lVar7 + uVar8 + 2)) break;
          if (cVar3 == '\0') goto LAB_03bb386c;
          bVar5 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        lVar13 = *(long *)(lVar13 + lVar12 + 8) - lVar12;
      } while (lVar13 != lVar9 - lVar12);
    }
LAB_03bb3870:
    lVar13 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(0x78);
      puVar4 = PTR_DAT_04bb2020;
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar6 = (undefined8 *)(lVar13 + 8);
        if (lVar12 != 0) {
          puVar6 = (undefined8 *)(lVar12 + 0xa8);
        }
        param_3 = (long *)*puVar6;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x78,8);
      puVar4 = PTR_DAT_04bb2020;
    }
    PTR_DAT_04bb2020 = puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      __dest = (undefined1 *)((long)puVar6 + 0x2c);
      *__dest = 0;
      puVar6[4] = __dest;
      *(undefined4 *)(puVar6 + 5) = 0x20;
      *(undefined1 *)((long)puVar6 + 0x4b) = 0;
      puVar6[2] = &DAT_0407ebb1;
      puVar6[3] = &PTR_LAB_048f9700;
      puVar6[10] = 0;
      *(undefined1 *)(puVar6 + 0xb) = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      *(undefined4 *)(puVar6 + 0xe) = 0;
      *puVar6 = &PTR_LAB_04b7a538;
      puVar6[1] = puVar4 + 0x10;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (undefined1 *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar13 = 0;
        do {
          if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_03bb39bc;
          lVar12 = param_2[1] + lVar13;
          if (*(char *)(lVar12 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_03bb39bc;
          }
          if (*(char *)(lVar12 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_03bb39bc;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_03bb39bc:
        iVar2 = (int)lVar13;
        if (*(int *)(puVar6 + 5) <= (int)lVar13) {
          iVar2 = *(int *)(puVar6 + 5) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        __dest[iVar2] = 0;
      }
      puVar6[2] = puVar6[4];
      lVar13 = *(long *)(param_1 + 0x68);
      plVar10 = (long *)((long)*(int *)(param_1 + 0x7c) + (long)puVar6);
      *(long **)(param_1 + 0x68) = plVar10;
      *plVar10 = lVar13;
      plVar10[1] = lVar9;
      if (lVar13 != 0) {
        *(long **)(lVar13 + 8) = plVar10;
      }
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      if (*(long *)(param_1 + 0x10) != param_1 + 8) {
        lVar13 = (long)*(int *)(param_1 + 0x1c);
        lVar9 = *(long *)(param_1 + 0x10) - lVar13;
        do {
          FUN_03bbf760(lVar9);
          lVar9 = *(long *)(lVar9 + lVar13 + 8) - lVar13;
        } while (lVar9 != (param_1 + 8) - lVar13);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar9 != 0)) &&
         (*(long *)(lVar9 + 8) != lVar9)) {
        lVar7 = (long)*(int *)(lVar9 + 0x14);
        lVar12 = *(long *)(lVar9 + 8) - lVar7;
        lVar13 = lVar12;
        do {
          lVar13 = *(long *)(lVar13 + lVar7 + 8) + -lVar7;
        } while (lVar13 != lVar9 - lVar7);
        do {
          lVar12 = *(long *)(lVar12 + lVar7 + 8) + -lVar7;
        } while (lVar12 != lVar9 - lVar7);
      }
      if (((*(long *)(param_1 + 0x80) != 0) &&
          (lVar9 = *(long *)(*(long *)(param_1 + 0x80) + 8), lVar9 != 0)) &&
         (*(long *)(lVar9 + 8) != lVar9)) {
        lVar7 = (long)*(int *)(lVar9 + 0x14);
        lVar12 = *(long *)(lVar9 + 8) - lVar7;
        lVar13 = lVar12;
        do {
          lVar13 = *(long *)(lVar13 + lVar7 + 8) + -lVar7;
        } while (lVar13 != lVar9 - lVar7);
        do {
          lVar12 = *(long *)(lVar12 + lVar7 + 8) + -lVar7;
        } while (lVar12 != lVar9 - lVar7);
      }
    }
  }
  return;
}

