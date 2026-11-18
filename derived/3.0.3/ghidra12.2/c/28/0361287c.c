
void FUN_0361287c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  long local_60;
  uint local_58;
  char local_54;
  undefined2 local_53;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x4118) = param_2;
  uVar2 = param_4[1];
  *(undefined8 *)(param_1 + 0x60) = *param_4;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar9 = param_4[5];
  *(undefined8 *)(param_1 + 0x80) = param_4[4];
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  uVar9 = param_4[9];
  *(undefined8 *)(param_1 + 0xa0) = param_4[8];
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar9 = param_4[0xc];
  uVar2 = param_4[10];
  uVar3 = param_4[0xb];
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_4 + 0xd);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar9;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  bVar5 = *(byte *)(param_4 + 1);
  *(byte *)(param_1 + 0xd2) = bVar5;
  *(char *)(param_1 + 0xd3) = (char)*(undefined4 *)((long)param_4 + 0xc);
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_4 + 2);
  *(bool *)(param_1 + 0xd5) = bVar5 < 3 && *(char *)((long)param_4 + 0x11) != '\0';
  uVar4 = *(undefined4 *)((long)param_4 + 0x14);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x11110;
  pcVar1 = (char *)(param_1 + 0x4120);
  *(char *)(param_1 + 0xd6) = (char)uVar4;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x58) = *param_4;
  *pcVar1 = *(char *)((long)param_4 + 0x37);
  *(undefined1 *)(param_1 + 0x4121) = *(undefined1 *)(param_4 + 7);
  *(undefined1 *)(param_1 + 0x4122) = *(undefined1 *)((long)param_4 + 0x39);
  uVar8 = *(undefined2 *)((long)param_4 + 0x34);
  *(undefined2 *)(param_1 + 0x4126) = 0;
  *(undefined2 *)(param_1 + 0x4124) = uVar8;
  local_40 = param_4[8];
  local_38 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)(param_1 + 0xef4) = 0;
  *(undefined8 *)(param_1 + 0xeed) = 0;
  *(undefined8 *)(param_1 + 0xee5) = 0;
  *(undefined8 *)(param_1 + 0xedd) = 0;
  *(undefined8 *)(param_1 + 0xed5) = 0;
  *(undefined8 *)(param_1 + 0xecd) = 0;
  *(undefined8 *)(param_1 + 0xec5) = 0;
  *(undefined1 *)(param_1 + 0x1081) = 0;
  *(undefined1 *)(param_1 + 0x1083) = 0;
  *(undefined1 *)(param_1 + 0x1085) = 0;
  *(undefined1 *)(param_1 + 0x1087) = 0;
  *(undefined1 *)(param_1 + 0x1089) = 0;
  *(undefined1 *)(param_1 + 0x108b) = 0;
  *(undefined1 *)(param_1 + 0x108d) = 0;
  *(undefined1 *)(param_1 + 0x108f) = 0;
  *(undefined1 *)(param_1 + 0x1091) = 1;
  *(undefined1 *)(param_1 + 0x1093) = 1;
  *(undefined1 *)(param_1 + 0x1095) = 0;
  *(undefined1 *)(param_1 + 0x1097) = 0;
  *(undefined1 *)(param_1 + 0x109f) = 0xff;
  cVar6 = (2 < *(byte *)(param_1 + 0xd2)) << 1;
  *(char *)(param_1 + 0x1099) = cVar6;
  *(char *)(param_1 + 0x109b) = cVar6;
  *(char *)(param_1 + 0x109d) = cVar6;
  FUN_0360a170(param_1 + 0x1100,&local_40);
  *(undefined1 *)(param_1 + 0x240) = 1;
  *(undefined1 *)(param_1 + 0x285) = 1;
  cVar6 = *(char *)(param_1 + 0x96);
  local_58 = *(uint *)((long)param_4 + 0x2c);
  if (local_58 == 0) {
    cVar7 = *pcVar1;
    bVar5 = *(byte *)(param_1 + 0xd2);
  }
  else {
    if (local_58 != 0xdeadbeef) {
      local_58 = local_58 | 0xff000000;
      goto LAB_03612a9c;
    }
    cVar7 = *pcVar1;
    *(undefined1 *)(param_1 + 0x464) = 1;
    bVar5 = *(byte *)(param_1 + 0xd2);
  }
  if (cVar7 == '\0') {
    local_58 = 0xffbddbd5;
    if (2 < bVar5) {
      local_58 = 0xffffffff;
    }
  }
  else if (bVar5 == 0) {
    local_58 = 0xff72c08f;
    if (*(char *)(param_1 + 0x4122) != '\0') {
      local_58 = 0xff25c9b1;
    }
  }
  else {
    local_58 = 0xffadb193;
    if (bVar5 != 1) {
      local_58 = 0xffffffff;
    }
  }
LAB_03612a9c:
  local_53 = *(undefined2 *)((long)param_4 + 0x37);
  local_50 = param_4[0xc];
  local_60 = 0;
  if (*(char *)((long)param_4 + 0x19) != '\0') {
    local_60 = (long)param_4 + 0x1c;
  }
  local_48 = *(undefined4 *)(param_4 + 0xd);
  local_54 = cVar6;
  FUN_035ed7a4(param_1 + 0x2c0,&local_60);
  if ((cVar6 != '\0') && (*(float *)(param_4 + 6) != 0.0)) {
    *(long *)(param_1 + 0x468) = (long)(*(float *)(param_4 + 6) * 16777216.0);
  }
  *(undefined1 *)(param_1 + 0x436) = *(undefined1 *)((long)param_4 + 0x3d);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

