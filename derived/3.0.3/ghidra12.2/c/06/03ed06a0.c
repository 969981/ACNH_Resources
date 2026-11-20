
undefined8 FUN_03ed06a0(long param_1,uint *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  
  puVar3 = PTR_DAT_04bb2020;
  uVar5 = (ulong)*param_2;
  if (*param_2 == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar7 = (ulong)*(ushort *)(param_1 + 10);
  iVar8 = *(int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x24 + 4);
  if (iVar8 != 0) {
    lVar10 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar9 = *(long *)(lVar6 + 8);
      if (*(int *)(lVar9 + iVar8) <= lVar10) {
        return 0;
      }
      local_68 = lVar9 + *(int *)(lVar9 + 0x24) + (long)((int *)(lVar9 + iVar8))[lVar10 + 1];
      if (0 < (int)uVar5) {
        uVar7 = 0;
        local_70 = puVar1;
        do {
          if (uVar7 < (uVar5 & 0xffffffff)) {
            local_78 = *(long *)(*(long *)(param_2 + 2) + uVar7 * 8);
          }
          else {
            local_78 = 0;
          }
          local_80 = puVar3 + 0x10;
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          lVar6 = local_68;
          (**(code **)(local_80 + 0x18))(&local_80);
          if (lVar6 == local_78) {
            return 1;
          }
          uVar5 = 0;
          bVar4 = true;
          do {
            lVar6 = local_68 + 2 + uVar5;
            cVar2 = *(char *)(lVar6 + -2);
            if (cVar2 != *(char *)(local_78 + uVar5)) break;
            if (cVar2 == '\0') {
              if (bVar4) {
                return 1;
              }
              break;
            }
            cVar2 = *(char *)(lVar6 + -1);
            if (cVar2 != *(char *)(local_78 + uVar5 + 1)) break;
            if (cVar2 == '\0') {
              return 1;
            }
            cVar2 = *(char *)(local_68 + 2 + uVar5);
            if (cVar2 != *(char *)(local_78 + uVar5 + 2)) break;
            if (cVar2 == '\0') {
              return 1;
            }
            bVar4 = uVar5 < 0x7fffe;
            uVar5 = uVar5 + 3;
          } while (uVar5 != 0x80001);
          uVar5 = (ulong)(int)*param_2;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)uVar5);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar7 = (ulong)*(ushort *)(param_1 + 10);
      }
      lVar10 = lVar10 + 1;
      iVar8 = *(int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x24 + 4);
    } while (iVar8 != 0);
  }
  return 0;
}

