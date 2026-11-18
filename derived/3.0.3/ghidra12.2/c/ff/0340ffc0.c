
void FUN_0340ffc0(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined **local_50;
  undefined2 local_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_48 = (**(code **)(*param_3 + 0x30))(param_3);
  local_50 = &PTR_LAB_04a39348;
  pcStack_38 = (char *)FUN_01b87300(&local_50);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else if ((*pcStack_38 == '\0') && (*(short *)PTR_DAT_04bb37e0 == -2)) {
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    do {
      if ((*(int *)(param_2 + 8 + (long)iVar3 * 0x1a8 + 0x1a0) == 0) &&
         (lVar2 = param_2 + 8 + (long)iVar3 * 0x1a8, (*(byte *)(lVar2 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar2,&local_40,PTR_DAT_04bb37e0,7);
        goto LAB_034100b8;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0x10e);
    iVar4 = -1;
  }
LAB_034100b8:
  if ((*(int *)(param_1 + 0x18) != iVar4) && (*(int *)(param_1 + 0x18) = iVar4, iVar4 != -1)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x8c) | 1;
  *(short *)(param_1 + 0x8c) = (short)uVar1;
  if ((*(int *)(param_1 + 0x38) != 1) &&
     (uVar1 = 0xffffffffU >> (ulong)(~*(uint *)(param_1 + 0x88) & 0x1f) & uVar1,
     uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555),
     uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
     uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f, uVar1 = uVar1 + (uVar1 >> 8),
     (uVar1 + (uVar1 >> 0x10) & 0x3f) != 0)) {
    FUN_03ebb160(param_1 + 0x30,1);
  }
  return;
}

