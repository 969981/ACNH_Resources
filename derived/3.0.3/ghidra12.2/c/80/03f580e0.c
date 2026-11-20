
void FUN_03f580e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 local_3c [4];
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  iVar4 = FUN_03f58214(param_1,param_3,param_2);
  if (iVar4 == 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    cVar2 = *(char *)(*(long *)(param_1 + 8) + 0x20);
    if (cVar2 == '\x03') {
      *(undefined8 *)(lVar7 + 8) = 0x200000002;
      iVar4 = 0x200;
    }
    else if (cVar2 == '\x02') {
      *(undefined4 *)(lVar7 + 0xc) = 2;
      iVar4 = *(int *)(lVar7 + 8) << 8;
    }
    else if (cVar2 == '\x01') {
      *(undefined4 *)(lVar7 + 8) = 2;
      iVar4 = 0x200;
    }
    else {
      *(undefined4 *)(lVar7 + 8) = 1;
      iVar4 = 0x100;
    }
    *(int *)(lVar7 + 0x10) = iVar4;
    uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x48);
    if ((int)uVar6 < 1) {
      uVar6 = (uint)*(ushort *)(*(long *)(param_1 + 0x10) + 0x7a0cc);
    }
    local_3c[0] = 1;
    local_38 = 0xe000000000;
    uVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x70))(*(long **)(param_1 + 0xc0),local_3c);
    lVar7 = *(long *)(param_1 + 0x20);
    bVar3 = (uVar5 & 1) == 0;
    uVar1 = local_38._4_4_;
    if (bVar3) {
      uVar1 = uVar6;
    }
    iVar4 = (int)local_38;
    if (bVar3) {
      iVar4 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0xc) * iVar4;
    *(uint *)(lVar7 + 0x14) = *(int *)(lVar7 + 0xc) * uVar1;
    *(int *)(lVar7 + 0x18) = iVar4;
    *(long *)(lVar7 + 0x20) = (long)*(int *)(lVar7 + 0x10) * (long)iVar4;
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(*(long *)(param_1 + 0x10) + 0x7a0cc);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  }
  return;
}

