
void FUN_030bfab0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined1 *puStack_48;
  
  FUN_031ff554(param_1 + 0x400,param_1);
  plVar2 = *(long **)(param_1 + 0x388);
  local_60 = (undefined **)CONCAT44(local_60._4_4_,1);
  if (plVar2 != (long *)0x0) {
    *(undefined2 *)(plVar2 + 4) = 1;
    *(undefined4 *)((long)plVar2 + 0x2c) = 0x80000000;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    *(undefined4 *)((long)plVar2 + 0x24) = 1;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    if ((long *)plVar2[10] != plVar2 + 9) {
      lVar5 = (long)*(int *)((long)plVar2 + 0x5c);
      puVar3 = (undefined8 *)(plVar2[10] - lVar5);
      do {
        (**(code **)*puVar3)(puVar3,*(undefined4 *)((long)plVar2 + 0x24));
        puVar3 = (undefined8 *)(*(long *)((long)puVar3 + lVar5 + 8) - lVar5);
      } while (puVar3 != (undefined8 *)((long)(plVar2 + 9) - lVar5));
    }
  }
  if (*(long *)(param_1 + 0x3c0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x3c0) + 0x40) = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x318);
  local_50 = (undefined8 *)(PTR_DAT_04bc5180 + 0x10);
  local_60 = &PTR_LAB_04b2b250;
  puStack_48 = (undefined1 *)&local_60;
  if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
    lVar4 = (long)*(int *)(param_1 + 0x4c);
    lVar5 = *(long *)(param_1 + 0x40) - lVar4;
    puStack_48 = (undefined1 *)&local_60;
    do {
      uVar1 = (*(code *)*local_50)(&local_50,lVar5);
      if ((uVar1 & 1) != 0) break;
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (param_1 + 0x38) - lVar4);
  }
  FUN_03d66690(param_1);
  if (((*(long *)(param_1 + 0x218) != 0) && (*(long *)(param_1 + 0x210) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x210) + 8) == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x14c8) = *(undefined8 *)(param_1 + 0x208);
  }
  plVar2 = *(long **)(param_1 + 0x280);
  *(undefined2 *)(plVar2 + 4) = 1;
  *(undefined4 *)((long)plVar2 + 0x24) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0x80000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,0);
  if ((long *)plVar2[10] != plVar2 + 9) {
    lVar5 = (long)*(int *)((long)plVar2 + 0x5c);
    puVar3 = (undefined8 *)(plVar2[10] - lVar5);
    do {
      (**(code **)*puVar3)(puVar3,*(undefined4 *)((long)plVar2 + 0x24));
      puVar3 = (undefined8 *)(*(long *)((long)puVar3 + lVar5 + 8) - lVar5);
    } while (puVar3 != (undefined8 *)((long)(plVar2 + 9) - lVar5));
  }
  return;
}

