
void FUN_011f3390(undefined8 param_1,undefined4 param_2,short *param_3,undefined8 param_4)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_011f3520(param_1,param_2,param_4);
  local_48 = *(undefined4 *)param_3;
  uStack_44 = *(undefined4 *)(param_3 + 2);
  iVar3 = FUN_0277d6c4(&local_48);
  lVar6 = DAT_05150358;
  if (iVar3 - 0xf619U < 7) {
LAB_011f33f8:
    sVar1 = *param_3;
  }
  else {
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_011f33f8;
    }
    puVar2 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_3);
    if (*(long *)puVar2 == 0) {
      return;
    }
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (*(uint *)(lVar6 + 0x1d8) <= uVar4) {
      return;
    }
    if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return;
    }
    uVar5 = FUN_0277e294(param_3);
    if ((uVar5 & 1) != 0) {
      return;
    }
    sVar1 = *param_3;
  }
  if (sVar1 == -2) {
    return;
  }
  FUN_011f3880(param_1,param_2,param_3,param_4);
  return;
}

