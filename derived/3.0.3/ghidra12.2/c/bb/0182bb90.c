
void FUN_0182bb90(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0x1e;
  *(undefined4 *)(param_1 + 0x620) = 0x1e;
  *(undefined4 *)(param_1 + 0x638) = 0x1e;
  *(undefined4 *)(param_1 + 0x650) = 0x5a;
  *(undefined8 *)(param_1 + 0x648) = 0x5a;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x524);
  *(undefined1 *)(param_1 + 0x624) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined1 *)(param_1 + 0x63c) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined1 *)(param_1 + 0x654) = 0;
  *(undefined8 *)(param_1 + 0x664) = 0x5a00000000;
  plVar4 = DAT_0537d558;
  *(undefined1 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  if (plVar4 != (long *)0x0) {
    bVar3 = *(byte *)(*plVar4 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*plVar4 + 0x48);
      uVar6 = (long)(char)bVar3 & 0xffffffff;
      pbVar2 = pbVar1 + uVar6 * 0x80;
      if (7 < bVar3) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar7 = plVar4[2] + 0x108 + uVar6 * 0xc;
        if (0xb < bVar3) {
          lVar7 = plVar4[2] + 0x108;
        }
        if (*(char *)(lVar7 + 10) == '\0') goto LAB_0182bc54;
      }
    }
    *(undefined1 *)(param_1 + 0x3fa) = 0;
  }
LAB_0182bc54:
  lVar7 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x60);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
  if (*(long *)(lVar7 + 0x1138) != 0) {
    FUN_03850760(*puVar5);
  }
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(long *)(param_1 + 0x598) = param_1;
  *(undefined1 **)(param_1 + 0x5a0) = &LAB_0182f14c;
  *(undefined4 *)(param_1 + 0x4e0) = 1;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined1 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0x96;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined1 *)(param_1 + 0x570) = 0;
  return;
}

