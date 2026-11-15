
undefined8 FUN_021309f8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar2 = *(int *)(*(long *)(param_1[1] + 0x3b8) + 0x77b0);
  if ((((4 < iVar2 - 3U) && ((*(byte *)(*(long *)(param_1[1] + 0x3b8) + 0xad5d) >> 3 & 1) == 0)) &&
      (iVar2 != 0x29 && *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) &&
     (uVar4 = (**(code **)(*param_1 + 0x60))(), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(param_1[1] + 0x68);
    sVar3 = *(short *)(param_1[1] + 0x284);
    if (sVar3 == -1) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar3 * 0x10;
      if (999 < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bb6258;
      }
      uVar5 = *(undefined8 *)(puVar1 + 8);
    }
    uVar4 = FUN_022f112c(*(undefined4 *)(lVar6 + 0x278),*(undefined4 *)(lVar6 + 0x27c),
                         *(undefined4 *)(lVar6 + 0x280),uVar5,(long)param_1 + 0x2c);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x68))(param_1);
      return 1;
    }
  }
  return 0;
}

