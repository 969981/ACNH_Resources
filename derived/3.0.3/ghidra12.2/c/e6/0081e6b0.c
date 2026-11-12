
void FUN_0081e6b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((((*(long *)(param_2 + 0x30) != 0) && (*(long *)(param_2 + 0x18) != 0)) &&
      (*(long *)(param_2 + 0x20) != 0)) &&
     (lVar7 = *(long *)(param_2 + 0x10), (*(ushort *)(lVar7 + 6) & 1) == 0)) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0x18);
    plVar1 = (long *)(lVar8 + 0x28);
    pcVar4 = (char *)FUN_03be9dd0(plVar1,"CtrlRumblePattern",lVar7);
    pcVar2 = *(char **)(PTR_PTR_04bb2238 + 8);
    if (pcVar4 != (char *)0x0) {
      pcVar2 = pcVar4;
    }
    if (*pcVar2 == '\0') {
      return;
    }
    lVar5 = **(long **)(param_2 + 0x20);
    if (lVar5 == 0) {
      return;
    }
    if ((int)(*(long **)(param_2 + 0x20))[1] != *(int *)(lVar5 + 0x34)) {
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x38);
    if (lVar8 != 0) {
      plVar3 = (long *)(lVar8 + 0x18) + *(uint *)(lVar8 + 0x10);
      if (1 < *(uint *)(lVar8 + 0x10)) {
        plVar3 = (long *)(lVar8 + 0x18);
      }
      lVar5 = *plVar3;
      uVar6 = lVar7 - *(long *)(lVar5 + 0x28);
      lVar8 = (long)(uVar6 * 0x8000000) >> 0x20;
      if (*(uint *)(lVar5 + 0x78) <= (uint)(uVar6 >> 5)) {
        lVar8 = 0;
      }
      if ((*(byte *)(*(long *)(lVar5 + 0x80) + lVar8 * 8 + 2) & 1) != 0) goto LAB_0081e7ac;
    }
    uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,lVar7);
    if ((uVar6 & 1) != 0) {
LAB_0081e7ac:
      FUN_0081e4b0(param_1,param_2);
      FUN_0081c9d0(param_1,param_2);
      return;
    }
  }
  return;
}

