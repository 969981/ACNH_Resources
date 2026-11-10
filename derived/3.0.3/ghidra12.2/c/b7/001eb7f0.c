
void FUN_001eb7f0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR_DAT_04bcc1b8;
  if (*(long *)PTR_DAT_04bcc1b8 == 0xffffffff) {
    lVar7 = 0x147fffffeb8;
    puVar4 = (undefined8 *)FUN_0018adb4(0x147fffffec0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0xffffffff;
      do {
        FUN_00186460(puVar4 + 2,0x20000000,1);
        puVar4[2] = &PTR_FUN_04838f28;
        *(undefined4 *)(puVar4 + 0xb) = 0;
        *(undefined4 *)((long)puVar4 + 0x14c) = 0;
        memset((void *)((long)puVar4 + 0x5c),0,0xf0);
        puVar4 = puVar4 + 0x29;
        lVar7 = lVar7 + -0x148;
      } while (lVar7 != 0);
    }
  }
  lVar7 = FUN_00187df4(*(long *)puVar3 * 0x148);
  uVar5 = *(ulong *)puVar3;
  *(long *)(param_1 + 0x10) = lVar7;
  if (uVar5 != 0) {
    if (lVar7 == 0) {
      uVar6 = 1;
      do {
        bVar1 = uVar6 < uVar5;
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (bVar1);
    }
    else {
      puVar2 = PTR_DAT_04bcbce8 + 0x10;
      uVar6 = 0;
      uVar8 = 1;
      do {
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar7 = *(long *)(param_1 + 0x10) + uVar6 * 0x148;
          FUN_001864a0(lVar7 + 8,param_1 + 0x168);
          *(undefined **)(lVar7 + 8) = puVar2;
          memcpy((void *)(lVar7 + 0x50),(void *)(param_1 + 0x1b0),0xf8);
          uVar5 = *(ulong *)puVar3;
        }
        bVar1 = uVar8 < uVar5;
        uVar6 = uVar8;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (bVar1);
    }
  }
  return;
}

