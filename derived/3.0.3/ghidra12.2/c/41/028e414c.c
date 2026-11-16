
void FUN_028e414c(short *param_1,short *param_2)

{
  ulong uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  if (*param_2 != -1) {
    *(byte *)((long)param_1 + 3) = *(byte *)((long)param_1 + 3) | 1;
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = (char)*(undefined4 *)(param_2 + 2);
    *(char *)(param_1 + 2) = (char)*(undefined4 *)(param_2 + 4);
    param_1[3] = (short)*(undefined4 *)(param_2 + 6);
    if ((char)param_2[8] != '\0') {
      local_35 = 0;
      local_40 = 8;
      puStack_48 = local_3c;
      local_3c[0] = 0;
      local_50 = PTR_DAT_04bb3768 + 0x10;
      FUN_0376b510(&local_50);
      local_68 = 0xfffe;
      uStack_64 = 0;
      FUN_0277d4ac(&local_68);
      local_60 = 0xfffe;
      uStack_5c = 0;
      FUN_0277d4ac(&local_60);
      local_58 = 0xfffe;
      uStack_54 = 0;
      FUN_0277d4ac(&local_58);
      uVar1 = FUN_028e3e70(&local_68,&local_50,*(undefined4 *)(param_2 + 6));
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)(param_1 + 6) = local_68;
        *(ulong *)(param_1 + 8) = CONCAT44(local_60,uStack_64);
        *(ulong *)(param_1 + 0xc) = CONCAT44(local_58,uStack_5c);
        param_1[4] = param_1[4] | 1;
        *(undefined4 *)(param_1 + 0x10) = uStack_54;
      }
    }
  }
  return;
}

