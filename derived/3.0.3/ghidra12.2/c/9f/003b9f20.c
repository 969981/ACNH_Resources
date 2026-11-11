
undefined8 FUN_003b9f20(long param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  lVar5 = FUN_003b90ac(*(undefined8 *)(param_1 + 0x40));
  if ((lVar5 == 0) || (iVar4 = FUN_003b93f0(), iVar4 != 2)) {
    return 0;
  }
  puVar6 = (undefined2 *)FUN_003b9420(lVar5);
  *param_3 = *puVar6;
  param_3[1] = puVar6[1];
  pbVar7 = (byte *)FUN_003b978c();
  if (pbVar7 == (byte *)0x0) {
    uVar10 = 0;
    *(undefined4 *)(param_3 + 0x3e) = 1;
  }
  else {
    *(uint *)(param_3 + 0x3e) = (uint)*pbVar7;
    uVar10 = (uint)pbVar7[2];
  }
  *(uint *)(param_3 + 0x40) = uVar10;
  if (*(uint *)(param_1 + 8) >> 8 < 0x201) {
    *(undefined2 *)((long)param_3 + 9) = 0;
    *(undefined1 *)((long)param_3 + 0xb) = 0;
    *(undefined4 *)(param_3 + 2) = 0x3f800000;
    *(undefined1 *)(param_3 + 4) = 0x7f;
  }
  else {
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar6 + 6);
    puVar8 = (undefined4 *)FUN_003b97b0(puVar6);
    uVar1 = *puVar8;
    *(char *)(param_3 + 4) = (char)uVar1;
    *(char *)((long)param_3 + 0xb) = (char)((uint)uVar1 >> 0x18);
    *(short *)((long)param_3 + 9) = (short)((uint)uVar1 >> 8);
  }
  uVar1 = *(undefined4 *)(puVar6 + 0x10);
  if (*(uint *)(param_1 + 8) < 0x20200) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_3 + 0x42) = uVar1;
  puVar9 = (uint *)FUN_003b9774(puVar6);
  if (puVar9 != (uint *)0x0) {
    uVar10 = *puVar9;
    if (7 < uVar10) {
      uVar10 = 8;
    }
    if (uVar10 != 0) {
      uVar11 = 0;
      puVar12 = (undefined1 *)((long)param_3 + 0x19);
      puVar3 = puVar9;
      do {
        if ((uVar11 < *puVar9) && ((short)puVar3[1] == 0x220e)) {
          puVar14 = (undefined1 *)((long)puVar9 + (long)(int)puVar3[2]);
        }
        else {
          puVar14 = (undefined1 *)0x0;
        }
        puVar12[-0xd] = *puVar14;
        puVar12[-0xc] = puVar14[1];
        puVar12[-0xb] = puVar14[2];
        puVar12[-10] = puVar14[3];
        uVar2 = *(uint *)(puVar14 + *(int *)(puVar14 + 8));
        puVar12[-2] = (char)uVar2;
        if (*(uint *)(param_1 + 8) < 0x20100) {
          puVar12[-9] = 0x7f;
          *(undefined2 *)(puVar12 + -8) = 0;
          puVar12[-6] = 0;
          if (*(uint *)(param_1 + 8) < 0x20100) goto LAB_003ba104;
LAB_003ba140:
          puVar12[-5] = puVar14[0x14];
          puVar12[-4] = puVar14[0x15];
          uVar13 = uVar2 & 0xff;
          puVar12[-3] = puVar14[0x16];
          if ((uVar2 & 0xfe) != 0) {
            uVar13 = 2;
          }
        }
        else {
          uVar1 = *(undefined4 *)(puVar14 + *(int *)(puVar14 + 0x10));
          puVar12[-9] = (char)uVar1;
          puVar12[-6] = (char)((uint)uVar1 >> 0x18);
          *(short *)(puVar12 + -8) = (short)((uint)uVar1 >> 8);
          if (0x200ff < *(uint *)(param_1 + 8)) goto LAB_003ba140;
LAB_003ba104:
          *(undefined2 *)(puVar12 + -5) = 0x40;
          uVar13 = uVar2 & 0xff;
          puVar12[-3] = 0;
          if ((uVar2 & 0xfe) != 0) {
            uVar13 = 2;
          }
        }
        if ((uVar13 != 0) && (puVar12[-1] = puVar14[(long)*(int *)(puVar14 + 8) + 4], uVar13 != 1))
        {
          *puVar12 = puVar14[(long)*(int *)(puVar14 + 8) + 5];
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 0xe;
        puVar3 = puVar3 + 2;
      } while (uVar10 != uVar11);
    }
  }
  return 1;
}

