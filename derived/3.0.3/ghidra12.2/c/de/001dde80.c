
void FUN_001dde80(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  size_t __n;
  ulong uVar12;
  
  if (*(long *)PTR_DAT_04bcc1b8 == 0xffffffff) {
    lVar11 = 0x147fffffeb8;
    puVar6 = (undefined8 *)FUN_0018adb4(0x147fffffec0);
    if (puVar6 != (undefined8 *)0x0) {
      puVar10 = puVar6 + 1;
      *puVar6 = 0xffffffff;
      do {
        FUN_001ba2a8(puVar10);
        puVar10 = puVar10 + 0x29;
        lVar11 = lVar11 + -0x148;
      } while (lVar11 != 0);
    }
  }
  puVar2 = PTR_DAT_04bcc1b8;
  lVar11 = FUN_00187df4(*(long *)PTR_DAT_04bcc1b8 * 0x148);
  uVar7 = *(ulong *)puVar2;
  *(long *)(param_1 + 0x10) = lVar11;
  if (uVar7 != 0) {
    if (lVar11 == 0) {
      uVar8 = 1;
      do {
        bVar1 = uVar8 < uVar7;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (bVar1);
    }
    else {
      puVar2 = PTR_DAT_04bcc328 + 0x10;
      uVar8 = 0;
      uVar12 = 1;
      do {
        if (*(long *)(param_1 + 0x10) != 0) {
          __n = *(size_t *)(param_1 + 0x178);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar8 * 0x148);
          *puVar6 = &PTR_FUN_0483aaf0;
          memcpy(puVar6 + 1,(void *)(param_1 + 0x168),__n);
          puVar6[3] = __n;
          uVar3 = *(undefined8 *)(param_1 + 0x188);
          uVar4 = *(undefined8 *)(param_1 + 400);
          puVar6[4] = *(undefined8 *)(param_1 + 0x180);
          puVar6[5] = uVar3;
          puVar6[6] = uVar4;
          puVar6[7] = &PTR_FUN_0483aad0;
          uVar3 = *(undefined8 *)(param_1 + 0x1a0);
          uVar4 = *(undefined8 *)(param_1 + 0x1a8);
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          puVar6[10] = *(undefined8 *)(param_1 + 0x1b0);
          puVar6[0xb] = uVar9;
          puVar6[8] = uVar3;
          puVar6[9] = uVar4;
          FUN_001864a0(puVar6 + 0xc,param_1 + 0x1c0);
          puVar6[0x15] = *(undefined8 *)(param_1 + 0x208);
          uVar3 = *(undefined8 *)(param_1 + 0x210);
          uVar4 = *(undefined8 *)(param_1 + 0x218);
          uVar9 = *(undefined8 *)(param_1 + 0x228);
          puVar6[0x18] = *(undefined8 *)(param_1 + 0x220);
          puVar6[0x19] = uVar9;
          puVar6[0x16] = uVar3;
          puVar6[0x17] = uVar4;
          uVar3 = *(undefined8 *)(param_1 + 0x230);
          uVar4 = *(undefined8 *)(param_1 + 0x238);
          uVar9 = *(undefined8 *)(param_1 + 0x248);
          puVar6[0x1c] = *(undefined8 *)(param_1 + 0x240);
          puVar6[0x1d] = uVar9;
          puVar6[0x1a] = uVar3;
          puVar6[0x1b] = uVar4;
          uVar9 = *(undefined8 *)(param_1 + 0x260);
          uVar3 = *(undefined8 *)(param_1 + 0x250);
          uVar4 = *(undefined8 *)(param_1 + 600);
          uVar5 = *(undefined1 *)(param_1 + 0x268);
          puVar6[0x22] = puVar2;
          *(undefined1 *)(puVar6 + 0x21) = uVar5;
          puVar6[0x1e] = uVar3;
          puVar6[0x1f] = uVar4;
          puVar6[0x20] = uVar9;
          puVar6[0x23] = *(undefined8 *)(param_1 + 0x278);
          uVar3 = *(undefined8 *)(param_1 + 0x280);
          uVar4 = *(undefined8 *)(param_1 + 0x288);
          uVar9 = *(undefined8 *)(param_1 + 0x298);
          puVar6[0x26] = *(undefined8 *)(param_1 + 0x290);
          puVar6[0x27] = uVar9;
          puVar6[0x24] = uVar3;
          puVar6[0x25] = uVar4;
          *(undefined4 *)(puVar6 + 0x28) = *(undefined4 *)(param_1 + 0x2a0);
          uVar7 = DAT_04be2208;
        }
        bVar1 = uVar12 < uVar7;
        uVar8 = uVar12;
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (bVar1);
    }
  }
  return;
}

