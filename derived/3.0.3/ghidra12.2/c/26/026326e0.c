
void FUN_026326e0(undefined8 param_1,long param_2,byte *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte local_34 [4];
  
  local_34[0] = *param_3;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      if ((*(byte *)(param_2 + (uVar4 >> 3)) >> (ulong)((uint)uVar4 & 7) & 1) != 0)
      goto LAB_02632768;
      uVar5 = (uint)uVar4 + 1;
      uVar4 = (ulong)uVar5;
    } while (uVar5 != 0x800);
    uVar4 = 0;
LAB_02632768:
    uVar5 = 0x800;
    do {
      if ((*(byte *)(param_2 + (ulong)(uVar5 - 1 >> 3)) >> (ulong)(uVar5 - 1 & 7) & 1) != 0) break;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
LAB_0263279c:
    while (uVar3 = (uint)uVar4, uVar5 != uVar3) {
      if ((uVar3 < 0x800) && ((*(byte *)(param_4 + (uVar4 >> 3)) >> (ulong)(uVar3 & 7) & 1) != 0)) {
        FUN_0262ec70(param_1,uVar4,lVar1,1,param_4,param_5);
      }
      do {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar3;
        if (0x7ff < uVar3) {
          uVar3 = 0x7fe;
          goto LAB_02632810;
        }
      } while ((*(byte *)(param_2 + (ulong)(uVar3 >> 3)) >> (ulong)(uVar3 & 7) & 1) == 0);
    }
  }
  return;
  while (uVar3 = uVar3 - 2, uVar3 != 0xfffffffe) {
LAB_02632810:
    uVar2 = uVar3 + 1;
    if (((*(byte *)(param_2 + (ulong)(uVar2 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0) ||
       (uVar2 = uVar3, (*(byte *)(param_2 + (ulong)(uVar3 >> 3)) >> (ulong)(uVar3 & 7) & 1) != 0)) {
      uVar4 = (ulong)(uVar2 + 1);
      goto LAB_0263279c;
    }
  }
  uVar4 = 0;
  goto LAB_0263279c;
}

