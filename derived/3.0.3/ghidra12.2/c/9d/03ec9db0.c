
undefined8 FUN_03ec9db0(long param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *local_70;
  long local_68;
  
  lVar5 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar5 + 0x14)) {
    lVar7 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      piVar2 = (int *)(lVar5 + *(int *)(*(long *)(param_1 + 0x28) + lVar7 * 4));
      if (0 < *piVar2) {
        lVar5 = 0;
        do {
          local_68 = *(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 8) + 0x24) +
                     (long)piVar2[lVar5 * 6 + 2];
          local_70 = puVar1;
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          (**(code **)(local_70 + 0x18))(&local_70);
          if (lVar8 == local_68) {
            return 1;
          }
          uVar6 = 0;
          bVar4 = true;
          do {
            lVar8 = param_2[1] + 2 + uVar6;
            cVar3 = *(char *)(lVar8 + -2);
            if (cVar3 != *(char *)(local_68 + uVar6)) break;
            if (cVar3 == '\0') {
              if (bVar4) {
                return 1;
              }
              break;
            }
            cVar3 = *(char *)(lVar8 + -1);
            if (cVar3 != *(char *)(local_68 + uVar6 + 1)) break;
            if (cVar3 == '\0') {
              return 1;
            }
            cVar3 = *(char *)(param_2[1] + 2 + uVar6);
            if (cVar3 != *(char *)(local_68 + uVar6 + 2)) break;
            if (cVar3 == '\0') {
              return 1;
            }
            bVar4 = uVar6 < 0x7fffe;
            uVar6 = uVar6 + 3;
          } while (uVar6 != 0x80001);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *piVar2);
        lVar5 = *(long *)(param_1 + 8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar5 + 0x14));
  }
  return 0;
}

