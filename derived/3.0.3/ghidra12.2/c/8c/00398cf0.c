
void FUN_00398cf0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(param_2 + 0xd2);
  lVar6 = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0xda) = *(undefined8 *)(param_2 + 0xda);
  *(undefined8 *)(param_1 + 0xd2) = uVar9;
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x109);
  uVar2 = *(undefined1 *)(param_2 + 0x10a);
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x10a) = uVar2;
  FUN_00364770(lVar6);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_00364770(lVar6);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  FUN_00364770(lVar6);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_00364770(lVar6);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  bVar3 = *(byte *)(param_2 + 0xf9);
  if (bVar3 != 0) {
    FUN_003647ac(lVar6,bVar3);
    FUN_00364800(lVar6,(ulong)bVar3);
    lVar13 = 0;
    iVar12 = 0;
    do {
      FUN_003648c4(lVar6,iVar12,*(long *)(param_2 + 0x100) + lVar13);
      lVar13 = lVar13 + 0x20;
      iVar12 = iVar12 + 1;
    } while ((ulong)bVar3 * 0x20 != lVar13);
  }
  uStack_78 = 0;
  uVar9 = *(undefined8 *)(param_2 + 0x118);
  local_80 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  lVar6 = FUN_00367b30(0x50);
  if (lVar6 != 0) {
    FUN_0037700c(lVar6,uVar9,&local_80);
  }
  *(long *)(param_1 + 0x118) = lVar6;
  cVar4 = *(char *)(param_1 + 0x109);
  uVar11 = (ulong)cVar4;
  *(undefined1 *)(param_1 + 0x109) = 0;
  lVar6 = FUN_00367b30(uVar11 << 4);
  if (((long)uVar11 < 1) || (lVar6 == 0)) {
    *(long *)(param_1 + 0x110) = lVar6;
    if (lVar6 == 0) {
      cVar4 = *(char *)(param_1 + 0x109);
      goto joined_r0x00398e5c;
    }
  }
  else {
    if ((uVar11 & 0xffffffff) == 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      puVar10 = (undefined1 *)(lVar6 + 0x10);
      do {
        lVar13 = lVar13 + 2;
        puVar10[-0x10] = 0;
        *(undefined8 *)(puVar10 + -8) = 0;
        *puVar10 = 0;
        *(undefined8 *)(puVar10 + 8) = 0;
        puVar10 = puVar10 + 0x20;
      } while ((uVar11 & 0xffffffff) - (uVar11 & 1) != lVar13);
    }
    if ((uVar11 & 1) != 0) {
      puVar10 = (undefined1 *)(lVar6 + lVar13 * 0x10);
      *puVar10 = 0;
      *(undefined8 *)(puVar10 + 8) = 0;
    }
    *(long *)(param_1 + 0x110) = lVar6;
  }
  *(char *)(param_1 + 0x109) = cVar4;
joined_r0x00398e5c:
  if ('\0' < cVar4) {
    lVar13 = 0;
    lVar6 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x110) + lVar13) =
           *(undefined1 *)(*(long *)(param_2 + 0x110) + lVar13);
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x110) + lVar13 + 8);
      lVar7 = FUN_00367b30(0x50);
      if (lVar7 != 0) {
        FUN_0037700c(lVar7,uVar9,&local_80);
      }
      lVar6 = lVar6 + 1;
      lVar1 = *(long *)(param_1 + 0x110) + lVar13;
      lVar13 = lVar13 + 0x10;
      *(long *)(lVar1 + 8) = lVar7;
    } while (lVar6 < *(char *)(param_1 + 0x109));
  }
  if (*(long *)(param_2 + 0x120) == 0) {
    uVar9 = 0;
  }
  else {
    bVar5 = 1 < *(byte *)(param_1 + 0x108) - 1;
    uVar9 = 4;
    if (bVar5) {
      uVar9 = 0xc;
    }
    uVar8 = 3;
    if (!bVar5) {
      uVar8 = 1;
    }
    uVar9 = FUN_00367b30(uVar9);
    *(undefined4 *)(param_1 + 0x128) = uVar8;
  }
  *(undefined8 *)(param_1 + 0x120) = uVar9;
  return;
}

