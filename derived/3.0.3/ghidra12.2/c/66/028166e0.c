
void FUN_028166e0(undefined2 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined4 local_54;
  byte local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  local_54 = param_3;
  uVar2 = FUN_0277d6c4(param_2);
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_60 = 0;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      local_70 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar3 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
            local_60 = lVar3;
          }
        }
      }
      local_50[0] = 0;
      local_50[1] = 0;
      FUN_01adab50(&local_70,local_50);
      uVar2 = 0;
      do {
        local_4c = uVar2;
        if ((local_4c != 0) && (local_48 = local_4c, local_4c < 0xe)) {
          uVar2 = local_4c + 7;
          if (-1 < (int)local_4c) {
            uVar2 = local_4c;
          }
          local_44 = local_4c;
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_50[(uint)((int)uVar2 >> 3)] >> (ulong)(local_4c & 7) & 1) != 0)) {
            if (local_4c == 9) {
              *param_1 = *(undefined2 *)param_2;
              *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 2);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
              *(undefined4 *)(param_1 + 2) = param_2[1];
              *(char *)(param_1 + 0x458) = (char)local_54;
              goto LAB_02816994;
            }
            goto LAB_02816928;
          }
        }
        uVar2 = local_4c + 1;
        if (local_4c + 1 == 0xe) {
LAB_02816928:
          memset(param_1 + 8,0,0x8a8);
          puVar1 = PTR_DAT_04bb37e0;
          *(undefined8 *)(param_1 + 4) = 0;
          *param_1 = *(undefined2 *)puVar1;
          *(undefined *)(param_1 + 1) = puVar1[2];
          *(undefined *)((long)param_1 + 3) = puVar1[3];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 4);
          FUN_027c0ee4(param_1 + 8);
          memset(param_1 + 0x40,0,0x830);
          *(undefined1 *)(param_1 + 0x458) = 0;
          param_4 = 0xff;
          *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
LAB_02816994:
          *(undefined1 *)((long)param_1 + 0x8b1) = param_4;
          return;
        }
      } while( true );
    }
  }
  memset(param_1 + 8,0,0x8a8);
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = *(undefined2 *)puVar1;
  *(undefined *)(param_1 + 1) = puVar1[2];
  *(undefined *)((long)param_1 + 3) = puVar1[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 4);
  FUN_027c0ee4(param_1 + 8);
  memset(param_1 + 0x40,0,0x830);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  param_1[0x458] = 0xff00;
  return;
}

