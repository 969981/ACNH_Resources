
uint FUN_017034d0(long param_1,long *param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  
  lVar4 = *(long *)(param_1 + 0x1138);
  if (lVar4 == 0) {
LAB_017035d0:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(lVar4 + 0x78) != 0) {
      uVar3 = *(uint *)(*(long *)(lVar4 + 0x78) + 0x18);
    }
    if (uVar3 <= param_3) {
      param_3 = 0;
    }
    if (*(uint *)(lVar4 + 0x80) <= param_3) {
      param_3 = 0;
    }
    lVar4 = *(long *)(lVar4 + 0x88) + (long)(int)param_3 * 0xe8;
    plVar7 = (long *)(lVar4 + 0x60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcVar8 = *(char **)(lVar4 + 0x68);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar5 = (char *)param_2[1];
    if (pcVar8 != pcVar5) {
      cVar1 = **(char **)(lVar4 + 0x68);
      if (cVar1 != *pcVar5) goto LAB_017035d0;
      if (cVar1 != '\0') {
        pcVar8 = *(char **)(lVar4 + 0x68) + 2;
        uVar2 = 0;
        do {
          uVar6 = uVar2;
          if (uVar6 == 0x80000) goto LAB_017035f4;
          if (pcVar8[uVar6 - 1] != pcVar5[uVar6 + 1]) {
            pcVar8 = (char *)0x0;
            goto LAB_017035f4;
          }
          if (pcVar8[uVar6 - 1] == '\0') goto LAB_017035c8;
          if (pcVar8[uVar6] != pcVar5[uVar6 + 2]) {
            pcVar8 = (char *)0x0;
            uVar6 = uVar6 | 1;
            goto LAB_017035f4;
          }
          uVar2 = uVar6 + 2;
        } while (pcVar8[uVar6] != '\0');
        uVar6 = uVar6 + 1;
LAB_017035c8:
        pcVar8 = (char *)0x1;
LAB_017035f4:
        return (uint)(uVar6 < 0x80000) & (uint)pcVar8;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

