
bool FUN_0025ddf0(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined1 *local_68;
  undefined4 local_60 [8];
  
  local_60[0] = 0;
  local_68 = &DAT_00000010;
  FUN_00220138(param_2 + 8,&local_68);
  plVar7 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x310);
  (**(code **)(*plVar7 + 0x30))(plVar7,param_2 + 8);
  iVar8 = *(int *)(param_1 + 0x188);
  if (0 < iVar8) {
    puVar1 = PTR_DAT_04bcba18 + 0x10;
    do {
      lVar6 = *(long *)(param_1 + 0x178);
      if (0 < *(int *)(param_1 + 0x188)) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x184)) {
          iVar3 = *(int *)(param_1 + 0x180);
        }
        lVar6 = lVar6 + (long)(*(int *)(param_1 + 0x184) - iVar3) * 0x28;
      }
      FUN_0022726c(&local_68,lVar6);
      if (0 < *(int *)(param_1 + 0x188)) {
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
        iVar3 = 0;
        if (*(int *)(param_1 + 0x184) + 1 < *(int *)(param_1 + 0x180)) {
          iVar3 = *(int *)(param_1 + 0x184) + 1;
        }
        *(int *)(param_1 + 0x184) = iVar3;
      }
      uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,local_60);
      if ((uVar5 & 1) != 0) {
        iVar3 = *(int *)(param_1 + 0x188);
        iVar4 = *(int *)(param_1 + 0x180);
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0x188) = iVar3 + 1;
          iVar3 = *(int *)(param_1 + 0x184) + iVar3;
          iVar2 = 0;
          if (iVar4 <= iVar3) {
            iVar2 = iVar4;
          }
          FUN_00227418(*(long *)(param_1 + 0x178) + (long)(iVar3 - iVar2) * 0x28,&local_68);
        }
      }
      local_68 = puVar1;
      FUN_0021f584(local_60);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = *(int *)(param_1 + 0x188);
  }
  iVar3 = *(int *)(param_1 + 0x180);
  if (iVar8 < iVar3) {
    *(int *)(param_1 + 0x188) = iVar8 + 1;
    iVar4 = *(int *)(param_1 + 0x184) + iVar8;
    iVar2 = 0;
    if (iVar3 <= iVar4) {
      iVar2 = iVar3;
    }
    FUN_00227418(*(long *)(param_1 + 0x178) + (long)(iVar4 - iVar2) * 0x28,param_2);
  }
  return iVar8 < iVar3;
}

