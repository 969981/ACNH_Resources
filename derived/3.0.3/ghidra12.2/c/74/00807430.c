
void FUN_00807430(uint *param_1,long param_2)

{
  int *piVar1;
  void *__dest;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  if ((param_1 != (uint *)0x0) && (*(char *)(param_2 + 0x8a5) == '\x02')) {
    __dest = (void *)((long)param_1 + 0xa5);
    param_1[1] = *(uint *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xc) = uVar8;
    *(undefined8 *)(param_1 + 6) = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar6;
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 0x12) = uVar8;
    *(undefined8 *)(param_1 + 0xe) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x54);
    uVar6 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x17) = uVar6;
    *(undefined8 *)(param_1 + 0x15) = uVar5;
    uVar9 = *(uint *)(param_2 + 0x6c);
    if (1 < uVar9) {
      uVar9 = 0;
    }
    param_1[0x1b] = uVar9;
    bVar3 = *(byte *)(param_2 + 0x70);
    *(byte *)(param_1 + 0x1c) = bVar3;
    *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
    *(undefined2 *)((long)param_1 + 0x72) = *(undefined2 *)(param_2 + 0x72);
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar8 = *(undefined8 *)(param_2 + 0x98);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    uVar6 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)(param_2 + 0x9d);
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x26) = uVar8;
    memcpy(__dest,(void *)(param_2 + 0xa5),0x200);
    uVar7 = 0;
    uVar9 = 0;
    bVar4 = true;
    do {
      iVar10 = 0x20;
      uVar11 = uVar7;
      do {
        if ((((*(byte *)((long)__dest + uVar11) ^ 0xff) & 0xf) == 0) ||
           (0xef < *(byte *)((long)__dest + uVar11))) goto LAB_0080756c;
        uVar11 = (ulong)((int)uVar11 + 1);
        iVar10 = iVar10 + -2;
      } while (iVar10 != 0);
      bVar4 = uVar9 < 0x1f;
      uVar9 = uVar9 + 1;
      uVar7 = (ulong)((int)uVar7 + 0x10);
    } while (uVar9 != 0x20);
LAB_0080756c:
    *param_1 = 0;
    bVar2 = 2;
    if (!bVar4) {
      bVar2 = 0;
    }
    uVar7 = 0;
    *(byte *)(param_1 + 0x1c) = bVar2 | bVar3 & 0xfc;
    uVar9 = 0;
    do {
      piVar1 = (int *)((long)param_1 + uVar7);
      uVar7 = uVar7 + 4;
      uVar9 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
    } while (uVar7 < 0x2a5);
    uVar9 = (uVar9 ^ uVar9 >> 0x10 ^ 0x2a8) * -0x7a143595;
    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
    *param_1 = uVar9 ^ uVar9 >> 0x10;
  }
  return;
}

