
void FUN_03f58494(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ushort *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 local_3c [4];
  undefined8 local_38;
  
  plVar10 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(plVar10 + 0xf419) = 1;
  (**(code **)**(undefined8 **)(*plVar10 + 0x78))(*(undefined8 **)(*plVar10 + 0x78),plVar10);
  *(undefined1 *)(plVar10 + 0x6ec35) = 0;
  *(undefined4 *)((long)plVar10 + 0x3761aa) = 0xffff;
  *(undefined2 *)((long)plVar10 + 0x3761ae) = 0;
  if ((char)plVar10[0x69b39] == '\0') {
    if ((char)plVar10[0x68e2] == '\0') {
      FUN_03f5b2e0(plVar10);
    }
    else {
      FUN_03f5bb90();
    }
  }
  else if ((char)plVar10[0x68e2] == '\0') {
    FUN_03f5c040();
  }
  else {
    FUN_03f5c250();
  }
  *(undefined1 *)((long)plVar10 + 0x38a459) = 0;
  (**(code **)(**(long **)(*plVar10 + 0x78) + 8))(*(long **)(*plVar10 + 0x78),plVar10);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    iVar1 = 0;
    if (0xffffff9a < iVar3 - 0x66U) {
      iVar1 = iVar3 + -1;
    }
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  puVar8 = (ushort *)(*(long *)(param_1 + 0x10) + 0x7a0cc);
  uVar4 = *puVar8;
  if (uVar4 != *(ushort *)(param_1 + 0x28)) {
    *(ushort *)(param_1 + 0x28) = uVar4;
    local_3c[0] = 1;
    uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x48);
    if ((int)uVar7 < 1) {
      uVar7 = (uint)*puVar8;
    }
    local_38 = 0xe000000000;
    uVar6 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x70))(*(long **)(param_1 + 0xc0),local_3c);
    lVar9 = *(long *)(param_1 + 0x20);
    bVar5 = (uVar6 & 1) == 0;
    uVar2 = local_38._4_4_;
    if (bVar5) {
      uVar2 = uVar7;
    }
    iVar3 = (int)local_38;
    if (bVar5) {
      iVar3 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0xc) * iVar3;
    *(uint *)(lVar9 + 0x14) = *(int *)(lVar9 + 0xc) * uVar2;
    *(int *)(lVar9 + 0x18) = iVar3;
    *(long *)(lVar9 + 0x20) = (long)*(int *)(lVar9 + 0x10) * (long)iVar3;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  return;
}

