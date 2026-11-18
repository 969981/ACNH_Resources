
void FUN_034660f0(long param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  undefined *local_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    iVar1 = *param_3;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 != -1) {
      iVar7 = 0;
      iVar4 = 0;
      param_2 = param_2 + 8;
      do {
        lVar3 = param_2 + (long)iVar4 * 0x30;
        if (((*(ushort *)(lVar3 + 4) & 1) == 0) &&
           (piVar5 = (int *)(param_2 + (long)iVar4 * 0x30 + 0x20), *piVar5 == -1)) {
          *piVar5 = iVar1;
          param_2 = param_2 + (long)iVar4 * 0x30;
          *(undefined1 *)(param_2 + 0x24) = 1;
          puVar2 = PTR_DAT_04bb2200;
          *(undefined4 *)(param_2 + 0x28) = 1;
          FUN_015d7b58(*(undefined8 *)(*(long *)puVar2 + 0x140),lVar3,(int *)(param_1 + 0x30),0,0);
          plVar6 = *(long **)(param_1 + 0x28);
          *(int *)(param_1 + 0x34) = iVar7;
          *(undefined4 *)(param_1 + 0x38) = 1;
          if (plVar6 == (long *)0x0) {
            return;
          }
          if (plVar6[1] == 0) {
            return;
          }
          local_40 = PTR_DAT_04bc0cb8 + 0x10;
          local_38 = 0x14;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
          (**(code **)(plVar6[3] + 0x158))(plVar6[1],0);
          return;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar7 != 0x40);
    }
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  return;
}

