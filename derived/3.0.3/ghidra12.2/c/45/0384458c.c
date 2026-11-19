
void FUN_0384458c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  
  bVar1 = *param_1;
  bVar4 = (bVar1 & 2) != 0;
  bVar2 = *param_2;
  lVar12 = *(long *)(param_2 + 8);
  uVar8 = 4;
  if (bVar4 || bVar2 == 0) {
    uVar8 = 0;
  }
  *param_1 = (byte)uVar8 | bVar1 & 0xfb;
  uVar9 = 8;
  if ((*param_2 == 0 & bVar1 >> 1) == 0) {
    uVar9 = 0;
  }
  *param_1 = (byte)uVar8 | bVar1 & 0xf3 | (byte)uVar9;
  uVar9 = uVar8 | bVar1 & 0xfffffff1 | uVar9 | (uint)*param_2 << 1;
  bVar3 = (byte)uVar9;
  *param_1 = bVar3;
  uVar8 = 0x20;
  if (param_2[1] == 0 || (bVar1 & 0x10) != 0) {
    uVar8 = 0;
  }
  *param_1 = bVar3 & 0xdf | (byte)uVar8;
  uVar7 = 0x40;
  if ((param_2[1] == 0 & bVar1 >> 4) == 0) {
    uVar7 = 0;
  }
  *param_1 = bVar3 & 0x9f | (byte)uVar8 | (byte)uVar7;
  uVar8 = uVar9 & 0xffffff8f | uVar8 | uVar7 | (uint)param_2[1] << 4;
  *param_1 = (byte)uVar8;
  if ((!bVar4 && bVar2 != 0) && (lVar10 = *(long *)(lVar12 + 0x10), lVar10 != 0)) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2 + 0x10);
    local_68 = 0;
    local_60 = 0;
    lVar11 = *(long *)(param_2 + 0x18);
    lVar5 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x30) + 0x18) + 0x20))();
    if ((lVar11 != 0) &&
       ((*(char *)(lVar5 + 0x78) != '\0' &&
        (uVar6 = FUN_03bf46a8(lVar10,"searchAndEmit(%s)",lVar11), (uVar6 & 1) != 0)))) {
      local_48 = 0;
      local_58 = PTR_DAT_04bcadf8 + 0x10;
      local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x18),lVar11);
      if (local_50 != 0) {
        FUN_03bf47b0(lVar10,&local_58,&local_68);
      }
    }
    uVar8 = (uint)*param_1;
  }
  if (((uVar8 >> 5 & 1) != 0) && (lVar12 = *(long *)(lVar12 + 8), lVar12 != 0)) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x18))(param_2 + 0x20);
    local_78 = 0;
    local_70 = 0;
    lVar5 = *(long *)(param_2 + 0x28);
    lVar10 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x30) + 0x18) + 0x20))();
    if ((lVar5 != 0) &&
       ((*(char *)(lVar10 + 0x78) != '\0' &&
        (uVar6 = FUN_03bf46a8(lVar12,"searchAndEmit(%s)",lVar5), (uVar6 & 1) != 0)))) {
      local_48 = 0;
      local_58 = PTR_DAT_04bcadf8 + 0x10;
      local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar12 + 0x30) + 0x18),lVar5);
      if (local_50 != 0) {
        FUN_03bf47b0(lVar12,&local_58,&local_78);
      }
    }
  }
  return;
}

