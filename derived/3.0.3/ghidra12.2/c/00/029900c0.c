
void FUN_029900c0(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  ulong local_40;
  ulong local_38;
  
  pbVar7 = *(byte **)(param_2 + 8);
  bVar2 = *(byte *)(param_2 + 1);
  bVar3 = *pbVar7;
  if ((bVar3 & 1) != 0) {
    uVar5 = *(undefined4 *)(pbVar7 + 8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pbVar7 + 4);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
    bVar3 = *pbVar7;
  }
  if ((bVar3 >> 1 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x10);
    uVar6 = (uint)bVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pbVar7 + 4);
    bVar3 = *(byte *)(param_1 + 0x10);
    uVar6 = bVar3 | 2;
    *(char *)(param_1 + 0x10) = (char)uVar6;
  }
  if ((bVar3 & 1) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 200) = uVar5;
    *(uint *)(param_1 + 0xc0) = uVar1;
    *(undefined4 *)(param_1 + 0x1c8) = uVar5;
    *(uint *)(param_1 + 0x1c0) = uVar1;
    *(ushort *)(param_1 + 0xb8) = *(ushort *)(param_1 + 0xb8) | 0x200;
    *(ushort *)(param_1 + 0x1b8) = *(ushort *)(param_1 + 0x1b8) | 0x200;
    local_40 = 0xfffe;
    FUN_0277d4ac(&local_40);
    uVar6 = 0;
    if (uVar1 != 99999 && -1 < (int)uVar1) {
      uVar6 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
    for (lVar8 = *(long *)(DAT_055f6860 + 0x19f820); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      while (*(int *)(lVar8 + 0x20) <= (int)uVar6) {
        if ((int)uVar6 <= *(int *)(lVar8 + 0x20)) {
          local_38 = (ulong)(ushort)*(undefined4 *)(lVar8 + 0x2c);
          goto LAB_029901e8;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_029901cc;
      }
    }
LAB_029901cc:
    local_38 = 0xfffe;
LAB_029901e8:
    FUN_0277d4ac(&local_38);
    lVar8 = *(long *)(param_1 + 0x28);
    local_40 = local_38;
    *(undefined4 *)(lVar8 + 0x150) = uVar5;
    uVar4 = FUN_0277d6c4(&local_40);
    *(undefined4 *)(lVar8 + 0x154) = uVar4;
    *(byte *)(lVar8 + 0x130) = *(byte *)(lVar8 + 0x130) | 4;
    lVar8 = *(long *)(param_1 + 0x128);
    *(undefined4 *)(lVar8 + 0x150) = uVar5;
    uVar5 = FUN_0277d6c4(&local_40);
    *(undefined4 *)(lVar8 + 0x154) = uVar5;
    *(byte *)(lVar8 + 0x130) = *(byte *)(lVar8 + 0x130) | 4;
    uVar6 = (uint)*(byte *)(param_1 + 0x10);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(lVar8 + 0x150) = uVar5;
    *(byte *)(lVar8 + 0x130) = *(byte *)(lVar8 + 0x130) | 0xc;
    lVar8 = *(long *)(param_1 + 0x128);
    *(undefined4 *)(lVar8 + 0x150) = uVar5;
    *(byte *)(lVar8 + 0x130) = *(byte *)(lVar8 + 0x130) | 0xc;
  }
  bVar2 = bVar2 & 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  FUN_029902c0(param_1,param_1 + 0x30,*(undefined8 *)(param_1 + 0x28),bVar2);
  FUN_029902c0(param_1,param_1 + 0x130,*(undefined8 *)(param_1 + 0x128),bVar2);
  return;
}

