
void FUN_02828240(long param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar5 = FUN_0272eca4(param_1 + 0xc,1);
    memset(param_2,0,0x374);
    puVar10 = param_2 + 0x18;
    *(undefined2 *)puVar10 = 0xfffe;
    FUN_0277d4ac(puVar10);
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset((void *)((long)param_2 + 0xce),0,0x2a2);
    *(undefined2 *)(param_2 + 0x6e) = 0xfffe;
    *puVar10 = 0;
    *(undefined4 *)(param_2 + 0x19) = 0;
    *(undefined2 *)puVar10 = 0xfffe;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    FUN_0277d4ac(puVar10);
    *(undefined1 *)(param_2 + 0x19) = 0;
    *(undefined1 *)param_2 = 1;
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    *(undefined1 *)((long)param_2 + 4) = *param_3;
    *(undefined1 *)((long)param_2 + 5) = param_3[1];
    uVar4 = FUN_020fd7d8(param_3);
    *(undefined1 *)((long)param_2 + 6) = uVar4;
    uVar7 = param_4[1];
    uVar8 = param_4[2];
    uVar4 = *(undefined1 *)(param_4 + 3);
    uVar9 = *param_4;
    *(undefined1 *)(param_2 + 0x17) = 0;
    *(undefined1 *)(param_2 + 4) = uVar4;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    param_2[1] = uVar9;
    uVar7 = param_5[1];
    uVar8 = param_5[2];
    uVar9 = *param_5;
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_5 + 3);
    param_2[0xd] = uVar7;
    param_2[0xe] = uVar8;
    param_2[0xc] = uVar9;
    uVar7 = *(undefined8 *)((long)param_5 + 0x2c);
    uVar8 = *(undefined8 *)((long)param_5 + 0x24);
    *(undefined8 *)((long)param_2 + 0x7c) = *(undefined8 *)((long)param_5 + 0x1c);
    *(undefined8 *)((long)param_2 + 0x84) = uVar8;
    *(undefined8 *)((long)param_2 + 0x8c) = uVar7;
    uVar1 = *(uint *)((long)param_5 + 0x34);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x94) = uVar1;
    *(undefined2 *)puVar10 = *(undefined2 *)(param_1 + 4);
    *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
    *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 8);
    uVar6 = nn::time::IsValidDate
                      ((uint)uVar5 & 0xffff,(uint)uVar5 >> 0x10 & 0xff,
                       (uint)((ulong)uVar5 >> 0x18) & 0xff);
    if ((uVar6 & 1) != 0) {
      *(short *)((long)param_2 + 0xbc) = (short)uVar5;
      *(char *)((long)param_2 + 0xbe) = (char)((ulong)uVar5 >> 0x10);
      *(char *)((long)param_2 + 0xbf) = (char)((ulong)uVar5 >> 0x18);
    }
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    cVar2 = *(char *)(param_1 + 0x2b0);
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + 2);
    uVar5 = FUN_0272eca4(param_1 + 0xc,1);
    memset(param_2,0,0x374);
    *(undefined2 *)(param_2 + 0x18) = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)(param_2 + 0x19) = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset((undefined8 *)((long)param_2 + 0xce),0,0x2a2);
    *(undefined2 *)(param_2 + 0x6e) = 0xfffe;
    *(undefined1 *)param_2 = 1;
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    *(undefined1 *)((long)param_2 + 4) = *param_3;
    *(undefined1 *)((long)param_2 + 5) = param_3[1];
    uVar4 = FUN_020fd7d8(param_3);
    *(undefined1 *)((long)param_2 + 6) = uVar4;
    uVar7 = param_4[1];
    uVar8 = param_4[2];
    uVar4 = *(undefined1 *)(param_4 + 3);
    uVar9 = *param_4;
    *(undefined1 *)(param_2 + 0x17) = 0;
    *(undefined1 *)(param_2 + 4) = uVar4;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    param_2[1] = uVar9;
    uVar7 = param_5[1];
    uVar8 = param_5[2];
    uVar9 = *param_5;
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_5 + 3);
    param_2[0xd] = uVar7;
    param_2[0xe] = uVar8;
    param_2[0xc] = uVar9;
    uVar7 = *(undefined8 *)((long)param_5 + 0x2c);
    uVar8 = *(undefined8 *)((long)param_5 + 0x24);
    *(undefined8 *)((long)param_2 + 0x7c) = *(undefined8 *)((long)param_5 + 0x1c);
    *(undefined8 *)((long)param_2 + 0x84) = uVar8;
    *(undefined8 *)((long)param_2 + 0x8c) = uVar7;
    uVar1 = *(uint *)((long)param_5 + 0x34);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x94) = uVar1;
    uVar6 = nn::time::IsValidDate
                      ((uint)uVar5 & 0xffff,(uint)uVar5 >> 0x10 & 0xff,
                       (uint)((ulong)uVar5 >> 0x18) & 0xff);
    if ((uVar6 & 1) != 0) {
      *(short *)((long)param_2 + 0xbc) = (short)uVar5;
      *(char *)((long)param_2 + 0xbe) = (char)((ulong)uVar5 >> 0x10);
      *(char *)((long)param_2 + 0xbf) = (char)((ulong)uVar5 >> 0x18);
    }
    *(undefined1 *)((long)param_2 + 0xcc) = 1;
    *(undefined2 *)((long)param_2 + 0x36e) = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)((long)param_2 + 0xde) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)((long)param_2 + 0xe6) = uVar5;
    *(undefined8 *)((long)param_2 + 0xce) = uVar7;
    *(undefined8 *)((long)param_2 + 0xd6) = uVar8;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)((long)param_2 + 0xfe) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((long)param_2 + 0x106) = uVar5;
    *(undefined8 *)((long)param_2 + 0xee) = uVar7;
    *(undefined8 *)((long)param_2 + 0xf6) = uVar8;
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)((long)param_2 + 0x11e) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)((long)param_2 + 0x126) = uVar5;
    *(undefined8 *)((long)param_2 + 0x10e) = uVar7;
    *(undefined8 *)((long)param_2 + 0x116) = uVar8;
    memcpy((void *)((long)param_2 + 0x12e),(void *)(param_1 + 0x70),0x1e0);
    uVar7 = *(undefined8 *)(param_1 + 600);
    uVar8 = *(undefined8 *)(param_1 + 0x268);
    uVar5 = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)((long)param_2 + 0x31e) = *(undefined8 *)(param_1 + 0x260);
    *(undefined8 *)((long)param_2 + 0x326) = uVar8;
    *(undefined8 *)((long)param_2 + 0x30e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x316) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x278);
    uVar8 = *(undefined8 *)(param_1 + 0x288);
    uVar5 = *(undefined8 *)(param_1 + 0x270);
    *(undefined8 *)((long)param_2 + 0x33e) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)((long)param_2 + 0x346) = uVar8;
    *(undefined8 *)((long)param_2 + 0x32e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x336) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x298);
    uVar8 = *(undefined8 *)(param_1 + 0x2a8);
    uVar5 = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)((long)param_2 + 0x35e) = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)((long)param_2 + 0x366) = uVar8;
    *(undefined8 *)((long)param_2 + 0x34e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x356) = uVar7;
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_1 + 4);
    *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
    *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 8);
    cVar2 = *(char *)(param_1 + 0x2b0);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  return;
}

