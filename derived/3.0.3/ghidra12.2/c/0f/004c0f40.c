
void FUN_004c0f40(long param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x1;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  byte local_58;
  
  local_60 = CONCAT44(param_3,param_2);
  local_58 = (byte)~(byte)((uint)param_4 >> 0x18) >> 7;
  FUN_004c4860(param_1 + 0xa8,&local_60);
  if ((extraout_x1 & 1) != 0) {
    if ((-1 < *(int *)(param_1 + 0x9c)) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x9c) * 8),
       lVar2 != 0)) {
      FUN_004c0f40(lVar2,param_2,param_3,param_4);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      lVar2 = (long)*(int *)(param_1 + 0x30) << 3;
      do {
        uVar3 = FUN_00427d40(*(undefined8 *)(param_1 + 0x50),*(ulong *)*puVar5 & 0xfffffffffffffffe,
                             0);
        local_60 = uVar3;
        if (1 < uVar3) {
          uVar4 = *puVar5;
          iVar1 = FUN_00429050(&local_60);
          FUN_004c0e10(param_1,uVar4,uVar3,param_2,iVar1 + param_3,param_4);
        }
        puVar5 = puVar5 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  return;
}

