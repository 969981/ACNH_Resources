
void FUN_0034ebe0(long *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  plVar1 = param_1 + 1;
  lVar11 = *(long *)(param_3 + 0x18);
  lVar9 = *param_1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
  (**(code **)PTR_DAT_04bcfac8)(plVar1);
  (**(code **)PTR_DAT_04bcfb00)((long)param_1 + 0xc);
  *(byte *)((long)param_1 + 0x25) = *param_3;
  if (*param_3 != 0) {
    uVar10 = 0;
    do {
      uVar3 = 0;
      if ((*(ushort *)(param_3 + 2) & 4) != 0) {
        uVar3 = uVar10;
      }
      pbVar2 = (byte *)(lVar11 + uVar3 * 0x20);
      (*DAT_04c625a0)(plVar1,uVar10 & 0xffffffff,*pbVar2 & 1);
      (**(code **)PTR_DAT_04bcfa50)(lVar9);
      (**(code **)PTR_DAT_04bcfa58)(lVar9,uVar10 & 0xffffffff);
      uVar5 = FUN_0034cd70(pbVar2[1]);
      uVar6 = FUN_0034cd70(pbVar2[2]);
      uVar7 = FUN_0034cd70(pbVar2[4]);
      uVar8 = FUN_0034cd70(pbVar2[5]);
      (**(code **)PTR_DAT_04bcfa60)(lVar9,uVar5,uVar6,uVar7,uVar8);
      uVar5 = FUN_0034cd60(pbVar2[3]);
      uVar6 = FUN_0034cd60(pbVar2[6]);
      (**(code **)PTR_DAT_04bcfa68)(lVar9,uVar5,uVar6);
      bVar4 = pbVar2[7];
      (*DAT_04c625d8)((long)param_1 + 0xc,uVar10 & 0xffffffff,bVar4 & 1,bVar4 >> 1 & 1,
                      bVar4 >> 2 & 1,bVar4 >> 3 & 1);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar10 < *param_3);
  }
  if ((*(ushort *)(param_3 + 2) >> 3 & 1) != 0) {
    uVar5 = FUN_0034cd80(param_3[1]);
    (**(code **)PTR_DAT_04bcfad8)(plVar1,uVar5);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}

