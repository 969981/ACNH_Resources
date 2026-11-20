
void FUN_03ff8b90(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x334) = 0;
  memset((void *)(param_1 + 0x30),0,0x300);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    plVar9 = (long *)(param_1 + 0x378);
    do {
      lVar2 = lVar5 + uVar7;
      lVar3 = lVar5 + (uVar7 & 0x3e0000);
      if (uVar8 < 0x40) {
        lVar3 = lVar2 + 0x200000;
      }
      iVar6 = (int)uVar7;
      uVar1 = uVar8 + 1;
      uVar8 = uVar8 + 2;
      uVar7 = uVar7 + 0x20000;
      lVar4 = lVar5 + ((ulong)(iVar6 + 0x10000) & 0x3f0000);
      if (uVar1 < 0x40) {
        lVar4 = lVar2 + 0x210000;
      }
      plVar9[-1] = lVar3;
      *plVar9 = lVar4;
      plVar9 = plVar9 + 2;
    } while (uVar8 != 0x80);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x350);
  }
  else {
    lVar2 = lVar5 + 0x10000;
    *(long *)(param_1 + 0x350) = lVar5;
    *(long *)(param_1 + 0x6f0) = lVar5;
    *(long *)(param_1 + 0x358) = lVar2;
    *(long *)(param_1 + 0x6f8) = lVar2;
    *(long *)(param_1 + 0x360) = lVar5;
    *(long *)(param_1 + 0x700) = lVar5;
    *(long *)(param_1 + 0x368) = lVar2;
    *(long *)(param_1 + 0x708) = lVar2;
  }
  *(long *)(param_1 + 0x348) = lVar5;
  *(undefined4 *)(param_1 + 0x330) = 1;
  *(undefined4 *)(param_1 + 0x33c) = 0x80000000;
  *(undefined1 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x97c) = 0;
  *(undefined4 *)(param_1 + 0x924) = 0xfffffffe;
  *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x370);
  return;
}

