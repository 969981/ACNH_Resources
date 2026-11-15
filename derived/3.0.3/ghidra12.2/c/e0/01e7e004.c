
void FUN_01e7e004(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x77f4) == 0x3d) || (*(int *)(param_1 + 0x77b0) == 0x3d)) {
    if ((param_2 & 1) != 0) {
      local_38 = (undefined *)CONCAT44(local_38._4_4_,8);
      *(ushort *)(param_1 + 0xad28) = *(ushort *)(param_1 + 0xad28) & 0xfeff;
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      iVar1 = FUN_006f0400(*(float *)(param_1 + 0x7830) - *(float *)(lVar2 + 0x278),
                           *(float *)(param_1 + 0x7838) - *(float *)(lVar2 + 0x280));
      local_38 = PTR_DAT_04bb2020 + 0x10;
      local_24 = (undefined4)(long)((float)(iVar1 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
      puStack_30 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_24,PTR_DAT_04bb65b0,&local_38,6);
      *(undefined8 *)(param_1 + 0x126f8) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x787c) = 2;
    }
  }
  return;
}

