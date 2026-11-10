
void FUN_002e0a40(int *param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_1a8;
  ErrorResultVariant aEStack_1a4 [324];
  undefined4 local_54;
  
  plVar6 = *(long **)(param_2 + 0x88);
  if (plVar6[2] != 0) {
    lVar3 = *plVar6;
    plVar8 = (long *)plVar6[1];
    lVar4 = *plVar8;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    plVar6[2] = 0;
    while (plVar8 != plVar6) {
      plVar7 = (long *)plVar8[1];
      (**(code **)plVar8[2])();
      FUN_00187e4c(plVar8);
      plVar8 = plVar7;
    }
  }
  if (param_4 != 0) {
    iVar5 = 0;
    puVar1 = PTR_DAT_04bce978 + 0x10;
    do {
      uVar2 = FUN_0030bfe0(param_3);
      if ((uVar2 & 1) == 0) {
        local_1a8 = 0x10c07;
        goto LAB_002e0b84;
      }
      FUN_00313c68(&local_1a8);
      FUN_0030b300(param_1,param_3,&local_1a8,*(undefined8 *)(param_2 + 0x130),
                   *(undefined8 *)(param_2 + 0xb0),0,iVar5);
      if (*param_1 != 0) {
        FUN_002e2680(&local_1a8);
        return;
      }
      plVar8 = *(long **)(param_2 + 0x88);
      plVar6 = (long *)FUN_00187df4(0x158);
      *plVar6 = 0;
      FUN_002e78f0(plVar6 + 2,&local_1a8);
      plVar6[1] = (long)plVar8;
      plVar6[2] = (long)puVar1;
      lVar3 = *plVar8;
      param_3 = param_3 + 0xd38;
      *plVar6 = lVar3;
      *(long **)(lVar3 + 8) = plVar6;
      *plVar8 = (long)plVar6;
      plVar8[2] = plVar8[2] + 1;
      FUN_002e2680(&local_1a8);
      iVar5 = iVar5 + 1;
    } while (param_4 != iVar5);
  }
  local_1a8 = 0;
LAB_002e0b84:
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_1a4,(Result *)&local_54);
  FUN_002296c4(param_1,&local_1a8);
  return;
}

