
void FUN_00704ca0(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_70;
  ulong local_68;
  
  lVar10 = *(long *)(param_1 + 0x288);
  if ((lVar10 != 0) && (uVar7 = *(uint *)(lVar10 + 0x10), 0 < (int)uVar7)) {
    uVar8 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar4 = uVar8;
      if (*(uint *)(lVar10 + 0x10) <= uVar8) {
        uVar4 = 0;
      }
      local_68 = *(ulong *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x18) + (ulong)uVar4 * 0x48) +
                                     0x18) + 0x18) & 0xfffffffffffffffe;
      local_70 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar9 = param_2[1];
      (**(code **)(local_70 + 0x18))(&local_70);
      if (uVar9 == local_68) {
LAB_00704dec:
        lVar10 = *(long *)(param_1 + 0x288);
        if (lVar10 == 0) {
          return;
        }
        if (*(uint *)(lVar10 + 0x10) <= uVar8) {
          uVar8 = 0;
        }
        lVar10 = *(long *)(lVar10 + 0x18) + (ulong)uVar8 * 0x48;
        uVar7 = 0;
        if ((param_3 & 1) == 0) {
          uVar7 = 8;
        }
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) & 0xfffffff7 | uVar7;
        return;
      }
      uVar9 = 0;
      bVar6 = true;
      do {
        lVar2 = param_2[1] + 1 + uVar9;
        lVar3 = local_68 + 1 + uVar9;
        cVar5 = *(char *)(lVar2 + -1);
        if (cVar5 != *(char *)(lVar3 + -1)) break;
        if (cVar5 == '\0') {
          if (bVar6) goto LAB_00704dec;
          break;
        }
        cVar5 = *(char *)(param_2[1] + 1 + uVar9);
        if (cVar5 != *(char *)(local_68 + 1 + uVar9)) break;
        if (cVar5 == '\0') goto LAB_00704dec;
        cVar5 = *(char *)(lVar2 + 1);
        if (cVar5 != *(char *)(lVar3 + 1)) break;
        if (cVar5 == '\0') goto LAB_00704dec;
        bVar6 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return;
}

