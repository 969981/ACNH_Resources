
void FUN_02539778(byte *param_1,undefined4 param_2,short *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((((*(uint *)(puVar1 + 4) & 1) != 0) && (*param_1 < 8)) &&
        (uVar4 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar4 < 8)) &&
       (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
        ((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
         (*(char *)(*(long *)puVar1 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))))) {
      lVar5 = *(long *)puVar1 + (ulong)uVar4 * 0x13f0;
      iVar2 = *(int *)(lVar5 + 0x13b8);
      sVar3 = *param_3;
      if (iVar2 == 2) {
        if (sVar3 == -2) {
          *(undefined4 *)(lVar5 + 0x13c8) = 0;
        }
      }
      else if (iVar2 == 1) {
        *(short *)(lVar5 + 0x13c0) = sVar3;
        *(char *)(lVar5 + 0x13c2) = (char)param_3[1];
        *(undefined1 *)(lVar5 + 0x13c3) = *(undefined1 *)((long)param_3 + 3);
        *(undefined4 *)(lVar5 + 0x13c4) = *(undefined4 *)(param_3 + 2);
      }
      else if (iVar2 == 0) {
        if (sVar3 == -2) {
          *(undefined4 *)(lVar5 + 0x13bc) = DAT_0559bc2c;
        }
        else {
          *(undefined4 *)(lVar5 + 0x13bc) = param_4;
        }
      }
    }
  }
  FUN_02535300(param_1,param_2,param_3,param_4);
  return;
}

