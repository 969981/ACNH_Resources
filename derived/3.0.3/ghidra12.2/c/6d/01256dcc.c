
void FUN_01256dcc(undefined4 *param_1,undefined2 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  long lVar8;
  undefined8 local_48;
  undefined2 local_40;
  byte local_3e;
  undefined1 local_3d;
  uint local_3c;
  long local_38;
  
  *(undefined2 *)(param_1 + 0x1a) = 0;
  local_48 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_48);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  *(undefined1 *)((long)param_1 + 0x6e) = 0xff;
  *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0x1e00000003;
  *(undefined2 *)((long)param_1 + 0x6f) = 0xffff;
  *(undefined2 *)param_1 = *param_2;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  param_1[1] = *(undefined4 *)(param_2 + 2);
  param_1[2] = *(undefined4 *)(param_2 + 4);
  param_1[6] = *(undefined4 *)(param_2 + 0xc);
  param_1[7] = *(undefined4 *)(param_2 + 0xe);
  param_1[8] = *(undefined4 *)(param_2 + 0x1c);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x16);
  uVar7 = *(ushort *)(param_1 + 0x1a);
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 < 0x50) {
    uVar7 = uVar7 | 4;
    *(ushort *)(param_1 + 0x1a) = uVar7;
  }
  param_1[0x17] = uVar5;
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x22) != '\0') {
    uVar7 = uVar7 | 0x1004;
  }
  *(ushort *)(param_1 + 0x1a) = uVar7 | 8;
  local_48 = (undefined *)CONCAT44(local_48._4_4_,*(int *)(param_2 + 0x1e));
  if (*(int *)(param_2 + 0x1e) != 0) {
    *(ushort *)(param_1 + 0x1a) = uVar7 | 0xc;
  }
  param_1[10] = *(undefined4 *)(param_2 + 0x10);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x12);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x14);
  iVar4 = FUN_0277d6c4(param_1);
  puVar3 = PTR_DAT_04bb43c0;
  if (iVar4 == 0x38d2) {
    local_40 = *(undefined2 *)param_1;
    local_38 = 0;
    bVar2 = *(byte *)((long)param_1 + 2);
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_3d = *(undefined1 *)((long)param_1 + 3);
    local_3c = param_1[1];
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    local_3e = bVar2;
    uVar5 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
          local_38 = lVar8;
        }
      }
    }
    uVar6 = FUN_01ae59b0(&local_48);
    bVar1 = bVar2 >> 2 & 1;
    if ((uVar6 & 1) == 0) {
      bVar1 = bVar2 & 4;
    }
    if (bVar1 != 0) {
      *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x40;
    }
  }
  lVar8 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar8 + 0x488) != 0 && (*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar8 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)))) {
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(&local_48,param_1);
      iVar4 = FUN_0123db50(&local_40,local_38);
      if ((iVar4 - 0x23U < 9) || (iVar4 = FUN_0123db50(&local_40,local_38), iVar4 - 0x12U < 6)) {
        *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x40;
        iVar4 = FUN_0123db50(&local_40,local_38);
        if ((iVar4 - 0x23U < 9) &&
           (4 < (local_3c >> 0xe & 1) + (local_3c >> 0xd & 1) +
                (local_3c >> 0xf & 1) + (local_3c >> 0x10 & 1) +
                (local_3c >> 0x11 & 1) + (local_3c >> 0x12 & 1) + (local_3c >> 0x13 & 1) +
                (local_3c >> 0x14 & 1) + (local_3c >> 0x15 & 1) + (local_3c >> 0x16 & 1))) {
          *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x80;
        }
      }
    }
  }
  return;
}

