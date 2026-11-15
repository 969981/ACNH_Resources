
void FUN_0212e7e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  puVar5 = PTR_DAT_04bb37e0;
  lVar1 = param_1 + 8;
  uVar9 = 0;
  do {
    if ((*(ushort *)(param_1 + 0x200) >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
      uVar10 = 0x87c;
      if (DAT_053f0228 == '\0') {
        uVar10 = 0;
      }
      if ((uVar10 >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
        lVar2 = lVar1 + (ulong)uVar9 * 0x24;
        if (0xd < uVar9) {
          lVar2 = lVar1;
        }
        if (0 < *(int *)(lVar2 + 0x10)) goto LAB_0212e9cc;
      }
    }
    else {
      uVar10 = 0x87c;
      if (DAT_053f0228 == '\0') {
        uVar10 = 0;
      }
      if ((uVar10 >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
        lVar2 = lVar1 + (ulong)uVar9 * 0x24;
        if (0xd < uVar9) {
          lVar2 = lVar1;
        }
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
        uVar7 = (ulong)uVar9;
        if (0xd < uVar9) {
          uVar7 = 0;
        }
        puVar6 = *(undefined8 **)(param_1 + 0x208 + uVar7 * 8);
        if (puVar6 != (undefined8 *)0x0) {
          lVar2 = lVar1 + (ulong)uVar9 * 0x24;
          if (0xd < uVar9) {
            lVar2 = lVar1;
          }
          (**(code **)*puVar6)(puVar6,lVar2);
        }
        *(ushort *)(param_1 + 0x202) =
             *(ushort *)(param_1 + 0x202) | (ushort)(1 << (ulong)(uVar9 & 0x1f));
        *(ushort *)(param_1 + 0x200) =
             *(ushort *)(param_1 + 0x200) & ((ushort)(1 << (ulong)(uVar9 & 0x1f)) ^ 0xffff);
      }
      else {
        lVar2 = lVar1 + (ulong)uVar9 * 0x24;
        if (0xd < uVar9) {
          lVar2 = lVar1;
        }
        iVar4 = *(int *)(lVar2 + 0xc);
        *(int *)(lVar2 + 0xc) = iVar4 + -1;
        if (iVar4 < 1) {
          uVar7 = (ulong)uVar9;
          if (0xd < uVar9) {
            uVar7 = 0;
          }
          puVar6 = *(undefined8 **)(param_1 + 0x208 + uVar7 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            lVar2 = lVar1 + (ulong)uVar9 * 0x24;
            if (0xd < uVar9) {
              lVar2 = lVar1;
            }
            (**(code **)*puVar6)(puVar6,lVar2);
          }
          *(ushort *)(param_1 + 0x202) =
               *(ushort *)(param_1 + 0x202) | (ushort)(1 << (ulong)(uVar9 & 0x1f));
          *(ushort *)(param_1 + 0x200) =
               *(ushort *)(param_1 + 0x200) & ((ushort)(1 << (ulong)(uVar9 & 0x1f)) ^ 0xffff);
LAB_0212e9cc:
          lVar2 = lVar1 + (ulong)uVar9 * 0x24;
          if (0xd < uVar9) {
            lVar2 = lVar1;
          }
          *(undefined4 *)(lVar2 + 4) = DAT_04c9a0c8;
          *(undefined8 *)(lVar2 + 0xc) = 0;
          *(undefined8 *)(lVar2 + 0x14) = 0;
          bVar8 = DAT_0548e140;
          if (7 < DAT_0548e140) {
            bVar8 = 0xff;
          }
          *(byte *)(lVar2 + 8) = bVar8;
          uVar3 = *(undefined4 *)(puVar5 + 4);
          *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)puVar5;
          *(undefined4 *)(lVar2 + 0x20) = uVar3;
        }
      }
    }
    uVar10 = 0xe;
    if ((int)uVar9 < 0xe) {
      uVar10 = uVar9 + 1;
    }
    uVar9 = uVar10;
    if (uVar10 == 0xe) {
      return;
    }
  } while( true );
}

