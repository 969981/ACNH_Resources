
void FUN_0019cc30(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  long *plVar10;
  ulong uVar11;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  plVar10 = param_1 + 2;
  *plVar10 = 0;
  puVar4 = PTR_DAT_04bcc170;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  uVar5 = FUN_0018b798(param_2);
  uVar11 = uVar5 >> 1;
  uVar7 = param_1[3] - *plVar10;
  if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
    if (uVar11 < uVar7) {
      param_1[3] = *plVar10 + uVar11;
    }
  }
  else {
    FUN_001a3250(plVar10,uVar11 - uVar7);
  }
  if (1 < uVar5) {
    lVar6 = 0;
    uVar5 = 0;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      pbVar1 = (byte *)(*(long *)(param_2 + 0x18) + lVar6);
      lVar6 = lVar6 + 2;
      bVar2 = *pbVar1;
      uVar8 = (uint)pbVar1[1];
      uVar3 = uVar8 - 0x30;
      bVar9 = bVar2 * '\x10';
      if (9 < uVar3) {
        uVar3 = uVar8 - 0x57;
      }
      if (9 < bVar2 - 0x30) {
        bVar9 = bVar9 + 0x90;
      }
      *(byte *)(*plVar10 + uVar5) = (byte)uVar3 | bVar9;
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  return;
}

