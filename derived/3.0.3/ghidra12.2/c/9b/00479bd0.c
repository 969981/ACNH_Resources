
int FUN_00479bd0(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long local_50;
  long lStack_48;
  undefined8 local_38;
  
  plVar1 = (long *)(param_1 + 0xa8);
  local_38 = param_2;
  lVar2 = FUN_0047c500(plVar1,&local_38);
  if (lVar2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(lVar2 + 4) * 0x10 + 8);
    if (iVar4 != -1) {
      if (param_3 == 0) {
        do {
          lVar2 = *(long *)(*(long *)(param_1 + 0x98) + (long)iVar4 * 8);
          if (*(long *)(lVar2 + 0x10) == *(long *)(lVar2 + 0x18)) {
            return iVar4;
          }
          uVar3 = FUN_00429cb0(lVar2,lVar2 + 0x10);
          if ((uVar3 & 1) == 0) {
            return iVar4;
          }
          local_50 = *(long *)(lVar2 + 0x10);
          lStack_48 = *(undefined8 *)(lVar2 + 0x18);
          local_38 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),&local_50,
                                  *(undefined4 *)(lVar2 + 0x24));
          lVar2 = FUN_0047c500(plVar1,&local_38);
        } while ((lVar2 != 0) &&
                (iVar4 = *(int *)(*plVar1 + (long)*(int *)(lVar2 + 4) * 0x10 + 8), iVar4 != -1));
        iVar4 = -1;
      }
      else {
        do {
          lVar2 = *(long *)(*(long *)(param_1 + 0x98) + (long)iVar4 * 8);
          local_50 = *(long *)(lVar2 + 0x10);
          lStack_48 = *(long *)(lVar2 + 0x18);
          if (local_50 == lStack_48) {
            return iVar4;
          }
          local_38 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),&local_50,
                                  *(undefined4 *)(lVar2 + 0x24));
          lVar2 = FUN_0047c500(plVar1,&local_38);
        } while ((lVar2 != 0) &&
                (iVar4 = *(int *)(*plVar1 + (long)*(int *)(lVar2 + 4) * 0x10 + 8), iVar4 != -1));
        iVar4 = -1;
      }
    }
  }
  return iVar4;
}

