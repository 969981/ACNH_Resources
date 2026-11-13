
void FUN_012575ac(short *param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined8 local_18;
  
  if ((param_3 & 1) != 0) {
    local_40 = 0;
    if (DAT_05aed670 == 0) {
      puVar2 = &DAT_055c04a0;
    }
    else {
      puVar2 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar2 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar2,0);
        puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar2 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar2 + 7);
    local_38 = FUN_017baf44();
    psVar3 = param_1 + 0x10;
    local_38 = local_38 & 1;
    local_48 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(&local_18,&local_48,*(undefined4 *)psVar3,param_1 + 8,0);
    param_1[1] = local_18._2_2_;
    *param_1 = (short)local_18;
    *(undefined4 *)(param_1 + 2) = local_18._4_4_;
    if ((short)local_18 == -2) {
      param_1[0x34] = 0;
      local_18 = 0xfffe;
      FUN_0277d4ac(&local_18);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      psVar3[0] = 0;
      psVar3[1] = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      *(undefined4 *)param_1 = (undefined4)local_18;
      *(undefined4 *)(param_1 + 2) = local_18._4_4_;
      *(undefined1 *)(param_1 + 0x37) = 0xff;
      param_1[0xc] = -1;
      param_1[0xd] = -1;
      param_1[0xe] = -1;
      param_1[0xf] = -1;
      param_1[0x2c] = -1;
      param_1[0x2d] = -1;
      param_1[0x2e] = -1;
      param_1[0x2f] = -1;
      param_1[0x30] = 3;
      param_1[0x31] = 0;
      param_1[0x32] = 0x1e;
      param_1[0x33] = 0;
      *(undefined2 *)((long)param_1 + 0x6f) = 0xffff;
      return;
    }
  }
  param_1[0x34] = param_1[0x34] | 0x20;
  *(undefined4 *)(param_1 + 6) = *param_2;
  return;
}

