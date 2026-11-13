
void FUN_011b7d14(undefined8 param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined **local_40;
  undefined8 uStack_38;
  undefined4 *local_30;
  undefined4 local_4;
  
  lVar4 = *(long *)PTR_DAT_04bb3968;
  lVar5 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) || (*(int *)(lVar5 + 0x80) != 1)) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      local_40 = (undefined **)CONCAT44(local_40._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return;
      }
    }
    if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x2a789248) && (0 < *(int *)(lVar4 + 0x11bc))) &&
       (1 < *(int *)(lVar4 + 0x11b8))) {
      if (*(uint *)(lVar4 + 0x11c0) < 0x34) {
        puVar3 = *(undefined8 **)
                  (PTR_s_Walking_04bbbab8 + (ulong)*(uint *)(lVar4 + 0x11c0) * 8 + 0x2b0);
      }
      else {
        puVar3 = &DAT_0407ebb1;
      }
      local_4 = FUN_006bd550(puVar3,0);
      local_40 = &PTR_LAB_04986400;
      local_30 = &local_4;
      uStack_38 = param_1;
      FUN_011bc6f0(&local_40);
    }
  }
  return;
}

