
void FUN_014d07f0(float *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float local_74 [2];
  float local_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar4 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(auStack_50,&local_48,0,param_2,0);
  lVar3 = DAT_05150358;
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
     (((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar2 = FUN_0277d6c4(auStack_50);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(auStack_68,auStack_50);
      iVar1 = FUN_0123db50(auStack_60,local_58);
      if ((iVar1 - 2U & 0xfffffff9) != 0) {
        return;
      }
      if (local_58 == 0) {
        return;
      }
      local_74[0] = 7.00649e-45;
      lVar3 = FUN_01246470(local_58,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
      if (lVar3 == 0) {
        return;
      }
      fVar5 = (float)((int)local_74[0] + 7);
      if (-1 < (int)local_74[0]) {
        fVar5 = local_74[0];
      }
      if ((*(byte *)(lVar3 + (ulong)(uint)((int)fVar5 >> 3)) >> (ulong)((uint)local_74[0] & 7) & 1)
          == 0) {
        return;
      }
      local_6c = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5;
      local_74[0] = (float)*(int *)(param_2 + 8) * 5.0 + 2.5;
      lVar3 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) || (*(char *)(lVar3 + 0x11c8) != '\0')) {
        *param_1 = -495.0;
        return;
      }
      fVar5 = (float)FUN_0093a950(lVar3 + 0x28,local_74,0);
      *param_1 = fVar5 + 5.0;
      return;
    }
  }
  FUN_015018c0(&local_48,param_1,param_2,1);
  return;
}

