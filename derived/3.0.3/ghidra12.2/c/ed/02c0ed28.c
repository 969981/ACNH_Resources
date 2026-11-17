
void FUN_02c0ed28(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x230) + 0xa8);
  if (uVar2 < 7 && (1 << (ulong)(uVar2 & 0x1f) & 0x58U) != 0) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) >> 1 & 1) != 0) {
        iVar6 = 0;
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            iVar6 = 0;
          }
          else {
            puVar5 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar5,0);
            iVar6 = 0;
            if ((iVar4 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
              iVar6 = 0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
              }
            }
          }
        }
        if (DAT_05292430 == iVar6) {
          return;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x23c) = 0xf;
  }
  return;
}

