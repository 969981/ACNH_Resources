
void FUN_0344c550(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *local_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bc0cb8;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar7 = 0;
    lVar8 = *(long *)(param_1 + 0x18);
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    do {
      lVar9 = lVar8 + (long)iVar7 * 0x30;
      iVar3 = *(int *)(lVar9 + 0x20);
      if (-1 < iVar3) {
        *(int *)(lVar9 + 0x20) = iVar3 + -1;
        plVar6 = *(long **)(lVar9 + 8);
        local_68 = 0x14;
        uVar4 = ~(int)(*(float *)(lVar9 + 0x24) * (float)iVar3);
        local_70 = puVar1;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
        (**(code **)(plVar6[3] + 0x158))(plVar6[1],uVar4);
        plVar6 = *(long **)(lVar9 + 0x10);
        if (plVar6 != (long *)0x0) {
          local_70 = puVar5 + 0x10;
          local_68 = 0x14;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
          (**(code **)(plVar6[3] + 0x158))(plVar6[1],uVar4);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  return;
}

