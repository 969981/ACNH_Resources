
byte FUN_0094b540(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int local_44;
  
  local_60 = PTR_DAT_04bb2010;
  *(undefined4 *)(param_2 + 0x68) = 7;
  *(undefined1 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  local_60 = local_60 + 0x10;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x79) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x95) = 0;
  local_48 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
             (uint)(*(float *)(param_2 + 8) < 0.0);
  iVar1 = (int)((float)(int)*(float *)(param_2 + 0x10) / 5.0) -
          (uint)(*(float *)(param_2 + 0x10) < 0.0);
  iVar2 = (int)((float)(int)*(float *)(param_2 + 0x14) / 5.0) -
          (uint)(*(float *)(param_2 + 0x14) < 0.0);
  iVar3 = (int)((float)(int)*(float *)(param_2 + 0x1c) / 5.0) -
          (uint)(*(float *)(param_2 + 0x1c) < 0.0);
  local_58 = iVar2;
  iStack_54 = iVar3;
  local_50 = local_60;
  local_44 = iVar1;
  if (local_48 == iVar2) {
    uVar5 = FUN_00949bd0(param_1,param_2,&local_50);
    if (iVar1 == iVar3) {
      if ((uVar5 & 1) == 0) goto LAB_0094b6a8;
    }
    else if ((uVar5 & 1) == 0) {
      do {
        bVar4 = local_44 != iVar3;
        if (local_44 == iVar3) break;
        iVar1 = local_44 + -1;
        if (local_44 < iVar3) {
          iVar1 = local_44 + 1;
        }
        local_44 = iVar1;
        uVar5 = FUN_00949bd0(param_1,param_2,&local_50);
      } while ((uVar5 & 1) == 0);
      goto LAB_0094b6cc;
    }
  }
  else {
    if (iVar1 != iVar3) {
LAB_0094b6a8:
      bVar4 = FUN_0094b390(param_1,param_2,&local_50,&local_60);
      goto LAB_0094b6cc;
    }
    uVar5 = FUN_00949bd0(param_1,param_2,&local_50);
    if ((uVar5 & 1) == 0) {
      do {
        bVar4 = local_48 != iVar2;
        if (local_48 == iVar2) break;
        iVar1 = local_48 + -1;
        if (local_48 < iVar2) {
          iVar1 = local_48 + 1;
        }
        local_48 = iVar1;
        uVar5 = FUN_00949bd0(param_1,param_2,&local_50);
      } while ((uVar5 & 1) == 0);
      goto LAB_0094b6cc;
    }
  }
  bVar4 = 1;
LAB_0094b6cc:
  return bVar4 & 1;
}

