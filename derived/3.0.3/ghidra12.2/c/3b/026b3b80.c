
void FUN_026b3b80(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  lVar2 = param_1 + 0x10d6c;
  if (param_2 < 0x18) {
    lVar2 = param_1 + 0x1094c;
  }
  uVar5 = 0x20;
  uVar7 = param_2 - 0x18;
  if (param_2 < 0x18) {
    uVar5 = 0x18;
    uVar7 = param_2;
  }
  if (uVar7 < uVar5) {
    if (uVar7 + 1 < uVar5) {
      puVar6 = (undefined1 *)(lVar2 + (ulong)uVar7 * 0x2c + 0x57);
      do {
        puVar8 = (undefined2 *)(lVar2 + (long)(int)uVar7 * 0x2c);
        *puVar8 = *(undefined2 *)(puVar6 + -0x2b);
        *(undefined1 *)(puVar8 + 1) = puVar6[-0x29];
        *(undefined1 *)((long)puVar8 + 3) = puVar6[-0x28];
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar6 + -0x27);
        if (*(int *)(puVar6 + -0x23) == 0) {
          *(undefined4 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 0xc) = 0;
        }
        else {
          uVar3 = *(undefined8 *)(puVar6 + -0x23);
          uVar4 = *(undefined8 *)(puVar6 + -0x1b);
          uVar10 = *(undefined8 *)(puVar6 + -0x13);
          *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar6 + -0xb);
          *(undefined8 *)(puVar8 + 4) = uVar3;
          *(undefined8 *)(puVar8 + 8) = uVar4;
          *(undefined8 *)(puVar8 + 0xc) = uVar10;
        }
        lVar9 = lVar2 + (long)(int)uVar7 * 0x2c;
        *(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(puVar6 + -7);
        *(undefined1 *)(lVar9 + 0x28) = puVar6[-3];
        *(undefined1 *)(lVar9 + 0x29) = puVar6[-2];
        *(undefined1 *)(lVar9 + 0x2b) = *puVar6;
        uVar1 = uVar7 + 2;
        puVar6 = puVar6 + 0x2c;
        uVar7 = uVar7 + 1;
      } while (uVar1 < uVar5);
    }
    puVar11 = (undefined8 *)(lVar2 + (ulong)(uVar5 - 1) * 0x2c);
    *(undefined4 *)(puVar11 + 5) = 0;
    *puVar11 = 0xfffe;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    FUN_0277d4ac(puVar11);
    *(undefined4 *)(puVar11 + 5) = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    if ((param_3 & 1) != 0) {
      local_3c = FUN_021d7d60(param_1);
      local_3a = 0;
      local_38 = 0;
      local_32 = 0;
      local_34 = 0xff00;
      if (-1 < DAT_053d0c20) {
        local_3b = (char)param_2;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0c20,&local_38,&local_3c,3,0);
      }
    }
  }
  return;
}

