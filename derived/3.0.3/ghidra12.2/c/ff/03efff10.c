
uint FUN_03efff10(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong local_68;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar3 = uVar7;
      if (*(uint *)(param_1 + 0x10) <= uVar7) {
        uVar3 = 0;
      }
      local_68 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x48) +
                                     0x18) + 0x18) & 0xfffffffffffffffe;
      local_70 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar8 = param_2[1];
      (**(code **)(local_70 + 0x18))(&local_70);
      if (uVar8 == local_68) {
        return uVar7;
      }
      uVar8 = 0;
      bVar6 = true;
      do {
        lVar2 = param_2[1] + 2 + uVar8;
        cVar5 = *(char *)(lVar2 + -2);
        if (cVar5 != *(char *)(local_68 + uVar8)) break;
        if (cVar5 == '\0') {
          if (bVar6) {
            return uVar7;
          }
          break;
        }
        cVar5 = *(char *)(lVar2 + -1);
        if (cVar5 != *(char *)(local_68 + uVar8 + 1)) break;
        if (cVar5 == '\0') {
          return uVar7;
        }
        cVar5 = *(char *)(param_2[1] + 2 + uVar8);
        if (cVar5 != *(char *)(local_68 + uVar8 + 2)) break;
        if (cVar5 == '\0') {
          return uVar7;
        }
        bVar6 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  return 0xffffffff;
}

