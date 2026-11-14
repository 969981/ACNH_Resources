
void FUN_01619948(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined **local_60;
  undefined1 local_58;
  undefined *local_50;
  long lStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar5 = *(long *)(param_2 + 0x340);
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x698);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar4 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x698,8);
    }
  }
  FUN_016212e0(plVar3);
  local_50 = PTR_DAT_04bb2020;
  local_60 = &PTR_LAB_049b3df8;
  local_58 = 1;
  lStack_48 = *(long *)(param_1 + 8);
  *(undefined1 *)(plVar3 + 7) = 1;
  local_50 = local_50 + 0x10;
  local_40 = 0xffffffff;
  plVar3[2] = lStack_48;
  if (lVar5 != 0) {
    lVar4 = plVar3[6];
    plVar1 = plVar3 + 3;
    plVar3[8] = lVar5;
    if (lVar4 != 0) {
      plVar3[6] = 0;
      if (plVar3[3] != 0) {
        *(long *)(plVar3[3] + 8) = plVar3[4];
      }
      if ((long *)plVar3[4] != (long *)0x0) {
        *(long *)plVar3[4] = *plVar1;
      }
      *plVar1 = 0;
      plVar3[4] = 0;
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
    plVar3[6] = lVar5 + 0x10;
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long **)(lVar5 + 0x10) = plVar1;
    plVar3[3] = lVar4;
    plVar3[4] = lVar5 + 0x10;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  }
  local_38 = lVar5;
  (**(code **)(*plVar3 + 0xa8))(plVar3,&local_60,0);
  if (*(long *)(param_2 + 0x60) == 0) {
    lVar4 = *(long *)(param_2 + 0x340);
    *(long **)(param_2 + 0x60) = plVar3;
    if (lVar4 != 0) {
      lVar5 = plVar3[6];
      plVar1 = plVar3 + 3;
      plVar3[8] = lVar4;
      if (lVar5 != 0) {
        plVar3[6] = 0;
        if (plVar3[3] != 0) {
          *(long *)(plVar3[3] + 8) = plVar3[4];
        }
        if ((long *)plVar3[4] != (long *)0x0) {
          *(long *)plVar3[4] = *plVar1;
        }
        *plVar1 = 0;
        plVar3[4] = 0;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      }
      plVar3[6] = lVar4 + 0x10;
      lVar5 = *(long *)(lVar4 + 0x10);
      *(long **)(lVar4 + 0x10) = plVar1;
      plVar3[3] = lVar5;
      plVar3[4] = lVar4 + 0x10;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    }
  }
  else {
    (**(code **)(*plVar3 + 0xa0))(plVar3);
  }
  return;
}

