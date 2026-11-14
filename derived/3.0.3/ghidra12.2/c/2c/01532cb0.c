
void FUN_01532cb0(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *__src;
  long lVar5;
  undefined8 local_60;
  void *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  short local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  local_36 = 0;
  local_34 = 0;
  local_38 = (short)*(undefined4 *)(param_2 + 0x140c);
  FUN_0277d4ac(&local_38);
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_38);
  lVar4 = *(long *)puVar2;
  if (lVar4 == 0) {
LAB_01532d3c:
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    lVar4 = *(long *)puVar2;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_60;
    local_44 = local_60._4_4_;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar4 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_60);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
          local_40 = lVar4;
        }
      }
    }
    FUN_01adf970(&local_60,&local_50);
    *(undefined4 *)(param_1 + 2) = 0x80;
    puVar2 = PTR_DAT_04bb2e90;
    *(undefined1 *)((long)param_1 + 0x93) = 0;
    *param_1 = (long)(puVar2 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    (**(code **)(local_60 + 0x18))(&local_60);
    __src = local_58;
    if ((void *)((long)param_1 + 0x14) == local_58) goto LAB_01532ff4;
    (**(code **)(local_60 + 0x18))(&local_60);
    lVar4 = 0;
    do {
      if (*(char *)((long)local_58 + lVar4) == '\0') goto LAB_01532fcc;
      if (*(char *)((long)local_58 + lVar4 + 1) == '\0') goto LAB_01532fc0;
      if (*(char *)((long)local_58 + lVar4 + 2) == '\0') goto LAB_01532fc8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0 || local_38 == -2))
    goto LAB_01532d3c;
    local_40 = 0;
    local_48 = CONCAT22(local_36,local_38);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_44 = local_34;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar4 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_38);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
          local_40 = lVar4;
        }
      }
    }
    FUN_01adf970(&local_60,&local_50);
    *(undefined4 *)(param_1 + 2) = 0x80;
    puVar2 = PTR_DAT_04bb2e90;
    *(undefined1 *)((long)param_1 + 0x93) = 0;
    *param_1 = (long)(puVar2 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    (**(code **)(local_60 + 0x18))(&local_60);
    __src = local_58;
    if ((void *)((long)param_1 + 0x14) == local_58) goto LAB_01532ff4;
    (**(code **)(local_60 + 0x18))(&local_60);
    lVar4 = 0;
    do {
      if (*(char *)((long)local_58 + lVar4) == '\0') goto LAB_01532fcc;
      if (*(char *)((long)local_58 + lVar4 + 1) == '\0') goto LAB_01532fc0;
      if (*(char *)((long)local_58 + lVar4 + 2) == '\0') goto LAB_01532fc8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
  goto LAB_01532fcc;
LAB_01532fc0:
  lVar4 = lVar4 + 1;
  goto LAB_01532fcc;
LAB_01532fc8:
  lVar4 = lVar4 + 2;
LAB_01532fcc:
  iVar1 = (int)lVar4;
  if ((int)param_1[2] <= (int)lVar4) {
    iVar1 = (int)param_1[2] + -1;
  }
  memcpy((void *)((long)param_1 + 0x14),__src,(long)iVar1);
  *(undefined1 *)((long)param_1 + 0x14 + (long)iVar1) = 0;
LAB_01532ff4:
  *param_1 = (long)&DAT_048fc708;
  return;
}

