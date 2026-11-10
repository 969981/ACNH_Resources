
void FUN_003175e0(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined **local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2[2] != 0) {
    lVar2 = *param_2;
    plVar3 = (long *)param_2[1];
    lVar6 = *plVar3;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar6;
    param_2[2] = 0;
    while (plVar3 != param_2) {
      plVar7 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar7;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar2 + 0x18) - lVar6) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar6);
    *(long *)(param_1 + 0x18) = lVar6 + 4;
    if (iVar4 != 0) {
      iVar8 = 0;
      ppuVar1 = (undefined **)(PTR_DAT_04bcc9e8 + 0x10);
      while (*(char *)(param_1 + 8) == '\0') {
        local_d0 = 1;
        local_b0 = 0;
        local_a8 = &PTR_LAB_04a426b8;
        local_a0[0] = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        uStack_88 = 0x10;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        local_d8 = ppuVar1;
        local_90 = local_a0;
        puStack_78 = &local_70;
        FUN_001fdad0(param_1,&local_d8);
        cVar5 = *(char *)(param_1 + 8);
        if (cVar5 == '\0') {
          FUN_00317800(param_2,&local_d8);
        }
        else if (param_2[2] != 0) {
          lVar2 = *param_2;
          plVar3 = (long *)param_2[1];
          lVar6 = *plVar3;
          *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar2 + 8);
          **(long **)(lVar2 + 8) = lVar6;
          param_2[2] = 0;
          while (plVar3 != param_2) {
            plVar7 = (long *)plVar3[1];
            (**(code **)plVar3[2])();
            FUN_00187e4c(plVar3);
            plVar3 = plVar7;
          }
        }
        local_d8 = &PTR_FUN_0483e618;
        FUN_00202558(&puStack_78,local_70);
        local_a8 = &PTR_LAB_04a426b8;
        FUN_0018b1a0(&local_a8);
        if (cVar5 != '\0') {
          return;
        }
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar4) {
          return;
        }
      }
    }
  }
  return;
}

