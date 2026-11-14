
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170d1d8(long param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x1270) != 0) {
    return;
  }
  if (7 < *(byte *)(param_2 + 0x12)) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  lVar5 = DAT_05150358;
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_0170d254;
  }
  if (DAT_05150358 == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar6 = FUN_0277d6c4(param_2);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
  if (*(uint *)(lVar5 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
LAB_0170d254:
  puVar4 = PTR_DAT_04bb37e0;
  uVar3 = _UNK_04102208;
  uVar2 = _DAT_04102200;
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x1210) = 0;
  uVar1 = *(undefined2 *)puVar4;
  *(undefined1 *)(param_1 + 0x11f2) = puVar4[2];
  *(undefined2 *)(param_1 + 0x11f0) = uVar1;
  *(undefined *)(param_1 + 0x11f3) = puVar4[3];
  uVar9 = *(undefined4 *)(puVar4 + 4);
  *(undefined2 *)(param_1 + 0x1218) = 0;
  *(undefined8 *)(param_1 + 0x1234) = uVar3;
  *(undefined8 *)(param_1 + 0x122c) = uVar2;
  uVar3 = _UNK_04102888;
  uVar2 = _DAT_04102880;
  *(undefined8 *)(param_1 + 0x1200) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x11f4) = uVar9;
  *(undefined8 *)(param_1 + 0x1244) = uVar3;
  *(undefined8 *)(param_1 + 0x123c) = uVar2;
  uVar3 = _UNK_041023d8;
  uVar2 = _DAT_041023d0;
  *(undefined8 *)(param_1 + 0x1224) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x121c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1208) = 0xff00;
  *(undefined8 *)(param_1 + 0x1254) = uVar3;
  *(undefined8 *)(param_1 + 0x124c) = uVar2;
  bVar7 = *(byte *)(param_2 + 0x12);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x1209) = bVar7;
  *(undefined2 *)(param_1 + 0x11f0) = *param_2;
  *(undefined1 *)(param_1 + 0x11f2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x11f3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x1204) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0x120c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1210) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x1219) = *(undefined1 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x121c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1228) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x1260) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x1264) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1268) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x126c) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x1274) = *(undefined1 *)((long)param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x1275) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1284) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1288) = *(undefined4 *)(param_2 + 6);
  uVar9 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1270) = 1;
  *(undefined1 *)(param_1 + 0x12b5) = 0;
  *(undefined4 *)(param_1 + 0x12a8) = *(undefined4 *)(param_1 + 0x12ac);
  *(undefined4 *)(param_1 + 0x128c) = uVar9;
  return;
}

