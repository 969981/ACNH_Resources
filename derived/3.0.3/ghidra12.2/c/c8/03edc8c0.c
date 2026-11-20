
long FUN_03edc8c0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_38;
  long local_30;
  undefined2 local_28;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 == 0) || (puVar3 = *(undefined8 **)(lVar4 + 0x128), puVar3 == (undefined8 *)0x0)) {
    uVar1 = **(uint **)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      uVar2 = (**(code **)(**(long **)(lVar4 + 0x18) + 0x110))
                        (*(long **)(lVar4 + 0x18),*(undefined8 *)(*(long *)(param_3 + 0x70) + 0x10),
                         uVar1 & 0xffff);
                    /* WARNING: Could not recover jumptable at 0x03edc988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x120))(*(long **)(lVar4 + 0x20),uVar2);
      return lVar4;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 8);
    lVar4 = lVar4 + (int)(*(uint **)(param_1 + 0x18))[1] + (long)*(int *)(lVar4 + 0x24);
  }
  else {
    local_30 = lVar4 + (long)*(int *)(lVar4 + 0xf0) * 0x10 + 0xc0;
    local_28 = 1;
    uVar1 = **(uint **)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      uVar2 = (**(code **)(**(long **)(lVar4 + 0x18) + 0x110))
                        (*(long **)(lVar4 + 0x18),*(undefined8 *)(*(long *)(param_3 + 0x70) + 0x10),
                         uVar1 & 0xffff);
      local_38 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x120))(*(long **)(lVar4 + 0x20),uVar2);
      puVar3 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x128);
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 8);
      local_38 = lVar4 + (int)(*(uint **)(param_1 + 0x18))[1] + (long)*(int *)(lVar4 + 0x24);
    }
    lVar4 = (**(code **)*puVar3)(puVar3,&local_38);
  }
  return lVar4;
}

