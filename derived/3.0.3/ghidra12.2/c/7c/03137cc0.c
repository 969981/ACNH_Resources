
void FUN_03137cc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *local_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bb2da0;
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar5 = (long)*(int *)(param_1 + 0x1c);
    lVar6 = *(long *)(param_1 + 0x10) - lVar5;
    puVar1 = PTR_DAT_04bc0878 + 0x10;
    do {
      lVar3 = *(long *)(lVar6 + 0x260);
      if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0x48), plVar4[1] != 0)) {
        local_68 = 9;
        local_70 = puVar1;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
        (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],puVar2,0);
        FUN_03d7dd80(lVar3);
      }
      lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    } while (lVar6 != (param_1 + 8) - lVar5);
  }
  lVar6 = *(long *)(param_1 + 0x50);
  if ((lVar6 != 0) && (plVar4 = *(long **)(lVar6 + 0x48), plVar4[1] != 0)) {
    local_68 = 9;
    local_70 = PTR_DAT_04bc0878 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
    (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x58);
  if ((lVar6 != 0) && (plVar4 = *(long **)(lVar6 + 0x48), plVar4[1] != 0)) {
    local_68 = 9;
    local_70 = PTR_DAT_04bc0878 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
    (**(code **)(plVar4[3] + 0x5e0))(plVar4[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar6);
  }
  return;
}

