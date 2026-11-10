
int FUN_00131be0(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = param_3 & 0xff;
  if (((uVar1 == 0x37) || (uVar1 == 1)) && ((uVar1 != 1 || ((param_4 & 0xff) == 0)))) {
    if (param_1 == 0) {
      iVar3 = 0xae00;
    }
    else if (*(long *)(param_1 + 0x6fb50) == 0) {
      iVar3 = 0x8800;
    }
    else {
      lVar5 = 0x14;
      *(long *)(param_1 + 0x70220) = *(long *)(param_1 + 0x6fb50);
      *(undefined4 *)(param_1 + 0x7023c) = 0;
      *(undefined2 *)(param_1 + 0x70238) = 0;
      *(undefined8 *)(param_1 + 0x70230) = 0;
      *(undefined8 *)(param_1 + 0x70228) = 0;
      plVar4 = (long *)(param_1 + 0x6f510);
      do {
        FUN_0010d900(plVar4 + 0xda);
        if ((*plVar4 != 0) && (*(ushort *)(plVar4 + 6) <= *(ushort *)((long)plVar4 + 0x32))) {
          FUN_0010d930(plVar4 + 0xda,plVar4,0);
        }
        plVar4 = plVar4 + 10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_00131aa0(param_1);
      sVar2 = FUN_0011d6b0(param_1,0x37,1);
      iVar3 = (int)sVar2;
      if (-1 < iVar3) {
        *(undefined1 *)(param_1 + 3) = 1;
        sVar2 = FUN_00101070(param_1,param_1 + 0x6fbe0,param_2,param_3,param_4,param_5,0);
        iVar3 = (int)sVar2;
        if (-1 < iVar3) {
          return iVar3;
        }
      }
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  else {
    iVar3 = 0x8400;
  }
  return iVar3;
}

