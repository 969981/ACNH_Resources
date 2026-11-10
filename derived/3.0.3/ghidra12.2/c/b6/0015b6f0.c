
undefined8 FUN_0015b6f0(long param_1,long param_2,long param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x5f8) == *(int *)(param_3 + 0x218)) {
    *(undefined4 *)(param_1 + 0x5f8) = 0;
  }
  *(long *)(param_1 + 0x600) = *(long *)(param_1 + 0x600) - *(long *)(param_2 + 0x1540);
  *(undefined8 *)(param_2 + 0x1540) = 0;
  if ((*(int *)(param_1 + 0x5f8) == 0) &&
     (iVar3 = FUN_0015992c(param_1,param_1 + 0x570,param_4), iVar3 != 0)) {
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(param_3 + 0x250) = 0;
  if (*(int *)(param_1 + 0x630) == 0) {
    if (*(char *)(param_3 + 0x21c) != '\0') {
      puVar6 = *(ulong **)(param_3 + 0x230);
      if (((puVar6 != (ulong *)0x0) && (piVar7 = (int *)*puVar6, piVar7 != (int *)0x0)) &&
         (0 < (long)puVar6[2])) {
        piVar1 = (int *)((long)piVar7 + puVar6[2]);
        do {
          iVar3 = *piVar7;
          iVar4 = FUN_0014d948(param_1,2,piVar7 + 1,iVar3);
          if (iVar4 != 0) {
            *param_4 = iVar4;
            return 0xffffffffffffffff;
          }
          piVar7 = (int *)((long)(piVar7 + 1) + (ulong)(iVar3 + 1));
        } while (piVar7 < piVar1);
      }
      *(undefined1 *)(param_3 + 0x251) = 1;
      return 0;
    }
    FUN_0014d5f8(param_2,
                 "HTTP/2 stream %d was closed cleanly, but before getting  all response header fields, treated as error"
                 ,*(undefined4 *)(param_3 + 0x218));
  }
  else {
    if (*(int *)(param_1 + 0x630) == 7) {
      FUN_00158f30(param_1,1);
      *(ushort *)(param_2 + 0x15c4) = *(ushort *)(param_2 + 0x15c4) | 4;
      iVar3 = 0x38;
      goto LAB_0015b834;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x218);
    uVar5 = FUN_001689b4();
    FUN_0014d5f8(param_2,"HTTP/2 stream %d was not closed cleanly: %s (err %u)",uVar2,uVar5,
                 *(undefined4 *)(param_1 + 0x630));
  }
  iVar3 = 0x5c;
LAB_0015b834:
  *param_4 = iVar3;
  return 0xffffffffffffffff;
}

