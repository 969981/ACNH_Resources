
void FUN_03d66690(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *local_70;
  undefined4 local_68;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x1b0) + 0x18) = 0;
    if (*(long *)(param_1 + 0x1c0) != 0) {
      *(long *)(*(long *)(param_1 + 0x1b0) + 0x10) = *(long *)(param_1 + 0x1c0);
    }
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x88))();
    *(undefined1 *)(*(long *)(param_1 + 0x1b0) + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_03d675d0();
  }
  lVar4 = *(long *)(param_1 + 0x1d8);
  if (*(long *)(lVar4 + 8) != lVar4) {
    lVar7 = (long)*(int *)(lVar4 + 0x14);
    plVar5 = (long *)(*(long *)(lVar4 + 8) - lVar7);
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    do {
      plVar6 = (long *)plVar5[9];
      if (plVar6[1] == 0) {
        uVar2 = *(ushort *)(plVar5 + 0xb) & 0xfffc;
      }
      else {
        local_68 = 0x2e;
        local_70 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
        uVar2 = (**(code **)(plVar6[3] + 0x300))(plVar6[1]);
        local_68 = 0x30;
        plVar6 = (long *)plVar5[9];
        *(ushort *)(plVar5 + 0xb) = *(ushort *)(plVar5 + 0xb) & 0xfffe | uVar2 & 1;
        local_70 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
        uVar3 = (**(code **)(plVar6[3] + 800))(plVar6[1]);
        uVar2 = 2;
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        uVar2 = *(ushort *)(plVar5 + 0xb) & 0xfffd | uVar2;
      }
      *(ushort *)(plVar5 + 0xb) = uVar2;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5 = (long *)(*(long *)((long)plVar5 + lVar7 + 8) - lVar7);
    } while (plVar5 != (long *)(lVar4 - lVar7));
  }
  return;
}

