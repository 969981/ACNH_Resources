
long FUN_03a4e250(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined *local_70;
  char *local_68;
  
  uVar10 = *(uint *)(param_1 + 0x5c650);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = PTR_DAT_04bb2120;
  lVar1 = param_1 + 0x5b150;
  if (uVar10 == 0xffffffff) {
    lVar11 = 0;
    uVar10 = 0;
    pcVar9 = PTR_DAT_04bb2120;
    do {
      lVar7 = lVar1 + lVar11 * 0x50;
      plVar8 = (long *)(lVar7 + 0x18);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar6 = *(long *)(lVar7 + 0x20);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      pcVar3 = *(char **)(lVar7 + 0x20);
      if (lVar6 == lVar4) {
LAB_03a4e344:
        uVar10 = (uint)lVar11;
        pcVar9 = pcVar3;
        local_68 = pcVar3;
      }
      else {
        uVar5 = 0;
        bVar2 = true;
        do {
          if (pcVar3[uVar5] != *(char *)(lVar4 + uVar5)) break;
          if (pcVar3[uVar5] == '\0') {
            if (bVar2) goto LAB_03a4e344;
            break;
          }
          if (pcVar3[uVar5 + 1] != *(char *)(lVar4 + uVar5 + 1)) break;
          if (pcVar3[uVar5 + 1] == '\0') goto LAB_03a4e344;
          if (pcVar3[uVar5 + 2] != *(char *)(lVar4 + uVar5 + 2)) break;
          if (pcVar3[uVar5 + 2] == '\0') goto LAB_03a4e344;
          bVar2 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x20);
  }
  else {
    lVar11 = lVar1 + (ulong)uVar10 * 0x50;
    if (0x1f < uVar10) {
      lVar11 = lVar1;
    }
    pcVar9 = *(char **)(lVar11 + 0x20);
    local_68 = pcVar9;
  }
  if (*pcVar9 == '\0') {
    uVar10 = 0;
    local_68 = *(char **)(param_1 + 0x5b170);
  }
  FUN_03a4e420(param_1,&local_70);
  lVar1 = param_1 + 0x250 + (ulong)uVar10 * 0x2d78;
  if (0x1f < uVar10) {
    lVar1 = param_1 + 0x250;
  }
  return lVar1;
}

