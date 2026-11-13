
void FUN_011c485c(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  undefined *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined *local_a0;
  int local_98;
  uint local_94;
  byte local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  puVar3 = PTR_DAT_04bb32e0;
  puVar2 = PTR_DAT_04bb2010;
  if ((*(uint *)(param_1 + 0x294) & 0xfffffffe) == 8) {
    if (-1 < (char)*(byte *)(param_1 + 0x298)) {
      DAT_0547b4b4 = DAT_0547b4b4 | 1 << (ulong)(*(byte *)(param_1 + 0x298) & 0x1f);
    }
    if (*(int *)(param_1 + 0x290) != 0) {
      local_94 = 0;
      local_8f = 0;
      local_84 = 0xfffe;
      local_90 = *PTR_DAT_04bb32e0;
      local_a0 = PTR_DAT_04bc2e90 + 0x10;
      local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
      uStack_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      if (7 < local_90) {
        local_90 = 0xff;
      }
      local_98 = *(int *)(param_1 + 0x290);
      FUN_0277d4ac(&local_84);
      local_7c = 0xfffe;
      FUN_0277d4ac(&local_7c);
      local_60 = puVar2 + 0x10;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_48 = 0;
      local_44 = 0;
      uStack_58 = 0;
      local_50 = 0x2400000000;
      pbVar1 = PTR_DAT_04bb5038 + ((long)(char)*(byte *)(param_1 + 0x298) & 0xffffffff);
      if (7 < *(byte *)(param_1 + 0x298)) {
        pbVar1 = puVar3;
      }
      bVar4 = *pbVar1;
      local_94 = (uint)bVar4;
      if (7 < local_94) {
        local_94 = 0xffffffff;
      }
      if (bVar4 < 8) {
        local_90 = bVar4;
      }
      local_8f = 1;
      FUN_01393458(&local_a0);
    }
  }
  if ((*(byte *)(param_1 + 0x180) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x294) = 0;
    bVar4 = *(byte *)(param_1 + 0x29b) & 0xfe;
  }
  else {
    if ((*(uint *)(param_1 + 0x294) & 0xfffffffe) == 8) {
      FUN_011c4580(param_1);
      goto LAB_011c49d0;
    }
    *(undefined4 *)(param_1 + 0x294) = 0x1b;
    bVar4 = *(byte *)(param_1 + 0x29b) | 1;
  }
  *(byte *)(param_1 + 0x29b) = bVar4;
LAB_011c49d0:
  fVar5 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar6 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_a8 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0) & 0xfffffffe;
  uStack_a4 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0) & 0xfffffffe;
  local_b0 = puVar2 + 0x10;
  FUN_012293f0(*(undefined8 *)PTR_DAT_04bb4778,&local_b0);
  return;
}

