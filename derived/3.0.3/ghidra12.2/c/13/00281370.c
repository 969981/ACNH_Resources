
undefined8 FUN_00281370(long *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)((long)param_1 + 0x3c);
  uVar7 = (ulong)uVar1;
  if (uVar7 == 0) {
    return 0;
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  do {
    uVar2 = 1 << (ulong)(uVar10 & 0x1f);
    if (((uVar2 & param_4) != 0) &&
       (uVar6 = (uint)*(ushort *)(*param_1 + (uVar7 * (param_2 & 0xff) + (ulong)uVar10) * 2),
       uVar6 != 0)) {
      uVar10 = (uint)*(ushort *)
                      (*param_1 + ((param_3 & 0xff) + (ulong)(uint)uVar1 * (ulong)uVar10) * 2);
      uVar6 = uVar10 + uVar6;
      bVar3 = false;
      bVar4 = true;
      if (uVar10 != 0) {
        bVar4 = *(ushort *)(param_1 + 6) <= uVar6;
        bVar3 = uVar6 == *(ushort *)(param_1 + 6);
      }
      if (!bVar4 || bVar3) {
        if ((ushort)*(byte *)(param_1[2] + (uVar9 & 0xff)) <= *(ushort *)((long)param_1 + 0x32)) {
          uVar8 = uVar8 | uVar2;
        }
      }
    }
    uVar10 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar10;
    uVar10 = uVar10 & 0xff;
  } while (uVar10 < uVar1);
  uVar9 = 0;
  do {
    if (((uVar8 & 0xff) >> (ulong)((uint)uVar9 & 0x1f) & 1) != 0) {
      uVar5 = FUN_00281a30(param_1,uVar9,param_4,(short)param_1[6],
                           *(undefined2 *)((long)param_1 + 0x32));
      uVar7 = (ulong)*(ushort *)((long)param_1 + 0x3c);
      if ((uVar5 & 1) != 0) {
        *(char *)(param_1[1] + (param_3 & 0xff) + uVar7 * (param_2 & 0xff)) = (char)uVar9;
        *(char *)(param_1[1] +
                 (param_2 & 0xff) + (ulong)*(ushort *)((long)param_1 + 0x3c) * (param_3 & 0xff)) =
             (char)uVar9;
        *(char *)(param_1[2] + (uVar9 & 0xff)) = *(char *)(param_1[2] + (uVar9 & 0xff)) + '\x02';
        return 1;
      }
    }
    uVar10 = (uint)uVar9 + 1;
    uVar9 = (ulong)uVar10;
  } while ((uVar10 & 0xff) < (uint)uVar7);
  return 0;
}

