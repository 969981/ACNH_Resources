
void FUN_039ea6a4(uint *param_1,byte *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_48;
  uint uStack_44;
  uint *local_40;
  uint *puStack_38;
  
  bVar6 = *param_2;
  *(byte *)((long)param_1 + 0x32) = bVar6;
  uVar5 = bVar6 & 7;
  uVar11 = *param_1;
  uVar10 = uVar11 >> 1 & 1;
  if (-1 < (char)*param_2) {
    uVar10 = 1;
  }
  if (uVar5 - 2 < 4) {
    bVar6 = 0;
    bVar9 = 0;
    bVar3 = true;
joined_r0x039ea734:
    if ((uVar11 >> 0x11 & 1) == 0) {
      uVar8 = *(ushort *)((long)param_1 + 0x36) | 2;
      goto LAB_039ea750;
    }
  }
  else {
    if (1 < uVar5) {
      bVar3 = false;
      bVar6 = 1;
      bVar9 = 1;
      goto joined_r0x039ea734;
    }
    bVar3 = false;
    bVar9 = 1;
  }
  bVar6 = bVar9;
  uVar8 = *(ushort *)((long)param_1 + 0x36) & 0xfffd;
LAB_039ea750:
  *(ushort *)((long)param_1 + 0x36) = uVar8 & 0xffef | (ushort)((uVar11 & 0x41000) == 0) << 4;
  uVar7 = 3;
  if (uVar10 != 0) {
    uVar7 = 4;
  }
  if (*(char *)((long)param_1 + 0x21) == '\x04') {
    bVar6 = 0;
    uVar7 = 6;
    bVar3 = true;
  }
  else if (*(char *)((long)param_1 + 0x21) == '\x05') {
    bVar3 = false;
    bVar6 = 1;
    uVar7 = 4;
  }
  else {
    bVar6 = (byte)uVar10 & bVar6;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)((long)param_1 + 0x1e2) = 0;
  if ((uVar11 & 0xc00) != 0 || (uVar8 & 0x40) != 0) {
    bVar3 = true;
  }
  *(byte *)((long)param_1 + 0x24e) = (byte)(uVar11 >> 0x16) & 1;
  bVar9 = 0;
  if ((uVar11 & 0x40000) == 0) {
    bVar9 = bVar6 | (byte)((uVar11 & 0x1000) >> 0xc);
  }
  *(byte *)((long)param_1 + 0x1e1) = bVar9;
  uVar2 = 2;
  if (param_1[0x7f] != 0) {
    uVar2 = uVar7;
  }
  *(undefined1 *)(param_1 + 0x91) = uVar2;
  uVar5 = (uint)*(byte *)((long)param_1 + 0x35);
  if (!bVar3) {
    uVar5 = 0;
  }
  param_1[0x79] = uVar5;
  *(undefined8 *)(param_1 + 0x7a) = *(undefined8 *)(param_1 + 0x69);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0x6b);
  param_1[0x7f] = param_1[0xf];
  *(undefined1 *)((long)param_1 + 0x246) = 5;
  param_1[0x7e] = 0x3f000000;
  uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 4) + 0x360) + 0x10))
                    (*(long *)(param_1 + 4) + 0x360);
  if ((uVar4 & 1) != 0) {
    uStack_44 = param_1[0x68];
    local_48 = 1;
    local_40 = param_1;
    puStack_38 = param_1 + 0x78;
    (*(code *)**(undefined8 **)(*(long *)(param_1 + 4) + 0x360))
              (*(long *)(param_1 + 4) + 0x360,&local_48);
  }
  if (*(char *)((long)param_1 + 0x21) == '\t') {
    uVar5 = *(byte *)(*(long *)(param_1 + 4) + 0xb) + 4;
  }
  else if (*(char *)((long)param_1 + 0x33) == '\x01') {
    uVar5 = 0;
  }
  else if ((*param_2 >> 6 & 1) == 0) {
    uVar5 = 1;
    if ((*param_2 & 6) != 0) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 3;
  }
  if (uVar5 != (byte)param_1[0xc]) {
    lVar1 = *(long *)(param_1 + 4) + (ulong)uVar5 * 8;
    uVar10 = *(uint *)(lVar1 + 0x2d4);
    uVar11 = *(uint *)(lVar1 + 0x2d0);
    param_1[0x90] = 0;
    *(char *)(param_1 + 0xc) = (char)uVar5;
    param_1[0x8e] = uVar10;
    param_1[0x8f] = uVar11;
  }
  if ((*param_1 & 0x10000) == 0) {
    FUN_038e4d90(param_1 + 0x78,*(undefined8 *)(param_1 + 6));
  }
  return;
}

