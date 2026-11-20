
void FUN_03d7dd80(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  if (*(long *)(param_1[9] + 8) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  puVar2 = PTR_DAT_04bc0878;
  uVar1 = *(ushort *)(param_1 + 0xb);
  if ((uVar1 & 1) != 0) {
    plVar6 = (long *)param_1[9];
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 2;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    (**(code **)(plVar6[3] + 0x5a8))(plVar6[1]);
    uVar1 = *(ushort *)(param_1 + 0xb);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar6 = (long *)param_1[9];
    local_40 = puVar2 + 0x10;
    local_38 = 3;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    (**(code **)(plVar6[3] + 0x5b0))(plVar6[1]);
    uVar1 = *(ushort *)(param_1 + 0xb);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    lVar4 = param_1[10];
  }
  else {
    plVar6 = (long *)param_1[9];
    local_40 = puVar2 + 0x10;
    local_38 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    (**(code **)(plVar6[3] + 0x5a0))(plVar6[1]);
    lVar4 = param_1[10];
  }
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) == 0 && *(long *)(lVar4 + 0x10) == 0)) {
    lVar3 = *(long *)(lVar4 + 0x38);
    plVar6 = (long *)(*(int *)(lVar3 + 0x54) + lVar4);
    plVar5 = (long *)(lVar3 + 0x40);
    lVar4 = *plVar5;
    *plVar5 = (long)plVar6;
    *plVar6 = lVar4;
    plVar6[1] = (long)plVar5;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar6;
    }
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
  }
  return;
}

