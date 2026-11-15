
void FUN_02340234(undefined2 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  byte local_18 [4];
  byte local_14 [4];
  
  iVar1 = *(int *)(param_2 + 0x5f40);
  if (iVar1 - 2U < 2) {
    uVar2 = *(uint *)(param_2 + 0x5f48);
LAB_02340298:
    if (((7 < uVar2) || (DAT_05574040 == 0)) || (lVar3 = FUN_026eec4c(), lVar3 == 0))
    goto LAB_023402e0;
    if ((*(long **)(lVar3 + 0x140) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x140), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined2 *)FUN_028160a8(*(long *)(lVar3 + 0x128) + *(long *)(lVar3 + 0x120));
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 2);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x140);
joined_r0x023403b0:
    if ((lVar3 != 0) && (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar3 + 8))();
    }
  }
  else {
    if (iVar1 == 1) {
      local_14[0] = *(byte *)(param_2 + 0x5f44);
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      uVar2 = FUN_02582fe0(local_14);
      if (uVar2 != 0xffffffff) goto LAB_02340298;
    }
LAB_023402e0:
    iVar1 = *(int *)(param_2 + 0x5f40);
    if (iVar1 - 2U < 2) {
LAB_02340300:
      pbVar6 = (byte *)(param_2 + 0x5f44);
LAB_02340324:
      local_18[0] = *pbVar6;
      if (7 < local_18[0]) {
        local_18[0] = 0xff;
        if ((*(long **)(param_2 + 0x8080) == (long *)0x0) ||
           (puVar4 = (undefined8 *)**(long **)(param_2 + 0x8080), puVar4 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar4)();
          uVar2 = uVar2 ^ 1;
        }
        puVar5 = (undefined2 *)
                 FUN_028160a8(*(long *)(param_2 + 0x8068) + *(long *)(param_2 + 0x8060));
        *param_1 = *puVar5;
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar5 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 2);
        if ((uVar2 & 1) != 0) {
          return;
        }
        lVar3 = *(long *)(param_2 + 0x8080);
        goto joined_r0x023403b0;
      }
    }
    else {
      if (iVar1 != 5) {
        if (iVar1 == 1) goto LAB_02340300;
LAB_0234031c:
        pbVar6 = &DAT_0548e140;
        goto LAB_02340324;
      }
      local_18[0] = *(byte *)(param_2 + 0x6050);
      if (7 < local_18[0]) goto LAB_0234031c;
    }
    FUN_0244b5a8(param_1,local_18);
  }
  return;
}

