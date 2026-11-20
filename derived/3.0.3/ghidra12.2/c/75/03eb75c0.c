
undefined8 FUN_03eb75c0(int *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined *local_70;
  long local_68;
  
  puVar4 = PTR_DAT_04bb2640;
  if (param_2 < 0) {
    return 1;
  }
  plVar11 = *(long **)PTR_DAT_04bb2640;
  iVar6 = (**(code **)(*plVar11 + 0x10))(plVar11);
  if (((param_2 < iVar6) && (lVar7 = (**(code **)(*plVar11 + 0x18))(plVar11,param_2), lVar7 != 0))
     && (*(long *)(lVar7 + 8) != 0)) {
    if ((*param_1 == 2) || (uVar9 = param_1[0xc], (int)uVar9 < 1)) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        plVar11 = *(long **)puVar4;
        uVar2 = uVar12;
        if (uVar9 <= uVar12) {
          uVar2 = 0;
        }
        lVar7 = *(long *)(param_1 + 0xe);
        iVar6 = (**(code **)(*plVar11 + 0x10))(plVar11);
        if (param_2 < iVar6) {
          plVar11 = (long *)(**(code **)(*plVar11 + 0x18))(plVar11,param_2);
          local_68 = *plVar11;
        }
        else {
          local_68 = 0;
        }
        plVar11 = (long *)(lVar7 + (ulong)uVar2 * 0x38);
        local_70 = puVar1;
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar7 = plVar11[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (lVar7 == local_68) goto LAB_03eb7790;
        uVar10 = 0;
        bVar5 = true;
        do {
          lVar7 = plVar11[1] + 2 + uVar10;
          cVar3 = *(char *)(lVar7 + -2);
          if (cVar3 != *(char *)(local_68 + uVar10)) break;
          if (cVar3 == '\0') {
            if (bVar5) goto LAB_03eb7790;
            break;
          }
          cVar3 = *(char *)(lVar7 + -1);
          if (cVar3 != *(char *)(local_68 + uVar10 + 1)) break;
          if (cVar3 == '\0') goto LAB_03eb7790;
          cVar3 = *(char *)(plVar11[1] + 2 + uVar10);
          if (cVar3 != *(char *)(local_68 + uVar10 + 2)) break;
          if (cVar3 == '\0') goto LAB_03eb7790;
          bVar5 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        uVar9 = param_1[0xc];
        uVar12 = uVar12 + 1;
        uVar8 = 0;
      } while ((int)uVar12 < (int)uVar9);
    }
  }
  else {
LAB_03eb7790:
    uVar8 = 1;
  }
  return uVar8;
}

