
void FUN_03104780(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined *local_60;
  undefined4 local_58;
  
  if (*(char *)(param_1 + 0x2e0) != '\0') {
    iVar6 = 0;
    lVar2 = *(long *)(param_1 + 0x2d8) + 8;
    do {
      lVar3 = lVar2 + (long)iVar6 * 0x1a8;
      FUN_03ebb268(lVar3 + 0xf8);
      if (*(int *)(lVar3 + 0x140) != -1) {
        FUN_03ebb160(lVar3 + 0xf8);
        *(undefined4 *)(lVar3 + 0x140) = 0xffffffff;
      }
      lVar5 = lVar2 + (long)iVar6 * 0x1a8;
      if ((((*(int *)(lVar5 + 0x1a0) == 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
          (*(int *)(lVar3 + 0x100) != 1)) && (uVar1 = FUN_00817520(lVar3), (uVar1 & 1) != 0)) {
        *(undefined4 *)(lVar5 + 0x1a0) = 2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x10e);
  }
  if ((*(char *)(param_1 + 0x38c) == '\0') && (*(uint *)(param_1 + 0x388) < 0x10e)) {
    lVar2 = *(long *)(param_1 + 0x2d8) + (ulong)*(uint *)(param_1 + 0x388) * 0x1a8;
    uVar1 = FUN_03463bdc(lVar2 + 8,lVar2 + 0x150,param_1 + 0x2e8);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x288), lVar2 != 0)) {
      FUN_03b137d0(lVar2 + 0x330,param_1 + 0x2e8,0);
      *(undefined4 *)(lVar2 + 0x348) = 0;
      plVar4 = *(long **)(lVar2 + 0x288);
      local_60 = PTR_DAT_04bc0cb8 + 0x10;
      local_58 = 0x1f;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
      (**(code **)(plVar4[3] + 0x208))(plVar4[1],0,0,lVar2 + 0x330);
      *(undefined1 *)(param_1 + 0x38c) = 1;
    }
  }
  return;
}

