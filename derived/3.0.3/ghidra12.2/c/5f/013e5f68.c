
void FUN_013e5f68(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  
  puVar4 = PTR_DAT_04bb4798;
  bVar11 = *param_2;
  lVar5 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  bVar9 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar11 == bVar9) {
    lVar6 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar5 + 100);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar11 == bVar9) {
      lVar6 = 1;
    }
    else {
      bVar9 = *(byte *)(lVar5 + 0x84);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar11 == bVar9) {
        lVar6 = 2;
      }
      else {
        bVar9 = *(byte *)(lVar5 + 0xa4);
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (bVar11 == bVar9) {
          lVar6 = 3;
        }
        else {
          bVar9 = *(byte *)(lVar5 + 0xc4);
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar11 == bVar9) {
            lVar6 = 4;
          }
          else {
            bVar9 = *(byte *)(lVar5 + 0xe4);
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            if (bVar11 == bVar9) {
              lVar6 = 5;
            }
            else {
              bVar9 = *(byte *)(lVar5 + 0x104);
              if (7 < bVar9) {
                bVar9 = 0xff;
              }
              if (bVar11 == bVar9) {
                lVar6 = 6;
              }
              else {
                bVar9 = *(byte *)(lVar5 + 0x124);
                if (7 < bVar9) {
                  bVar9 = 0xff;
                }
                if (bVar11 != bVar9) {
                  lVar5 = lVar5 + 0x140;
                  goto LAB_013e6074;
                }
                lVar6 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = lVar5 + 0x40 + lVar6 * 0x20;
LAB_013e6074:
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)PTR_DAT_04bb3238;
  lVar5 = *(long *)puVar4;
  uVar3 = *(uint *)(param_1 + 0x2a0);
  uVar2 = uVar3;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) {
    uVar2 = 0;
  }
  lVar6 = *(long *)(lVar5 + 0x20) + (long)(int)uVar2 * 0x28;
  if (*(uint *)(lVar5 + 8) <= uVar3) {
    uVar3 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 0x10);
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar6 + 0x10);
  *puVar1 = uVar7;
  bVar11 = *(byte *)(lVar6 + 0x14);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  *(byte *)((long)puVar1 + 0xc) = bVar11;
  bVar11 = *(byte *)(lVar6 + 0x15);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  *(byte *)((long)puVar1 + 0xd) = bVar11;
  *(undefined2 *)((long)puVar1 + 0xe) = *(undefined2 *)(lVar6 + 0x16);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  lVar8 = *(long *)puVar4;
  lVar6 = (long)(int)*(uint *)(param_1 + 0x2a0);
  lVar10 = *(long *)(lVar8 + 0x10);
  if (*(uint *)(lVar8 + 8) <= *(uint *)(param_1 + 0x2a0) || lVar10 == 0) {
    lVar6 = 0;
  }
  if (*(uint *)(lVar5 + 8) == (*(byte *)(lVar10 + lVar6 * 0x10 + 8) & 0xf)) {
    return;
  }
  FUN_03ebb160(lVar5);
  return;
}

