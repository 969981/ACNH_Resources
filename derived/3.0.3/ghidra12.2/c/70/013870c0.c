
void FUN_013870c0(long param_1,short *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  short local_14 [2];
  
  if ((param_1 != 0) && (*param_2 != *(short *)PTR_DAT_04bbc1c0)) {
    uVar4 = (uint)(char)param_2[2];
    if ('\x06' < (char)param_2[2]) {
      uVar4 = 7;
    }
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    local_40 = (undefined8 *)CONCAT44(local_40._4_4_,uVar4);
    lVar3 = param_1 + 200 + (ulong)uVar4 * 0x10;
    if (7 < uVar4) {
      lVar3 = param_1 + 200;
    }
    lVar5 = *(long *)(lVar3 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0x1d8);
      uVar2 = (**(code **)(*(long *)(lVar5 + 0x1d8) + 0x10))(puVar1);
      if (((uVar2 & 1) != 0) && (lVar5 = (**(code **)*puVar1)(puVar1), lVar5 != 0)) {
        lVar3 = *(long *)(lVar3 + 8);
        puVar1 = &DAT_0517d4e8;
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 8);
        }
        local_38 = *(int *)(puVar1 + 1) + (int)(char)param_2[1];
        iStack_34 = *(int *)((long)puVar1 + 0xc) + (int)*(char *)((long)param_2 + 3);
        local_14[0] = *param_2;
        local_40 = &DAT_048f9750;
        if (lVar3 != 0) {
          FUN_012e6578(lVar3,local_14,&local_40);
        }
      }
    }
  }
  return;
}

