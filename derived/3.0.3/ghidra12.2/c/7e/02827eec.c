
void FUN_02827eec(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *__s;
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  __s = (undefined8 *)((long)param_2 + 0xce);
  if (*(char *)(param_1 + 1) == '\0') {
    memset(param_2,0,0x374);
    puVar8 = param_2 + 0x18;
    *(undefined2 *)puVar8 = 0xfffe;
    FUN_0277d4ac(puVar8);
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset(__s,0,0x2a2);
    *(undefined2 *)(param_2 + 0x6e) = 0xfffe;
    *puVar8 = 0;
    *(undefined4 *)(param_2 + 0x19) = 0;
    *(undefined2 *)puVar8 = 0xfffe;
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
    FUN_0277d4ac(puVar8);
    *(undefined1 *)(param_2 + 0x19) = 0;
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
    *(undefined1 *)param_2 = 1;
    uVar5 = *param_3;
    uVar7 = param_3[1];
    uVar6 = param_3[2];
    *(undefined1 *)((long)param_2 + 0x1c) = *(undefined1 *)(param_3 + 3);
    *(undefined8 *)((long)param_2 + 0x14) = uVar6;
    *(undefined8 *)((long)param_2 + 0xc) = uVar7;
    *(undefined8 *)((long)param_2 + 4) = uVar5;
    uVar5 = *(undefined8 *)((long)param_3 + 0x1c);
    uVar7 = *(undefined8 *)((long)param_3 + 0x2c);
    param_2[5] = *(undefined8 *)((long)param_3 + 0x24);
    param_2[6] = uVar7;
    param_2[4] = uVar5;
    uVar1 = *(uint *)((long)param_3 + 0x34);
    *(undefined1 *)(param_2 + 0x17) = 0;
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 7) = uVar1;
    uVar6 = param_4[2];
    uVar5 = *param_4;
    uVar7 = param_4[1];
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_4 + 3);
    param_2[0xd] = uVar7;
    param_2[0xe] = uVar6;
    param_2[0xc] = uVar5;
    uVar5 = *(undefined8 *)((long)param_4 + 0x1c);
    uVar7 = *(undefined8 *)((long)param_4 + 0x24);
    *(undefined8 *)((long)param_2 + 0x8c) = *(undefined8 *)((long)param_4 + 0x2c);
    *(undefined8 *)((long)param_2 + 0x84) = uVar7;
    *(undefined8 *)((long)param_2 + 0x7c) = uVar5;
    uVar1 = *(uint *)((long)param_4 + 0x34);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x94) = uVar1;
    *(undefined2 *)puVar8 = *(undefined2 *)(param_1 + 4);
    *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
    uVar2 = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + 2);
    memset(param_2,0,0x374);
    puVar8 = param_2 + 0x18;
    *(undefined2 *)puVar8 = 0xfffe;
    FUN_0277d4ac(puVar8);
    *(undefined1 *)(param_2 + 0x19) = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset(__s,0,0x2a2);
    *(undefined2 *)(param_2 + 0x6e) = 0xfffe;
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
    *(undefined1 *)param_2 = 1;
    uVar5 = *param_3;
    uVar7 = param_3[1];
    uVar6 = param_3[2];
    *(undefined1 *)((long)param_2 + 0x1c) = *(undefined1 *)(param_3 + 3);
    *(undefined8 *)((long)param_2 + 0x14) = uVar6;
    *(undefined8 *)((long)param_2 + 0xc) = uVar7;
    *(undefined8 *)((long)param_2 + 4) = uVar5;
    uVar5 = *(undefined8 *)((long)param_3 + 0x1c);
    uVar7 = *(undefined8 *)((long)param_3 + 0x2c);
    param_2[5] = *(undefined8 *)((long)param_3 + 0x24);
    param_2[6] = uVar7;
    param_2[4] = uVar5;
    uVar1 = *(uint *)((long)param_3 + 0x34);
    *(undefined1 *)(param_2 + 0x17) = 0;
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 7) = uVar1;
    uVar5 = param_4[1];
    uVar7 = param_4[2];
    uVar6 = *param_4;
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_4 + 3);
    param_2[0xd] = uVar5;
    param_2[0xe] = uVar7;
    param_2[0xc] = uVar6;
    uVar5 = *(undefined8 *)((long)param_4 + 0x2c);
    uVar7 = *(undefined8 *)((long)param_4 + 0x24);
    *(undefined8 *)((long)param_2 + 0x7c) = *(undefined8 *)((long)param_4 + 0x1c);
    *(undefined8 *)((long)param_2 + 0x84) = uVar7;
    *(undefined8 *)((long)param_2 + 0x8c) = uVar5;
    uVar1 = *(uint *)((long)param_4 + 0x34);
    *(undefined1 *)((long)param_2 + 0xcc) = 1;
    *(undefined2 *)((long)param_2 + 0x36e) = uVar3;
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x94) = uVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)((long)param_2 + 0x11e) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)((long)param_2 + 0x126) = uVar6;
    *(undefined8 *)((long)param_2 + 0x10e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x116) = uVar7;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)((long)param_2 + 0xfe) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((long)param_2 + 0x106) = uVar6;
    *(undefined8 *)((long)param_2 + 0xee) = uVar5;
    *(undefined8 *)((long)param_2 + 0xf6) = uVar7;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)((long)param_2 + 0xde) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)((long)param_2 + 0xe6) = uVar6;
    *__s = uVar5;
    *(undefined8 *)((long)param_2 + 0xd6) = uVar7;
    memcpy((void *)((long)param_2 + 0x12e),(void *)(param_1 + 0x70),0x1e0);
    uVar5 = *(undefined8 *)(param_1 + 600);
    uVar7 = *(undefined8 *)(param_1 + 0x268);
    uVar6 = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)((long)param_2 + 0x31e) = *(undefined8 *)(param_1 + 0x260);
    *(undefined8 *)((long)param_2 + 0x326) = uVar7;
    *(undefined8 *)((long)param_2 + 0x30e) = uVar6;
    *(undefined8 *)((long)param_2 + 0x316) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x278);
    uVar7 = *(undefined8 *)(param_1 + 0x288);
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    *(undefined8 *)((long)param_2 + 0x33e) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)((long)param_2 + 0x346) = uVar7;
    *(undefined8 *)((long)param_2 + 0x32e) = uVar6;
    *(undefined8 *)((long)param_2 + 0x336) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x298);
    uVar7 = *(undefined8 *)(param_1 + 0x2a8);
    uVar6 = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)((long)param_2 + 0x35e) = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)((long)param_2 + 0x366) = uVar7;
    *(undefined8 *)((long)param_2 + 0x34e) = uVar6;
    *(undefined8 *)((long)param_2 + 0x356) = uVar5;
    *(undefined2 *)puVar8 = *(undefined2 *)(param_1 + 4);
    *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)((long)param_2 + 0xc4) = uVar2;
  uVar5 = FUN_0272eca4(param_1 + 0xc,1);
  uVar4 = nn::time::IsValidDate
                    ((uint)uVar5 & 0xffff,(uint)((ulong)uVar5 >> 0x10) & 0xff,
                     (uint)((ulong)uVar5 >> 0x18) & 0xff);
  if ((uVar4 & 1) != 0) {
    *(short *)((long)param_2 + 0xbc) = (short)uVar5;
    *(char *)((long)param_2 + 0xbe) = (char)((ulong)uVar5 >> 0x10);
    *(char *)((long)param_2 + 0xbf) = (char)((ulong)uVar5 >> 0x18);
  }
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  return;
}

