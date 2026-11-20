
uint FUN_03f086b0(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *local_70;
  undefined1 *local_68;
  
  if (param_2 == (undefined1 *)0x0) {
LAB_03f08848:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar8) {
      uVar7 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar3 = uVar7;
        if (*(uint *)(param_1 + 0x20) <= uVar7) {
          uVar3 = 0;
        }
        lVar11 = *(long *)(param_1 + 0x28) + (ulong)uVar3 * 0x228;
        plVar9 = (long *)(lVar11 + 0x48);
        local_70 = puVar1;
        local_68 = param_2;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        plVar9 = (long *)(lVar11 + 0x50);
        puVar10 = (undefined1 *)*plVar9;
        (**(code **)(local_70 + 0x18))(&local_70);
        if (puVar10 == local_68) {
          return uVar7;
        }
        uVar6 = 0;
        bVar5 = true;
        lVar11 = *plVar9 + 2;
        do {
          lVar2 = lVar11 + uVar6;
          cVar4 = *(char *)(lVar2 + -2);
          if (cVar4 != local_68[uVar6]) break;
          if (cVar4 == '\0') {
            if (bVar5) {
              return uVar7;
            }
            break;
          }
          cVar4 = *(char *)(lVar2 + -1);
          if (cVar4 != local_68[uVar6 + 1]) break;
          if (cVar4 == '\0') {
            return uVar7;
          }
          cVar4 = *(char *)(lVar11 + uVar6);
          if (cVar4 != local_68[uVar6 + 2]) break;
          if (cVar4 == '\0') {
            return uVar7;
          }
          bVar5 = uVar6 < 0x7fffe;
          uVar6 = uVar6 + 3;
        } while (uVar6 != 0x80001);
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    if (param_2 == &DAT_040b335f) {
LAB_03f08840:
      uVar8 = 0xfffffffe;
    }
    else {
      uVar6 = 0;
      bVar5 = true;
      uVar8 = 0xffffffff;
      do {
        if (param_2[uVar6] != (&DAT_040b335f)[uVar6]) {
          return 0xffffffff;
        }
        if (param_2[uVar6] == '\0') {
          if (bVar5) goto LAB_03f08840;
          goto LAB_03f08848;
        }
        bVar5 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
    }
  }
  return uVar8;
}

