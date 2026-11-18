
void FUN_032c7d70(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    uVar1 = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1) & 1) == 0) {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    if ((*(byte *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1) & 1) == 0) {
      local_50 = PTR_DAT_04bc8e68 + 0x10;
      uStack_48 = *(undefined8 *)(param_2 + 8);
      FUN_032c7a60(param_1,&local_50,param_3);
      uVar1 = param_3;
      if (*(uint *)(param_1 + 0x30) <= param_3) {
        uVar1 = 0;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1 * 8);
      do {
        lVar4 = lVar3;
        plVar2 = *(long **)(lVar4 + 0x28);
        lVar3 = *(long *)(lVar4 + 0x18);
      } while (*(long *)(lVar4 + 0x18) != 0 && plVar2 == (long *)0x0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0xd0))(0);
      }
      *(undefined4 *)(lVar4 + 0x6c) = 1;
    }
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar1 = 0;
    }
    FUN_032c5bf0(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1 * 8),param_4,
                 param_6 & 1);
    lVar3 = *(long *)(param_1 + 0x48);
    if (*(uint *)(param_1 + 0x40) <= param_3) {
      param_3 = 0;
    }
    lVar4 = (long)(int)param_3;
    if ((param_5 & 1) == 0) {
      bVar5 = *(byte *)(lVar3 + lVar4) & 0xfe;
    }
    else {
      bVar5 = *(byte *)(lVar3 + lVar4) | 1;
    }
    *(byte *)(lVar3 + lVar4) = bVar5;
  }
  return;
}

