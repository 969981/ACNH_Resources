
void FUN_03bb3010(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (*(char *)param_2[1] != '\0') {
    lVar8 = param_1 + 0x28;
    if (*(long *)(param_1 + 0x30) != lVar8) {
      lVar11 = (long)*(int *)(param_1 + 0x3c);
      lVar12 = *(long *)(param_1 + 0x30) - lVar11;
      do {
        plVar9 = (long *)(lVar12 + 8);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        lVar10 = *(long *)(lVar12 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = param_2[1];
        if (lVar10 == lVar6) {
          return;
        }
        uVar7 = 0;
        bVar4 = true;
        lVar10 = *(long *)(lVar12 + 0x10) + 2;
        do {
          lVar1 = lVar10 + uVar7;
          cVar3 = *(char *)(lVar1 + -2);
          if (cVar3 != *(char *)(lVar6 + uVar7)) break;
          if (cVar3 == '\0') {
            if (bVar4) {
LAB_03bb314c:
              if (lVar12 != 0) {
                return;
              }
              goto LAB_03bb3150;
            }
            break;
          }
          cVar3 = *(char *)(lVar1 + -1);
          if (cVar3 != *(char *)(lVar6 + uVar7 + 1)) break;
          if (cVar3 == '\0') goto LAB_03bb314c;
          cVar3 = *(char *)(lVar10 + uVar7);
          if (cVar3 != *(char *)(lVar6 + uVar7 + 2)) break;
          if (cVar3 == '\0') goto LAB_03bb314c;
          bVar4 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
      } while (lVar12 != lVar8 - lVar11);
    }
LAB_03bb3150:
    lVar12 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar5 = malloc(0x108);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar12 + 8);
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x108,8);
    }
    if (pvVar5 != (void *)0x0) {
      FUN_03bb9630(pvVar5,param_2);
      plVar9 = (long *)((long)*(int *)(param_1 + 0x3c) + (long)pvVar5);
      lVar12 = *(long *)(param_1 + 0x28);
      *(long **)(param_1 + 0x28) = plVar9;
      *plVar9 = lVar12;
      plVar9[1] = lVar8;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar9;
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (*(long *)(param_1 + 0x10) != param_1 + 8) {
        lVar12 = (long)*(int *)(param_1 + 0x1c);
        lVar8 = *(long *)(param_1 + 0x10) - lVar12;
        do {
          FUN_03bbf760(lVar8);
          lVar8 = *(long *)(lVar8 + lVar12 + 8) - lVar12;
        } while (lVar8 != (param_1 + 8) - lVar12);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar8 != 0)) &&
         (*(long *)(lVar8 + 8) != lVar8)) {
        lVar6 = (long)*(int *)(lVar8 + 0x14);
        lVar11 = *(long *)(lVar8 + 8) - lVar6;
        lVar12 = lVar11;
        do {
          lVar12 = *(long *)(lVar12 + lVar6 + 8) + -lVar6;
        } while (lVar12 != lVar8 - lVar6);
        do {
          lVar11 = *(long *)(lVar11 + lVar6 + 8) + -lVar6;
        } while (lVar11 != lVar8 - lVar6);
      }
      if (((*(long *)(param_1 + 0x40) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8), lVar8 != 0)) &&
         (*(long *)(lVar8 + 8) != lVar8)) {
        lVar6 = (long)*(int *)(lVar8 + 0x14);
        lVar11 = *(long *)(lVar8 + 8) - lVar6;
        lVar12 = lVar11;
        do {
          lVar12 = *(long *)(lVar12 + lVar6 + 8) + -lVar6;
        } while (lVar12 != lVar8 - lVar6);
        do {
          lVar11 = *(long *)(lVar11 + lVar6 + 8) + -lVar6;
        } while (lVar11 != lVar8 - lVar6);
      }
    }
  }
  return;
}

