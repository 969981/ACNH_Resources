
bool FUN_003b0b60(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  void *__dest;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  bVar1 = param_2[3] != 0 && (ulong)param_2[2] <= param_4;
  if (bVar1) {
    lVar10 = *param_2;
    bVar5 = param_3 != 0;
    bVar2 = *(byte *)(lVar10 + 0x9d);
    uVar3 = *(undefined2 *)(lVar10 + 0x9e);
    *param_1 = lVar10;
    *(undefined2 *)(param_1 + 1) = 0;
    *(char *)((long)param_1 + 10) = (char)param_2[1];
    __dest = (void *)0x0;
    if (param_2[8] != 0 && bVar5) {
      __dest = (void *)(param_3 + param_2[0xb]);
    }
    param_1[9] = (long)__dest;
    memcpy(__dest,*(void **)(lVar10 + 0x60),(ulong)*(ushort *)(lVar10 + 0xa2));
    lVar7 = 0;
    if (param_2[0xc] != 0 && bVar5) {
      lVar7 = param_3 + param_2[0xf];
    }
    param_1[10] = lVar7;
    lVar7 = 0;
    if (param_2[0x14] != 0 && bVar5) {
      lVar7 = param_3 + param_2[0x17];
    }
    param_1[0xb] = lVar7;
    lVar6 = param_2[0x10];
    lVar8 = param_2[0x13];
    param_1[0xd] = 0;
    param_1[0xe] = param_3;
    param_1[0xc] = 0;
    param_1[6] = 0;
    lVar7 = 0;
    if (lVar6 != 0 && bVar5) {
      lVar7 = param_3 + lVar8;
    }
    param_1[7] = 0;
    param_1[8] = lVar7;
    lVar7 = 0;
    if (param_2[4] != 0 && bVar5) {
      lVar7 = param_3 + param_2[7];
    }
    FUN_003a295c(param_1 + 2,uVar3,*(undefined1 *)((long)param_1 + 10),lVar7);
    if ((ulong)bVar2 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(param_1[10] + lVar7) = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar7);
        *(undefined8 *)(param_1[0xb] + lVar7) = *(undefined8 *)(*(long *)(lVar10 + 0x90) + lVar7);
        lVar7 = lVar7 + 8;
      } while ((ulong)bVar2 * 8 != lVar7);
    }
    uVar4 = *(ushort *)(*param_1 + 0x9e);
    if ((ulong)uVar4 != 0) {
      lVar10 = 0;
      uVar9 = 0;
      do {
        lVar7 = *(long *)(*param_1 + 0x50) + lVar10;
        if (uVar9 != *(ushort *)(lVar7 + 0x1a)) {
          *(ulong *)(param_1[9] + (ulong)*(ushort *)(lVar7 + 0x12) + (ulong)*(byte *)(lVar7 + 0x10)
                     + 7 & 0xfffffffffffffff8) =
               param_1[9] +
               (ulong)*(ushort *)
                       (*(long *)(*param_1 + 0x50) + (ulong)*(ushort *)(lVar7 + 0x1a) * 0x20 + 0x12)
          ;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar4 != uVar9);
    }
  }
  return bVar1;
}

