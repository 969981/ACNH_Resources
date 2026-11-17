
void FUN_0311d5d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined **local_70;
  undefined4 local_68;
  
  iVar5 = 0;
  lVar1 = param_1 + 0x250;
  ppuVar2 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
  do {
    plVar4 = *(long **)(lVar1 + (long)iVar5 * 0x1f8 + 8);
    if (*(long *)(param_1 + 0x1068) == 0) {
      if (plVar4 != (long *)0x0) {
        lVar3 = lVar1 + (long)iVar5 * 0x1f8 + 0x1d8;
        local_70 = ppuVar2;
        goto LAB_0311d620;
      }
    }
    else if (plVar4 != (long *)0x0) {
      lVar3 = *(long *)(param_1 + 0x1068) + 0x1bf38;
      local_70 = &PTR_LAB_04a3ee98;
LAB_0311d620:
      local_68 = 0x1f;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
      (**(code **)(plVar4[3] + 0x208))(plVar4[1],0,0,lVar3);
    }
    lVar3 = lVar1 + (long)iVar5 * 0x1f8;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(lVar3 + 0x68) = 0xffffffff;
    **(undefined1 **)(lVar3 + 0x18) = 0;
    if (iVar5 == 7) {
      FUN_0311f5c0(param_1,param_2);
      FUN_0311ff40(param_1,param_2);
      FUN_031201d0(param_1);
      *(undefined1 *)(param_1 + 0x1078) = 0;
      return;
    }
  } while( true );
}

