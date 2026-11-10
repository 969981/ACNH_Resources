
void FUN_0027fd20(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  FUN_00227770();
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *param_1 = &PTR_FUN_048455e0;
  uVar1 = *(ushort *)(DAT_04c61168 + 0x58);
  *(ushort *)(param_1 + 0xb) = uVar1;
  uVar10 = (ulong)uVar1 * (ulong)uVar1;
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10(uVar10,uVar2);
  if ((ulong)uVar1 != 0 && lVar3 != 0) {
    uVar4 = uVar10 & 3;
    if ((uint)uVar10 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar3 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while ((uVar10 & 0x7ffffffc) != uVar5);
    }
    if (uVar4 != 0) {
      puVar8 = (undefined1 *)(lVar3 + uVar5);
      do {
        uVar4 = uVar4 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar4 != 0);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xb);
  uVar10 = (ulong)uVar1;
  param_1[0xd] = lVar3;
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10(uVar10 << 2,uVar2);
  if ((uVar1 != 0) && (lVar3 != 0)) {
    uVar4 = uVar10 & 3;
    if (uVar1 < 4) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar9 = (undefined8 *)(lVar3 + 8);
      do {
        lVar6 = lVar6 + -4;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 2;
      } while (-lVar6 != (uVar10 & 0xfffc));
      lVar6 = -lVar6;
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined4 *)(lVar3 + lVar6 * 4);
      do {
        uVar4 = uVar4 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[0xe] = lVar3;
  memset((void *)param_1[0xd],0,
         (ulong)*(ushort *)(param_1 + 0xb) * (ulong)*(ushort *)(param_1 + 0xb));
  memset((void *)param_1[0xe],0,(ulong)*(ushort *)(param_1 + 0xb) << 2);
  uVar1 = *(ushort *)(param_1 + 0xb);
  uVar10 = (ulong)uVar1;
  param_1[0xf] = 0;
  uVar2 = FUN_0021f454();
  __s = (void *)FUN_00285d10(uVar10,uVar2);
  if ((uVar1 != 0) && (__s != (void *)0x0)) {
    uVar4 = uVar10 & 3;
    if (uVar1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)((long)__s + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while ((uVar10 & 0xfffc) != uVar5);
    }
    if ((uVar1 & 3) != 0) {
      puVar8 = (undefined1 *)((long)__s + uVar5);
      do {
        uVar4 = uVar4 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[0x10] = __s;
  memset(__s,0,(ulong)*(ushort *)(param_1 + 0xb));
  return;
}

