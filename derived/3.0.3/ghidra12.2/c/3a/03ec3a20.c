
void FUN_03ec3a20(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *local_60;
  undefined8 uStack_58;
  
  if (param_1 != (long *)0x0) {
    if (param_2 != (long *)0x0) {
      iVar3 = (**(code **)(*param_2 + 0x1b0))(param_2);
      puVar2 = PTR_DAT_04bb2020;
      if (0 < iVar3) {
        iVar8 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          uStack_58 = (**(code **)(*param_2 + 0x150))(param_2,iVar8);
          local_60 = puVar1;
          iVar4 = (**(code **)(*param_1 + 0x1e0))(param_1,&local_60);
          if (-1 < iVar4) {
            uVar7 = (**(code **)(*param_2 + 0x120))(param_2,iVar8);
            (**(code **)(*param_1 + 0x58))(param_1,iVar4,uVar7);
          }
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      iVar3 = (**(code **)(*param_2 + 0x1b8))(param_2);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uStack_58 = (**(code **)(*param_2 + 0x158))(param_2,iVar8);
          local_60 = puVar2 + 0x10;
          iVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,&local_60);
          if (-1 < iVar4) {
            uVar5 = (**(code **)(*param_2 + 0x128))(param_2,iVar8);
            (**(code **)(*param_1 + 0x60))(param_1,iVar4,uVar5);
          }
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      iVar3 = (**(code **)(*param_2 + 0x1c0))(param_2);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uStack_58 = (**(code **)(*param_2 + 0x160))(param_2,iVar8);
          local_60 = puVar2 + 0x10;
          iVar4 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_60);
          if (-1 < iVar4) {
            (**(code **)(*param_2 + 0x130))(param_2,iVar8);
            (**(code **)(*param_1 + 0x68))(param_1,iVar4);
          }
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      iVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uStack_58 = (**(code **)(*param_2 + 0x168))(param_2,iVar8);
          local_60 = puVar2 + 0x10;
          iVar4 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_60);
          if (-1 < iVar4) {
            uVar6 = (**(code **)(*param_2 + 0x138))(param_2,iVar8);
            (**(code **)(*param_1 + 0x70))(param_1,iVar4,uVar6 & 1);
          }
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      iVar3 = (**(code **)(*param_2 + 0x1d0))(param_2);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uStack_58 = (**(code **)(*param_2 + 0x170))(param_2,iVar8);
          local_60 = puVar2 + 0x10;
          iVar4 = (**(code **)(*param_1 + 0x200))(param_1,&local_60);
          if (-1 < iVar4) {
            uVar7 = (**(code **)(*param_2 + 0x140))(param_2,iVar8);
            (**(code **)(*param_1 + 0x78))(param_1,iVar4,uVar7);
          }
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
    }
  }
  return;
}

