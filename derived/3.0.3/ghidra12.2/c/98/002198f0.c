
void FUN_002198f0(long *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_6c;
  undefined4 local_64;
  
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  pcVar6 = *(code **)PTR_DAT_04bccee8;
  if (*(int *)((long)param_1 + 0x7c) != 0 && pcVar6 != (code *)0x0) {
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    (*pcVar6)();
  }
  uVar4 = *(ushort *)(param_1 + 0xc);
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x76) = 0;
  if (1 < uVar4) {
    lVar8 = param_1[10];
    lVar10 = param_1[0x13];
    if (lVar8 == 0) {
      if (lVar10 != 0) {
        uVar5 = uVar4 - 1;
        if (uVar4 == 2) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          uVar9 = uVar5 & 0xfffffffe;
          do {
            uVar7 = lVar8 * 0x10;
            lVar8 = lVar8 + 2;
            uVar9 = uVar9 - 2;
            puVar2 = (undefined8 *)(lVar10 + uVar7);
            *puVar2 = 0;
            puVar3 = (undefined8 *)(lVar10 + (uVar7 | 0x10));
            *(undefined4 *)(puVar2 + 1) = 0;
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 0;
          } while (uVar9 != 0);
        }
        if ((uVar5 & 1) != 0) {
          puVar2 = (undefined8 *)(lVar10 + lVar8 * 0x10);
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
        }
      }
    }
    else {
      lVar11 = 0;
      lVar13 = lVar8;
      do {
        if (lVar13 != 0) {
          if (lVar10 == 0) {
            local_64 = 0;
            local_6c = 0x800000000000000;
            (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
            uVar7 = FUN_0021dde0(param_1,*(undefined8 *)(param_1[10] + lVar11 * 0x30 + 0x10));
          }
          else {
            uVar7 = FUN_0021dde0(param_1,*(undefined8 *)(lVar8 + lVar11 * 0x30 + 0x10));
          }
          if ((uVar7 & 1) != 0) {
            FUN_0021e650(param_1,*(undefined8 *)(param_1[10] + lVar11 * 0x30 + 0x10));
            uVar7 = FUN_0021dde0(param_1,*(undefined8 *)(param_1[10] + lVar11 * 0x30 + 0x10));
            if ((uVar7 & 1) != 0) {
              local_64 = 0;
              local_6c = 0x800000000000000;
              (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
            }
          }
          lVar10 = param_1[10];
          lVar8 = lVar10 + lVar11 * 0x30;
          *(undefined4 *)(lVar8 + 0x1c) = 0;
          *(undefined4 *)(lVar8 + 1) = 0;
          memset((void *)(lVar8 + 8),0xff,4);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          if (*(ushort *)(lVar8 + 0x20) != 0) {
            uVar7 = 0;
            lVar13 = 0x5aa;
            do {
              puVar1 = (undefined1 *)(*(long *)(lVar10 + lVar11 * 0x30 + 0x28) + lVar13);
              *(undefined2 *)(puVar1 + -0x5aa) = 0;
              memset(puVar1 + -0x5a8,0,0x5a0);
              *(undefined4 *)(puVar1 + -6) = 0;
              uVar7 = uVar7 + 1;
              lVar13 = lVar13 + 0x5ac;
              *(undefined2 *)(puVar1 + -2) = 0;
              *puVar1 = 0;
            } while (uVar7 < *(ushort *)(lVar8 + 0x20));
          }
          lVar10 = lVar10 + lVar11 * 0x30;
          *(undefined4 *)(lVar10 + 0x22) = 0;
          *(undefined1 *)(lVar10 + 0x26) = 0;
          lVar8 = param_1[10];
          *(undefined1 *)(lVar8 + lVar11 * 0x30) = 0;
          lVar10 = param_1[0x13];
          lVar13 = lVar8;
        }
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + lVar11 * 0x10);
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
        }
        lVar11 = lVar11 + 1;
      } while ((int)((uint)lVar11 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
  }
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12);
  if (*(ushort *)(param_1 + 0x12) != 0) {
    if (param_1[0x11] == 0) {
      lVar10 = 0;
      uVar12 = 0;
      lVar8 = 0;
      do {
        if (lVar8 == 0) {
          local_6c = 0x800000000000000;
          local_64 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
          lVar8 = param_1[0x11];
          uVar7 = (ulong)*(ushort *)(param_1 + 0x12);
        }
        uVar12 = uVar12 + 1;
        puVar2 = (undefined8 *)(lVar8 + lVar10);
        lVar10 = lVar10 + 0xc;
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + 1) = 0;
      } while (uVar12 < uVar7);
    }
    else {
      lVar10 = param_1[0x11] + 9;
      do {
        *(undefined8 *)(lVar10 + -9) = 0;
        uVar7 = uVar7 - 1;
        *(undefined2 *)(lVar10 + -1) = 0;
        lVar10 = lVar10 + 0xc;
      } while (uVar7 != 0);
    }
  }
  return;
}

