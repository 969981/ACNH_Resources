
undefined8 FUN_03eca2f0(long param_1,int param_2,uint *param_3)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_04bb2020;
  if (param_2 != 0) {
    uVar4 = *param_3;
    uVar8 = (ulong)uVar4;
    if (((uVar4 != 0) && (piVar1 = (int *)(*(long *)(param_1 + 8) + (long)param_2), 0 < *piVar1)) &&
       (0 < (int)uVar4)) {
      lVar9 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_68 = *(long *)(param_1 + 8) + (long)piVar1[lVar9 + 1] +
                   (long)*(int *)(*(long *)(param_1 + 8) + 0x24);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          local_70 = puVar2;
          do {
            if (uVar10 < (uVar8 & 0xffffffff)) {
              local_78 = *(long *)(*(long *)(param_3 + 2) + uVar10 * 8);
            }
            else {
              local_78 = 0;
            }
            local_80 = puVar6 + 0x10;
            (**(code **)(local_70 + 0x18))(&local_70);
            (**(code **)(local_70 + 0x18))(&local_70);
            lVar3 = local_68;
            (**(code **)(local_80 + 0x18))(&local_80);
            if (lVar3 == local_78) {
              return 1;
            }
            uVar8 = 0;
            bVar7 = true;
            do {
              lVar3 = local_68 + 2 + uVar8;
              cVar5 = *(char *)(lVar3 + -2);
              if (cVar5 != *(char *)(local_78 + uVar8)) break;
              if (cVar5 == '\0') {
                if (bVar7) {
                  return 1;
                }
                break;
              }
              cVar5 = *(char *)(lVar3 + -1);
              if (cVar5 != *(char *)(local_78 + uVar8 + 1)) break;
              if (cVar5 == '\0') {
                return 1;
              }
              cVar5 = *(char *)(local_68 + 2 + uVar8);
              if (cVar5 != *(char *)(local_78 + uVar8 + 2)) break;
              if (cVar5 == '\0') {
                return 1;
              }
              bVar7 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            uVar8 = (ulong)(int)*param_3;
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)uVar8);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *piVar1);
    }
  }
  return 0;
}

