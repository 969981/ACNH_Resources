
undefined8 FUN_038f2500(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  if ((*(char *)param_2[1] != '\0') && (*(long *)(param_1 + 0xb8) != 0)) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar6 = *(int *)(param_1 + 0xc0);
    if (iVar2 < iVar6) {
      plVar10 = *(long **)(param_1 + 0xa0);
      plVar1 = (long *)(param_1 + 0x98);
      if (plVar10 != plVar1) {
        plVar8 = plVar10 + -6;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar11 = param_2[1];
          (**(code **)(plVar10[-6] + 0x18))(plVar8);
          lVar5 = plVar8[1];
          if (lVar11 == lVar5) {
            return 0;
          }
          uVar7 = 0;
          bVar4 = true;
          do {
            lVar11 = param_2[1] + 2 + uVar7;
            cVar3 = *(char *)(lVar11 + -2);
            if (cVar3 != *(char *)(lVar5 + uVar7)) break;
            if (cVar3 == '\0') {
              if (bVar4) {
                return 0;
              }
              break;
            }
            cVar3 = *(char *)(lVar11 + -1);
            if (cVar3 != *(char *)(lVar5 + uVar7 + 1)) break;
            if (cVar3 == '\0') {
              return 0;
            }
            cVar3 = *(char *)(param_2[1] + 2 + uVar7);
            if (cVar3 != *(char *)(lVar5 + uVar7 + 2)) break;
            if (cVar3 == '\0') {
              return 0;
            }
            bVar4 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          plVar10 = (long *)plVar10[1];
          plVar8 = plVar10 + -6;
        } while (plVar8 != (long *)(param_1 + 0x68));
        iVar2 = *(int *)(param_1 + 0xa8);
        iVar6 = *(int *)(param_1 + 0xc0);
      }
      if (iVar2 < iVar6) {
        puVar9 = *(undefined8 **)(param_1 + 0xb0);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0xb0) = *puVar9;
        }
        FUN_038f1770(puVar9,param_4,param_2,8);
        FUN_038f1770(puVar9 + 3,param_4,param_3,8);
        plVar10 = puVar9 + 6;
        *plVar10 = 0;
        puVar9[7] = 0;
        lVar5 = *plVar1;
        *plVar1 = (long)plVar10;
        *plVar10 = lVar5;
        puVar9[7] = plVar1;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar10;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      }
      return 1;
    }
  }
  return 0;
}

