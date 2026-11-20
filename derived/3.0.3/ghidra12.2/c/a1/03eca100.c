
undefined8 FUN_03eca100(long param_1,int param_2,long param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  
  if (((param_2 != 0) && (param_4 != 0)) &&
     (piVar1 = (int *)(*(long *)(param_1 + 8) + (long)param_2), 0 < *piVar1)) {
    lVar8 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_68 = *(long *)(param_1 + 8) + (long)piVar1[lVar8 + 1] +
                 (long)*(int *)(*(long *)(param_1 + 8) + 0x24);
      piVar3 = (int *)(*(long *)(param_3 + 8) + (long)param_4);
      if (0 < *piVar3) {
        lVar9 = 0;
        local_70 = puVar2;
        do {
          local_78 = *(long *)(param_3 + 8) + (long)piVar3[lVar9 + 1] +
                     (long)*(int *)(*(long *)(param_3 + 8) + 0x24);
          local_80 = &PTR_LAB_048f9770;
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          lVar4 = local_68;
          (*(code *)local_80[3])(&local_80);
          if (lVar4 == local_78) {
            return 1;
          }
          uVar7 = 0;
          bVar6 = true;
          do {
            lVar4 = local_68 + 2 + uVar7;
            cVar5 = *(char *)(lVar4 + -2);
            if (cVar5 != *(char *)(local_78 + uVar7)) break;
            if (cVar5 == '\0') {
              if (bVar6) {
                return 1;
              }
              break;
            }
            cVar5 = *(char *)(lVar4 + -1);
            if (cVar5 != *(char *)(local_78 + uVar7 + 1)) break;
            if (cVar5 == '\0') {
              return 1;
            }
            cVar5 = *(char *)(local_68 + 2 + uVar7);
            if (cVar5 != *(char *)(local_78 + uVar7 + 2)) break;
            if (cVar5 == '\0') {
              return 1;
            }
            bVar6 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar9 = lVar9 + 1;
        } while (lVar9 < *piVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *piVar1);
  }
  return 0;
}

