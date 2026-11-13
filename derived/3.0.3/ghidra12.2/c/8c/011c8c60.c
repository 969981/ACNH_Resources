
void FUN_011c8c60(undefined4 param_1,long param_2,undefined4 *param_3)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  short sVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined *local_48;
  uint local_40;
  uint local_3c;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  *(undefined4 *)(param_2 + 0xb8) = *param_3;
  puVar6 = DAT_055c1b60;
  sVar1 = *(short *)PTR_DAT_04bb6298;
  bVar2 = DAT_055c1b60 != &DAT_055c1b58;
  *(undefined4 *)(param_2 + 0xbc) = param_3[1];
  uVar8 = param_3[2];
  *(undefined4 *)(param_2 + 0xec) = param_1;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  *(undefined4 *)(param_2 + 0xc0) = uVar8;
  if (bVar2) {
    sVar5 = 0;
    do {
      if (*(int *)(puVar6 + -1) == -0x17df00c3) goto LAB_011c8cf4;
      puVar6 = (undefined8 *)puVar6[1];
      sVar5 = sVar5 + 1;
    } while (puVar6 != &DAT_055c1b58);
  }
  sVar5 = -1;
LAB_011c8cf4:
  if (((((sVar1 == sVar5) && (lVar7 = *(long *)PTR_DAT_04bbbc68, lVar7 != 0)) &&
       (*(long *)(lVar7 + 0xb0) != 0)) &&
      ((*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0 && (*(long *)(lVar7 + 0x488) != 0)))) &&
     ((*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0 &&
      ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))))) {
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_38,param_2);
      uVar4 = FUN_0123d890(local_28,4);
      if ((uVar4 & 1) != 0) {
        local_40 = (int)((float)(int)*(float *)(param_2 + 0xb8) / 5.0) -
                   (uint)(*(float *)(param_2 + 0xb8) < 0.0);
        local_3c = (int)((float)(int)*(float *)(param_2 + 0xc0) / 5.0) -
                   (uint)(*(float *)(param_2 + 0xc0) < 0.0);
        local_48 = PTR_DAT_04bbbad8 + 0x10;
        if ((local_40 & 1) != 0) {
          local_40 = local_40 - 1;
        }
        if ((local_3c & 1) != 0) {
          local_3c = local_3c - 1;
        }
        uVar8 = FUN_01224d80(*(undefined8 *)PTR_DAT_04bb4778,&local_48);
        *(undefined4 *)(param_2 + 0xe4) = uVar8;
      }
    }
  }
  FUN_011cc92c(param_2);
  return;
}

