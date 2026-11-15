
void FUN_01ff1c78(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar3 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar2 + 0x68);
    if (lVar4 != 0) {
      if (*(int *)(lVar2 + 0x500) == 2) {
        FUN_037227b4(DAT_05abbc58,lVar4 + 0x278,lVar4 + 0x2b4);
        return;
      }
      if (((*(byte *)(DAT_05abbc58 + 0x1231) >> 5 & 1) == 0) &&
         (iVar1 = FUN_03722560(DAT_05abbc58,lVar2 + 0x3e0), iVar1 != -1)) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0xe8) + (long)iVar1 * 8);
        *(ushort *)(lVar3 + 0x114) = *(ushort *)(lVar3 + 0x114) | 8;
        *(undefined4 *)(lVar3 + 0xf0) = *(undefined4 *)(lVar4 + 0x278);
        *(undefined4 *)(lVar3 + 0xf4) = *(undefined4 *)(lVar4 + 0x27c);
        *(undefined4 *)(lVar3 + 0xf8) = *(undefined4 *)(lVar4 + 0x280);
        *(undefined4 *)(lVar3 + 0xfc) = *(undefined4 *)(lVar4 + 0x2b4);
        if (DAT_05aed670 == 0) {
          puVar5 = &DAT_055c04a0;
        }
        else {
          puVar5 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar5 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar1 = FUN_006bd550(*puVar5,0);
            puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar1 != 0x758f7eaf) {
              puVar5 = &DAT_055c04a0;
            }
          }
        }
        *(undefined4 *)(lVar3 + 0x100) = *(undefined4 *)(puVar5 + 7);
      }
    }
  }
  return;
}

