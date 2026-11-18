
void FUN_034b0ef4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **local_40;
  undefined4 local_38;
  
  lVar2 = 0x18;
  if (*(uint *)(param_2 + 0x228) < 4) {
    lVar2 = 0;
  }
  plVar4 = *(long **)(*(long *)(param_2 + 0x230) + lVar2);
  if (plVar4 != (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1ce7c);
    local_40 = &PTR_LAB_04aa7fe0;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))((float)iVar1,plVar4[1]);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x228) + 0x5c8);
  if ((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x1070), *(int *)(lVar2 + 0x18) != 0)) &&
      (lVar3 = *(long *)(lVar2 + 0x10) - (long)*(int *)(lVar2 + 0x1c),
      *(long *)(lVar2 + 0x10) != 0 && lVar3 != 0)) &&
     (plVar4 = *(long **)(lVar3 + 0x218), plVar4 != (long *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x1ce7c);
    local_40 = &PTR_LAB_04aa7fe0;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))((float)iVar1,plVar4[1]);
  }
  return;
}

