
void FUN_02f343ac(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_30;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0x220) = 1;
  if (*(int *)(param_1 + 0x1b0) == 1) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x1b0);
    if ((((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x48))(), (uVar3 & 1) == 0)) &&
        (plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x1b0), plVar2 != (long *)0x0)) &&
       (uVar3 = (**(code **)(*plVar2 + 0x58))(), (uVar3 & 1) != 0)) {
      lVar4 = *(long *)(param_1 + 0x210);
      plVar2 = *(long **)(*(long *)(lVar4 + 0x230) + (ulong)(2 < *(uint *)(lVar4 + 0x228)) * 0x10);
      if (plVar2 != (long *)0x0) {
        if (*(uint *)(param_1 + 0x218) < 10) {
          local_30 = PTR_DAT_04bc4e68 + 0x10;
          local_28 = 6;
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
          puVar5 = (undefined8 *)(plVar2[3] + 0x1b8);
        }
        else {
          local_30 = PTR_DAT_04bc4e68 + 0x10;
          local_28 = 7;
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
          puVar5 = (undefined8 *)(plVar2[3] + 0x1c0);
        }
        (*(code *)*puVar5)(plVar2[1]);
        lVar4 = *(long *)(param_1 + 0x210);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x218);
      *(undefined4 *)(lVar4 + 0x268) = 0;
      *(undefined1 *)(lVar4 + 0x290) = 0;
      *(undefined1 *)(lVar4 + 0x2a0) = 0;
      *(undefined4 *)(lVar4 + 0x260) = uVar1;
      *(undefined4 *)(lVar4 + 0x264) = uVar1;
      FUN_03125a4c();
      plVar6 = *(long **)(param_1 + 0x210);
      plVar2 = (long *)plVar6[0x36];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        (**(code **)(*plVar6 + 0xa8))(plVar6);
      }
    }
    if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 3;
      return;
    }
  }
  return;
}

