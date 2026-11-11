
void FUN_003986b0(long *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  byte bVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  
  FUN_0037c270();
  puVar5 = PTR_DAT_04bd08b0;
  plVar9 = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  FUN_00364770(plVar9);
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  FUN_00364770(plVar9);
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  FUN_00364770(plVar9);
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  FUN_00364770(plVar9);
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  lVar12 = param_5;
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) {
    lVar12 = param_4;
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(lVar12 + 0x65) >> 2 & 3;
  bVar4 = *(byte *)(lVar12 + 0x65);
  bVar13 = (bVar4 >> 1 & 1) != 0;
  if ((bool)bVar13) {
    *(undefined1 *)((long)param_1 + 0x10a) = 1;
    bVar4 = *(byte *)(lVar12 + 0x65);
  }
  if ((bVar4 & 1) != 0) {
    bVar13 = bVar13 | 2;
    *(byte *)((long)param_1 + 0x10a) = bVar13;
    bVar4 = *(byte *)(lVar12 + 0x65);
  }
  if ((bVar4 >> 4 & 1) != 0) {
    *(byte *)((long)param_1 + 0x10a) = bVar13 | 4;
  }
  puVar1 = (undefined4 *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x68));
  bVar13 = *(byte *)((long)puVar1 + 0x12);
  if (2 < bVar13) {
    bVar13 = 3;
  }
  if (bVar13 != 0) {
    FUN_003647ac(plVar9,bVar13);
  }
  FUN_00398c20(param_1,lVar12);
  *(undefined4 *)(param_1 + 0x1d) = *puVar1;
  *(undefined4 *)((long)param_1 + 0xec) = puVar1[1];
  *(undefined4 *)(param_1 + 0x1e) = puVar1[2];
  *(undefined4 *)((long)param_1 + 0xf4) = puVar1[3];
  if ((bVar13 != 0) && ((char)param_1[0x1f] != '\0')) {
    FUN_00364910(plVar9,puVar1 + 5,bVar13);
  }
  uVar7 = FUN_003649a0(*(undefined8 *)(param_6 + 0x30),
                       *(undefined2 *)(param_4 + (ulong)*(uint *)(param_4 + 0x68) + 0x10));
  if (param_5 == 0) {
    uVar8 = 0;
    plVar9 = (long *)FUN_00367b30(0x50);
  }
  else {
    uVar8 = FUN_003649a0(*(undefined8 *)(param_6 + 0x38),
                         *(undefined2 *)(param_5 + (ulong)*(uint *)(param_5 + 0x68) + 0x10));
    plVar9 = (long *)FUN_00367b30(0x50);
  }
  if (plVar9 != (long *)0x0) {
    *plVar9 = (long)(PTR_DAT_04bd08c0 + 0x10);
    FUN_003745c0(plVar9,param_2,param_3,uVar7,uVar8,param_6);
  }
  param_1[0x23] = (long)plVar9;
  FUN_003760a0(plVar9,param_2,param_3,param_6);
  *(undefined1 *)((long)param_1 + 0x109) = 0;
  param_1[0x22] = 0;
  bVar13 = *(byte *)(lVar12 + 100);
  if (bVar13 != 0) {
    plVar9 = param_1 + 0x22;
    lVar10 = FUN_00367b30((ulong)bVar13 << 4);
    if (lVar10 == 0) {
      *plVar9 = 0;
    }
    else {
      if (bVar13 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        puVar16 = (undefined1 *)(lVar10 + 0x10);
        do {
          uVar15 = uVar15 + 2;
          puVar16[-0x10] = 0;
          *(undefined8 *)(puVar16 + -8) = 0;
          *puVar16 = 0;
          *(undefined8 *)(puVar16 + 8) = 0;
          puVar16 = puVar16 + 0x20;
        } while (((ulong)bVar13 & 0xfe) != uVar15);
      }
      if ((bVar13 & 1) != 0) {
        puVar16 = (undefined1 *)(lVar10 + uVar15 * 0x10);
        *puVar16 = 0;
        *(undefined8 *)(puVar16 + 8) = 0;
      }
      param_1[0x22] = lVar10;
      *(byte *)((long)param_1 + 0x109) = bVar13;
    }
    lVar10 = lVar12 + (ulong)*(uint *)(lVar12 + 0x6c);
    lVar2 = param_4 + (ulong)*(uint *)(param_4 + 0x6c);
    if (param_5 == 0) {
      if ('\0' < *(char *)((long)param_1 + 0x109)) {
        lVar17 = 0;
        uVar15 = 0;
        do {
          *(undefined1 *)(*plVar9 + lVar17) =
               *(undefined1 *)(lVar12 + 2 + (ulong)*(uint *)(lVar10 + uVar15 * 4));
          if (uVar15 < *(byte *)(param_4 + 100)) {
            uVar7 = FUN_003649a0(*(undefined8 *)(param_6 + 0x30),
                                 *(undefined2 *)(param_4 + (ulong)*(uint *)(lVar2 + uVar15 * 4)));
            puVar11 = (undefined8 *)FUN_00367b30(0x50);
          }
          else {
            uVar7 = 0;
            puVar11 = (undefined8 *)FUN_00367b30(0x50);
          }
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &PTR_FUN_0484d190;
            FUN_003745c0(puVar11,param_2,param_3,uVar7,0,param_6);
          }
          *(undefined8 **)(param_1[0x22] + lVar17 + 8) = puVar11;
          FUN_003760a0(*(undefined8 *)(param_1[0x22] + lVar17 + 8),param_2,param_3,param_6);
          uVar15 = uVar15 + 1;
          lVar17 = lVar17 + 0x10;
        } while ((long)uVar15 < (long)*(char *)((long)param_1 + 0x109));
      }
    }
    else if ('\0' < *(char *)((long)param_1 + 0x109)) {
      uVar3 = *(uint *)(param_5 + 0x6c);
      lVar17 = 0;
      uVar15 = 0;
      do {
        *(undefined1 *)(*plVar9 + lVar17) =
             *(undefined1 *)(lVar12 + 2 + (ulong)*(uint *)(lVar10 + uVar15 * 4));
        if (uVar15 < *(byte *)(param_4 + 100)) {
          uVar7 = FUN_003649a0(*(undefined8 *)(param_6 + 0x30),
                               *(undefined2 *)(param_4 + (ulong)*(uint *)(lVar2 + uVar15 * 4)));
        }
        else {
          uVar7 = 0;
        }
        uVar8 = FUN_003649a0(*(undefined8 *)(param_6 + 0x38),
                             *(undefined2 *)
                              (param_5 + (ulong)*(uint *)(param_5 + (ulong)uVar3 + uVar15 * 4)));
        puVar11 = (undefined8 *)FUN_00367b30(0x50);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_0484d190;
          FUN_003745c0(puVar11,param_2,param_3,uVar7,uVar8,param_6);
        }
        *(undefined8 **)(param_1[0x22] + lVar17 + 8) = puVar11;
        FUN_003760a0(*(undefined8 *)(param_1[0x22] + lVar17 + 8),param_2,param_3,param_6);
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x10;
      } while ((long)uVar15 < (long)*(char *)((long)param_1 + 0x109));
    }
    if (*(char *)(lVar12 + 100) == '\x01') {
      bVar6 = 1 < *(byte *)(param_1 + 0x21) - 1;
      uVar7 = 4;
      if (bVar6) {
        uVar7 = 0xc;
      }
      uVar14 = 3;
      if (!bVar6) {
        uVar14 = 1;
      }
      lVar12 = FUN_00367b30(uVar7);
      param_1[0x24] = lVar12;
      *(undefined4 *)(param_1 + 0x25) = uVar14;
      if (param_2 != (long *)0x0) {
        lVar12 = FUN_0038cb40(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar12 * (ulong)*(uint *)(param_1 + 0x25);
      }
    }
  }
  return;
}

