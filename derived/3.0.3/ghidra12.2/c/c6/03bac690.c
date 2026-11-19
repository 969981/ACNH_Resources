
void FUN_03bac690(long param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_38;
  
  if (DAT_05aebc00 == '\0') {
    iVar3 = FUN_003cd9a4();
  }
  else {
    cVar1 = *(char *)(*(long *)(DAT_05aebb88 + 0x178) + 0x148);
    lVar6 = *(long *)(*(long *)(DAT_05aebb88 + 0x178) + 0x140);
    iVar3 = FUN_003cd9a4();
    if (cVar1 != '\0' && lVar6 != 0) goto LAB_03bac6f8;
  }
  if (iVar3 != 1) {
    return;
  }
LAB_03bac6f8:
  if (*(long *)(param_1 + 0x18) != 0 || *(long *)(param_1 + 0x20) != 0) {
    local_38 = nn::os::GetSystemTick();
    lVar6 = *(long *)(param_1 + 8);
    lVar2 = DAT_05aebb88;
    while (DAT_05aebb88 = lVar2, lVar6 != 0) {
      if (DAT_05aebc00 == '\0') {
        uVar4 = FUN_003cd914(lVar6,*(long *)(param_1 + 0x10) << 1);
        uVar5 = FUN_003cd990();
        uVar7 = -(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1;
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar4 / uVar7;
        }
      }
      else {
        uVar4 = FUN_03b52af0(*(long *)(lVar2 + 0x178) + 0x60,lVar6,*(long *)(param_1 + 0x10) << 1,
                             &local_38);
        uVar5 = 0;
        if ((ulong)*(uint *)(lVar2 + 0x140) != 0) {
          uVar5 = uVar4 / ((ulong)*(uint *)(lVar2 + 0x140) << 1);
        }
        uVar5 = uVar5 & 0xffffffff;
      }
      if (uVar5 == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_03b7d010(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
      }
      local_38 = nn::os::GetSystemTick();
      lVar2 = DAT_05aebb88;
      lVar6 = *(long *)(param_1 + 8);
    }
  }
  return;
}

