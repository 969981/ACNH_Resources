
void FUN_028285c8(long param_1,void *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar1 = *param_3;
  if (*(char *)(param_1 + 1) == '\0') {
    local_50 = FUN_0272eca4(param_1 + 0xc,1);
    memset(param_2,0,0x374);
    *(undefined2 *)((long)param_2 + 0xc0) = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)((long)param_2 + 200) = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset((void *)((long)param_2 + 0xce),0,0x2a2);
    *(undefined2 *)((long)param_2 + 0x370) = 0xfffe;
    local_44 = uVar1;
    FUN_027ae180(param_2,&local_44,param_4,param_1 + 4,&local_50);
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    cVar2 = *(char *)(param_1 + 0x2b0);
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + 2);
    local_48 = uVar1;
    local_50 = FUN_0272eca4(param_1 + 0xc,1);
    FUN_027b1848(param_2,&local_48,param_4,uVar3,&local_50);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)((long)param_2 + 0xce) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)param_2 + 0xde) = uVar4;
    *(undefined8 *)((long)param_2 + 0xe6) = uVar6;
    *(undefined8 *)((long)param_2 + 0xd6) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)((long)param_2 + 0xfe) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((long)param_2 + 0x106) = uVar6;
    *(undefined8 *)((long)param_2 + 0xee) = uVar4;
    *(undefined8 *)((long)param_2 + 0xf6) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)((long)param_2 + 0x11e) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)((long)param_2 + 0x126) = uVar6;
    *(undefined8 *)((long)param_2 + 0x10e) = uVar4;
    *(undefined8 *)((long)param_2 + 0x116) = uVar5;
    memcpy((void *)((long)param_2 + 0x12e),(void *)(param_1 + 0x70),0x1e0);
    uVar4 = *(undefined8 *)(param_1 + 600);
    uVar5 = *(undefined8 *)(param_1 + 0x260);
    uVar6 = *(undefined8 *)(param_1 + 0x268);
    *(undefined8 *)((long)param_2 + 0x30e) = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)((long)param_2 + 0x326) = uVar6;
    *(undefined8 *)((long)param_2 + 0x31e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x316) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x278);
    uVar5 = *(undefined8 *)(param_1 + 0x280);
    uVar6 = *(undefined8 *)(param_1 + 0x288);
    *(undefined8 *)((long)param_2 + 0x32e) = *(undefined8 *)(param_1 + 0x270);
    *(undefined8 *)((long)param_2 + 0x346) = uVar6;
    *(undefined8 *)((long)param_2 + 0x33e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x336) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x298);
    uVar5 = *(undefined8 *)(param_1 + 0x2a0);
    uVar6 = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)((long)param_2 + 0x34e) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)((long)param_2 + 0x366) = uVar6;
    *(undefined8 *)((long)param_2 + 0x35e) = uVar5;
    *(undefined8 *)((long)param_2 + 0x356) = uVar4;
    *(undefined2 *)((long)param_2 + 0xc0) = *(undefined2 *)(param_1 + 4);
    *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
    *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 8);
    cVar2 = *(char *)(param_1 + 0x2b0);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)((long)param_2 + 200) = 1;
  }
  return;
}

