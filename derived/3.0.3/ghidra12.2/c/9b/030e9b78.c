
void FUN_030e9b78(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined **local_50;
  undefined4 local_48;
  
  DAT_056efe9c = 1;
  DAT_056efe98 = 1;
  lVar2 = param_1 + 0x228 + (ulong)param_2 * 0x30;
  if (5 < param_2) {
    lVar2 = param_1 + 0x228;
  }
  plVar3 = (long *)(lVar2 + *(int *)(param_1 + 0x364));
  if (plVar3[1] == 0 && *plVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x360);
    if ((int)uVar1 < 3) {
      plVar3 = (long *)(param_1 + 0x370) + uVar1;
      if (2 < uVar1) {
        plVar3 = (long *)(param_1 + 0x370);
      }
      *(undefined8 *)(lVar2 + 8) = **(undefined8 **)(*plVar3 + 0x220);
      plVar3 = (long *)**(undefined8 **)(*plVar3 + 0x230);
      if (plVar3 != (long *)0x0) {
        if (5 < param_2) {
          param_2 = 0;
        }
        iVar4 = (&DAT_04183d70)[(int)param_2];
        local_50 = &PTR_LAB_04aa7fe0;
        local_48 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
        (**(code **)(plVar3[3] + 0x158))((float)iVar4,plVar3[1]);
      }
      if (*(int *)(param_1 + 0x360) != 0) {
        DAT_056efe98 = 0;
      }
      plVar3 = (long *)(*(int *)(param_1 + 0x364) + lVar2);
      lVar2 = *(long *)(param_1 + 0x350);
      *(long **)(param_1 + 0x350) = plVar3;
      *plVar3 = lVar2;
      plVar3[1] = param_1 + 0x350;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar3;
      }
      *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
    }
  }
  return;
}

