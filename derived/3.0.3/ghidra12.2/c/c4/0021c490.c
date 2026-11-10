
void FUN_0021c490(long *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 local_5c;
  undefined4 local_54;
  
  FUN_002aaa08();
  plVar3 = (long *)FUN_002ba790(DAT_04c61168);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_002aaa44(param_1);
  if (cVar1 == -3) {
    return;
  }
  lVar5 = FUN_002aaa28(param_1);
  if (lVar5 == *(long *)(lVar4 + 0x40)) {
    return;
  }
  if ((short)param_1[0xc] == 0) {
    local_54 = 0;
    local_5c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
  }
  plVar3 = (long *)FUN_0021c718(param_1,*(undefined1 *)(lVar4 + 0x38));
  lVar5 = FUN_0021c8c8(param_1,*(undefined1 *)(lVar4 + 0x38));
  if (*param_2 == 1) {
    bVar2 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
    bVar2 = bVar2 ^ 1;
    if (*(uint *)((long)param_1 + 0x6c) < 2) {
      bVar2 = (*(uint *)((long)param_1 + 0x7c) & 0xfffffffb) == 0 | bVar2;
    }
    *(undefined4 *)((long)param_1 + 0x7c) = 1;
    if (1 < *(ushort *)(param_1 + 0xc)) {
      iVar8 = 0;
      lVar9 = 0;
      do {
        uVar6 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar9);
        if ((uVar6 & 1) != 0) {
          lVar7 = param_1[10];
          if (lVar7 == 0) {
            local_5c = 0x800000000000000;
            local_54 = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
            lVar7 = param_1[10];
          }
          *(undefined1 *)(lVar7 + lVar9 + 2) = 0;
          memset((void *)(lVar7 + lVar9 + 8),0xff,4);
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x30;
      } while (iVar8 < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      *(undefined1 *)(lVar5 + 1) = 1;
    }
    if ((bVar2 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x7c) = 4;
    }
    if (*plVar3 == *(long *)(lVar4 + 0x40)) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
  }
  else {
    if (*param_2 != 0) {
      return;
    }
    if ((*plVar3 != 0) || ((int)plVar3[1] != 0)) {
      local_54 = 0;
      local_5c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
    }
    *plVar3 = *(long *)(lVar4 + 0x40);
    *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(lVar4 + 0x48);
    uVar6 = (**(code **)(*param_1 + 0x68))(param_1,lVar5);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((1 < *(uint *)((long)param_1 + 0x6c)) && (*(int *)((long)param_1 + 0x7c) != 0)) {
      FUN_0021ca90(param_1);
    }
  }
  local_54 = 0;
  local_5c = 0x400000000000000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
  return;
}

