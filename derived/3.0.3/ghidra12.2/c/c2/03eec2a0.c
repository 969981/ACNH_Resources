
uint FUN_03eec2a0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined *local_70;
  long local_68;
  
  uVar3 = *(uint *)(param_1 + 0x290);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar2 = uVar7;
      if (*(uint *)(param_1 + 0x2e0) <= uVar7) {
        uVar2 = 0;
      }
      uVar2 = *(uint *)(*(long *)(param_1 + 0x2e8) + (ulong)uVar2 * 0xd0 + 0x48);
      if (*(uint *)(param_1 + 0x100) <= uVar2) {
        uVar2 = 0;
      }
      lVar8 = *(long *)(param_1 + 0x108) + (long)(int)uVar2 * 0x58;
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      local_68 = *(long *)(lVar8 + 0x50);
      local_70 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = param_2[1];
      (**(code **)(local_70 + 0x18))(&local_70);
      if (lVar8 == local_68) {
        return uVar7;
      }
      uVar6 = 0;
      bVar5 = true;
      do {
        lVar8 = param_2[1] + 2 + uVar6;
        cVar4 = *(char *)(lVar8 + -2);
        if (cVar4 != *(char *)(local_68 + uVar6)) break;
        if (cVar4 == '\0') {
          if (bVar5) {
            return uVar7;
          }
          break;
        }
        cVar4 = *(char *)(lVar8 + -1);
        if (cVar4 != *(char *)(local_68 + uVar6 + 1)) break;
        if (cVar4 == '\0') {
          return uVar7;
        }
        cVar4 = *(char *)(param_2[1] + 2 + uVar6);
        if (cVar4 != *(char *)(local_68 + uVar6 + 2)) break;
        if (cVar4 == '\0') {
          return uVar7;
        }
        bVar5 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  return 0xffffffff;
}

